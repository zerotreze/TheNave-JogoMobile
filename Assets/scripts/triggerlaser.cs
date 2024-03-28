using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class triggerlaser : MonoBehaviour
{
    public bool itemraiolaser;
    public float tempoMaximoDoRaioLaser;
    public float tempoAtualDoRaioLaser;
    public float tamanholaser;
    public LineRenderer meulinerender;
    public LayerMask layerInimigos;
    //[SerializeField]
    //private float attackTime = 0f;
   
    



void Start()
{
//DesativarRaioLaser();
//itemraiolaser = true;
meulinerender = GetComponent<LineRenderer>();
}

   
    
    
     
     
    void Update()
    {
    //      void OnTriggerEnter2D(Collider2D other)
    //  {
    //     if(other.gameObject.CompareTag("energy"))
    //    {
    //        gameObject.SetActive(true);
    //     }
    //  }
    //     if(Input.GetKeyDown(KeyCode.Space))
    //      {
    //         gameObject.SetActive(false);
    //     }
      triggerlaserss();
        if(itemraiolaser == true)
            tempoAtualDoRaioLaser -= Time.deltaTime;
            if(tempoAtualDoRaioLaser <= 0)
            {
                DesativarRaioLaser();
            }
    }
    
        

  
        
    
    void triggerlaserss(){
        RaycastHit2D triggerlaserss = Physics2D.Raycast(transform.position, transform.up,tamanholaser,layerInimigos);
        
        
        if(triggerlaserss == true)
        {
         

        meulinerender.SetPosition(0,transform.position);
        meulinerender.SetPosition(1, triggerlaserss.point);

        if(triggerlaserss.collider.tag == "enemy1")
        {
            //Debug.Log("colidiu");
            triggerlaserss.collider.GetComponent<enemy3>().MachucarInimigo(3);
        }
         if(triggerlaserss.collider.tag == "enemy0")
        {
            //Debug.Log("colidiu");
            triggerlaserss.collider.GetComponent<enemyyy>().MachucarInimigo(3);
            
        }
        if(triggerlaserss.collider.tag == "enemy2")
        {
            triggerlaserss.collider.GetComponent<enemyy3>().MachucarInimigo(3);
        }
        
           
        }
        else
        {
            Vector3 fimLaser = new Vector3(transform.position.x, transform.position.y + tamanholaser,0);

            meulinerender.SetPosition(0, transform.position);
            meulinerender.SetPosition(1,fimLaser);
        }
    
    }
    //  private void OnTriggerEnter2D(Collider2D other)
    //  {
    //     if(other.gameObject.tag == "energy")
    //     if(itemraiolaser == true)
    //     {
    //      other.gameObject.GetComponent<triggerlaser>().itemraiolaser = true;
    //     }
    //  }
     
  private void DesativarRaioLaser()
  {
     
    
   tempoAtualDoRaioLaser = tempoMaximoDoRaioLaser;
   itemraiolaser = false;
   
  }
  
    }  



     

