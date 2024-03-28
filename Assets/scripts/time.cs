using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class time : MonoBehaviour
{
    public Text scoreText;
    public float scoreAmount;
    public float pointIncreasedPerSecond;
    // Start is called before the first frame update
    void Start()
    {
    scoreAmount = 00.0f;
    pointIncreasedPerSecond = 1.00f;    
    }

    // Update is called once per frame
    void Update()
    {
        scoreText.text = (float)scoreAmount + "";
        scoreAmount +=pointIncreasedPerSecond * Time.deltaTime;
        
    }
}
