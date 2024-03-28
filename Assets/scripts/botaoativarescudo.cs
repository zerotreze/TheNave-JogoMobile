using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class botaoativarescudo : MonoBehaviour
{public GameObject player;

public bool ativarescudo;
   
    // Start is called before the first frame update
    void Start()
    {

        
    }

    // Update is called once per frame
    void Update()
    {
         if(Input.touchCount > 0)
        {
            Debug.Log("toucou na yela");
        }
        if(ativarescudo == true)
        {
            
            
        }
        
    }
     
       
}
