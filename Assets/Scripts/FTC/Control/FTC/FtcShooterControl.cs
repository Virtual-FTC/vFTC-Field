using Assets.Scripts.Control;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FtcShooterControl : MonoBehaviour
{
    public CommandProcessor Commands = new CommandProcessor();

    [Header("Other Controls")]
    public GameObject intake;

    private IntakeControl intakeControl;

    [Header("Shooting Control")]
    public float timeBetweenShots = 1.0f;
    public float shotForceMult = 0.5f;
    public GameObject shootingAngle;

    public GameObject prefab;

    private float timer = 0.0f;

    private float wantedVelocity = 0.0f;

    void Awake()
    {
        intakeControl = intake.GetComponent<IntakeControl>();

        timer = Time.time;
    }

    public void shooting()
    {
        if (Time.time - timer >= timeBetweenShots & intakeControl.getNumberBalls() > 0)
        {
            timer = Time.time;
            var newPosition = transform.position;
            newPosition.x += 0.0f;
            newPosition.z += 0.0f;
            newPosition.y += 0.0f;

            var newRotation = transform.rotation.eulerAngles;
            newRotation.x = 90f - 24.84f;
            newRotation.y = 90f;
            newRotation.z = 0f;
            var newRotationQ = transform.rotation;
            newRotationQ.eulerAngles = newRotation;


            GameObject instance = (GameObject)Instantiate(prefab, newPosition, newRotationQ);
            var rigid = instance.GetComponent<Rigidbody>();

            rigid.AddForce((shootingAngle.transform.rotation * Vector3.forward) * wantedVelocity * shotForceMult, ForceMode.Impulse);
            intakeControl.subtractBall();
        }
    }

    public void setVelocity(float x)
    {
        wantedVelocity = x;
    }
}
