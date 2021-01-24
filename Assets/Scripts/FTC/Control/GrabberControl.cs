using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts.Control;

public class GrabberControl : MonoBehaviour
{
    public CommandProcessor Commands = new CommandProcessor();

    private bool grabing = false;
    public int pointsPerGoal = 0;
    public string tagOfGameObject = "Wobble";

    private GameObject wobble = null;
    private GameObject field;
    public Transform robot;

    void OnTriggerEnter(Collider collision)
    {
        if (collision.tag == tagOfGameObject && wobble == null)
        {
            wobble = collision.gameObject;
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (collision.tag == tagOfGameObject)
        {
            stopGrab();
            wobble = null;
        }
    }

    public void startGrab()
    {
        if (wobble != null && !grabing)
        {
            grabing = true;
            field = (wobble.transform.parent).gameObject;
            wobble.transform.SetParent(robot);
            wobble.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionZ;
            wobble.GetComponent<Rigidbody>().isKinematic = true;
        }
    }

    public void lift()
    {
        if (wobble != null && grabing)
        {
            var temp = wobble.GetComponent<Rigidbody>();
            var locVel = new Vector3();
            locVel.x = 0f;
            locVel.y = 1f;
            locVel.z = 0f;
            temp.velocity = locVel;
            print(wobble.transform.position.y);
            if(wobble.transform.position.y > 0.3)
            {
                wobble.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePosition;
            }
        }
    }

    public void stopGrab()
    {
        if (wobble != null && grabing)
        {
            grabing = false;
            wobble.transform.SetParent(field.transform);
            wobble.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
            wobble.GetComponent<Rigidbody>().isKinematic = false;
        }
    }
}
