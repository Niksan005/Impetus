using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using System;
using UnityEngine.Tilemaps;

public class PlayerSoZ : NetworkBehaviour
{
    public int maxHealth = 100;
    public int currentHealth;
    public HealthBar healthBar;
    public MouseInput mouseInput;

    private void Awake()
    {
        mouseInput = new MouseInput();
        mouseInput.Mouse.MouseClickLeft.performed += ctx => TakeDamage(20);
    }
    private void OnEnable()
    {
        mouseInput.Enable();
    }
    private void OnDisable()
    {
        mouseInput.Disable();
    }

    // Start is called before the first frame update
    void Start()
    {
        currentHealth = maxHealth;
        healthBar.SetMaxHealth(maxHealth);
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void TakeDamage(int damage)
    {
        if (this.isLocalPlayer)
        {
        this.currentHealth -= damage;
        healthBar.SetHealth(currentHealth);
        }
    }
}
