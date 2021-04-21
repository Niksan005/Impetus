using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.Tilemaps;
using System.Linq;

public class PlayerSoZ : MonoBehaviour
{
    public float damageRadius = 1.5f;
    public int maxHealth = 100;

    public int currentHealth;
    public HealthBar healthBar;
    public MouseInput mouseInput;
    private PlayerSoZ enemy;

    private void Awake()
    {
        mouseInput = new MouseInput();
        mouseInput.Mouse.MouseClickLeft.performed += ctx => DoDamage(20);
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
        currentHealth = maxHealth;
        healthBar.SetMaxHealth(maxHealth);
    }

    void Update()
    {
        healthBar.SetHealth(currentHealth);
    }
    private void TakeDamage(int damage)
    {
        this.currentHealth -= damage;
        healthBar.SetHealth(currentHealth);
        if (this.currentHealth <= 0)
        {
            //Destroy(this.gameObject);
        }
    }
    private void DoDamage(int damage)
    {
        Vector2 mousePosition = mouseInput.Mouse.MousePosition.ReadValue<Vector2>();
        mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
        Vector2 playerPosition = this.transform.position;

        //if (Vector2.Distance(playerPosition, mousePosition) <= damageRadius)
        //{
        //    //this.TakeDamage(damage);
        //    RaycastHit2D[] hitColliders = Physics2D.CircleCastAll(mousePosition, damageRadius, mousePosition);
        //    foreach (var hitCollider in hitColliders.Where(x => x.transform.position != new Vector3(0, 0, 0) && x.transform.position != this.transform.position))
        //    {
        //        Debug.Log(hitCollider.transform.position);
        //        Debug.Log(hitCollider.collider.name);
        //        if (hitCollider.collider.name == "NonLocalPlayer(Clone)")
        //        {
        //            enemy = hitCollider.collider.GetComponent<PlayerSoZ>();
        //            enemy.TakeDamage(20);
        //            Debug.Log($"I hit a {enemy.name}!");
        //        }
        //    }
        //}
        if (Vector2.Distance(playerPosition, mousePosition) <= damageRadius)
        {
            SendHitToServer(mousePosition, damage);
        }
    }

    private void SendHitToServer(Vector2 mousePosition, int damage)
    {
        ClientSend.PlayerHit(mousePosition, damage);
    }
}
