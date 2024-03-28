using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseGame : MonoBehaviour
{
     public GameObject PauseScreen;
     bool GamePaused;
     
    // Start is called before the first frame update
    void Start()
    {
        GamePaused = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(GamePaused)
        Time.timeScale = 0;
        else
        Time.timeScale = 1;
        

        
    }
    public void PauseeGame()
    {
        GamePaused = true;
        PauseScreen.SetActive(true);

    }
    public void ResumeGame()
    {
        GamePaused = false;
        PauseScreen.SetActive(false);

    }
}
