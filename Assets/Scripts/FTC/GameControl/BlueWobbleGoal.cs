using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlueWobbleGoal : MonoBehaviour
{
    private ScoreKeeper scoreKeeper;
    public int pointsPerGoal = 0;
    public string tagOfGameObject = "Wobble";
    private bool inZone = false;

    void Awake()
    {
        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.tag == tagOfGameObject && inZone == false)
        {
            inZone = true;
            scoreKeeper.addScoreBlue(pointsPerGoal);
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (collision.tag == tagOfGameObject && inZone == true)
        {
            inZone = false;
            scoreKeeper.addScoreBlue(-pointsPerGoal);
        }
    }
}
