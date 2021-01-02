using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using UnityEditor;

public class RobotControl : MonoBehaviour
{
    /*
    [Header("Subscribers-WheelMotors-DcMotorInput")]
    public RosSharp.RosBridgeClient.BoolSubscriber resetFieldSub;
    public RosSharp.RosBridgeClient.StringSubscriber robotTypeSub;
    public RosSharp.RosBridgeClient.StringSubscriber robotPositionSub;

    public string[] robotTypes;

    private string currentRobotType = null;

    private GameObject robotInstance;
    private string currentRobotPosition = null;
    private string[] openRobotSpots = { };
    public Transform[] fieldPositions;

    public GameObject field;
    private GameObject prefab1;
    private GameObject prefab2;

    private GameControl gameControl;
    private bool isReset = false;
    private float previousRealTime;

    void Awake()
    {
        gameControl = field.GetComponent<GameControl>();
        prefab1 = (GameObject)Resources.Load("Prefab/FtcShooterRobot");
        prefab2 = (GameObject)Resources.Load("Prefab/FtcScoopRobot");
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (robotTypes.Contains(robotTypeSub.getData()) && robotTypeSub.getData() != currentRobotType && currentRobotPosition != null)
        {
            RosConnector rosCon = gameObject.GetComponent<RosConnector>();
            if (robotInstance!=null)
                Destroy(robotInstance);
            currentRobotType = robotTypeSub.getData();
            if (currentRobotType == robotTypes[0])
                robotInstance = (GameObject)Instantiate(prefab1, transform.position, transform.rotation);
            else
                robotInstance = (GameObject)Instantiate(prefab2, transform.position, transform.rotation);
            robotInstance.GetComponent<RosConnector>().RosBridgeServerUrl = rosCon.RosBridgeServerUrl;
        }

        if (openRobotSpots.Contains(robotPositionSub.getData()) && robotPositionSub.getData() != currentRobotPosition)
        {
            if (currentRobotPosition != null)
                gameControl.freeRobotSpot(currentRobotPosition);
            currentRobotPosition = robotPositionSub.getData();
            if (currentRobotPosition == "Red Left")
            {
                transform.position = fieldPositions[0].position;
                transform.rotation = fieldPositions[0].rotation;
                gameControl.fillRobotSpot(0);
                resetRobot();
            }

            else if (currentRobotPosition == "Red Right")
            {
                transform.position = fieldPositions[1].position;
                transform.rotation = fieldPositions[1].rotation;
                gameControl.fillRobotSpot(1);
                resetRobot();
            }

            else if (currentRobotPosition == "Blue Left")
            {
                transform.position = fieldPositions[2].position;
                transform.rotation = fieldPositions[2].rotation;
                gameControl.fillRobotSpot(2);
                resetRobot();
            }

            else if (currentRobotPosition == "Blue Right")
            {
                transform.position = fieldPositions[3].position;
                transform.rotation = fieldPositions[3].rotation;
                gameControl.fillRobotSpot(3);
                resetRobot();
            }
        }

        if (resetFieldSub.getData() == true && isReset == false)
        {
            isReset = true;
            gameControl.reset();
            previousRealTime = Time.realtimeSinceStartup;
        }
        else if (Time.realtimeSinceStartup -previousRealTime > 6)
            isReset = false;
    }

    public void resetRobot()
    {
        RosConnector rosCon = gameObject.GetComponent<RosConnector>();
        if (robotInstance != null)
            Destroy(robotInstance);
        if (currentRobotPosition != null && currentRobotType != null)
        {
            if (currentRobotType == robotTypes[0])
                robotInstance = (GameObject)Instantiate(prefab1, transform.position, transform.rotation);
            else
                robotInstance = (GameObject)Instantiate(prefab2, transform.position, transform.rotation);
            robotInstance.GetComponent<RosConnector>().RosBridgeServerUrl = rosCon.RosBridgeServerUrl;
        }

    }

    // Returns the current position of 
    public void updateRobotSpots(string[] openSpots)
    {
        openRobotSpots = openSpots;
    }
    */
}
