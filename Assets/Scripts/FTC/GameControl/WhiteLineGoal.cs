using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WhiteLineGoal : MonoBehaviour
{
    private ScoreKeeper scoreKeeper;
    public int pointsPerGoal = 0;
    public string tagOfGameObject1 = "BlueRobot";
    public string tagOfGameObject2 = "RedRobot";

    private bool inZone = false;

    private GameTimer gameTimer;

    void Awake()
    {
        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
        gameTimer = GameObject.Find("ScoreKeeper").GetComponent<GameTimer>();
    }

    void OnTriggerEnter(Collider collision)
    {
        if ((collision.tag == tagOfGameObject1 || collision.tag == tagOfGameObject2) && inZone == false && gameTimer.getGameType() == "auto")
        {
            pointsPerGoal = 5;

            inZone = true;
            if (collision.tag == tagOfGameObject1)
                scoreKeeper.addScoreBlue(pointsPerGoal);
            else
                scoreKeeper.addScoreRed(pointsPerGoal);
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if ((collision.tag == tagOfGameObject1 || collision.tag == tagOfGameObject2) && inZone == false && gameTimer.getGameType() == "auto")
        {
            pointsPerGoal = 5;

            inZone = false;
            if (collision.tag == tagOfGameObject1)
                scoreKeeper.addScoreBlue(-pointsPerGoal);
            else
                scoreKeeper.addScoreRed(-pointsPerGoal);
        }
    }
}
