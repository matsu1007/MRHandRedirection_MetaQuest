using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchDecision : MonoBehaviour
{
    private bool startStay = false;
    private bool startExit = false;
    private bool goalEnter = false;
    private bool rightEnter = false;
    private bool leftEnter = false;
    private bool centerEnter = false;
    private bool goalExit = false;
    private bool colliderEnter = false;
    private bool colliderExit = false;
    private bool colliderStay = false;

    private bool[] targetEnter = new bool[4];

    public static TouchDecision instance;


    public void Awake()
    {
        if (instance == null) instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("Start"))
        {
            startStay = true;
            
        }
        else if (other.gameObject.CompareTag("Collider"))
        {
            //Debug.Log("Collider!!");
            colliderStay = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        //other.GetComponent<Renderer>().material.color = Color.white;

        if (other.gameObject.CompareTag("Start"))
        {
            startStay = false;
            startExit = true;
            goalExit = false;
            other.GetComponent<Renderer>().material.color = Color.white;
        }
        else if (other.gameObject.CompareTag("Goal1") )
        {
            goalEnter = false;
            //leftEnter = false;
            targetEnter[0] = false;
            goalExit = true;
            other.GetComponent<Renderer>().material.color = Color.white;
        }
        else if (other.gameObject.CompareTag("Goal2"))
        {
            goalEnter = false;
            //rightEnter = false;
            targetEnter[1] = false;
            goalExit = true;
            other.GetComponent<Renderer>().material.color = Color.white;
        }
        else if (other.gameObject.CompareTag("Goal3"))
        {
            goalEnter = false;
            //centerEnter = false;
            targetEnter[2] = false;
            goalExit = true;
            other.GetComponent<Renderer>().material.color = Color.white;
        }
        else if (other.gameObject.CompareTag("Goal4"))
        {
            goalEnter = false;
            targetEnter[3] = false;
            goalExit = true;
            other.GetComponent<Renderer>().material.color = Color.white;
        }
        
        if (other.gameObject.CompareTag("Collider"))
        {
            colliderEnter = false;
            colliderExit = true;
            colliderStay = false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        other.GetComponent<Renderer>().material.color = Color.red;

        if (other.gameObject.CompareTag("Start"))
        {
            startExit = false;
            startStay = false;
        }
        else if (other.gameObject.CompareTag("Goal1"))
        {
            goalEnter = true;
            targetEnter[0] = true;
        }
        else if (other.gameObject.CompareTag("Goal2"))
        {
            goalEnter = true;
            targetEnter[1] = true;
        }
        else if (other.gameObject.CompareTag("Goal3"))
        {
            goalEnter = true;
            targetEnter[2] = true;
        }
        else if (other.gameObject.CompareTag("Goal4"))
        {
            goalEnter = true;
            targetEnter[3] = true;
        }
        
        if (other.gameObject.CompareTag("Collider"))
        {
            colliderEnter = true;
            colliderExit = false;
        }
    }

    public bool IsStartStay() {  return startStay; }

    public bool IsStartExit() {  return startExit; }

    public bool IsGoalEnter() {  return goalEnter; }

    public bool IsLeftEnter() {  return leftEnter; }
    public bool IsRightEnter() {  return rightEnter; }
    public bool IsCenterEnter() {  return centerEnter; }

    public bool IsTarget1Enter() { return targetEnter[0]; }
    public bool IsTarget2Enter() { return targetEnter[1]; }
    public bool IsTarget3Enter() {  return targetEnter[2]; }
    public bool IsTarget4Enter() {  return targetEnter[3]; }

    public bool IsGoalExit() {  return goalExit; }

    public bool IsColliderStay()
    {
        Debug.Log(colliderStay);
        return (colliderStay);
    }
}
