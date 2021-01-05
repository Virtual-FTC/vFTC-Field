using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotController : MonoBehaviour
{
    private int RXrecv;
    private Socket RXnewsock;
    private byte[] RXdata;
    private EndPoint RXRemote;

    private int TXrecv;
    private Socket TXnewsock;
    private byte[] TXdata;
    private EndPoint TXRemote;

    private bool canSendEncoder = false;
    private bool reconnectEncoderSocket = true;

    private float frontLeftWheelCmd = 0f;
    private float frontRightWheelCmd = 0f;
    private float backLeftWheelCmd = 0f;
    private float backRightWheelCmd = 0f;

    private float frontLeftWheelEnc = 0f;
    private float frontRightWheelEnc = 0f;
    private float backLeftWheelEnc = 0f;
    private float backRightWheelEnc = 0f;

    private float motorPower5;
    private float motorPower6;
    private float motorPower7;
    private float motorPower8;

    public float drivetrainGearRatio = 20f;
    public float encoderTicksPerRev = 126f;
    public float wheelSeparationWidth = 0.0f;
    public float wheelSeparationLength = 0.0f;
    public float wheelRadius = 2.0f;
    public float motorRPM = 340.0f;

    private float previousRealTime;

    [Header("Subsystem Controls")]
    public GameObject shooter;
    public GameObject intake;

    private FtcShooterControl shooterControl;
    private IntakeControl intakeControl;

    private void Start()
    {
        previousRealTime = Time.realtimeSinceStartup;
        Console.WriteLine("Started.....");
        Thread receiveThread = new Thread(receiveFromRC);
        receiveThread.Start();

        Thread sendThread = new Thread(sendToRC);
        sendThread.Start();

        shooterControl = shooter.GetComponent<FtcShooterControl>();
        shooterControl.Commands.Add(() => motorPower6 > 0, shooterControl.shooting);
        shooterControl.Commands.Add(() => motorPower7 > 0 && motorPower8 > 0, () =>
        {
            shooterControl.setVelocity((motorPower7 + motorPower8) / 2f);
        });

        intakeControl = intake.GetComponent<IntakeControl>();
        intakeControl.Commands.Add(() => motorPower5 != 0, () =>
        {
            intakeControl.setVelocity(motorPower5 * 150);
            intakeControl.deployIntake();
        });
        intakeControl.Commands.Add(() => motorPower5 == 0, intakeControl.retractIntake);
    }

    private void OnDestroy()
    {
        TXnewsock.Close();
        RXnewsock.Close();
    }

    void sendToRC() {
        TXdata = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any, 9051);
        TXnewsock = new Socket(AddressFamily.InterNetwork,
                    SocketType.Dgram, ProtocolType.Udp);
        TXnewsock.Bind(ipep);
        while (true)
        {
            try
            {
                if (reconnectEncoderSocket)
                {
                    Debug.Log("Waiting for a udp client...");

                    IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
                    TXRemote = (EndPoint)(sender);

                    TXrecv = TXnewsock.ReceiveFrom(TXdata, ref TXRemote);
                    string welcome = "Welcome to my test server";
                    TXdata = Encoding.ASCII.GetBytes(welcome);
                    TXnewsock.SendTo(TXdata, TXdata.Length, SocketFlags.None, TXRemote);

                    reconnectEncoderSocket = false;
                }
                if (canSendEncoder)
                {
                    RobotPowers robotencoders = new RobotPowers();
                    robotencoders.motor1 = frontLeftWheelEnc;
                    robotencoders.motor2 = frontRightWheelEnc;
                    robotencoders.motor3 = backLeftWheelEnc;
                    robotencoders.motor4 = backRightWheelEnc;

                    //Convert to JSON
                    string encodersJSON = JsonUtility.ToJson(robotencoders);

                    TXdata = Encoding.ASCII.GetBytes(encodersJSON);
                    TXnewsock.SendTo(TXdata, TXdata.Length, SocketFlags.None, TXRemote);
                    canSendEncoder = false;
                }
            }
            catch (Exception e)
            {
                Debug.LogError(e.ToString());
            }
        }
    }

    void receiveFromRC() {
        RXdata = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any, 9050);

        RXnewsock = new Socket(AddressFamily.InterNetwork,
                      SocketType.Dgram, ProtocolType.Udp);

        RXnewsock.Bind(ipep);
        Console.WriteLine("Waiting for a udp client...");

        IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
        RXRemote = (EndPoint)(sender);

        while(true) {
            RXdata = new byte[1024];
            RXrecv = RXnewsock.ReceiveFrom(RXdata, ref RXRemote);
            string message = Encoding.ASCII.GetString(RXdata, 0, RXrecv);
            if (message.Contains("reset"))
            {
                reconnectEncoderSocket = true;
            }
            else
            {
                RobotPowers powers = RobotPowers.CreateFromJSON(message);
                frontLeftWheelCmd = powers.motor1;
                frontRightWheelCmd = powers.motor2;
                backLeftWheelCmd = powers.motor3;
                backRightWheelCmd = powers.motor4;
                motorPower5 = powers.motor5;
                motorPower6 = powers.motor6;
                motorPower7 = powers.motor7;
                motorPower8 = powers.motor8;
            }
        }
    }

    private void driveRobot()
    {
        canSendEncoder = true;
        float deltaTime = Time.realtimeSinceStartup - previousRealTime;

        // Strafer Drivetrain Control
        var linearVelocityX = (frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd + backRightWheelCmd) * (wheelRadius / 4);

        var linearVelocityY = (-frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd - backRightWheelCmd) * (wheelRadius / 4);

        var angularVelocity = (-frontLeftWheelCmd + frontRightWheelCmd - backLeftWheelCmd + backRightWheelCmd) * (wheelRadius / (4 * (wheelSeparationWidth + wheelSeparationLength)));

        print(linearVelocityX + " : " + linearVelocityY + " : " + angularVelocity);

        transform.Translate(new Vector3(linearVelocityY * deltaTime, linearVelocityX * deltaTime, 0f));

        var angVelZ = (angularVelocity / (Mathf.PI / 180f)) * deltaTime;

        transform.Rotate(Vector3.left, angVelZ);

        frontLeftWheelEnc += (motorRPM / 60) * frontLeftWheelCmd * deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        frontRightWheelEnc += (motorRPM / 60) * frontRightWheelCmd * deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backLeftWheelEnc += (motorRPM / 60) * backLeftWheelCmd * deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backRightWheelEnc += (motorRPM / 60) * backRightWheelCmd * deltaTime * encoderTicksPerRev * drivetrainGearRatio;

        previousRealTime = Time.realtimeSinceStartup;
    }

    private void Update()
    {
        driveRobot();

        shooterControl.Commands.Process();
        intakeControl.Commands.Process();

    }

    [System.Serializable]
    public class RobotPowers
    {   
        public float motor1;
        public float motor2;
        public float motor3;
        public float motor4;
        public float motor5;
        public float motor6;
        public float motor7;
        public float motor8;

        public static RobotPowers CreateFromJSON(string jsonString)
        {
            return JsonUtility.FromJson<RobotPowers>(jsonString);
        }

         // Given JSON input:
        // {"name":"Dr Charles","lives":3,"health":0.8}
        // this example will return a PlayerInfo object with
        // name == "Dr Charles", lives == 3, and health == 0.8f.
    }
}
