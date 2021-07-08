using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotControllerUdp : MonoBehaviour
{
    public int sendPort = 9051;
    public int recPort = 9050;

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
    public float encoderTicksPerRev = 28f;
    public float wheelSeparationWidth = 0.4f;
    public float wheelSeparationLength = 0.4f;
    public float wheelRadius = 0.0508f;
    public float motorRPM = 340.0f;

    private Rigidbody rb;

    private float previousRealTime;

    [Header("Subsystem Controls")]
    public GameObject shooter;
    public GameObject intake;
    public GameObject grabber;

    private ShooterControl shooterControl;
    private IntakeControl intakeControl;
    private GrabberControl grabberControl;

    private AudioManager audioManager;
    private RobotSoundControl robotSoundControl;

    private Thread sendThread;
    private Thread receiveThread;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        robotSoundControl = GetComponent<RobotSoundControl>();

        audioManager = GameObject.Find("ScoreKeeper").GetComponent<AudioManager>();

        previousRealTime = Time.realtimeSinceStartup;
        Console.WriteLine("Started.....");
        receiveThread = new Thread(receiveFromRC);
        receiveThread.Start();

        sendThread = new Thread(sendToRC);
        sendThread.Start();

        shooterControl = shooter.GetComponent<ShooterControl>();
        shooterControl.Commands.Add(() => motorPower6 > 0, shooterControl.shooting);
        shooterControl.Commands.Add(() => motorPower7 >= 0, () =>
        {
            robotSoundControl.playShooterRev(motorPower7);
            shooterControl.setVelocity(motorPower7);
        });

        intakeControl = intake.GetComponent<IntakeControl>();
        intakeControl.Commands.Add(() => motorPower5 != 0, () =>
        {
            robotSoundControl.playIntakeRev(motorPower5);
            intakeControl.setVelocity(motorPower5 * 150);
            intakeControl.deployIntake();
        });
        intakeControl.Commands.Add(() => motorPower5 == 0, () =>
        {
            robotSoundControl.playIntakeRev(motorPower5);
            intakeControl.retractIntake();
        });

        grabberControl = grabber.GetComponent<GrabberControl>();
        grabberControl.Commands.Add(() => motorPower8 > 0, () =>
        {
            grabberControl.startGrab();
        });
        grabberControl.Commands.Add(() => motorPower8 > 0.5, () =>
        {
            grabberControl.lift();
        });
        grabberControl.Commands.Add(() => motorPower8 == 0, () =>
        {
            grabberControl.stopGrab();
        });
    }

    private void OnDestroy()
    {
        TXnewsock.Close();
        RXnewsock.Close();
        sendThread.Abort();
        receiveThread.Abort();

    }

    void sendToRC()
    {
        TXdata = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any, sendPort);
        TXnewsock = new Socket(AddressFamily.InterNetwork,
                    SocketType.Dgram, ProtocolType.Udp);
        TXnewsock.Bind(ipep);
        while (true)
        {
            try
            {
                if (reconnectEncoderSocket)
                {
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

    void receiveFromRC()
    {
        RXdata = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any, recPort);

        RXnewsock = new Socket(AddressFamily.InterNetwork,
                      SocketType.Dgram, ProtocolType.Udp);

        print("Waiting for a udp client... On port " + recPort);
        RXnewsock.Bind(ipep);

        IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
        RXRemote = (EndPoint)(sender);

        while (true)
        {
            RXdata = new byte[1024];
            RXrecv = RXnewsock.ReceiveFrom(RXdata, ref RXRemote);
            string message = Encoding.ASCII.GetString(RXdata, 0, RXrecv);
            print(message);
            if (message.Contains("reset"))
            {
                reconnectEncoderSocket = true;
                frontLeftWheelCmd = 0f;
                frontRightWheelCmd = 0f;
                backLeftWheelCmd = 0f;
                backRightWheelCmd = 0f;
                frontLeftWheelEnc = 0f;
                frontRightWheelEnc = 0f;
                backLeftWheelEnc = 0f;
                backRightWheelEnc = 0f;
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
        // Strafer Drivetrain Control
        var linearVelocityX = ((frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd + backRightWheelCmd) / 4) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI);
        var linearVelocityY = ((-frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd - backRightWheelCmd) / 4) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI);
        var angularVelocity = (((-frontLeftWheelCmd + frontRightWheelCmd - backLeftWheelCmd + backRightWheelCmd) / 3) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI) / (Mathf.PI * wheelSeparationWidth)) * 2 * Mathf.PI;
        // Apply Local Velocity to Rigid Body        
        var locVel = transform.InverseTransformDirection(rb.velocity);
        locVel.x = -linearVelocityY;
        locVel.y = -linearVelocityX;
        locVel.z = 0f;
        rb.velocity = transform.TransformDirection(locVel);
        //Apply Angular Velocity to Rigid Body
        rb.angularVelocity = new Vector3(0f, -angularVelocity, 0f);
        //Encoder Calculations 
        frontLeftWheelEnc += (motorRPM / 60) * frontLeftWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        frontRightWheelEnc += (motorRPM / 60) * frontRightWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backLeftWheelEnc += (motorRPM / 60) * backLeftWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backRightWheelEnc += (motorRPM / 60) * backRightWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;

        robotSoundControl.playRobotDrive((Mathf.Abs(frontLeftWheelCmd) + Mathf.Abs(frontRightWheelCmd) + Mathf.Abs(backLeftWheelCmd) + Mathf.Abs(backRightWheelCmd)) / 4f);
    }

    private void FixedUpdate()
    {
        driveRobot();
        shooterControl.Commands.Process();
        intakeControl.Commands.Process();
        grabberControl.Commands.Process();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag != "Floor")
        {
            robotSoundControl.playRobotImpact();
        }
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

