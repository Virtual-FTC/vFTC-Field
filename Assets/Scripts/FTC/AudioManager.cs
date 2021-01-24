using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    public AudioSource startSound;
    public AudioSource endSound;

    private bool playedStartSound = false;
    private bool playedEndSound = false;

    public void playStartSound()
    {
        if (!playedStartSound)
        {
            startSound.Play();
            playedStartSound = true;
        }
    }

    public void playEndSound()
    {
        if (!playedEndSound)
        {
            endSound.Play();
            playedEndSound = true;
        }
    }

    public void reset()
    {
        playedStartSound = false;
        playedEndSound = false;
    }
}
