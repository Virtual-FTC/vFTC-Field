using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class JoinCreateField : MonoBehaviour
{
    public GameObject joinField;
    public GameObject createField;

    public void switchUI()
    {
        if (joinField.activeSelf)
        {
            joinField.SetActive(false);
            createField.SetActive(true);
        }
        else if (createField.activeSelf)
        {
            joinField.SetActive(true);
            createField.SetActive(false);
        }
    }
}
