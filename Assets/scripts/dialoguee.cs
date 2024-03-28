using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class dialoguee : MonoBehaviour
{
    public Sprite profile;
    public string[] speechTxt;
    public string actorName;
    public float radious;

    private Dialogue dc;

    public LayerMask playerLayer;
    
    // Start is called before the first frame update
   private void Start()
    {
          
      dc = FindObjectOfType<Dialogue>();  
    }
    private void FixedUpdate() 
    {
     
      
    }


   public void Interact()
    {
        Collider2D hit = Physics2D.OverlapCircle(transform.position, radious, playerLayer);
        if(hit != null)
        {
            dc.Speech(profile, speechTxt, actorName);
        }
    }
   private void OnDrawGizmosSelected()
    {
    Gizmos.DrawWireSphere(transform.position, radious);
   }
private void Update() {
   
 Interact();
       
}
void OnTriggerEnter2D(Collider2D other)
    {
        if(other.gameObject.CompareTag("Player"))
        Destroy(this.gameObject,0.2f);
    }
   
}
