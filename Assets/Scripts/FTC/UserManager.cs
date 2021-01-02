using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserManager : MonoBehaviour
{
    public GameObject[] m_Robots = null;

    private int m_index = 0;

    public Transform[] spawnPositions;

    public GameObject[] setupPrefab;
    private GameObject setup;

    private void Start()
    {
        setSpawn(1);
        resetField(1);
    }

    private void setSpawn(int index)
    {
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

    private void resetField(int index)
    {
        Destroy(setup);

        setup = (GameObject)Instantiate(setupPrefab[index], new Vector3(0,0.5f,0), Quaternion.identity);
        for (int x = 0; x < setup.GetComponentsInChildren<Rigidbody>().Length; x++)
        {
            if (setup.GetComponentsInChildren<Rigidbody>()[x].tag == "Wobble")
            {
                setup.GetComponentsInChildren<Rigidbody>()[x].centerOfMass = new Vector3(0, -0.6f, 0);
            }
        }
    }

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
    }

    // 
    // Some sort of TCP connection to the website to handle user pref like which robot, position of the robot, dimensions of the robot, color of the robot, team number of the robot, start/stop game, and select which game mode to run (freeplay, autonomous, teleop, and full match) 
    //

    void Awake()
    {

    }

    // Update is called once per frame
    void FixedUpdate()
    {
    }
}