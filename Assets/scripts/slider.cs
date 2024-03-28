using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class slider : MonoBehaviour
{
   public Image lifebar;
   public Image redBar;
   public int maxHealth = 10;
   int currentHealth;
    
    void Start()
    {
      currentHealth = maxHealth;  
    }
    

    // Update is called once per frame
    void Update()
    {
    
    }
}
