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

    private bool freeze = false;

    public Light[] lights;

    public void addScoreRed(int points)
    {
        if (!freeze)
            redScore += points;
        updateRedScore();
        if (redScore > blueScore)
            setLightsRed();
        else if (blueScore > redScore)
            setLightsBlue();
        else
            setLightsNorm();
    }

    public void addScoreBlue(int points)
    {
        if (!freeze)
            blueScore += points;
        updateBlueScore();
        if (redScore > blueScore)
            setLightsRed();
        else if (blueScore > redScore)
            setLightsBlue();
        else
            setLightsNorm();
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
        freeze = false;
        redScore = 0;
        blueScore = 0;
        updateRedScore();
        updateBlueScore();

        setLightsNorm();
    }

    public void freezeScore()
    {
        freeze = true;
    }

    public void setLightsNorm()
    {
        /*
        Color myColor = new Color();
        var color = "#846032";
        ColorUtility.TryParseHtmlString(color, out myColor);
        for (int x = 0; x < lights.Length; x++)
        {
            lights[x].color = myColor;
        }
        */
    }

    public void setLightsBlue()
    {
        /*
        Color myColor = new Color();
        var color = "#323E84";
        ColorUtility.TryParseHtmlString(color, out myColor);
        for (int x = 0; x < lights.Length; x++)
        {
            lights[x].color = myColor;
        }
        */
    }

    public void setLightsRed()
    {
        /*
        Color myColor = new Color();
        var color = "#A93C4E";
        ColorUtility.TryParseHtmlString(color, out myColor);
        for (int x = 0; x < lights.Length; x++)
        {
            lights[x].color = myColor;
        }
        */
    }

    public void setLightsGreen()
    {
        /*
        Color myColor = new Color();
        var color = "#41A83C";
        ColorUtility.TryParseHtmlString(color, out myColor);
        for (int x = 0; x < lights.Length; x++)
        {
            lights[x].color = myColor;
        }
        */
    }
}
