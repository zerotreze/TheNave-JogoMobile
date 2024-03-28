using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class desativadorlaser : MonoBehaviour
{
 void OnTriggerEnter2D(Collider2D other)
     {
        if(other.gameObject.CompareTag("mainProjetil"))
        {
            Destroy(other.gameObject);
        }
       
        
    }
}
