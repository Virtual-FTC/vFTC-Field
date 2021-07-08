using Assets.Scripts.Control;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IntakeControl : MonoBehaviour
{
    public CommandProcessor Commands = new CommandProcessor();

    [Header("Ball Pickup")]
    public int maxNumberBalls = 5;
    public int numBalls = 3;
    public float timeOfBallContact = 1.0f;
    public string coliderTag = "PowerCell";

    [Header("Intake Motor")]
    public float wantedVelocity = 0f;

    private float timer = 0.0f;

    private int resetNum = 3;

    public GameObject[] rings;

    private GameObject lastRing;

    // Intake Motor Control
    void Start()
    {
        retractIntake();
    }


    public void deployIntake()
    {
        //var hinge = GetComponent<HingeJoint>();
        //var motor = hinge.motor;
        //motor.targetVelocity = wantedVelocity;

        //hinge.motor = motor;
    }

    public void retractIntake()
    {
        //var hinge = GetComponent<HingeJoint>();
        //var motor = hinge.motor;
        //motor.targetVelocity = -wantedVelocity;

        //hinge.motor = motor;
        wantedVelocity = 0f;
    }

    // Ball Pickup
    void OnTriggerEnter(Collider collision)
    {
        if (wantedVelocity != 0)
        {
            if (collision.tag == coliderTag && numBalls < maxNumberBalls)
            {
                timer = Time.time;
            }
        }
        
    }

    void OnTriggerStay(Collider collision)
    {
        if (wantedVelocity != 0 && collision.gameObject != lastRing)
        {
            if (collision.tag == coliderTag && numBalls < maxNumberBalls && Time.time - timer >= timeOfBallContact)
            {
                numBalls++;
                rings[numBalls-1].SetActive(true);
                lastRing = collision.gameObject;
                if (Photon.Pun.PhotonNetwork.IsConnected)
                {
                    collision.gameObject.GetComponent<Photon.Pun.PhotonView>().RPC("DestroyRing", Photon.Pun.RpcTarget.All);
                    Photon.Pun.PhotonNetwork.Destroy(collision.gameObject);
                }
                else
                {
                    Destroy(collision.gameObject);
                }
            }
        }
        
    }

    public void subtractBall()
    {
        numBalls--;
        rings[numBalls].SetActive(false);
    }

    public void resetBalls()
    {
        numBalls = resetNum;
        for (int x = 0; x < 3; x++)
        {
            if (resetNum == 3)
                rings[x].SetActive(true);
            else
                rings[x].SetActive(false);
        }
    }

    public int getNumberBalls()
    {
        return numBalls;
    }

    public void setResetNum(int num)
    {
        resetNum = num;
    }

    public void setVelocity(float x)
    {
        wantedVelocity = x;
    }
}
