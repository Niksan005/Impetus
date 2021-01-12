using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    private Vector2 velocity;
    private Vector3 direction;
    private bool hasMoved;

    private void FixedUpdate()
    {
        if (velocity.x == 0)
        {
            hasMoved = false;
        }
        else if (velocity.x != 0 && !hasMoved)
        {
            hasMoved = true;
            MoveByDirection();
        }

        velocity = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
    }

    private void MoveByDirection()
    {
        if(velocity.x < 0)//west
        {
            if (velocity.y > 0)
            {
                direction = new Vector3(-0.5f, 0.5f);//go NorthWest
            }
            else if (velocity.y < 0)
            {
                direction = new Vector3(-0.5f, -0.5f);//go SouthWest
            }
            else
            {
                direction = new Vector3(-1, 0);//go West
            }
        }
        else if (velocity.x > 0)//east
        {
            if (velocity.y > 0)
            {
                direction = new Vector3(0.5f, 0.5f);//go NorthEast
            }
            else if (velocity.y < 0)
            {
                direction = new Vector3(0.5f, -0.5f);//go SoutEast
            }
            else
            {
                direction = new Vector3(1, 0);//go East
            }
        }

        transform.position += direction;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        transform.position -= direction;
    }
}
