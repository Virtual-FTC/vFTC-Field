using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MultiplayerSetting : MonoBehaviour
{
    public static MultiplayerSetting multiplayerSetting;

    public bool delayStart;

    public int mutliplayerScene;

    public string[] gameTypeOptions;
    public string[] fieldSetupOptions;
    public int[] camSetupOptions;

    // Game Settings
    private string gameType;
    private int gameTypeInd;
    private string fieldSetup;
    private int fieldSetupInd;
    private int camSetup;

    public GameObject[] spawnPositions;
    private GameObject[] currentSpawnPositions = new GameObject[4];

    // Start is called before the first frame update
    void Awake()
    {
        if(MultiplayerSetting.multiplayerSetting == null)
        {
            MultiplayerSetting.multiplayerSetting = this;
        }
        else
        {
            if(MultiplayerSetting.multiplayerSetting != this)
            {
                Destroy(this.gameObject);
            }
        }
        DontDestroyOnLoad(this.gameObject);
    }

    public void setGameTypeLeft()
    {
        gameTypeInd--;
        if (gameTypeInd < 0)
        {
            gameTypeInd = gameTypeOptions.Length - 1;
        }
        else if(gameTypeInd > gameTypeOptions.Length - 1)
        {
            gameTypeInd = 0;
        }
        gameType = gameTypeOptions[gameTypeInd];
        Debug.Log(gameType);
    }

    public void setGameTypeRight()
    {
        gameTypeInd++;
        if (gameTypeInd < 0)
        {
            gameTypeInd = gameTypeOptions.Length - 1;
        }
        else if (gameTypeInd > gameTypeOptions.Length - 1)
        {
            gameTypeInd = 0;
        }
        gameType = gameTypeOptions[gameTypeInd];
        Debug.Log(gameType);
    }

    public void setFieldSetupLeft()
    {
        fieldSetupInd--;
        if (fieldSetupInd < 0)
        {
            fieldSetupInd = fieldSetupOptions.Length - 1;
        }
        else if (fieldSetupInd > fieldSetupOptions.Length - 1)
        {
            fieldSetupInd = 0;
        }
        fieldSetup = fieldSetupOptions[fieldSetupInd];
        Debug.Log(fieldSetup);
    }

    public void setFieldSetupRight()
    {
        fieldSetupInd++;
        if (fieldSetupInd < 0)
        {
            fieldSetupInd = fieldSetupOptions.Length - 1;
        }
        else if (fieldSetupInd > fieldSetupOptions.Length - 1)
        {
            fieldSetupInd = 0;
        }
        fieldSetup = fieldSetupOptions[fieldSetupInd];
        Debug.Log(fieldSetup);
    }

    public void setCamSetupLeft()
    {
        camSetup--;
        if (camSetup < 0)
        {
            camSetup = camSetupOptions.Length - 1;
        }
        else if (camSetup > camSetupOptions.Length - 1)
        {
            camSetup = 0;
        }
        Debug.Log(camSetup);
    }

    public void setCamSetupRight()
    {
        camSetup++;
        if (camSetup < 0)
        {
            camSetup = camSetupOptions.Length - 1;
        }
        else if (camSetup > camSetupOptions.Length - 1)
        {
            camSetup = 0;
        }
        Debug.Log(camSetup);
    }

    public void resetSettings()
    {
        camSetup = 0;
        gameType = gameTypeOptions[0];
        gameTypeInd = 0;
        fieldSetupInd = 0;
        fieldSetup = fieldSetupOptions[0];
    }

    // Get Settings
    public string getGameType()
    {
        return gameType;
    }

    public string getFieldSetup()
    {
        return fieldSetup;
    }

    public int getCamSetup()
    {
        return camSetup;
    }

    public void setSpawnPositions(int indexInUse, int oldIndex)
    {
        if (oldIndex == -1)
        {

        }
        else
        {
            currentSpawnPositions[oldIndex] = null;
        }
        currentSpawnPositions[indexInUse] = spawnPositions[indexInUse];
    }
}
