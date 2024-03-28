using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class audio : MonoBehaviour
{
    private Sprite soundOnImage;
    public Sprite soundOffImage;
    public Button button;
    private bool isOn = true;
    public AudioSource audioSource,audioSource2,audioSource3,audioSource4,audioSource5,audioSource6,audioSource7;
    
    void Start()
    {
        soundOnImage = button.image.sprite;
    }

  
    void Update()
    {
        
    }
    public void ButtonClicked()
    {
        if(isOn)
        {
            button.image.sprite = soundOffImage;
            isOn = false;
            audioSource.mute = true;
            audioSource2.mute = true;
            audioSource3.mute = true;
            audioSource4.mute = true;
            audioSource5.mute = true;
            audioSource6.mute = true;
            audioSource7.mute = true;
        }
        else
        {
            button.image.sprite = soundOnImage;
            isOn = true;
            audioSource.mute = false;
            audioSource2.mute = false;
             audioSource3.mute = false;
              audioSource4.mute = false;
               audioSource5.mute = false;
                audioSource6.mute = false;
                 audioSource7.mute = false;
        }
    
    }
}
