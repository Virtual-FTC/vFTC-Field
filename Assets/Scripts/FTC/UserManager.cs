using System.Collections;
using System.Collections.Generic;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;

public class UserManager : MonoBehaviour
{
    public GameObject[] m_Robots = null;

    private int m_index = 0;
    private int robotPositionIndex = 0;

    public Transform[] spawnPositions;
    public static Transform[] saveSpawnPositions;
    public static Transform[] currentSpawnPositions;

    public GameObject[] setupPrefab;
    private GameObject setup;

    public Image[] robotImages;

    private MultiUserManager user2;
    private MultiUserManager user3;
    private MultiUserManager user4;

    // TCP server
    private int recv;
    private Socket newsock;
    private Socket client;

    private WebsiteCommands websiteCommands = new WebsiteCommands();
    private bool currentGameStart = false;
    private string currentGameSetup = "A";
    private string currentGameType = "";
    private int currentCam = 0;

    private RobotCustomizer robotCustomizer;
    private GameTimer gameTimer;

    private Thread thread;

    private float previousRealTime;
    private bool resetCoolDown = false;

    private ScoreKeeper scoreKeeper;
    private IntakeControl intake;
    private CameraPosition camera;

    private bool sendingScore;

    public Material[] materials;

    private void Start()
    {
        /*
        user2 = GameObject.Find("User-2").GetComponent<MultiUserManager>();
        user3 = GameObject.Find("User-3").GetComponent<MultiUserManager>();
        user4 = GameObject.Find("User-4").GetComponent<MultiUserManager>();
        */

        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
        intake = GameObject.Find("Intake").GetComponent<IntakeControl>();
        camera = GameObject.Find("Render Streaming Camera").GetComponent<CameraPosition>();

        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();
        gameTimer = GameObject.Find("ScoreKeeper").GetComponent<GameTimer>();

        currentSpawnPositions = (Transform[])spawnPositions.Clone();
        saveSpawnPositions = (Transform[])spawnPositions.Clone();
        setSpawn(0);
        resetField("A");

        print("Started.....");
        //thread = new Thread(startTCPServer);
        //thread.Start();
    }

    private void OnDestroy()
    {
        client.Close();
        newsock.Close();
        //thread.Abort();
    }

    public static void nullSpawnPosition(int pos)
    {
        currentSpawnPositions[pos] = null;
    }

    public static void unNullSpawnPosition(int pos)
    {
        currentSpawnPositions[pos] = saveSpawnPositions[pos];
    }

    // Some sort of TCP connection to the website to handle user pref like which robot, position of the robot, dimensions of the robot, color of the robot, team number of the robot, start/stop game, and select which game mode to run (freeplay, autonomous, teleop, and full match) 
    #region TCP server for sending and receiving data  
    /*
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
        print("Waiting for a TCP client...");
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
                //print(message);
                if (message != "ping")
                    websiteCommands = WebsiteCommands.CreateFromJSON(message);

                if (sendingScore)
                {
                    var sendData = new byte[1024];
                    sendingScore = false;
                    var score = new WebsiteScore();
                    score.gameType = websiteCommands.gameType;
                    if (websiteCommands.position <= 1)
                        score.score = scoreKeeper.getScoreRed();
                    else
                        score.score = scoreKeeper.getScoreBlue();

                    string scoreJSON = JsonUtility.ToJson(score);

                    sendData = Encoding.ASCII.GetBytes(scoreJSON);
                    //client.Send(data, recv, SocketFlags.None);
                    client.Send(sendData, SocketFlags.None);
                }
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
    */
    #endregion 

