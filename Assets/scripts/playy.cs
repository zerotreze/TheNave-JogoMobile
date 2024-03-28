using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class playy : MonoBehaviour
{
     public int danoParaDar;
    public SpriteRenderer sprite;
    private bool recovery;
    public Transform localDoLaserEsquerda;
    public Transform localDoLaserDireita;
    public float tempoMaximoDosLasesDuplos;
    public float tempoAtualDosLasersDuplos;
    public bool temLaserDuplo;
    public bool itemraiolaser;
    public GameObject Manager;
    public float tempoMaximoDoRaioLaser; 
    public float tempoAtualDoRaioLaser;
   // public bool desativarlaser;
    public float tempoEsperaTiro;
    public Projetil laserPrefab;
    private float intervalotiro;
    public MovementJoystick movementJoystick;
    public float playerSpeed;
    private Rigidbody2D rb;
    public SpriteRenderer spriteRenderer;
    private float Largura {

get {
    Bounds bounds = this.spriteRenderer.bounds;
    Vector3 tamanho = bounds.size;
    return tamanho.x;

}
}
private float Altura {

get {
    Bounds bounds = this.spriteRenderer.bounds;
    Vector3 tamanho = bounds.size;
    return tamanho.y;
}
}

    
    void Start()
    {
        temLaserDuplo = false;
        tempoAtualDosLasersDuplos = tempoMaximoDosLasesDuplos;
        tempoAtualDoRaioLaser = tempoMaximoDoRaioLaser;
        this.intervalotiro = 0;
        rb = GetComponent<Rigidbody2D>();
        itemraiolaser = false;

      
    }

    

void FixedUpdate()
{
    
    if(movementJoystick.joystickVec.y != 0)
    {
        rb.velocity = new Vector2(movementJoystick.joystickVec.x * playerSpeed, movementJoystick.joystickVec.y * playerSpeed);

    }
    else
    {
        rb.velocity = Vector2.zero;

    }
    VerificarLimiteTela();
    
}
private void VerificarLimiteTela()
{
    Vector2 posicaoAtual = this.transform.position;
    float metadeLargura = Largura / 2f;
    float metadeAltura = Altura / 2f;
    Camera camera = Camera.main;
    Vector2 limiteInferiorEsquerdo = camera.ViewportToWorldPoint(Vector2.zero);
    Vector2 limiteSuperiorDireito = camera.ViewportToWorldPoint(Vector2.one);
    
    float pontoReferencialEsquerdo = posicaoAtual.x - metadeLargura;
     float pontoReferencialDireito = posicaoAtual.x + metadeLargura;

     if(pontoReferencialEsquerdo < limiteInferiorEsquerdo.x)
     {
        this.transform.position = new Vector2(limiteInferiorEsquerdo.x + metadeLargura, posicaoAtual.y);
      } 
      else if (pontoReferencialDireito > limiteSuperiorDireito.x)
      {
        this.transform.position = new Vector2(limiteSuperiorDireito.x - metadeLargura, posicaoAtual.y);
      }

      posicaoAtual = this.transform.position;


      float pontoReferencialSuperior = posicaoAtual.y + metadeAltura;
      float pontoReferencialInferior = posicaoAtual.y - metadeAltura;
      
      if(pontoReferencialSuperior > limiteSuperiorDireito.y)
     {
        this.transform.position = new Vector2(posicaoAtual.x, limiteSuperiorDireito.y - metadeAltura);
        } else if (pontoReferencialInferior < limiteInferiorEsquerdo.y)
        {
            this.transform.position = new Vector2(posicaoAtual.x, limiteInferiorEsquerdo.y + metadeAltura);
        }

}
    private void Atirar()
        {
               efeitosSonoros.instance.SomLaserDoJogador.Play();
            if(temLaserDuplo == true)
        {
           
            Instantiate(this.laserPrefab, localDoLaserEsquerda.position, localDoLaserEsquerda.rotation);
            Instantiate(this.laserPrefab, localDoLaserDireita.position, localDoLaserEsquerda.rotation);
        }


          else{ Instantiate(this.laserPrefab, this.transform.position, Quaternion.identity);}

        }
        private void DesativarLasersDuplos()
        {
            temLaserDuplo  = false;
            tempoAtualDosLasersDuplos = tempoMaximoDosLasesDuplos;
        }


         void Update()
        {
            if(temLaserDuplo == true)
            {
                tempoAtualDosLasersDuplos -= Time.deltaTime;
                if(tempoAtualDosLasersDuplos <= 0 )
                {
                    DesativarLasersDuplos();
                }

            }
             //RaycastHit2D hitInfo = Physics2D.Raycast(transform.position,transform.forward);
            this.intervalotiro += Time.deltaTime;
            if(this.intervalotiro >= this.tempoEsperaTiro)
            {
                this.intervalotiro = 0;
                Atirar();
            }
            if(itemraiolaser == true)
            tempoAtualDoRaioLaser -= Time.deltaTime;
            if(tempoAtualDoRaioLaser <= 0)
            {
                DesativarRaioLaser();
            }
            pararlaser();
            ativarlaser();
             //if(itemraiolaser == true)
            //{

            // }
        }
    // private void desativarlaser()
    // {

    // }
       

           
   private void DesativarRaioLaser()
        {
   
            tempoAtualDoRaioLaser = tempoMaximoDoRaioLaser;
            Manager.SetActive(false);
            itemraiolaser = false;
            
        }
        void pararlaser()
        {
         if(itemraiolaser == true)
         {
            this.intervalotiro -= Time.deltaTime;
            if(this.intervalotiro <= this.tempoEsperaTiro)
            {
              this.intervalotiro = 0;  
            }
            // tempoEsperaTiro = 5;
         }
        }

        void ativarlaser() 
        {
            if(itemraiolaser == false)
         {
            this.intervalotiro += Time.deltaTime;
            if(this.intervalotiro >= this.tempoEsperaTiro)
            {
                this.intervalotiro = 0;
            Atirar();
         }

        }
        }
  

         void OnTriggerEnter2D(Collider2D other)
         {
        if(other.gameObject.CompareTag("energy"))
        {
            itemraiolaser = true;
            Manager.SetActive(true);

        }
          if(other.gameObject.CompareTag("enemy0"))
        {
           // Hit();
              
              other.gameObject.GetComponent<enemyyy>().MachucarInimigo(danoParaDar);
              // Destroy(this.gameObject);
        }
        else if(other.gameObject.CompareTag("enemyBoss"))
        {

            other.gameObject.GetComponent<spawnboss>().MachucarBoss(danoParaDar);
               //Destroy(this.gameObject);
        }
         else if(other.gameObject.CompareTag("enemy2"))
         {
          //  Hit();
              other.gameObject.GetComponent<enemyy3>().MachucarInimigo(danoParaDar);
         }

            
        else if(other.gameObject.CompareTag("enemy1"))
         {
          //  Hit();
              
               other.gameObject.GetComponent<enemy3>().MachucarInimigo(danoParaDar);
            //   Destroy(this.gameObject);
        }
        }
         public void Hit()
    {
        
        if (recovery == false)
        {
            StartCoroutine(Flick());
        }
        

    }

        IEnumerator Flick()
        {
            recovery = true;
            sprite.color = new Color(1, 1, 1, 1);
            yield return new WaitForSeconds(0.1f);
            sprite.color = new Color (1, 1, 1, 1);
            yield return new WaitForSeconds(0.1f);
             sprite.color = new Color(1, 1, 1, 1);
             yield return new WaitForSeconds(0.1f);
             sprite.color = new Color (1, 1, 1, 1);
         
            recovery = false;

        }
        public void Hiit()
    {
      efeitosSonoros.instance.DamagePlayer.Play();
        
        if (recovery == false)
        {
            StartCoroutine(Fliick());
        }
        

    }

        IEnumerator Fliick()
        {
            recovery = true;
            sprite.color = new Color(1, 1, 1, 0);
            yield return new WaitForSeconds(0.1f);
            sprite.color = new Color (1, 1, 1, 1);
            yield return new WaitForSeconds(0.1f);
            // sprite.color = new Color(1, 1, 1, 0);
           //  yield return new WaitForSeconds(0.1f);
         //    sprite.color = new Color (1, 1, 1, 1);
         
            recovery = false;

        }
        
     
       

     }
        

        
 



