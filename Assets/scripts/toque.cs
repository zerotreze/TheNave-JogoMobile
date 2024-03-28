using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class toque : MonoBehaviour
{
    [SerializeField]
    private Text textoNumeroToque;
    private int idToque;
    public int IdToque{
     
        get {
            return this.idToque;
        }
        set{
            this.idToque = value;
            this.textoNumeroToque.text = this.idToque.ToString();
        }

        }
        
    }
 
