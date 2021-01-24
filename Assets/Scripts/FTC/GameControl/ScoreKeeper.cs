using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreKeeper : MonoBehaviour
{
    public Text redScoreText;
    public Text blueScoreText;

    private int redScore = 0;
    private int blueScore = 0;

    public void addScoreRed(int points)
    {
        redScore += points;
        updateRedScore();
    }

    public void addScoreBlue(int points)
    {
        blueScore += points;
        updateBlueScore();
    }

    public int getScoreRed()
    {
        return redScore;
    }

    public int getScoreBlue()
    {
        return blueScore;
    }

    void updateRedScore()
    {
        redScoreText.text = "" + redScore;
    }

    void updateBlueScore()
    {
        blueScoreText.text = "" + blueScore;
    }

    public void resetScore()
    {
        redScore = 0;
        blueScore = 0;
        updateRedScore();
        updateBlueScore();
    }
}
