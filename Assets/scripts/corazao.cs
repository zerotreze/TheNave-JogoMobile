using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class corazao : MonoBehaviour
{
    public bool itemDeVida;
    public int vidaParaDar;
   public float speed;
  
   
void Start()
    {

    }
    
    // Update is called once per frame
    void FixedUpdate()
    {
       Vector3 newPos = transform.position;
       newPos.y = newPos.y + speed;
       transform.position = newPos;
        Destroy(this.gameObject, 14f);
    }
    private void OnTriggerEnter2D(Collider2D other)
     {
        if(other.gameObject.tag == "Player")
        {
            efeitosSonoros.instance.PoweUpVida.Play();
            if(itemDeVida == true)
            {
                other.gameObject.GetComponent<vidaDoJogador>().GanharVida(vidaParaDar);

            }

            Destroy(this.gameObject);
            
        }
          if(other.gameObject.CompareTag("escudo"))
          {
             if(itemDeVida == true)
            {
                other.gameObject.GetComponent<vidaDoJogador>().GanharVida(vidaParaDar);

            }
             Destroy(this.gameObject);
          }
}
}
