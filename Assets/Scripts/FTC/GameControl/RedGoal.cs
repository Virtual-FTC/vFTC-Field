using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedGoal : MonoBehaviour
{
    private ScoreKeeper scoreKeeper;
    public int pointsPerGoal = 0;
    public string tagOfGameObject = "Ring";

    public string goalType = "";

    private GameTimer gameTimer;

    void Awake()
    {
        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
        gameTimer = GetComponent<GameTimer>();
    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.tag == tagOfGameObject)
        {
            if (goalType == "low")
            {
                pointsPerGoal = 2;
                if (gameTimer.getGameType() == "auto")
                    pointsPerGoal = 3;
            }
            if (goalType == "mid")
            {
                pointsPerGoal = 4;
                if (gameTimer.getGameType() == "auto")
                    pointsPerGoal = 6;
            }
            if (goalType == "high")
            {
                pointsPerGoal = 6;
                if (gameTimer.getGameType() == "auto")
                    pointsPerGoal = 12;
            }
            if (goalType == "power")
            {
                pointsPerGoal = 0;
                if (gameTimer.getGameType() == "auto" || gameTimer.getGameType() == "end")
                    pointsPerGoal = 15;
            }
            scoreKeeper.addScoreRed(pointsPerGoal);
            Destroy(collision.gameObject.transform.parent.gameObject);
        }
    }
}