    #region Game Control
    private void setSpawn(int index)
    {
        if(currentSpawnPositions[index] != null)
        {
            Color myColor = new Color();
            var color = "";
            if (robotPositionIndex <= 1)
                color = "#9092C6";
            else
                color = "#E2958C";
            ColorUtility.TryParseHtmlString(color, out myColor);
            robotImages[robotPositionIndex].color = myColor;

            currentSpawnPositions[robotPositionIndex] = saveSpawnPositions[robotPositionIndex];
            print(currentSpawnPositions[robotPositionIndex]);
            robotPositionIndex = index;
            transform.position = saveSpawnPositions[index].position;
            transform.rotation = saveSpawnPositions[index].rotation;

            currentSpawnPositions[robotPositionIndex] = null;

            if (robotPositionIndex <= 1)
                color = "#0000FF";
            else
                color = "#FF1B00";
            ColorUtility.TryParseHtmlString(color, out myColor);

            robotImages[robotPositionIndex].color = myColor;

            //Change color of robot
            if (robotPositionIndex == 0)
                color = "#3A2CDC"; 
            else if (robotPositionIndex == 1)
                color = "#0F6AD6";
            else if (robotPositionIndex == 2)
                color = "#FF1A1A";
            else
                color = "#FF6942";
            ColorUtility.TryParseHtmlString(color, out myColor);
            materials[int.Parse(transform.gameObject.tag) -1].color = myColor;

            resetRobot();
        }
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

        m_Robots[m_index].transform.position = transform.position;
        m_Robots[m_index].transform.rotation = newRotationQ;

        
        user2.resetRobot();
        user3.resetRobot();
        user4.resetRobot();
        
    }

    private void resetField(string type)
    {
        scoreKeeper.resetScore();
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

        if (index == 0)
            gameTimer.setGameSetup("A");
        else if (index == 1)
            gameTimer.setGameSetup("B");
        else if (index == 2)
            gameTimer.setGameSetup("C");

        GameObject[] gos = GameObject.FindGameObjectsWithTag("OutsideRing");
 
        foreach (GameObject a in gos)
        {
            Destroy(a);
        }

        gos = GameObject.FindGameObjectsWithTag("BlueWobble");

        foreach (GameObject a in gos)
        {
            Destroy(a);
        }

        gos = GameObject.FindGameObjectsWithTag("RedWobble");

        foreach (GameObject a in gos)
        {
            Destroy(a);
        }

        setup = (GameObject)Instantiate(setupPrefab[index], new Vector3(0, 0.5f, 0), Quaternion.identity);
        for (int x = 0; x < setup.GetComponentsInChildren<Rigidbody>().Length; x++)
        {
            if (setup.GetComponentsInChildren<Rigidbody>()[x].tag == "Wobble")
            {
                setup.GetComponentsInChildren<Rigidbody>()[x].centerOfMass = new Vector3(0, -0.9f, 0);
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
        if (websiteCommands.resetField && !resetCoolDown)
        {
            resetCoolDown = true;
            previousRealTime = Time.realtimeSinceStartup;
            resetField(websiteCommands.gameSetup);
            resetRobot();
        }
        else if (Time.realtimeSinceStartup - previousRealTime > 5)
        {
            resetCoolDown = false;
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
            resetRobot();
            resetField(websiteCommands.gameSetup);
            gameTimer.startGame();
        }
        else if (!websiteCommands.startGame && currentGameStart)
        {
            currentGameStart = false;
            gameTimer.stopGame();
        }

        // Game type
        if (websiteCommands.gameType != currentGameType)
        {
            gameTimer.setGameType(websiteCommands.gameType);
            currentGameType = websiteCommands.gameType;
            if (currentGameType == "teleop")
            {
                intake.setResetNum(0);
                user2.setResetNum(0);
                user3.setResetNum(0);
                user4.setResetNum(0);
            }
            else
            {
                intake.setResetNum(3);
                user2.setResetNum(3);
                user3.setResetNum(3);
                user4.setResetNum(3);
            }
        }

        // Camera control
        if (websiteCommands.cam != currentCam)
        {
            currentCam = websiteCommands.cam;
            camera.switchCamera(currentCam);
        }
        // Sending Score
        /*
        if (gameTimer.getTimer() <= 0 && (websiteCommands.gameType == "auto" || websiteCommands.gameType == "teleop"))
        {
            scoreKeeper.freezeScore();
            sendingScore = true;
        }
        */


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
        public int position;
        public int robotType;
        public bool resetField;
        public bool startGame;
        public string gameType = "";
        public string gameSetup = "";
        public float size;
        public float wheelSize;
        public int cam;

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

    [System.Serializable]
    public class WebsiteScore
    {
        public string gameType;
        public int score;
    }
}
