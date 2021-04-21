using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClientSend : MonoBehaviour
{
    private static void SendTCPData(Packet packet)
    {
        packet.WriteLength();
        Client.instance.tcp.SendData(packet);
    }

    private static void SendUDPData(Packet packet)
    {
        packet.WriteLength();
        Client.instance.udp.SendData(packet);
    }

    #region Packets
    public static void WelcomeReceived()
    {
        using (Packet packet = new Packet((int)ClientPackets.welcomeReceived))
        {
            packet.Write(Client.instance.myId);
            packet.Write(UIManager.instance.usernameField.text);
            packet.Write(UIManager.instance.passwordField.text);

            SendTCPData(packet);
        }
    }

    public static void PlayerMovement(Vector3 destination)
    {
        using (Packet packet = new Packet((int)ClientPackets.playerMovement))
        {
            packet.Write(destination);
            packet.Write(GameManager.players[Client.instance.myId].transform.rotation);

            SendUDPData(packet);
        }
    }

    public static void PlayerHit(Vector3 hitPosition, int damage)
    {
        using (Packet packet = new Packet((int)ClientPackets.playerHit))
        {
            packet.Write(hitPosition);
            packet.Write(damage);

            SendUDPData(packet);
        }
    }
    #endregion
}
