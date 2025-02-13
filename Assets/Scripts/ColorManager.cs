using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorManager : MonoBehaviour
{
    [SerializeField]
    private bool start = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private async void OnTriggerEnter(Collider other)
    {
        if(start)
        {
            gameObject.GetComponent<Renderer>().material.color = new Color(1, 0, 0, 1);
        }
        else
        {
            gameObject.GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
        }
        
    }
}
