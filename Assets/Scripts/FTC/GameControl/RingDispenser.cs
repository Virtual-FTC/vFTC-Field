using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;

public class RingDispenser : MonoBehaviour
{
    private GameObject[] gos;
    private bool lastSpawn = false;
    public Transform leftPos;
    public Transform rightPos;
    public GameObject prefab;
    public float shotForceMult = 0.5f;

    public GameObject timer;
    private GameTimer gameTimer;

    private float previousRealTime;
    public int timeBetween = 3;

    public int totalRings = 10;

    // Start is called before the first frame update
    void Start()
    {
        gameTimer = timer.GetComponent<GameTimer>();
        previousRealTime = Time.realtimeSinceStartup;
    }

    public void spawn(Transform pos)
    {
        Random rnd = new Random();
        int index = rnd.Next(0,11);

        Random rnd1 = new Random();
        int index1 = rnd1.Next(10, 35);

        if (index < 5)
        {
            index1 = -index1;
        }

        GameObject ring = (GameObject)Instantiate(prefab, pos.position, Quaternion.Euler(0f,index1,90f));
        var rigid = ring.GetComponent<Rigidbody>();

        rigid.AddForce((Vector3.forward) * (shotForceMult + (index/6f)), ForceMode.Impulse);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        gos = GameObject.FindGameObjectsWithTag("Ring");
        if (gameTimer.getGameType() != "auto" && gameTimer.getGameStarted())
        {
            if (Time.realtimeSinceStartup - previousRealTime > timeBetween)
            {
                previousRealTime = Time.realtimeSinceStartup;
                if (gos.Length < totalRings)
                {
                    if (lastSpawn)
                    {
                        lastSpawn = false;
                        spawn(leftPos);
                    }
                    else if (!lastSpawn)
                    {
                        lastSpawn = true;
                        spawn(rightPos);
                    }
                }
            }
        }
        foreach (GameObject a in gos)
        {
            if (a.transform.position.y < -5)
            {
                Destroy(a);
            }
        }
    }
}
