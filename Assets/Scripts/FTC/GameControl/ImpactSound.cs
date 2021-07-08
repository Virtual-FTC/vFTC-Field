using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ImpactSound : MonoBehaviour
{
    private AudioManager audioManager;

    private float timer = 0;

    void Start()
    {
        audioManager = GameObject.Find("ScoreKeeper").GetComponent<AudioManager>();
    }

    void OnCollisionEnter(Collision collision)
    {
        if(audioManager != null) {
            audioManager.playRingImpact();   
        }

        if (collision.gameObject.tag == "1" || collision.gameObject.tag == "2" || collision.gameObject.tag == "3" || collision.gameObject.tag == "4")
        {
            timer = Time.realtimeSinceStartup;
        }
    }

    void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.tag == "1" || collision.gameObject.tag == "2" || collision.gameObject.tag == "3" || collision.gameObject.tag == "4")
        {
            if (Time.realtimeSinceStartup-timer >= 5.0)
            {
                Destroy(gameObject);
            }
        }
    }

    [PunRPC]
    public void DestroyRing()
    {
        PhotonNetwork.Destroy(this.gameObject);
    }
}
