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
    private int recv;
    private Socket newsock;
    private Socket client;

    private WebsiteCommands websiteCommands = new WebsiteCommands();
    private bool currentGameStart = false;
    private string currentGameSetup = "A";
    private string currentGameType = "";

    private RobotCustomizer robotCustomizer;
    private GameTimer gameTimer;

    private void Start()
    {
        setSpawn(0);
        resetField("A");

        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();
        gameTimer = GetComponent<GameTimer>();

        Console.WriteLine("Started.....");
        Thread thread = new Thread(startTCPServer);
        thread.Start();
    }

    private void OnDestroy()
    {
        client.Close();
        newsock.Close();
    }

    // Some sort of TCP connection to the website to handle user pref like which robot, position of the robot, dimensions of the robot, color of the robot, team number of the robot, start/stop game, and select which game mode to run (freeplay, autonomous, teleop, and full match) 
    #region TCP server for sending and receiving data  
    void startTCPServer()
    {
        int recv;
        byte[] data = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any,
                               9052);

        newsock = new
            Socket(AddressFamily.InterNetwork,
                        SocketType.Stream, ProtocolType.Tcp);

        newsock.Bind(ipep);
        newsock.Listen(10);
        print("Waiting for a client...");
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
                //client.Send(data, recv, SocketFlags.None);
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

    /*
    void receiveFromWeb()
    {
        RXdata = new byte[1024];
        IPEndPoint ipep = new IPEndPoint(IPAddress.Any, 9052);

        RXnewsock = new Socket(AddressFamily.InterNetwork,
                      SocketType.Stream, ProtocolType.Tcp);

        RXnewsock.Bind(ipep);
        RXnewsock.Listen(10)
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
    */
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

        GameObject[] gos = GameObject.FindGameObjectsWithTag("Ring");
        foreach(GameObject a in gos)
        {
            Destroy(a);
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
            setSpawn(websiteCommands.position);
        }
        // Changing robot
        if (websiteCommands.robotType != m_index)
        {
            OnButtonClick(websiteCommands.robotType);
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
        if (websiteCommands.startGame && !currentGameStart)
        {
            currentGameStart = true;
            gameTimer.startGame();
        }
        else if(!websiteCommands.startGame && currentGameStart)
        {
            currentGameStart = false;
            gameTimer.stopGame();
        }

        // Game type
        if (websiteCommands.gameType != currentGameType)
        {
            gameTimer.setGameType(websiteCommands.gameType);
            currentGameType = websiteCommands.gameType;
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
        public string gameType = "";
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
