using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class escudo : MonoBehaviour
{
    public int danoParaDar;
    void OnCollisionEnter2D(Collision2D other)
    {
        if(other.gameObject.CompareTag("enemy0"))
        {
            other.gameObject.GetComponent<enemyyy>().MachucarInimigo(danoParaDar);
           
           // Destroy(this.gameObject);

            
        }
        
        
    }
}
