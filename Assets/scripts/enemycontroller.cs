using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enemycontroller : MonoBehaviour
{
   public float timeToSpawn;
   public GameObject enemy;
   public Vector3 minPos, maxPos; 
   private float initialTimeToSpawn;

   
    void Start()
    {
        initialTimeToSpawn = timeToSpawn;
    }

    // Update is called once per frame
    void Update()
    {
        timeToSpawn -= Time.deltaTime;
        if(timeToSpawn <= 0)
        {
            Vector3 randomPos;
            randomPos.x = Random.Range(minPos.x, maxPos.x);
            Instantiate(enemy, new Vector3(randomPos.x, transform.position.y, transform.position.z), transform.rotation);
            timeToSpawn = initialTimeToSpawn;
        }
        
    }
}
