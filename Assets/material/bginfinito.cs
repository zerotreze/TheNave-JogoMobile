using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bginfinito : MonoBehaviour
{
    public MeshRenderer mr;
    public float speed;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
     mr.material.mainTextureOffset += new Vector2 (speed * Time.deltaTime, 90 );
    }
}
