using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bullet2 : MonoBehaviour
{
  //  public GameObject impactoDoLaserDoInimigo;

    public float velocidadeDoLaser;
    public int danoParaDar;
  
   void Start()
    {
       
  Destroy(this.gameObject, 24f);
        
    }
    
    void Update()
    {
       // Destroy(this.gameObject, 5f);
        MovimentarLaser();
    }


    
    // void Update()
    // {
    //     Destroy(this.gameObject, 0.92f);
    //     MovimentarLaser();
    // }

    private void MovimentarLaser()
    {
        transform.Translate(Vector3.up * velocidadeDoLaser * Time.deltaTime);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
      
      if(other.gameObject.CompareTag("enemyBoss"))
        {
          Destroy(this.gameObject, 0.1f);
        }
        if(other.gameObject.CompareTag("Player"))
        {
            other.GetComponent<playy>().Hiit();
            other.gameObject.GetComponent<vidaDoJogador>().MachucarJogador(danoParaDar);
            Destroy(this.gameObject);

          //  Instantiate(bulleteenemy0, transform.position, transform.rotation);

          
        }
        else if (other.gameObject.CompareTag("escudo"))
        {
        //  other.gameObject.GetComponent<vidaDoEscudo>().MachucarJogador(danoParaDar);
           Destroy(this.gameObject);
        
            
        }
    }
    
    
    
}
