 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemyy2 : MonoBehaviour
{
public int pontosParaDar;
public float tempoEsperaTiro;
private float intervalotiro;
public GameObject laserDoInimigo;
private Transform localDoDisparo;
public ParticleSystem explodePrefab;
public float speed;
public int vidaMaximaDoInimigo;
public int vidaAtualDoInimigo;
public float tempoMaximoEntreOsLasers;
public float tempoAtualDosLasers;
public int danoDaNave;

    // Start is called before the first frame update
    void Start()
    {
      
    Destroy(this.gameObject, 14f);
        
        
    vidaAtualDoInimigo = vidaMaximaDoInimigo;
   
    //Destroy(this.gameObject, 20f);
    //Destroy(this.gameObject, 0.92f);
        
    }

    // Update is called once per frame
    private void Update()
    {
     
      
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
        Instantiate(this.laserDoInimigo, this.transform.position, Quaternion.Euler(0f, 0f, 0f));
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
     Instantiate(explodePrefab, transform.position, explodePrefab.transform.rotation);
    
     Destroy(this.gameObject);
  }
}

    //   void OnCollisionEnter2D(Collision2D collisionInfo)
    // {
    //     if(collisionInfo.gameObject.CompareTag("Player"))
    //     {
    //         collisionInfo.gameObject.GetComponent<vidaDoJogador>().MachucarJogador(danoDaNave);
    //         Destroy(this.gameObject);
    //     }
}




