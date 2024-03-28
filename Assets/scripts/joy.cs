using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class joy : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    private bool tocando;

    public RectTransform botonBase, botonPrincipal;

    private Vector2 posinicial, postemporal;
    private Vector2 direction;
    private float larguratela;

    public Vector2 valorMagnitude;

     void Start()
    {
        tocando = false;
       posinicial = botonBase.position;
       larguratela = Screen.width * 0.05f;

    }

    
     public void OnPointerDown(PointerEventData eventData)
    {
      if(!tocando)
      {
        botonBase.position = eventData.position;
        botonPrincipal.position = eventData.position;
        postemporal = eventData.position;
        tocando = true;
      }
    }
    public void OnDrag(PointerEventData eventData)
    {
       direction = eventData.position - postemporal;
       direction = Vector2.ClampMagnitude(direction, larguratela);
       botonPrincipal.position = new Vector2(postemporal.x+direction.x, postemporal.y+direction.y);
       valorMagnitude = (eventData.position - postemporal).normalized;
    }
     public void OnPointerUp(PointerEventData eventData)
    {
       botonBase.position = posinicial;
       botonPrincipal.position = posinicial;
       tocando = false;
       valorMagnitude = Vector2.zero;
    }
}
