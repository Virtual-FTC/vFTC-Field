using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraPosition : MonoBehaviour
{
    public Transform[] cameraPositions;

    void Awake()
    {
        switchCamera(0);
    }

    public void switchCamera(int index)
    {
        if (index < cameraPositions.Length)
        {
            transform.position = cameraPositions[index].position;
            transform.rotation = cameraPositions[index].rotation;
        }
    }
}
