﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueGoal : MonoBehaviour
{
    private ScoreKeeper scoreKeeper;
    public int pointsPerGoal = 0;
    public string tagOfGameObject = "Ring";

    void Awake()
    {
        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.tag == tagOfGameObject)
        {
            scoreKeeper.addScoreBlue(pointsPerGoal);
            Destroy(collision.collider.gameObject);
        }
    }
}