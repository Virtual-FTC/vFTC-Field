﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueWobbleGoal : MonoBehaviour
{
    private ScoreKeeper scoreKeeper;
    public int pointsPerGoal = 0;
    public string tagOfGameObject = "BlueWobble";

    public string goalType = "A";

    private bool inZone = false;

    private GameTimer gameTimer;

    void Awake()
    {
        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
        gameTimer = GameObject.Find("ScoreKeeper").GetComponent<GameTimer>();
    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.tag == tagOfGameObject && inZone == false)
        {
            if (gameTimer.getGameSetup() == goalType && gameTimer.getGameType() == "auto")
                pointsPerGoal = 15;
            else if (goalType == "line" && gameTimer.getGameType() == "end")
                pointsPerGoal = 5;
            else if (goalType == "drop" && gameTimer.getGameType() == "end")
                pointsPerGoal = 20;
            else
                pointsPerGoal = 0;

            inZone = true;
            scoreKeeper.addScoreBlue(pointsPerGoal);
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (collision.tag == tagOfGameObject && inZone == true)
        {
            if (gameTimer.getGameSetup() == goalType && gameTimer.getGameType() == "auto")
                pointsPerGoal = 15;
            else if (goalType == "line" && gameTimer.getGameType() == "end")
                pointsPerGoal = 5;
            else if (goalType == "drop" && gameTimer.getGameType() == "end")
                pointsPerGoal = 20;
            else
                pointsPerGoal = 0;
            inZone = false;
            scoreKeeper.addScoreBlue(-pointsPerGoal);
        }
    }
}
