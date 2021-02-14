using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotSoundControl : MonoBehaviour
{
    // Robot specific sounds
    public AudioSource robotDrive;
    public AudioSource robotImpact;
    public AudioSource robotShoot;
    public AudioSource shooterRev;
    public AudioSource intakeRev;

    // Robot specific sounds
    public void playRobotDrive(float power)
    {
        if (robotDrive.time < 0.1)
            robotDrive.time = 0.1f;
        if (robotDrive.time > 6)
            robotDrive.time = 0.1f;
        if (power > 0)
        {
            robotDrive.volume = power;
            robotDrive.loop = true;
            if (!robotDrive.isPlaying)
                robotDrive.Play();
        }
        else
        {
            robotDrive.Stop();
        }
    }

    public void playRobotShoot()
    {
        robotShoot.Play();
    }

    public void playRobotImpact()
    {
        robotImpact.volume = 0.1f;
        robotImpact.Play();
    }

    public void playShooterRev(float power)
    {
        if (shooterRev.time < 0.1)
            shooterRev.time = 0.1f;
        if (shooterRev.time > 0.6)
            shooterRev.time = 0.1f;

        if (power > 0)
        {
            shooterRev.volume = power;
            shooterRev.loop = true;
            if (!shooterRev.isPlaying)
                shooterRev.Play();
        }
        else
        {
            shooterRev.Stop();
        }
    }

    public void playIntakeRev(float power)
    {
        if (intakeRev.time < 0.1)
            intakeRev.time = 0.1f;
        if (intakeRev.time > 0.6)
            intakeRev.time = 0.1f;
        if (power > 0)
        {
            intakeRev.volume = 0.5f;
            intakeRev.loop = true;
            if (!intakeRev.isPlaying)
                intakeRev.Play();
        }
        else
        {
            intakeRev.Stop();
        }
    }
}
