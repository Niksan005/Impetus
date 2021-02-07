using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using System;
using UnityEngine.Tilemaps;
using System.Linq;

public class PlayerSoZ : NetworkBehaviour
{
    public float damageRadius = 1.5f;
    public int maxHealth = 100;
    [SyncVar]
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

    // Start is called before the first frame update
    void Start()
    {
        currentHealth = maxHealth;
        healthBar.SetMaxHealth(maxHealth);
    }
    public override void OnStartLocalPlayer()
    {
        Camera.main.GetComponent<CameraFollow>().setTarget(gameObject.transform);
    }

    // Update is called once per frame
    void Update()
    {
        healthBar.SetHealth(currentHealth);
    }
    public void TakeDamage(int damage)
    {
        if (isServer)
            RpcTakeDamage(damage);
        else
            CmdTakeDamage(damage);
    }
    [Command(ignoreAuthority = true)]
    public void CmdTakeDamage(int damage)
    {
        RpcTakeDamage(damage);
    }
    [ClientRpc]
    private void RpcTakeDamage(int damage)
    {
        //if (this.isServer)
        //{
            this.currentHealth -= damage;
            healthBar.SetHealth(currentHealth);
            if (this.currentHealth <= 0)
            {
                Destroy(this.gameObject);
            }
        //}
    }
    private void DoDamage(int damage)
    {
        if (this.isLocalPlayer)
        {
            Vector2 mousePosition = mouseInput.Mouse.MousePosition.ReadValue<Vector2>();
            mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
            Vector2 playerPosition = this.transform.position;

            if (Vector2.Distance(playerPosition, mousePosition) <= damageRadius)
            {
                //this.TakeDamage(damage);
                RaycastHit2D[] hitColliders = Physics2D.CircleCastAll(mousePosition, damageRadius, mousePosition);
                foreach (var hitCollider in hitColliders.Where(x => x.transform.position != new Vector3(0, 0, 0) && x.transform.position != this.transform.position))
                {
                    Debug.Log(hitCollider.transform.position);
                    Debug.Log(hitCollider.collider.tag);
                    if (hitCollider.collider.tag == this.tag)
                    {
                        enemy = hitCollider.collider.GetComponent<PlayerSoZ>();
                        Debug.Log(enemy.tag);
                        enemy.TakeDamage(20);
                    }
                }
            }
        }
    }
}
