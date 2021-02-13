using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RingSound : MonoBehaviour
{
    private AudioManager audioManager;
    void Start()
    {
        audioManager = GameObject.Find("ScoreKeeper").GetComponent<AudioManager>();
    }

    void OnCollisionEnter(Collision collision)
    {
        audioManager.playRingImpact();   
    }
}
