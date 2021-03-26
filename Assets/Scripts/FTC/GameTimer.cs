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

    private string gameType = "freeplay";
    private string gameSetup = "";

    private float previousRealTime;

    private AudioManager audioManager;

    private ScoreKeeper scoreKeeper;

    // Start is called before the first frame update
    void Start()
    {
        previousRealTime = Time.realtimeSinceStartup;
        timerTextUI.text = timerText;

        audioManager = GetComponent<AudioManager>();
        scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
    }

    public void startGame()
    {
        audioManager.reset();

        startToggle = true;
        previousRealTime = Time.realtimeSinceStartup;

        if (gameType == "auto")
        {
            startTime = 30f;
            timer = 30f;
        }
        else if (gameType == "teleop" || gameType == "end")
        {
            gameType = "teleop";
            startTime = 120f;
            timer = 120f;
        }
    }

    public void stopGame()
    {
        startToggle = false;
        audioManager.playEStop();
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

    public void setGameSetup(string type)
    {
        gameSetup = type;
    }

    public string getGameSetup()
    {
        return gameSetup;
    }

    public bool getGameStarted()
    {
        return startToggle;
    }

    public float getTimer()
    {
        return timer;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (!startToggle)
        {
            timerText = "- : --";
            timerTextUI.text = timerText;
        }
        else if (gameType == "freeplay")
        {
            timer = Time.realtimeSinceStartup - previousRealTime;
            timerText = "" + (int)timer / 60 + " : " + (int)timer % 60;
            if (timer < 10)
            {
                timerText = timerText[0] + " : 0" + timerText[4];
            }
            timerTextUI.text = timerText;
        }
        else if (gameType == "auto" || gameType == "teleop" || gameType == "end")
        {
            if (gameType == "auto")
            {
                if (audioManager.playCountDown())
                {
                    scoreKeeper.setLightsGreen();
                    previousRealTime = Time.realtimeSinceStartup;
                }
                else if (audioManager.playStartAuto())
                {
                    previousRealTime = Time.realtimeSinceStartup;
                    scoreKeeper.setLightsNorm();
                }
            }

            if (gameType == "teleop")
                if (audioManager.playCountDown2())
                {
                    previousRealTime = Time.realtimeSinceStartup;
                    scoreKeeper.setLightsGreen();
                }
                else if (audioManager.playStartTeleop())
                {
                    previousRealTime = Time.realtimeSinceStartup;
                    scoreKeeper.setLightsNorm();
                }


            if (timer <= 0)
            {
                flashTimer();
                if (gameType == "end")
                    audioManager.playEndMatch();
                if (gameType == "auto")
                    audioManager.playEndAuto();
            }
            else
            {
                timer = startTime - (Time.realtimeSinceStartup - previousRealTime);
                timerText = "" + (int)timer / 60 + " : " + (int)timer % 60;
                if ((int)timer % 60 < 10)
                {
                    timerText = timerText[0] + " : 0" + timerText[4];
                }
                timerTextUI.text = timerText;
            }

            if (gameType == "teleop" && timer <= 30)
            {
                audioManager.playStartEndGame();
                gameType = "end";
            }
        }
    }
}
