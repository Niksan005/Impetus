using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class HealthBar : NetworkBehaviour
{
    public Slider hpSlider;

    public void SetMaxHealth(int health)
    {
        hpSlider.maxValue = health;
        hpSlider.value = health;
    }
    public void SetHealth(int health)
    {
        hpSlider.value = health;
    }
}
