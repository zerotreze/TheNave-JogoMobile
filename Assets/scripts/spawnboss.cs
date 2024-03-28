using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawnboss : MonoBehaviour
{
  
    public GameObject bossToSpawn;
   public int vidaMaximaDoBoss;
   public int vidaAtualDoBoss;
   public int danoParaReceber;
   public int pontosParaDar;
   public GameObject spawn;
  
   
  

    //public GameObject bossToSpawn;
    // Start is called before the first frame update
    void Start()
    {
       
        vidaAtualDoBoss = vidaMaximaDoBoss;
       // Instantiate(bossToSpawn, transform.position, transform.rotation);
    }
    

    
    void Update()
    {
        
    }
   public void MachucarBoss(int danoParaReceber)
 {
  vidaAtualDoBoss-= danoParaReceber;

  if(vidaAtualDoBoss > 0)
  {
   wavecontroller2.waveIsDone = true;
    spawn.SetActive(false);
  //   waveIsDone = false;
      //    bossAtivo = true;

    
   // enemy[0].SetActive(false);
   // enemy[1].SetActive(false)
  }
 
  
  if(vidaAtualDoBoss <= 0)
  {
    wavecontroller2.bossAtivo = false;
    wavecontroller2.waveIsDone = true;
    // bossToSpawn.GetComponent<wavecontroller2>().destroyboss();
  
  //  destroyboss ();
       spawn.SetActive(true);
  //GetComponent<wavecontroller2>().destroyboss();
//GetComponent<>destroyboss();

    GameManager.instance.aumentarPontuacao(pontosParaDar);
    efeitosSonoros.instance.SomDaExplosao.Play();     
     //Instantiate(explodePrefab, transform.position, explodePrefab.transform.rotation);
     // Instantiate(ImpactoDOLaserDoJogador, transform.position, transform.rotation);


     //int numeroAleatorio = Random.Range(0,100);
     
      Destroy(this.bossToSpawn);
  }
 
 }
//  void OnTriggerEnter2D(Collider2D other)
//     {
//       if(other.gameObject.CompareTag("enemy0"))
//         {
//            Destroy(this.gameObject);
//         }
    }
     
