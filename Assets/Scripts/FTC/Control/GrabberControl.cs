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
        if (collision.tag == tagOfGameObject)
        {
            wobble = collision.gameObject;
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (collision.tag == tagOfGameObject)
        {
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
            var temp = wobble.GetComponent<Rigidbody>().constraints;
            temp = RigidbodyConstraints.FreezeAll;
            wobble.GetComponent<Rigidbody>().constraints = temp;
        }
    }

    public void stopGrab()
    {
        if (wobble != null && grabing)
        {
            grabing = false;
            wobble.transform.SetParent(field.transform);
            var temp = wobble.GetComponent<Rigidbody>().constraints;
            temp = RigidbodyConstraints.None;
            wobble.GetComponent<Rigidbody>().constraints = temp;
        }
    }
}
