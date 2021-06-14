using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using Random = System.Random;

public class FieldManager : MonoBehaviourPunCallbacks, IInRoomCallbacks
{
    private ScoreKeeper scoreKeeper;
    private IntakeControl intake;
    private CameraPosition camera;

    private GameTimer gameTimer;

    private bool currentGameStart = false;
    private string currentGameSetup = "A";
    private string currentGameType = "";
    private int currentCam = 0;

    public GameObject[] setupPrefab;
    private GameObject setup;

    public Transform[] spawnPositions;

    private GameObject robot;
    public GameObject robotPrefab;

    private void Awake()
    {
        if (PhotonNetwork.IsConnected)
        {
            Debug.Log("Destroyed Field Manager");
            Destroy(transform.gameObject);
        }
        else
        {
            robot = (GameObject)Instantiate(robotPrefab, spawnPositions[1].transform.position, spawnPositions[1].transform.rotation);
        }
    }

    private void Start()
    {
        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
        intake = GameObject.Find("Intake").GetComponent<IntakeControl>();
        camera = GameObject.Find("Camera").GetComponent<CameraPosition>();
        gameTimer = GameObject.Find("ScoreKeeper").GetComponent<GameTimer>();

        camera.switchCamera(0);

        resetField("B");
        gameTimer.setGameType("auto");

        print("Started.....");
    }

    private void resetRobot()
    {
        intake.resetBalls();

        robot.transform.position = spawnPositions[1].transform.position;
        robot.transform.rotation = spawnPositions[1].transform.rotation;
    }

    public void resetField(string type)
    {
        resetRobot();
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

    public void startGame()
    {
        if (!currentGameStart)
        {
            currentGameStart = true;
            resetRobot();
            resetField(currentGameSetup);
            gameTimer.startGame();
        }
    }

    public void stopGame()
    {
        if (currentGameStart)
        {
            currentGameStart = false;
            gameTimer.stopGame();
        }
    }

    public void setGameSetup(string setup)
    {
        currentGameSetup = setup;
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
