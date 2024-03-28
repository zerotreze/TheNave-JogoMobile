 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyyy : MonoBehaviour
{
public Transform localDoTiroInimigo;
 public GameObject ImpactoDOLaserDoJogador;

public int pontosParaDar;
public int chanceParaDropar;
public float tempoEsperaTiro;
private float intervalotiro;
public GameObject laserDoInimigo;
private Transform localDoDisparo;
public GameObject ItemParaDropar;
public ParticleSystem explodePrefab;
public float speed;
public int vidaMaximaDoInimigo;
public int vidaAtualDoInimigo;
public float tempoMaximoEntreOsLasers;
public float tempoAtualDosLasers;
public int danoDaNave;
public int danoParaReceber;

    
    void Start()
    {
      
    
        
        
    vidaAtualDoInimigo = vidaMaximaDoInimigo;
   
    //Destroy(this.gameObject, 20f);
    //Destroy(this.gameObject, 0.92f);
        
    }

    // Update is called once per frame
    private void Update()
    {
      
     Destroy(this.gameObject, 20f);
      
     MovimentarInimigo();
      this.intervalotiro += Time.deltaTime;
      if(this.intervalotiro >= this.tempoEsperaTiro)
        {
        this.intervalotiro = 0;
        Atirar();
        }
        
    }
   

    private void Atirar()
    {
      tempoAtualDosLasers -= Time.deltaTime;
      if(tempoAtualDosLasers <= 0)
        Instantiate(this.laserDoInimigo, localDoTiroInimigo.position , Quaternion.Euler(0f, 0f, 0f));
         tempoAtualDosLasers = tempoMaximoEntreOsLasers;
         
      
    }


     private void MovimentarInimigo()
   {
    transform.Translate(Vector3.down * speed * Time.deltaTime);
   }
   


 public void MachucarInimigo(int danoParaReceber)
{
  vidaAtualDoInimigo -= danoParaReceber;
  
  if(vidaAtualDoInimigo <= 0)
  {

    GameManager.instance.aumentarPontuacao(pontosParaDar);
    efeitosSonoros.instance.SomDaExplosao.Play();
     Instantiate(explodePrefab, transform.position, explodePrefab.transform.rotation);
      Instantiate(ImpactoDOLaserDoJogador, transform.position, transform.rotation);


     int numeroAleatorio = Random.Range(0,100);
     if(numeroAleatorio <= chanceParaDropar)
     {
      Instantiate(ItemParaDropar, transform.position, Quaternion.Euler(0f,0f,0f));
       
      

     }
    
     Destroy(this.gameObject);
  }
}
void OnTriggerEnter2D(Collider2D other)
    {
      if(other.gameObject.CompareTag("enemyBoss"))
        {
           Destroy(this.gameObject, 0.1f);
       
           
            Destroy(this.laserDoInimigo, 0.1f);
        }
        if(other.gameObject.CompareTag("Player"))
        {
            other.GetComponent<playy>().Hiit();
        }
        if(other.gameObject.CompareTag("escudo"))
        {
          //other.gameObject.GetComponent<enemyyy>().MachucarInimigo(danoParaReceber);
           
            Destroy(this.gameObject);

         // other.GetComponent<escudo>().destruir(danoParaReceber);
            
        }
        
    }
    // void OnTriggerEnter2D(Collider2D other)
    // {
    //     if(other.gameObject.CompareTag("escudo"))
    //     {
    //         other.gameObject.GetComponent<escudo>().MachucarInimigo(100);
            
    //     }
    // }
  // void OnCollisionEnter2D(Collision2D other)
  //  {
   
  //     if(other.gameObject.CompareTag("escudo"))
  //       {
  //         Destroy(gameObject);
  //       }
  //   }
    //  void OnTriggerStay2D(Collider2D collision)
    //  {
    //    if(collision.gameObject.CompareTag("escudo"))
    //      {
              
    //          Destroy(this.gameObject);
    //     }
    //  }


}




