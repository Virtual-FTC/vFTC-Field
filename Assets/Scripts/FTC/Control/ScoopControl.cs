using Assets.Scripts.Control;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoopControl : MonoBehaviour
{
    public CommandProcessor Commands = new CommandProcessor();

    [Header("Scoop Motor")]
    public float wantedVelocity = 150f;

    private float motorCmd = 0;

    HingeJoint hinge;

    private void Awake()
    {
        hinge = GetComponent<HingeJoint>();
    }

    void updateVelocity()
    {
        var motor = hinge.motor;
        motor.targetVelocity = wantedVelocity * motorCmd;

        hinge.motor = motor;
    }

    public void setCmd(float cmd)
    {
        motorCmd = cmd;
    }

    public float getCmd()
    {
        return motorCmd;
    }
}
