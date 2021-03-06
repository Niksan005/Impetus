﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.Networking;
using Mirror;
public class MoveByMouse : MonoBehaviour
{
    MouseInput mouseInput;
    [SerializeReference] private float movementSpeed;
    public Vector3 destination;

    private void Awake()
    {
        mouseInput = new MouseInput();
    }
    private void OnEnable()
    {
        mouseInput.Enable();
    }
    private void OnDisable()
    {
        mouseInput.Disable();
    }
    void Start()
    {
        destination = transform.position;
        mouseInput.Mouse.MouseClickRight.performed += _ => MouseClickRight();
    }
    void FixedUpdate()
    {
        //if (Vector3.Distance(transform.position, destination) > 0.1f)
        //{
        //    transform.position = Vector3.MoveTowards(transform.position, destination, movementSpeed * Time.deltaTime);
        //}
    }
    private void MouseClickRight()
    {
        Vector2 mousePosition = mouseInput.Mouse.MousePosition.ReadValue<Vector2>();
        mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
        destination = mousePosition;
        SendInputToServer(destination);
    }
    private void SendInputToServer(Vector3 destination)
    {
        ClientSend.PlayerMovement(destination);
    }
}
