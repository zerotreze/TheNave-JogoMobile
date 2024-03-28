using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class wavecontroller2 : MonoBehaviour
{
  
   public GameObject bossToSpawn;
  // public GameObject enemy1;
  // public GameObject enemy2;
   
  
    public TextMeshProUGUI waveCountText;
    int waveCount;
    public float SpawnRate;
    public float timeBetweenWaves = 3.0f;
    public int enemyCount = 3;
    public GameObject[] enemy;
    public static bool bossAtivo;
    
    public static bool waveIsDone = true;
    private float initialTimeToSpawn;
    public Vector3 minPos, maxPos; 

    // Start is called before the first frame update
    void Start()
    {
       
      // Destroy(this.bossToSpawn, 100f);
      bossAtivo = false;
     //vidaAtualDoBoss = vidaMaximaDoBoss;
        initialTimeToSpawn = timeBetweenWaves;
    }

    // Update is called once per frame
    void Update()
    {
      
      
     
      enemy[0].SetActive(true);
            enemy[1].SetActive(true);
        waveCountText.text = "Waves: " + waveCount.ToString();
        timeBetweenWaves -= Time.deltaTime;
        
         if(timeBetweenWaves <= 0)
         {
             Vector3 randomPos;
             randomPos.x = Random.Range(minPos.x, maxPos.x);
          Instantiate(enemy[0], new Vector3(randomPos.x, transform.position.y, transform.position.z), transform.rotation);
            timeBetweenWaves = initialTimeToSpawn;
            if(waveIsDone == true) 
       {
        StartCoroutine(waveSpawner());
        

       }
         }
        
       if(waveIsDone == true) 
       {
        StartCoroutine(waveSpawner());
        

       }
        if(waveIsDone == false) 
       {
        StopCoroutine(waveSpawner());
        

       }
    }
    IEnumerator waveSpawner()
    {
        waveIsDone = false;
        for (int i = 0; i < 1; i++)
        { Vector3 randomPos;
            randomPos.x = Random.Range(minPos.x, maxPos.x);
            randomPos.y = Random.Range(minPos.y, maxPos.y);
            Instantiate(enemy[0], new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);
             Instantiate(enemy[1], new Vector3(randomPos.x,randomPos.y, transform.position.z), transform.rotation);
          
            timeBetweenWaves = initialTimeToSpawn;
            yield return new WaitForSeconds(SpawnRate);
        }
        SpawnRate -= 0.9f;
        enemyCount += 1;
        waveCount +=1;

        yield return new WaitForSeconds(timeBetweenWaves);
        
        waveIsDone = true;
        
    
        if(enemyCount > 4)
        {
          
          
          enemyCount += 1;
          Vector3 randomPos;
          randomPos.x = Random.Range(minPos.x, maxPos.x);
            randomPos.y = Random.Range(minPos.y, maxPos.y);
            Instantiate(enemy[0], new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);
             Instantiate(enemy[1], new Vector3(randomPos.x,randomPos.y, transform.position.z), transform.rotation);
            Debug.Log("chegou em 5");
        }
         if(enemyCount > 34)
        {
          
          enemyCount += 1;
          Vector3 randomPos;
          randomPos.x = Random.Range(minPos.x, maxPos.x);
            randomPos.y = Random.Range(minPos.y, maxPos.y);
            Instantiate(enemy[0], new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);
             Instantiate(enemy[1], new Vector3(randomPos.x,randomPos.y, transform.position.z), transform.rotation);
            Debug.Log("chegou em 20");
        }
        
       

          if(enemyCount >= 34)
         { 
        //  Instantiate(bossToSpawn, transform.position, transform.rotation);
      // bossToSpawn.SetActive(true);
         // enemy[0].SetActive(false);
       //  DestroyenemyPrefab ();
          
        //  enemy[0].SetActive(false);
         //enemyCount -= 1;
      //  Destroy(enemy[0], 0.1f);
        
      // Destroy(this.enemy[0], 0.1f);
      //      if (waveIsDone == false)
      //      {
      // //     DestroyenemyPrefab ();
      //       //DestroyImmediate(this.enemy[0], true);
      //        // enemy[0].SetActive(false);
      //      // enemyCount = 1;
      //      }
      //     //  {
          //   waveIsDone = false;
          //  }
         
          
         
  
          invokeboss();
           //  waveIsDone = true;
           
          
          
         // Instantiate(bossToSpawn, transform.position, transform.rotation);
         
         
            
         

           
           
          
            // bossToSpawn.SetActive(true);

         }
         
         else if (enemyCount > 14){
          waveIsDone = true;
          bossAtivo = false;

         }
         else{ waveIsDone = true;}
           
         
        //     enemy[0].SetActive(false);
        //     enemy[1].SetActive(false);
            
        //     }
            
        //     Destroy(this.bossToSpawn, 200f);
            
            

           
          
        // //     Vector3 randomPos;
        // //   randomPos.x = Random.Range(minPos.x, maxPos.x);
        // //   randomPos.y = Random.Range(minPos.y, maxPos.y);
        // // Instantiate(boss, new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);

        // // Destroy(this.gameObject, 5f);

        // }
        
        



         if(enemyCount > 129)
        {
          
          enemyCount += 1;
          Vector3 randomPos;
          randomPos.x = Random.Range(minPos.x, maxPos.x);
            randomPos.y = Random.Range(minPos.y, maxPos.y);
            Instantiate(enemy[0], new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);
             Instantiate(enemy[1], new Vector3(randomPos.x,randomPos.y, transform.position.z), transform.rotation);
            Debug.Log("chegou em 50");
        }
    }


   public void invokeboss ()
 {

 //Instantiate(bossToSpawn, transform.position, transform.rotation);
 // bossAtivo = true;
  //bossToSpawn.SetActive(true);
 // waveIsDone = false;
   
  bossToSpawn.SetActive(true);
 if(bossAtivo == true){
   bossAtivo = true;
  bossToSpawn.SetActive(true);

   Instantiate(bossToSpawn, transform.position, transform.rotation);
  // bossToSpawn.SetActive(true);
  
  waveIsDone = false;
  timeBetweenWaves -= Time.deltaTime;
 }
 }
 public void DestroyenemyPrefab ()
 {
   enemy[0].SetActive(false);
  // DestroyImmediate(enemy[0], true);

  //  enemy[0].SetActive(false);
  // Destroy(enemy[0]);
 }
  


 }
 
