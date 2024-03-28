using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projetil : MonoBehaviour
{
   // public bool itemlaser;
  //  public GameObject Manager;
    public GameObject ImpactoDOLaserDoJogador;
    public ParticleSystem explodePrefab;
    public GameObject explode;
    public Rigidbody2D rigidbody;
    public float velocidadeY;
    public int danoParaDar;
    void Start()
    {
        
        this.rigidbody.velocity = new Vector2(0, this.velocidadeY);
        Destroy(gameObject, 0.44f);
     }
     private void OnTriggerEnter2D(Collider2D other)
     {
        if(other.gameObject.CompareTag("enemyBoss"))
        {
             other.gameObject.GetComponent<spawnboss>().MachucarBoss(danoParaDar);
               Destroy(this.gameObject);
        }


         if(other.gameObject.CompareTag("enemy0"))
        {
         
       
            
            other.gameObject.GetComponent<enemyyy>().MachucarInimigo(danoParaDar);
           
            
            // other.gameObject.GetComponent<enemyy3>().MachucarInimigo(danoParaDar);
             
            Destroy(this.gameObject);

        } 
             
       
        if(other.gameObject.CompareTag("enemy1"))
         {
            
              other.gameObject.GetComponent<enemy3>().MachucarInimigo(danoParaDar);
             Destroy(this.gameObject);
         }
         if(other.gameObject.CompareTag("enemy2"))
         {
            other.gameObject.GetComponent<enemyy3>().MachucarInimigo(danoParaDar);
              Destroy(this.gameObject);
         }
     }

     void Update()
     {
        
     //if(itemlaser == true)
         //   {
             //   desativarlaser();

        //   }
  //  }
  //  private void desativarlaser()
  //{
      // itemlaser = true;
       // Manager.SetActive(false);
        
        
    }
     
     


    //   void OnTriggerStay2D(Collider2D collision)
    //  {
    //    if(collision.gameObject.CompareTag("enemy1"))
    //      {
    //           collision.gameObject.GetComponent<enemy3>().MachucarInimigo(danoParaDar);
    //          Destroy(this.gameObject);
    //      }
    //  }
//      void OnCollisionEnter2D(Collision2D other) {
   
//         if(other.gameObject.CompareTag("enemy2"))
//         {
  
//             other.gameObject.GetComponent<enemy>().MachucarInimigo(danoParaDar);
            
        
//             Destroy(this.gameObject);

//         }
// }
}

       
     
    

   