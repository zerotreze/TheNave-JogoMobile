using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class paineldegameover : MonoBehaviour
{
    public void ReiniciarJogo()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
         

    }
    public void SairDoJogo()
    {
        Application.Quit();
        Debug.Log("Saiu do Jogo");

    }

}
