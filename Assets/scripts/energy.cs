using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class energy: MonoBehaviour
{
    public bool itemraiolaser;
      
    
    //public int energiaParaDar;
   public float speed;

//    void OnTriggerEnter2D(Collider2D other)
//    {


//    }
  
   
void Start()
    {

    }
    
    // Update is called once per frame
    void FixedUpdate()
    {
       Vector3 newPos = transform.position;
       newPos.y = newPos.y + speed;
       transform.position = newPos;
        Destroy(this.gameObject, 14f);
    }
    private void OnTriggerEnter2D(Collider2D other)
     {
      if(other.gameObject.CompareTag("Player"))
        {
          if(itemraiolaser == true)
          {
               efeitosSonoros.instance.SomDoRaioLaser.Play();
         // other.gameObject.GetComponent<triggerlaser>().itemraiolaser = false;
          //other.gameObject.GetComponent<triggerlaser>().tempoAtualDoRaioLaser = other.gameObject.GetComponent<triggerlaser>().tempoMaximoDoRaioLaser;
          //other.gameObject.GetComponent<triggerlaser>().itemraiolaser = true;
          }
        
        
         // other.gameObject.GetComponent<energiaDoJogador>().GanharEnergia(energiaParaDar);
          Destroy(this.gameObject);
        }
        if(other.gameObject.CompareTag("escudo"))
        {
          Destroy(this.gameObject);
        }
        // if(itemraiolaser == true)
        //  {
        //   other.gameObject.GetComponent<triggerlaser>().itemraiolaser = true;
        // }
 
            
        }
}

