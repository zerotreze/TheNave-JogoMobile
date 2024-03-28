using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class menuPrincipalJogar : MonoBehaviour
{
   [SerializeField] private string nomeDolvl;
  [SerializeField] private GameObject painelMenuInicial;
    public void Jogar()
    {
        SceneManager.LoadScene("Jogo");

    }
    public void QuitGame()
    {
        Debug.Log("Quit pelo MENU");
        Application.Quit();
        

    }
}
