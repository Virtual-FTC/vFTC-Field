using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.Scripts.Control;

public class GrabberControl : MonoBehaviour
{
    public CommandProcessor Commands = new CommandProcessor();

    private bool grabing = false;
    public int pointsPerGoal = 0;
    private string tagOfGameObject1 = "RedWobble";
    private string tagOfGameObject2 = "BlueWobble";

    private GameObject wobble = null;
    private GameObject field;
    public Transform robot;

    void OnTriggerEnter(Collider collision)
    {
        if ((collision.tag == tagOfGameObject1 || collision.tag == tagOfGameObject2) && wobble == null)
        {
            wobble = collision.gameObject;
        }
    }

    public void startGrab()
    {
        if (wobble != null && !grabing)
        {
            grabing = true;
            field = (wobble.transform.parent).gameObject;
            wobble.transform.SetParent(robot);
            var rb = wobble.GetComponent<Rigidbody>();
            rb.isKinematic = true;
            wobble.transform.localPosition = new Vector3(0f,-0.39f, 0.05f);
        }
    }

    public void lift()
    {
        if (wobble != null && grabing)
        {
            wobble.transform.localPosition = new Vector3(0f, -0.39f, 0.3f);
        }
    }

    public void stopGrab()
    {
        if (wobble != null && grabing)
        {
            grabing = false;
            wobble.transform.SetParent(field.transform);
            var rb = wobble.GetComponent<Rigidbody>();
            rb.isKinematic = false;
        }
        wobble = null;
    }
}
