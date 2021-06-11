using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class RobotController : MonoBehaviour
{
    PlayerControls controls;
    private float linearVelocityX;
    private float linearVelocityY;
    private float angularVelocity;

    public bool usingJoystick = true;

    private float frontLeftWheelCmd = 0f;
    private float frontRightWheelCmd = 0f;
    private float backLeftWheelCmd = 0f;
    private float backRightWheelCmd = 0f;

    private float frontLeftWheelEnc = 0f;
    private float frontRightWheelEnc = 0f;
    private float backLeftWheelEnc = 0f;
    private float backRightWheelEnc = 0f;

    private float motorPower5;
    private float motorPower6;
    private float motorPower7;
    private float motorPower8;

    public float drivetrainGearRatio = 20f;
    public float encoderTicksPerRev = 28f;
    public float wheelSeparationWidth = 0.4f;
    public float wheelSeparationLength = 0.4f;
    public float wheelRadius = 0.0508f;
    public float motorRPM = 340.0f;

    private Rigidbody rb;

    private float previousRealTime;

    [Header("Subsystem Controls")]
    public GameObject shooter;
    public GameObject intake;
    public GameObject grabber;

    private ShooterControl shooterControl;
    private IntakeControl intakeControl;
    private GrabberControl grabberControl;

    private AudioManager audioManager;
    private RobotSoundControl robotSoundControl;

    private void Awake()
    {
        controls = new PlayerControls();

        // Shooting
        controls.GamePlay.Shoot.performed += ctx => motorPower6 = 1.0f;
        controls.GamePlay.Shoot.canceled += ctx => motorPower6 = 0.0f;

        // Spinup
        controls.GamePlay.Spinup.performed += ctx => motorPower7 = ctx.ReadValue<float>();
        controls.GamePlay.Spinup.canceled += ctx => motorPower7 = 0.0f;

        //Intake
        controls.GamePlay.Intake.performed += ctx => motorPower5 = 1f;
        controls.GamePlay.Intake.canceled += ctx => motorPower5 = 0.0f;

        //Wobble
        controls.GamePlay.Wobble.performed += ctx => motorPower8 = 0.3f;
        controls.GamePlay.Wobble.canceled += ctx => motorPower8 = 0.0f;
        controls.GamePlay.WobbleHigh.performed += ctx => motorPower8 = 1f;
        controls.GamePlay.WobbleHigh.canceled += ctx => motorPower8 = 0.0f;

        //Driving Controls
        controls.GamePlay.DriveForward.performed += ctx => linearVelocityX = 1.5f*ctx.ReadValue<float>();
        controls.GamePlay.DriveForward.canceled += ctx => linearVelocityX = 0f;
        controls.GamePlay.DriveBack.performed += ctx => linearVelocityX = -1.5f*ctx.ReadValue<float>();
        controls.GamePlay.DriveBack.canceled += ctx => linearVelocityX = 0f;

        controls.GamePlay.DriveLeft.performed += ctx => linearVelocityY = 1.5f*ctx.ReadValue<float>();
        controls.GamePlay.DriveLeft.canceled += ctx => linearVelocityY = 0f;
        controls.GamePlay.DriveRight.performed += ctx => linearVelocityY = -1.5f*ctx.ReadValue<float>();
        controls.GamePlay.DriveRight.canceled += ctx => linearVelocityY = 0f;

        controls.GamePlay.TurnLeft.performed += ctx => angularVelocity = 6*ctx.ReadValue<float>();
        controls.GamePlay.TurnLeft.canceled += ctx => angularVelocity = 0f;
        controls.GamePlay.TurnRight.performed += ctx => angularVelocity = -6*ctx.ReadValue<float>();
        controls.GamePlay.TurnRight.canceled += ctx => angularVelocity = 0f;
    }

    private void OnEnable()
    {
        controls.GamePlay.Enable();
    }

    private void OnDisable()
    {
        controls.GamePlay.Disable();
    }

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        robotSoundControl = GetComponent<RobotSoundControl>();

        audioManager = GameObject.Find("ScoreKeeper").GetComponent<AudioManager>();

        previousRealTime = Time.realtimeSinceStartup;
        Console.WriteLine("Started.....");

        shooterControl = shooter.GetComponent<ShooterControl>();
        shooterControl.Commands.Add(() => motorPower6 > 0, shooterControl.shooting);
        shooterControl.Commands.Add(() => motorPower7 >= 0, () =>
        {
            robotSoundControl.playShooterRev(motorPower7);
            shooterControl.setVelocity(motorPower7);
        });

        intakeControl = intake.GetComponent<IntakeControl>();
        intakeControl.Commands.Add(() => motorPower5 != 0, () =>
        {
            robotSoundControl.playIntakeRev(motorPower5);
            intakeControl.setVelocity(motorPower5 * 150);
            intakeControl.deployIntake();
        });
        intakeControl.Commands.Add(() => motorPower5 == 0, () =>
        {
            robotSoundControl.playIntakeRev(motorPower5);
            intakeControl.retractIntake();
        });

        grabberControl = grabber.GetComponent<GrabberControl>();
        grabberControl.Commands.Add(() => motorPower8 > 0 , () =>
        {
            grabberControl.startGrab();
        });
        grabberControl.Commands.Add(() => motorPower8 > 0.5, () =>
        {
            grabberControl.lift();
        });
        grabberControl.Commands.Add(() => motorPower8 == 0, () =>
        {
            grabberControl.stopGrab();
        });
    }

    private void OnDestroy()
    {

    }

    private void driveRobot()
    {
        // Strafer Drivetrain Control
        if (!usingJoystick)
        {
            linearVelocityX = ((frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd + backRightWheelCmd) / 4) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI);
            linearVelocityY = ((-frontLeftWheelCmd + frontRightWheelCmd + backLeftWheelCmd - backRightWheelCmd) / 4) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI);
            angularVelocity = (((-frontLeftWheelCmd + frontRightWheelCmd - backLeftWheelCmd + backRightWheelCmd) / 3) * ((motorRPM / 60) * 2 * wheelRadius * Mathf.PI) / (Mathf.PI * wheelSeparationWidth)) * 2 * Mathf.PI;
        }
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

        robotSoundControl.playRobotDrive((Mathf.Abs(frontLeftWheelCmd) + Mathf.Abs(frontRightWheelCmd) + Mathf.Abs(backLeftWheelCmd) + Mathf.Abs(backRightWheelCmd)) / 4f);
    }

    private void FixedUpdate()
    {
        driveRobot();
        shooterControl.Commands.Process();
        intakeControl.Commands.Process();
        grabberControl.Commands.Process();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag != "Floor")
        {
            robotSoundControl.playRobotImpact();
        }
    }
}
