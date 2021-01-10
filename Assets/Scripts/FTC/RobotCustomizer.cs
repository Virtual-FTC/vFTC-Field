using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RobotCustomizer : MonoBehaviour
{
    //public GameObject[] frontWheels = null;
    //public GameObject[] backWheels = null;

    public GameObject robotBody = null;
    public GameObject frontAxel = null;
    public GameObject backAxel = null;
    //public GameObject middleAxel = null;

    private Vector3 scaleChange = new Vector3(-0.1f, 0, 0);

    private bool decreaseDis = false;
    private bool increaseDis = false;
    private bool decreaseSize = false;
    private bool increaseSize = false;

    //private bool bool_axelStatus = false;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Change size functions
    public void DecAxelDis_PointerDown()
    {
        decreaseDis = true;
    }

    public void IncAxelDis_PointerDown()
    {
        increaseDis = true;
    }

    public void DecreaseRobotSize_PointerDown()
    {
        decreaseSize = true;
    }

    public void IncreaseRobotSize_PointerDown()
    {
        increaseSize = true;
    }

    public void OnPointerUp()
    {
        decreaseDis = false;
        increaseDis = false;
        decreaseSize = false;
        increaseSize = false;
    }

    // Change wheel layout functions
    /*
    public void MiddleAxelToggle()
    {
        if (!bool_axelStatus)
        {
            bool_axelStatus = true;
            middleAxel.SetActive(true);
        }
        else if (bool_axelStatus)
        {
            bool_axelStatus = false;
            middleAxel.SetActive(false);
        }
    }

    public void ChangeWheels(int index)
    {
        for (int i = 0; i < 3; i++)
        {
            frontWheels[i].SetActive(false);
            backWheels[i].SetActive(false);
        }

        frontWheels[index].SetActive(true);
        backWheels[index].SetActive(true);
    }
    */

    // Changes settings
    private void FixedUpdate()
    {
        /*
        if (decreaseDis)
        {
            print("Dec wheel 2");
            if (frontAxel.transform.localPosition.y < 0.15f && backAxel.transform.localPosition.y > 0.285f)
            {
                frontAxel.transform.position = new Vector3(frontAxel.transform.position.x,
                frontAxel.transform.position.y, frontAxel.transform.position.z + 0.1f * Time.deltaTime);

                backAxel.transform.position = new Vector3(backAxel.transform.position.x,
                    backAxel.transform.position.y, backAxel.transform.position.z - 0.1f * Time.deltaTime);
            }

        }
        else if (increaseDis)
        {
            print("Inc wheel 2");
            if (frontAxel.transform.localPosition.y > 0.05f && backAxel.transform.localPosition.y < 0.385f)
            {
                frontAxel.transform.position = new Vector3(frontAxel.transform.position.x,
                    frontAxel.transform.position.y, frontAxel.transform.position.z - 0.1f * Time.deltaTime);

                backAxel.transform.position = new Vector3(backAxel.transform.position.x,
                    backAxel.transform.position.y, backAxel.transform.position.z + 0.1f * Time.deltaTime);
            }
        }
        else if (decreaseSize)
        {
            print("Dec size 2");
            if (robotBody.transform.localScale.x > 0.51f)
            {
                robotBody.transform.localScale += scaleChange * Time.deltaTime;
            }
        }
        else if (increaseSize)
        {
            print("Inc size 2");
            if (robotBody.transform.localScale.x < 0.99f)
            {
                robotBody.transform.localScale -= scaleChange * Time.deltaTime;
            }
        }
        */
    }
}
