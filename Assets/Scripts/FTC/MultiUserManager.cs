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

public class MultiUserManager : MonoBehaviour
{
    public GameObject[] m_Robots = null;

    private int m_index = 0;
    private int robotPositionIndex = -1;

    public Image[] robotImages;

    private bool connected = false;
    private bool settingDefaultSpawn = false;

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

    public Material[] materials;

    public GameObject intakeObject;

    private void Start()
    {
        intake = intakeObject.GetComponent<IntakeControl>();

        robotCustomizer = m_Robots[m_index].GetComponent<RobotCustomizer>();

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

    // Some sort of TCP connection to the website to handle user pref like which robot, position of the robot, dimensions of the robot, color of the robot, team number of the robot, start/stop game, and select which game mode to run (freeplay, autonomous, teleop, and full match) 
    #region TCP server for sending and receiving data  
    /*
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

        //Spawn in robot and update the robot visual
        print("Spawning in robot");
        connected = true;
        settingDefaultSpawn = true;


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
            }
            catch (SocketException)
            {
                print("Client lost connection");
                break;
            }
        }
        print("Disconnected from {0}" +
                          clientep.Address);

        connected = false;

        client.Close();
        newsock.Close();
        startTCPServer();
    }
    */
    #endregion 

    #region Game Control

    private void setSpawn(int index)
    {
        if (robotPositionIndex == -1 && index == -1)
        {
          
        }
        else if (index == -1)
        {
            UserManager.unNullSpawnPosition(robotPositionIndex);
            Color myColor = new Color();
            var color = "";
            if (robotPositionIndex <= 1)
                color = "#9092C6";
            else
                color = "#E2958C";
            ColorUtility.TryParseHtmlString(color, out myColor);

            robotImages[robotPositionIndex].color = myColor;
            robotPositionIndex = -1;
        }
        else if (UserManager.currentSpawnPositions[index] != null)
        {
            Color myColor = new Color();
            var color = "";
            if (robotPositionIndex <= 1)
                color = "#9092C6";
            else
                color = "#E2958C";
            ColorUtility.TryParseHtmlString(color, out myColor);
            robotImages[robotPositionIndex].color = myColor;
            UserManager.unNullSpawnPosition(robotPositionIndex);
            robotPositionIndex = index;
            transform.position = UserManager.saveSpawnPositions[index].position;
            transform.rotation = UserManager.saveSpawnPositions[index].rotation;

            UserManager.nullSpawnPosition(robotPositionIndex);

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
            materials[int.Parse(transform.gameObject.tag) - 1].color = myColor;

            resetRobot();
        }
        
    }

    private void setDefaultSpawn()
    {
        int spot = int.Parse(transform.gameObject.tag) - 1;

        if (UserManager.currentSpawnPositions[spot] != null)
        {
            robotPositionIndex = spot;
            transform.position = UserManager.saveSpawnPositions[spot].position;
            transform.rotation = UserManager.saveSpawnPositions[spot].rotation;

            UserManager.nullSpawnPosition(robotPositionIndex);

            Color myColor = new Color();
            var color = "";
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
            materials[int.Parse(transform.gameObject.tag) - 1].color = myColor;

            resetRobot();
        }
        else
        {
            for (int x = 0; x < 4; x++)
            {
                if (UserManager.currentSpawnPositions[x] != null)
                {

                    robotPositionIndex = x;
                    transform.position = UserManager.saveSpawnPositions[x].position;
                    transform.rotation = UserManager.saveSpawnPositions[x].rotation;

                    UserManager.nullSpawnPosition(robotPositionIndex);

                    Color myColor = new Color();
                    var color = "";
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
                    materials[int.Parse(transform.gameObject.tag) - 1].color = myColor;

                    resetRobot();
                    break;
                }
            }
        }

        
    }

    public void resetRobot()
    {
        if (connected)
        {
            intake.resetBalls();
            print("RESET BALLS");
            var newRotation = m_Robots[m_index].transform.rotation.eulerAngles;
            newRotation.x = -90f;
            newRotation.y = 0f;
            newRotation.z = 180f;
            var newRotationQ = m_Robots[m_index].transform.rotation;
            newRotationQ.eulerAngles = newRotation;

            m_Robots[m_index].transform.position = transform.position;
            m_Robots[m_index].transform.rotation = newRotationQ;
        }
        
    }
    #endregion

    public void setResetNum(int num)
    {
        intake.setResetNum(num);
    }

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
        if (connected == true && settingDefaultSpawn == true)
        {
            m_Robots[m_index].SetActive(true);
            setDefaultSpawn();
            settingDefaultSpawn = false;
        }
        if (connected == false)
        {
            m_Robots[m_index].SetActive(false);
            setSpawn(-1);
        }
        if (connected)
        {
            // Setting new robot position
            if (websiteCommands.position != robotPositionIndex && websiteCommands.position != -1)
            {
                setSpawn(websiteCommands.position);
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
    }

    [System.Serializable]
    public class WebsiteCommands
    {
        public int position = -1;
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
