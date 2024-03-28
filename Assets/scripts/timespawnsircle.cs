using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class timespawnsircle : MonoBehaviour
{
     public float timeToSpawn;
      public GameObject circle;
      public Vector3 minPos, maxPos; 
      public float initialTimeToSpawn;
       public float tempoMaximoDaBola;
    public float tempoAtualDaBola;
    public float tempoEsperaBola;
    private float intervaloBola;
    // Start is called before the first frame update
    void Start()
    {
       
        tempoAtualDaBola = tempoMaximoDaBola;

       initialTimeToSpawn = timeToSpawn;
      

    }
    private void FixedUpdate() 
    {
         initialTimeToSpawn -= timeToSpawn;
        if(initialTimeToSpawn < 0)
        {
              
            Vector3 randomPos;
            randomPos.x = Random.Range(minPos.x, maxPos.x);
            Instantiate(circle, new Vector3(randomPos.x, transform.position.y, transform.position.z), transform.rotation);
           // timeToSpawn = initialTimeToSpawn;
        }
    }

    // Update is called once per frame
    void Update()
    {
        this.intervaloBola += Time.deltaTime;
        if(this.intervaloBola >= this.tempoEsperaBola)
        {
            Vector3 randomPos;
            randomPos.x = Random.Range(minPos.x, maxPos.x);
            Instantiate(circle, new Vector3(randomPos.x, transform.position.y, transform.position.z), transform.rotation);
            timeToSpawn = initialTimeToSpawn;
            this.intervaloBola = 0;
            bola();
            Debug.Log("3x");
        }
    


        // else if(initialTimeToSpawn < = 10)
        // {
        //     desativarbola();
        // }
        
        // }
        // void desativarbola()
        // {
        //     if()
        // }
    }
    private void bola()
    {
        Instantiate(this.circle,this.transform.position, Quaternion.identity);
    }

}
