using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Server : MonoBehaviour
{
    // CONST
    private const int MAX_CONNECTIONS = 100;
    private const string SEVER_IP = "127.0.0.1";
    private const int SERVER_PORT = 26950;
    private const int SERVER_WEB_PORT = 26951;
    private const int BUFFER_SIZE = 1024;

    // Channels
    private int reliableChannelId;      //Slower, more secure. More strain on server
    private int unreliableChannelId;    //Faster, less secure

    // Host
    private int hostId;
    private int webHostId;

    // Logic
    private bool isInit = false;
    private byte[] buffer = new byte[BUFFER_SIZE];

    private void Start()
    {
        GlobalConfig config = new GlobalConfig();
        NetworkTransport.Init(config);

        // Host Topology
        ConnectionConfig cc = new ConnectionConfig();
        reliableChannelId = cc.AddChannel(QosType.Reliable);
        unreliableChannelId = cc.AddChannel(QosType.Unreliable);
        HostTopology topo = new HostTopology(cc, MAX_CONNECTIONS);

        // Adding hosts
        hostId = NetworkTransport.AddHost(topo, SERVER_PORT);
        webHostId = NetworkTransport.AddHost(topo, SERVER_WEB_PORT);

        isInit = true;
    }

    private void Update()
    {
        if (!isInit)
        {
            return;
        }

        int outHostId, outConnectionId, outChannelId, receivedSize;
        byte error;

        NetworkEventType e = NetworkTransport.Receive(out outHostId, out outConnectionId, out outConnectionId, buffer, buffer.Length, out receivedSize, out error);

        if (e == NetworkEventType.Nothing)
        {
            // No message
            return;
        }

        switch (e)
        {
            case NetworkEventType.DataEvent:
                break;
            case NetworkEventType.ConnectEvent:
                break;
            case NetworkEventType.DisconnectEvent:
                break;
            case NetworkEventType.Nothing:
                break;
            case NetworkEventType.BroadcastEvent:
                break;
            default:
                break;
        }
    }
}
