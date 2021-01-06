using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameTimer : MonoBehaviour
{
    public Text timerTextUI;

    private float timer = 0f;
    private string timerText = "- : --";

    private float startTime = 0f;

    private bool startToggle = false;

    private string gameType = "Freeplay";

    private float previousRealTime;

    // Start is called before the first frame update
    void Start()
    {
        previousRealTime = Time.realtimeSinceStartup;
        timerTextUI.text = timerText;
    }

    public void startGame()
    {
        startToggle = true;
        previousRealTime = Time.realtimeSinceStartup;

        if (gameType == "Auto")
        {
            startTime = 30f;
            timer = 30f;
        }
        else if (gameType == "Teleop")
        {
            startTime = 120f;
            timer = 120f;
        }
    }

    public void stopGame()
    {
        startToggle = false;
    }

    private void flashTimer()
    {
        if (Time.realtimeSinceStartup - previousRealTime < 0.5)
        {
            timerText = "0 : 00";
            timerTextUI.text = timerText;
        }
        else if (Time.realtimeSinceStartup - previousRealTime > 0.5 && Time.realtimeSinceStartup - previousRealTime < 1)
        {
            timerText = " :   ";
            timerTextUI.text = timerText;
        }
        else
        {
            previousRealTime = Time.realtimeSinceStartup;
        }
    }

    public void setGameType(string type)
    {
        gameType = type;
    }

    public string getGameType()
    {
        return gameType;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (!startToggle)
        {
            timerText = "- : --";
            timerTextUI.text = timerText;
        }
        else if (gameType == "Freeplay")
        {
            timer = Time.realtimeSinceStartup - previousRealTime;
            timerText = "" + (int)timer / 60 + " : " + (int)timer % 60;
            if (timer < 10)
            {
                timerText = timerText[0] + " : 0" + timerText[4];
            }
            timerTextUI.text = timerText;
        }
        else if (gameType == "Auto" || gameType == "Teleop")
        {
            if (timer <= 0)
            {
                flashTimer();
            }
            else
            {
                timer = startTime - (Time.realtimeSinceStartup - previousRealTime);
                timerText = "" + (int)timer / 60 + " : " + (int)timer % 60;
                if (timer < 10)
                {
                    timerText = timerText[0] + " : 0" + timerText[4];
                }
                timerTextUI.text = timerText;
            }
        }
    }
}