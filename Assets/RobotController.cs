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
    public GameObject robot = null;
    public GameObject frontAxel = null;
    public GameObject backAxel = null;
    public GameObject robotBody = null;
    public GameObject middleAxel = null;

    public GameObject[] frontWheels = null;
    public GameObject[] backWheels = null;

    public float speed = 0;

    private bool decreaseDis = false;
    private bool increaseDis = false;
    private bool decreaseSize = false;
    private bool increaseSize = false;
    private bool bool_axelStatus = false;
    private bool bool_moveForward = false;
    private bool bool_moveBack = false;
    private bool bool_moveLeft = false;
    private bool bool_moveRight = false;
    private bool bool_turnRight = false;
    private bool bool_turnLeft = false;

    private Vector3 scaleChange = new Vector3(-0.1f, 0, 0);

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

    public float drivetrainGearRatio = 20f;
    public float encoderTicksPerRev = 126f;
    public float wheelSeparationWidth = 0.0f;
    public float wheelSeparationLength = 0.0f;
    public float wheelRadius = 2.0f;
    public float motorRPM = 340.0f;

    private float previousRealTime;


    private void Start()
    {
        previousRealTime = Time.realtimeSinceStartup;
        Debug.Log("Started.....");
        Thread receiveThread = new Thread(receiveFromRC);
        receiveThread.Start();

        Thread sendThread = new Thread(sendToRC);
        sendThread.Start();
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
        while (true) {
            try {
                if(reconnectEncoderSocket) {
                    Debug.Log("Waiting for a client...");

                    IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
                    TXRemote = (EndPoint)(sender);

                    TXrecv = TXnewsock.ReceiveFrom(TXdata, ref TXRemote);
                    string welcome = "Welcome to my test server";
                    TXdata = Encoding.ASCII.GetBytes(welcome);
                    TXnewsock.SendTo(TXdata, TXdata.Length, SocketFlags.None, TXRemote);

                    reconnectEncoderSocket = false;
                }
                if (canSendEncoder) {
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
            catch (Exception e ) {
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
        Debug.Log("Waiting for a client...");

        IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
        RXRemote = (EndPoint)(sender);

        // recv = newsock.ReceiveFrom(data, ref Remote);
        // Debug.Log("Message received from {0}:", Remote.ToString());
        // Debug.Log(Encoding.ASCII.GetString(data, 0, recv));
        // string welcome = "Welcome to my test server";
        // data = Encoding.ASCII.GetBytes(welcome);
        // newsock.SendTo(data, data.Length, SocketFlags.None, Remote);

        while(true) {
            RXdata = new byte[1024];
            RXrecv = RXnewsock.ReceiveFrom(RXdata, ref RXRemote);
            string message = Encoding.ASCII.GetString(RXdata, 0, RXrecv);
            if(message.Contains("reset")) {
                reconnectEncoderSocket = true;
            } else {
                RobotPowers powers = RobotPowers.CreateFromJSON(message);
                frontLeftWheelCmd = powers.motor1;
                frontRightWheelCmd = powers.motor2;
                backLeftWheelCmd = powers.motor3;
                backRightWheelCmd = powers.motor4;                
            }


            // if(Encoding.ASCII.GetString(data, 0, recv) == "forward")
            // {
            //     bool_moveForward = true;
            //     bool_moveBack    = false;
            // }
            // else if(Encoding.ASCII.GetString(data, 0, recv) == "backward")
            // {
            //     bool_moveForward = false;
            //     bool_moveBack    = true;
            // }
            // else
            // {
            //     bool_moveForward = false;
            //     bool_moveBack    = false;                
            // }

            // Debug.Log(Encoding.ASCII.GetString(data, 0, recv));
            // newsock.SendTo(data, recv, SocketFlags.None, Remote);

            // welcome = "M1: " + frontLeftWheelCmd + ", M2:" + frontRightWheelCmd + ", M3:" + backLeftWheelCmd + ", M3:" + backRightWheelCmd;
            // data = Encoding.ASCII.GetBytes(welcome);
            // newsock.SendTo(data, data.Length, SocketFlags.None, Remote);
        }
    }

    public void MoveForward()
    {
        bool_moveForward = true;
    }
    public void MoveBackwards()
    {
        bool_moveBack = true;
    }
    public void MoveLeft()
    {
        bool_moveLeft = true;
    }
    public void MoveRight()
    {
        bool_moveRight = true;
    }
    public void RotateLeft()
    {
        bool_turnLeft = true;
    }
    public void RotateRight()
    {
        bool_turnRight = true;
    }

    public void MiddleAxelToggle()
    {
        if(!bool_axelStatus)
        {
            bool_axelStatus = true;
            middleAxel.SetActive(true);
        }
        else if(bool_axelStatus)
        {
            bool_axelStatus = false;
            middleAxel.SetActive(false);
        }
    }

    public void DecAxelDis_PointerDown()
    {
        decreaseDis = true;
    }

    public void IncAxelDis_PointerDown()
    {
        increaseDis = true;
    }

    public void DecreaseRobotSize_PointerDown()
    {
        decreaseSize = true;
    }

    public void IncreaseRobotSize_PointerDown()
    {
        increaseSize = true;
    }

    public void OnPointerUp()
    {
        decreaseDis = false;
        increaseDis = false;
        decreaseSize = false;
        increaseSize = false;
        bool_moveForward = false;
        bool_moveBack = false;
        bool_moveLeft = false;
        bool_moveRight = false;
        bool_turnLeft = false;
        bool_turnRight = false;
    }

    public void ChangeWheels(int index)
    {
        for(int i = 0; i < 3; i++)
        {
            frontWheels[i].SetActive(false);
            backWheels[i].SetActive(false);
        }

        frontWheels[index].SetActive(true);
        backWheels[index].SetActive(true);
    }

    private void FixedUpdate()
    {
        if(decreaseDis)
        {
            if(frontAxel.transform.localPosition.y < 0.15f && backAxel.transform.localPosition.y > 0.285f)
            {
                frontAxel.transform.position = new Vector3(frontAxel.transform.position.x,
                frontAxel.transform.position.y, frontAxel.transform.position.z + 0.1f * Time.deltaTime);

                backAxel.transform.position = new Vector3(backAxel.transform.position.x,
                    backAxel.transform.position.y, backAxel.transform.position.z - 0.1f * Time.deltaTime);
            }
            
        }
        else if(increaseDis)
        {
            if(frontAxel.transform.localPosition.y > 0.05f && backAxel.transform.localPosition.y < 0.385f)
            {
                frontAxel.transform.position = new Vector3(frontAxel.transform.position.x,
                    frontAxel.transform.position.y, frontAxel.transform.position.z - 0.1f * Time.deltaTime);

                backAxel.transform.position = new Vector3(backAxel.transform.position.x,
                    backAxel.transform.position.y, backAxel.transform.position.z + 0.1f * Time.deltaTime);
            }
        }
        else if(decreaseSize)
        {
            if(robotBody.transform.localScale.x > 0.51f)
            {
                robotBody.transform.localScale += scaleChange * Time.deltaTime;
            }
        }
        else if(increaseSize)
        {
            if(robotBody.transform.localScale.x < 0.99f)
            {
                robotBody.transform.localScale -= scaleChange * Time.deltaTime;
            }
        }
    }

    private void Update()
    {
        canSendEncoder = true;
        float deltaTime = Time.realtimeSinceStartup - previousRealTime;

        var linearVelocityY = (frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd + backRightWheelCmd);// * (wheelRadius / 4);

        var linearVelocityX = -(-frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd - backRightWheelCmd);// * (wheelRadius / 4);

        var angularVelocity = (-frontLeftWheelCmd + frontRightWheelCmd - backLeftWheelCmd + backRightWheelCmd);// * (wheelRadius / (4 * (wheelSeparationWidth + wheelSeparationLength)));

        transform.Translate(new Vector3(linearVelocityX * deltaTime, 0f, linearVelocityY * deltaTime));

        var angVelZ = (angularVelocity / (Mathf.PI / 180f)) * deltaTime;

        transform.Rotate(Vector3.down, angVelZ);
        
        frontLeftWheelEnc  += (motorRPM/60) * frontLeftWheelCmd  * deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        frontRightWheelEnc += (motorRPM/60) * frontRightWheelCmd * deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backLeftWheelEnc   += (motorRPM/60) * backLeftWheelCmd   * deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backRightWheelEnc  += (motorRPM/60) * backRightWheelCmd  * deltaTime * encoderTicksPerRev * drivetrainGearRatio;

        previousRealTime = Time.realtimeSinceStartup;


        // if(bool_moveForward)
        // {
        //     transform.Translate(Vector3.forward * speed * Time.smoothDeltaTime);
        // }
        // else if(bool_moveBack)
        // {
        //     transform.Translate(-Vector3.forward * speed * Time.deltaTime);
        // }
        // else if(bool_moveLeft)
        // {
        //     transform.Translate(Vector3.left * speed * Time.deltaTime);
        // }
        // else if(bool_moveRight)
        // {
        //     transform.Translate(Vector3.right * speed * Time.deltaTime);
        // }
        // else if(bool_turnLeft)
        // {
        //     transform.Rotate(new Vector3(0, -1, 0) * 50 * Time.deltaTime);
        // }
        // else if(bool_turnRight)
        // {
        //     transform.Rotate(new Vector3(0, 1, 0) * 50 * Time.deltaTime);
        // }
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
