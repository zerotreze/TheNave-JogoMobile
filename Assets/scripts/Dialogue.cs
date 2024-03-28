using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Dialogue : MonoBehaviour
{
    [Header("Components")]
    public GameObject dialogueObj;
    public Image profile;
    public Text speechText;
    public Text actorNameText;

    [Header("Settings")]
    public float typingSpeed;
    private string [] sentences;
    private int index;

    public void Speech(Sprite p, string[] txt, string actorName)
    {
        dialogueObj.SetActive(true);
        profile.sprite = p;
        sentences = txt;
        actorNameText.text = actorName;
       // StartCoroutine(TypeSentence());
    }
    IEnumerator TypeSentence()
    {
        foreach (char letter in sentences[index].ToCharArray())
        {
            speechText.text += letter;
            yield return new  WaitForSeconds(typingSpeed);
            
        }
    }
    
    public void NextSetence()
    {
       dialogueObj.SetActive(false);
    //   if(speechText.text == sentences[index]) 
    //    if(speechText.text == sentences[index])
    //    {
    //        if(index < sentences.Length - 1)
    //    {
    //            index ++;
    //            speechText.text = "";
    //          StartCoroutine(TypeSentence());
    //    }
    //   else{
    //         speechText.text = "";
    //          index = 0;
    //         dialogueObj.SetActive(false);
    //    }
    
    }

    // IEnumerator TypeSentence()
    // {
    //     foreach (char letter in sentences[index].ToCharArray())
    //     {
    //         speechText.text += letter;
    //         yield return new  WaitForSeconds(typingSpeed);
            
    //     }
    // }
    // public void NextSetence()
    // {
    //     if(speechText.text == sentences[index])
    //     {
    //         if(index < sentences.Length - 1)
    //         {
    //             index ++;
    //             speechText.text = "";
    //             StartCoroutine(TypeSentence());
    //         }
    //     }
    //     else{
    //         speechText.text = "";
    //         index = 0;
    //         dialogueObj.SetActive(false);
    //     }
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}