//  public void destroyboss ()
//   {
//   bossAtivo = false;
//   waveIsDone = true;
//   if(bossAtivo == false){
//    bossToSpawn.SetActive(false);
//    waveIsDone = true;
// //  timeBetweenWaves -= Time.deltaTime;
//  }
// }



//   vidaAtualDoBoss-= danoParaReceber;
  
//   if(vidaAtualDoBoss <= 0)
//   {

//     GameManager.instance.aumentarPontuacao(pontosParaDar);
//     efeitosSonoros.instance.SomDaExplosao.Play();
//      //Instantiate(explodePrefab, transform.position, explodePrefab.transform.rotation);
//      // Instantiate(ImpactoDOLaserDoJogador, transform.position, transform.rotation);


//      //int numeroAleatorio = Random.Range(0,100);
     
//      Destroy(this.bossToSpawn);
//   }
// }
//  public void MachucarBoss(int danoParaReceber)
//  {
//   vidaAtualDoBoss-= danoParaReceber;

//   if(vidaAtualDoBoss > 0)
//   {
//   //   waveIsDone = false;
//       //    bossAtivo = true;

    
//    // enemy[0].SetActive(false);
//    // enemy[1].SetActive(false)
//   }
 
  
//   if(vidaAtualDoBoss <= 0)
//   {
//    // waveIsDone = true;
//     //      bossAtivo = false;
    

//     GameManager.instance.aumentarPontuacao(pontosParaDar);
//     efeitosSonoros.instance.SomDaExplosao.Play();     
//      //Instantiate(explodePrefab, transform.position, explodePrefab.transform.rotation);
//      // Instantiate(ImpactoDOLaserDoJogador, transform.position, transform.rotation);


//      //int numeroAleatorio = Random.Range(0,100);
     
//       Destroy(this.bossToSpawn);
//   }
 
//  }


// }

    
    
 


    
     
    


