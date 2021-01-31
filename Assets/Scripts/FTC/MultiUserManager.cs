using System.Collections;
using System.Collections.Generic;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using Random = System.Random;

public class MultiUserManager : MonoBehaviour
{
    public GameObject[] m_Robots = null;

    public int startPos = 2;

    private int m_index = 0;
    private int robotPositionIndex = 0;

    public Transform[] spawnPositions;

    // TCP server
    public int port = 9052;
    private int recv;
    private Socket newsock;
    private Socket client;

    private WebsiteCommands websiteCommands = new WebsiteCommands();

    private RobotCustomizer robotCustomizer;

    private Thread thread;

    private float previousRealTime;
    private bool resetCoolDown = false;

    private IntakeControl intake;

    private bool sendingScore;

    private void Start()
    {
        intake = GameObject.Find("Intake").GetComponent<IntakeControl>();

        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();

        setSpawn(startPos);

        print("Started.....");
        thread = new Thread(startTCPServer);
        thread.Start();
    }

    private void OnDestroy()
    {
        client.Close();
        newsock.Close();
        thread.Abort();
    }

    // Some sort of TCP connection to the website to handle user pref like which robot, position of the robot, dimensions of the robot, color of the robot, team number of the robot, start/stop game, and select which game mode to run (freeplay, autonomous, teleop, and full match) 
    #region TCP server for sending and receiving data  
    void startTCPServer()
    {
        int recv;
        byte[] data = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any,
                               port);

        newsock = new
            Socket(AddressFamily.InterNetwork,
                        SocketType.Stream, ProtocolType.Tcp);

        newsock.Bind(ipep);
        newsock.Listen(10);
        print("Waiting for a TCP client... On port " + port);
        client = newsock.Accept();
        IPEndPoint clientep =
                     (IPEndPoint)client.RemoteEndPoint;
        print("Connected with {0} at port {1}" +
                        clientep.Address + clientep.Port);


        string welcome = "Welcome to my test server";
        data = Encoding.ASCII.GetBytes(welcome);
        client.Send(data, data.Length,
                          SocketFlags.None);
        while (true)
        {
            try
            {
                data = new byte[1024];
                recv = client.Receive(data);
                if (recv == 0)
                    break;

                string message = Encoding.ASCII.GetString(data, 0, recv);
                print(message);
                websiteCommands = WebsiteCommands.CreateFromJSON(message);
            }
            catch (SocketException)
            {
                print("Client lost connection");
                break;
            }
        }
        print("Disconnected from {0}" +
                          clientep.Address);
        client.Close();
        newsock.Close();
        startTCPServer();
    }
    #endregion 

    #region Game Control
    private void setSpawn(int index)
    {
        robotPositionIndex = index;
        transform.position = spawnPositions[index].position;
        transform.rotation = spawnPositions[index].rotation;
        resetRobot();
    }

    private void resetRobot()
    {
        intake.resetBalls();
        var newRotation = m_Robots[m_index].transform.rotation.eulerAngles;
        newRotation.x = -90f;
        newRotation.y = 0f;
        newRotation.z = 180f;
        var newRotationQ = m_Robots[m_index].transform.rotation;
        newRotationQ.eulerAngles = newRotation;

        //

        m_Robots[m_index].transform.position = transform.position;
        m_Robots[m_index].transform.rotation = newRotationQ;
    }
    #endregion

    #region Robot Selector
    public void OnButtonClick(int index)
    {
        if (index < m_Robots.Length)
        {
            m_Robots[m_index].SetActive(false);
            m_index = index;
            m_Robots[m_index].SetActive(true);
        }
        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();
    }
    #endregion

    void FixedUpdate()
    {
        // Setting new robot position
        if (websiteCommands.position != robotPositionIndex)
        {
            //setSpawn(websiteCommands.position);
        }
        // Changing robot
        if (websiteCommands.robotType != m_index)
        {
            OnButtonClick(websiteCommands.robotType);
        }

        // Robot config
        /*
        if (websiteCommands.incSize)
        {
            print("Increase size 1");
            robotCustomizer.IncreaseRobotSize_PointerDown();
        }
        else if (websiteCommands.decSize)
        {
            print("Dec size 1");
            robotCustomizer.DecreaseRobotSize_PointerDown();
        }
        else if (websiteCommands.incWheel)
        {
            print("Increase wheel 1");
            robotCustomizer.IncAxelDis_PointerDown();
        }
        else if (websiteCommands.decWheel)
        {
            print("Dec wheel 1");
            robotCustomizer.DecAxelDis_PointerDown();
        }
        else
        {
            robotCustomizer.OnPointerUp();
        }
        */
    }

    [System.Serializable]
    public class WebsiteCommands
    {
        public int position = 2;
        public int robotTeam;
        public int robotType;
        public float size;
        public float wheelSize;

        public static WebsiteCommands CreateFromJSON(string jsonString)
        {
            return JsonUtility.FromJson<WebsiteCommands>(jsonString);
        }

        // Given JSON input:
        // {"name":"Dr Charles","lives":3,"health":0.8}
        // this example will return a PlayerInfo object with
        // name == "Dr Charles", lives == 3, and health == 0.8f.

        // {"position":0,"robotType":0,"resetField":true, "startGame":false, "gameType": " freeplay", "gameSetup":"A", "incSize": false, "decSize":false, "incWheel":false, "decWheel":false}
        // {"position":0-4,"robotType":0-2,"resetField":true/false, "startGame":false/true, "gameType": "teleop/auto/freeplay", "gameSetup":"A/B/C/Random", "incSize":true/false, "decSize":true/false, "incWheel":true/false, "decWheel":true/false}
    }
}