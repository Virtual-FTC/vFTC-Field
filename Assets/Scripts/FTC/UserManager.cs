using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserManager : MonoBehaviour
{
    public GameObject[] m_Robots = null;

    private int m_index = 0;

    private void Start()
    {

    }

    #region ROBOT_SELECTION

    public void OnRightButtonClick()
    {
        m_index += 1;

        if (m_index < m_Robots.Length)
        {
            m_Robots[m_index - 1].SetActive(false);
            m_Robots[m_index].SetActive(true);
        }
        else
        {
            m_index = m_Robots.Length - 1;
        }
    }
    public void OnLeftButtonClick()
    {
        m_index -= 1;

        if (m_index > -1)
        {
            m_Robots[m_index + 1].SetActive(false);
            m_Robots[m_index].SetActive(true);
        }
        else
        {
            m_index = 0;
        }
    }
    #endregion

    void Awake()
    {

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        
    }
}
