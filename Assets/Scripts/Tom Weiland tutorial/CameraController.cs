using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public PlayerManager player;

    private void Start()
    {
        Camera.main.transform.position = this.transform.position;
        this.transform.position = new Vector3(player.transform.position.x, player.transform.position.y, -10);
    }
    private void Update()
    {
        Camera.main.transform.position = this.transform.position;
        this.transform.position = new Vector3(player.transform.position.x, player.transform.position.y, -10);
    }
}
