using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destruirtiroinimigo : MonoBehaviour

{
 void OnTriggerEnter2D(Collider2D other)
     {
        if(other.gameObject.CompareTag("tiroinimigo" ))
        {
            Destroy(other.gameObject);
        }
       
        
    }
}