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
    public float wantedVelocity = 150f;

    private float timer = 0.0f;

    private int resetNum = 3;

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
    }

    // Ball Pickup
    void OnTriggerEnter(Collider collision)
    {
        if (collision.tag == coliderTag && numBalls < maxNumberBalls)
        {
            timer = Time.time;
        }
    }

    void OnTriggerStay(Collider collision)
    {
     
        if (collision.tag == coliderTag && numBalls < maxNumberBalls && Time.time - timer >= timeOfBallContact)
        {
            numBalls++;
            Destroy(collision.gameObject);
        }
    }

    public void subtractBall()
    {
        numBalls--;
    }

    public void resetBalls()
    {
        numBalls = resetNum;
    }

    public int getNumberBalls()
    {
        return numBalls;
    }

    public void setVelocity(float x)
    {
        wantedVelocity = x;
    }
}
