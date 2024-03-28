using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class efeitosSonoros : MonoBehaviour
{
    public static efeitosSonoros instance;
    public AudioSource SomDaExplosao, SomLaserDoJogador, SomDoRaioLaser, SomSatelite, PoweUpVida, DamagePlayer, escudosom;

   void Awake() 
   {
        instance = this;
    }
  
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
