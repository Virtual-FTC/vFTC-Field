using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chassis : MonoBehaviour
{
    private float frontLeftWheelCmd = 0f;
    private float frontRightWheelCmd = 0f;
    private float backLeftWheelCmd = 0f;
    private float backRightWheelCmd = 0f;

    private float frontLeftWheelEnc = 0f;
    private float frontRightWheelEnc = 0f;
    private float backLeftWheelEnc = 0f;
    private float backRightWheelEnc = 0f;

    public float drivetrainGearRatio = 20f;
    public float encoderTicksPerRev = 28f;
    public float wheelSeparationWidth = 0.4f;
    public float wheelSeparationLength = 0.4f;
    public float wheelRadius = 0.0508f;
    public float motorRPM = 340.0f;

    private Rigidbody rb;

    private float previousRealTime;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();

        previousRealTime = Time.realtimeSinceStartup;
        Console.WriteLine("Started.....");
    }

    private void OnDestroy()
    {

    }

    private void driveRobot()
    {
        // Strafer Drivetrain Control
        var linearVelocityX = ((frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd + backRightWheelCmd) / 4) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI);
        var linearVelocityY = ((-frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd - backRightWheelCmd) / 4) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI);
        var angularVelocity = (((-frontLeftWheelCmd + frontRightWheelCmd - backLeftWheelCmd + backRightWheelCmd) / 3) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI) / (Mathf.PI * wheelSeparationWidth)) * 2 * Mathf.PI;
        // Apply Local Velocity to Rigid Body        
        var locVel = transform.InverseTransformDirection(rb.velocity);
        locVel.x = -linearVelocityY;
        locVel.y = -linearVelocityX;
        locVel.z = 0f;
        rb.velocity = transform.TransformDirection(locVel);
        //Apply Angular Velocity to Rigid Body
        rb.angularVelocity = new Vector3(0f, -angularVelocity, 0f);
        //Encoder Calculations 
        frontLeftWheelEnc += (motorRPM / 60) * frontLeftWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        frontRightWheelEnc += (motorRPM / 60) * frontRightWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backLeftWheelEnc += (motorRPM / 60) * backLeftWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;
        backRightWheelEnc += (motorRPM / 60) * backRightWheelCmd * Time.deltaTime * encoderTicksPerRev * drivetrainGearRatio;
    }

    private void FixedUpdate()
    {
        driveRobot();
    }

    // Set motor commands
    public void setFrontLeftMotor(float power)
    {
        frontLeftWheelCmd = power;
    }
    public void setFrontRightMotor(float power)
    {
        frontRightWheelCmd = power;
    }
    public void setBackLeftMotor(float power)
    {
        backLeftWheelCmd = power;
    }
    public void setBackRightMotor(float power)
    {
        backRightWheelCmd = power;
    }

    // Get encoder values
    public float getFrontLeftEnc()
    {
        return frontLeftWheelEnc;
    }
    public float getFrontRightEnc()
    {
        return frontRightWheelEnc;
    }
    public float getBackLeftEnc()
    {
        return backLeftWheelEnc;
    }
    public float getBackRightEnc()
    {
        return backRightWheelEnc;
    }
} 
