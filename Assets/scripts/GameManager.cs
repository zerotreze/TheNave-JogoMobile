using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
   public Text scoreText;
   public float scoreAmount;
   public float scoreatual;
   public Text scoreTextAtual;
   //public Text TextoDeScoreAtual;
   
   public static bool stopTime;
 // public float pointIncreasedPerSecond;


    public static GameManager instance;
    public int  inimigospontos;
    public Text textoDePontuacaoAtual;
    public GameObject painelDeGameOver;
    public Text textoDePontuacaoFinal;
  

    void Awake()
    {
        instance = this; 
    }
     public void GameOver()
    {
        Time.timeScale = 0f;
        painelDeGameOver.SetActive(true);
        textoDePontuacaoFinal.text = "" + inimigospontos;
        stopTime = true;
        if(scoreAmount > PlayerPrefs.GetFloat("HighScore"))
        {
            PlayerPrefs.SetFloat("HighScore", scoreAmount);

        }
        scoreTextAtual.text = "" + PlayerPrefs.GetFloat("HighScore");
       // TextoDeScoreAtual.text = "" + scoreAmount;
       
         
    }
   //    textoDeHighScore.text = "" + scoreAmount;


    


    // Start is called before the first frame update
    void Start()
    {
        stopTime = false;
        Time.timeScale = 1f;
       
    //pointIncreasedPerSecond = 1.00f; 



       inimigospontos = 0; 
       textoDePontuacaoAtual.text = "points " + inimigospontos;
    }

   
    void Update()
    {
        
        if(stopTime == false)
        {
            scoreAmount = scoreAmount + Time.deltaTime;
            scoreText .text = scoreAmount.ToString("");
        }
    }
    public void aumentarPontuacao(int pontosParaGanhar)
    {
        
        inimigospontos += pontosParaGanhar;
        textoDePontuacaoAtual.text = "Points " + inimigospontos;

   
    }
}
