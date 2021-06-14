using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BasicMenu : MonoBehaviour
{

    public void ChangeToScene(int sceneIndex)
    {
        Debug.Log("Test");
        SceneManager.LoadScene(sceneIndex);
    }

    public void changeSinglePlayer()
    {
        SceneManager.LoadScene(3);
    }
}
