using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destruirexplosão : MonoBehaviour
{
     public GameObject explosao;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
         Destroy(this.gameObject, 3f);
    }
}
