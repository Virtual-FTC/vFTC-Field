using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.UI;
using UnityEngine.Events;

public class NetworkManager : MonoBehaviourPunCallbacks
{
    private string playerName;

    // Join Field
    public GameObject[] objList;
    private List<RoomInfo> rooms;

    // Create Field
    private string fieldName;
    private int maxPlayers = 1;

    // Start is called before the first frame update
    void Start()
    {
        //DontDestroyOnLoad(this.gameObject);
        if (!PhotonNetwork.IsConnected)
       {
            PhotonNetwork.AutomaticallySyncScene = true;
            PhotonNetwork.ConnectUsingSettings();
       }
    }

    // Callbacks
    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to the master!");
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        Debug.Log("Connected to lobby");
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        Debug.Log("Got new room List");
        rooms = roomList;
        for (int i = 0; i < objList.Length; i++)
        {
            objList[i].SetActive(false);
        }
        if (roomList.Count > 0)
        {
            for (int i = 0; i < roomList.Count; ++i)
            {
                RoomInfo room = roomList[i];
                GameObject gam = objList[i];

                gam.GetComponentInChildren<Text>().text = room.Name;
                gam.SetActive(true);
            }
        }
    }

    /*
    // Photon Methods
    public override void OnConnected()
    {
        // 1
        base.OnConnected();
        // 2
        connectionStatus.text = "Connected to Photon!";
        connectionStatus.color = Color.green;
        roomJoinUI.SetActive(true);
        buttonLoadArena.SetActive(false);
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        // 3
        isConnecting = false;
        controlPanel.SetActive(true);
        Debug.LogError("Disconnected. Please check your Internet connection.");
    }

    public override void OnJoinedRoom()
    {
        // 4
        if (PhotonNetwork.IsMasterClient)
        {
            buttonLoadArena.SetActive(true);
            buttonJoinRoom.SetActive(false);
            playerStatus.text = "You are Lobby Leader";
        }
        else
        {
            playerStatus.text = "Connected to Lobby";
        }
    }

    */

    // Setting var
    public void setPlayerName(string name)
    {
        playerName = name;
    }

    public void setFieldName(string name)
    {
        fieldName = name;
    }

    public void setMaxPlayers(int num)
    {
        maxPlayers += num;
        if (maxPlayers > 4)
            maxPlayers = 1;
        else if (maxPlayers < 1)
            maxPlayers = 4;
        Debug.Log(maxPlayers);
    }

    public void CreateRoom()
    {
        if (PhotonNetwork.IsConnected)
        {
            PhotonNetwork.LocalPlayer.NickName = playerName; //1
            Debug.Log(PhotonNetwork.LocalPlayer.NickName);
            PhotonNetwork.CreateRoom(fieldName, new RoomOptions() { MaxPlayers = (byte)maxPlayers }, null); //4
        }
    }

    public void JoinRoom(int index)
    {
        if (PhotonNetwork.IsConnected)
        {
            PhotonNetwork.LocalPlayer.NickName = playerName; //1
            PhotonNetwork.JoinRoom(rooms[index].Name);
            Debug.Log("Trying to join room");
        }
    }

    private void Update()
    {
        if (!PhotonNetwork.IsConnected)
        {
            PhotonNetwork.AutomaticallySyncScene = true;
            PhotonNetwork.ConnectUsingSettings();
        }
    }

    public void ChangeScene(int sceneInx)
    {
        PhotonNetwork.LoadLevel(sceneInx);
    }
}
