using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;


public class vidaDoJogador : MonoBehaviour
{  public int quantidadeToques = 5;
public int quantidadefinaltoques = 0;

   
    public Slider barraDeVidaDoJogador;
    public GameObject escudoDoJogador;
    public int vidaMaximaDoJogador;
    public int VidaAtualDoJogador;
    public float tempoMaximoDoEscudo;
    public float tempoAtualDoEscudo;
     public int vidaMaximaDoEscudo;
     public int vidaAtualDoEscudo;
     public bool temEscudo;
    public TextMeshProUGUI escudoCountText;
   
   // private int vida;


    void Start()
    {
      
       

        VidaAtualDoJogador = vidaMaximaDoJogador;
        barraDeVidaDoJogador.maxValue = vidaMaximaDoJogador;
        barraDeVidaDoJogador.value = VidaAtualDoJogador;
        escudoDoJogador.SetActive(false);
        temEscudo = false;
        //   while (quantidadeToques < 0)
        // {
            
        //   // quantidadeToques--;
        // }

    }

   
    void Update()
    {
    
         escudoCountText.text = "" + quantidadeToques;
           if (quantidadeToques <= -1)
        {
          quantidadeToques = quantidadefinaltoques;
            temEscudo = false;
                 escudoDoJogador.SetActive(false);
        }
   
        if(temEscudo == true)
            tempoAtualDoEscudo -= Time.deltaTime;
            if(tempoAtualDoEscudo <= 0)
            {
                  
                tempoAtualDoEscudo = tempoMaximoDoEscudo;
                temEscudo = false;
                 escudoDoJogador.SetActive(false);
            }
    
        
   if(temEscudo == true)
   {
      
      escudoDoJogador.SetActive(true);
    }

        
    }
    public void DesativarEscudo()
 {
    while (quantidadeToques == quantidadefinaltoques)
        {
         quantidadefinaltoques = quantidadefinaltoques;
         
           
           escudoDoJogador.SetActive(false);
           temEscudo = false;
           
        }
        
        
        
      tempoAtualDoEscudo = tempoMaximoDoEscudo;
     //  temEscudo = false;
      
//       escudoDoJogador.SetActive(false);
  }
     public void AtivarEscudo()
    {
        
        if(tempoAtualDoEscudo == tempoMaximoDoEscudo)
        {
        quantidadeToques--;
       
        
        }
        //  if(quantidadeToques <= 0)
        //  {
        //      quantidadeToques--;
        //       temEscudo = true;
        // }
        //  if(quantidadeToques == 0)
        //  {
        //      temEscudo = false;

        //  }
        if(quantidadeToques <= -1)
        {
            
            escudoDoJogador.SetActive(false);
            temEscudo = false;


        }
       
     
       
      

    //   int quantidadeToques = Input.touchCount;
    //   if(quantidadeToques > 0)
    //   {
    //     Touch[] touches = Input.touches;
    //   }
    
        
        //    Debug.Log("tocou");

        
       
     //    for(int i = 5; i < 5; quantidadeToques 1--)
    {
   // temEscudo = false;

    }

         temEscudo = true;
      //  escudoDoJogador.SetActive(true);
        
        
    }

     public void GanharVida(int vidaParaReceber)
    {
        if(VidaAtualDoJogador + vidaParaReceber <= vidaMaximaDoJogador)
        {
            VidaAtualDoJogador += vidaParaReceber;
        }
        else
        {
            VidaAtualDoJogador = vidaMaximaDoJogador;
        }

        barraDeVidaDoJogador.value = VidaAtualDoJogador;
    }


    public void MachucarJogador(int danoParaReceber)
    {
      
            VidaAtualDoJogador -= danoParaReceber;
            barraDeVidaDoJogador.value = VidaAtualDoJogador;
            if (VidaAtualDoJogador <= 0)
            {
              //  SceneManager.LoadScene("GameOver");
             // planofundoinfinito.instancee.GameOverr();
            
                GameManager.instance.GameOver();
                Time.timeScale = 0f;
                Debug.Log("GameOver");
                Destroy(this.gameObject);

            }
        
        else
         {
             vidaAtualDoEscudo -= danoParaReceber;
            if(vidaAtualDoEscudo <= 0)
            {
                
               vidaAtualDoEscudo = vidaMaximaDoEscudo;
             


        }
         }
    }
//     void OnCollisionEnter2D(Collision2D other)
//     {
//       if(other.gameObject.CompareTag("enemy0"))
//         {
//            Destroy(this.gameObject);
           
//          }
//   }

}

    
    // private void OnTriggerEnter2D(Collider2D collision)
    //  {
    //     if(collision.gameObject.tag == "coracao")
    //     {
    //          VidaAtualDoJogador = VidaAtualDoJogador + 1;
            
    //          barraDeVidaDoJogador.value = VidaAtualDoJogador;
            
    //      }
    //     else
    //    {
    //        VidaAtualDoJogador = vidaMaximaDoJogador;
    //  }

    //  }
    

