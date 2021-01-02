using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RedGoal : MonoBehaviour
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
            scoreKeeper.addScoreRed(pointsPerGoal);
            Destroy(collision.collider.gameObject);
        }
    }
}
