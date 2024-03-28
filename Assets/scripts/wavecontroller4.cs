using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class wavecontroller4 : MonoBehaviour
{
    public GameObject bossToSpawn;
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
    
    void Start()
    {
        
        bossAtivo = false;
        initialTimeToSpawn = timeBetweenWaves;
        
    }

    
    void Update()
    {
        enemy[0].SetActive(true);
        enemy[1].SetActive(true);
        waveCountText.text = "Waves: " + waveCount.ToString();
         timeBetweenWaves -= Time.deltaTime;
          if(timeBetweenWaves <= 0)
         {
          enemyCount += 1;
           Vector3 randomPos;
           randomPos.x = Random.Range(minPos.x, maxPos.x);
           randomPos.y = Random.Range(minPos.y, maxPos.y);
             
           timeBetweenWaves = initialTimeToSpawn;
            if(waveIsDone = true) 
       {
        StartCoroutine(waveSpawner());
        

       }
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
        
    
        if(enemyCount > 8)
        {
          
          
          enemyCount += 1;
          Vector3 randomPos;
          randomPos.x = Random.Range(minPos.x, maxPos.x);
            randomPos.y = Random.Range(minPos.y, maxPos.y);
           Instantiate(enemy[0], new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);
             Instantiate(enemy[1], new Vector3(randomPos.x,randomPos.y, transform.position.z), transform.rotation);
            Debug.Log("chegou em 5");
        }    
             if(enemyCount > 53)
        {
          
          enemyCount += 1;
          Vector3 randomPos;
          randomPos.x = Random.Range(minPos.x, maxPos.x);
            randomPos.y = Random.Range(minPos.y, maxPos.y);
            Instantiate(enemy[0], new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);
             Instantiate(enemy[1], new Vector3(randomPos.x,randomPos.y, transform.position.z), transform.rotation);
            Debug.Log("chegou em 20");
        } 
        if(enemyCount > 172)
        {
          
          enemyCount += 1;
          Vector3 randomPos;
          randomPos.x = Random.Range(minPos.x, maxPos.x);
            randomPos.y = Random.Range(minPos.y, maxPos.y);
            Instantiate(enemy[0], new Vector3(randomPos.x, randomPos.y, transform.position.z), transform.rotation);
             Instantiate(enemy[1], new Vector3(randomPos.x,randomPos.y, transform.position.z), transform.rotation);
            Debug.Log("chegou em 50");
        } 
          if(enemyCount > 182)
        {
           invokeboss();
            Debug.Log("chegou no boss");
        } 
    }
     public void invokeboss ()
 {


   
  bossToSpawn.SetActive(true);
 if(bossAtivo == true){
   bossAtivo = true;
  bossToSpawn.SetActive(true);

   Instantiate(bossToSpawn, transform.position, transform.rotation);
  
  
  waveIsDone = false;
  timeBetweenWaves -= Time.deltaTime;
 }
 }
    }



