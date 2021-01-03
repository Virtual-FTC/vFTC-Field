using System.Collections;
using System.Collections.Generic;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using Random = System.Random;

public class UserManager : MonoBehaviour
{
    public GameObject[] m_Robots = null;

    private int m_index = 0;
    private int robotPositionIndex = 0;

    public Transform[] spawnPositions;

    public GameObject[] setupPrefab;
    private GameObject setup;

    // TCP server
    private int RXrecv;
    private Socket RXnewsock;
    private byte[] RXdata;
    private EndPoint RXRemote;

    private int TXrecv;
    private Socket TXnewsock;
    private byte[] TXdata;
    private EndPoint TXRemote;

    private WebsiteCommands websiteCommands = new WebsiteCommands();
    private bool currentGameStart = false;
    private string currentGameSetup = "A";
    private string currentGameType = "Freeplay";

    private RobotCustomizer robotCustomizer;
    private GameTimer gameTimer;

    private void Start()
    {
        setSpawn(0);
        resetField("A");

        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();
        gameTimer = GetComponent<GameTimer>();

        Console.WriteLine("Started.....");
        Thread receiveThread = new Thread(receiveFromWeb);
        receiveThread.Start();

        Thread sendThread = new Thread(sendToWeb);
        sendThread.Start();
    }

    private void OnDestroy()
    {
        TXnewsock.Close();
        RXnewsock.Close();
    }

    // Some sort of TCP connection to the website to handle user pref like which robot, position of the robot, dimensions of the robot, color of the robot, team number of the robot, start/stop game, and select which game mode to run (freeplay, autonomous, teleop, and full match) 
    #region TCP server for sending and receiving data  
    void sendToWeb()
    {
        TXdata = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any, 9052);

        TXnewsock = new Socket(AddressFamily.InterNetwork,
                      SocketType.Dgram, ProtocolType.Tcp);

        TXnewsock.Bind(ipep);
        Console.WriteLine("Waiting for a TCP client...");

        IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
        TXRemote = (EndPoint)(sender);

        TXrecv = TXnewsock.ReceiveFrom(TXdata, ref TXRemote);
        string welcome = "Welcome to my test server";
        TXdata = Encoding.ASCII.GetBytes(welcome);
        TXnewsock.SendTo(TXdata, TXdata.Length, SocketFlags.None, TXRemote);

        while (true)
        {
           
        }
    }

    void receiveFromWeb()
    {
        RXdata = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any, 9052);

        RXnewsock = new Socket(AddressFamily.InterNetwork,
                      SocketType.Dgram, ProtocolType.Tcp);

        RXnewsock.Bind(ipep);
        Console.WriteLine("Waiting for a Tcp client...");

        IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);
        RXRemote = (EndPoint)(sender);

        while (true)
        {
            RXdata = new byte[1024];
            RXrecv = RXnewsock.ReceiveFrom(RXdata, ref RXRemote);
            string message = Encoding.ASCII.GetString(RXdata, 0, RXrecv);
            websiteCommands = WebsiteCommands.CreateFromJSON(message);
        }
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
        var newRotation = m_Robots[m_index].transform.rotation.eulerAngles;
        newRotation.x = -90f;
        newRotation.y = 0f;
        newRotation.z = 180f;
        var newRotationQ = m_Robots[m_index].transform.rotation;
        newRotationQ.eulerAngles = newRotation;

        m_Robots[m_index].transform.position = transform.position;
        m_Robots[m_index].transform.rotation = newRotationQ;
    }

    private void resetField(string type)
    {
        Destroy(setup);
        int index;
        if (type == "A")
        {
            index = 0;
        }
        else if (type == "B")
        {
            index = 1;
        }
        else if (type == "C")
        {
            index = 2;
        }
        else
        {
            Random rnd = new Random();
            index = rnd.Next(3);
        }

        setup = (GameObject)Instantiate(setupPrefab[index], new Vector3(0,0.5f,0), Quaternion.identity);
        for (int x = 0; x < setup.GetComponentsInChildren<Rigidbody>().Length; x++)
        {
            if (setup.GetComponentsInChildren<Rigidbody>()[x].tag == "Wobble")
            {
                setup.GetComponentsInChildren<Rigidbody>()[x].centerOfMass = new Vector3(0, -0.6f, 0);
            }
        }
    }
    #endregion

    #region Robot Selector
    public void OnRightButtonClick()
    {
        m_index += 1;

        if (m_index < m_Robots.Length)
        {
            m_Robots[m_index - 1].SetActive(false);
            m_Robots[m_index].SetActive(true);
        }
        else
        {
            m_index = m_Robots.Length - 1;
        }
        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();
    }
    public void OnLeftButtonClick()
    {
        m_index -= 1;

        if (m_index > -1)
        {
            m_Robots[m_index + 1].SetActive(false);
            m_Robots[m_index].SetActive(true);
        }
        else
        {
            m_index = 0;
        }
        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();
    }
    #endregion

    void FixedUpdate()
    {
        // Setting new robot position
        if (websiteCommands.position != robotPositionIndex)
        {
            setSpawn(websiteCommands.position);
        }
        // Changing robot
        if (websiteCommands.robotType > m_index)
        {
            OnRightButtonClick();
        }
        else if (websiteCommands.robotType < m_index)
        {
            OnLeftButtonClick();
        }
        // Reset field
        if (websiteCommands.resetField)
        {
            resetField(websiteCommands.gameSetup);
            resetRobot();
        }
        // Game setup
        if (websiteCommands.gameSetup != currentGameSetup)
        {
            currentGameSetup = websiteCommands.gameSetup;
            resetField(websiteCommands.gameSetup);
            resetRobot();
        }


        // Start game
        if (websiteCommands.startGame)
        {
            currentGameStart = true;
        }
        else
        {
            currentGameStart = false;
        }
        // Game type
        if (websiteCommands.gameType != currentGameType)
        {
            
        }

        // Robot config
        if (websiteCommands.incSize)
        {
            robotCustomizer.IncreaseRobotSize_PointerDown();
        }
        else if (websiteCommands.decSize)
        {
            robotCustomizer.DecreaseRobotSize_PointerDown();
        }
        else if (websiteCommands.incWheel)
        {
            robotCustomizer.IncAxelDis_PointerDown();
        }
        else if (websiteCommands.decWheel)
        {
            robotCustomizer.DecAxelDis_PointerDown();
        }
        else
        {
            robotCustomizer.OnPointerUp();
        }

    }

    [System.Serializable]
    public class WebsiteCommands
    {
        public int position;
        public int robotType;
        public bool resetField;
        public bool startGame;
        public string gameType;
        public string gameSetup;
        public bool incSize;
        public bool decSize;
        public bool incWheel;
        public bool decWheel;

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
