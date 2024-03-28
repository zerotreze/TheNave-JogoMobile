using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserduploColetavel : MonoBehaviour
{
  public float speed;
    public bool itemDeLaserDuplo;
    public GameObject otherGameobject;
    // Start is called before the first frame update
    void Start()
    {
        Destroy(otherGameobject, 3.5f);
    }
    void FixedUpdate()
    {
      
       Vector3 newPos = transform.position;
       newPos.y = newPos.y + speed;
       transform.position = newPos;
    }

    void OnTriggerEnter2D(Collider2D other) 
    {
      if(other.gameObject.CompareTag("Player"))  
      {
         
        if(itemDeLaserDuplo == true)
        {
            other.gameObject.GetComponent<playy>().temLaserDuplo = false;
            other.gameObject.GetComponent<playy>().tempoAtualDosLasersDuplos = other.gameObject.GetComponent<playy>().tempoMaximoDosLasesDuplos;
            other.gameObject.GetComponent<playy>().temLaserDuplo = true;
            Destroy(this.gameObject);
            
        }
      }
    }
}
