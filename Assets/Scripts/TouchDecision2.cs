using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class TouchDecision2 : MonoBehaviour
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

    private bool[] targetEnter = new bool[3];

    public static TouchDecision2 instance;


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
            Debug.Log("Touching Start");

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

        
        if (other.gameObject.CompareTag("Goal1"))
        {
            goalEnter = false;
            //leftEnter = false;
            targetEnter[0] = false;
            goalExit = true;
            //other.GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
        }
        else if (other.gameObject.CompareTag("Goal2"))
        {
            goalEnter = false;
            //rightEnter = false;
            targetEnter[1] = false;
            goalExit = true;
            //other.GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
        }
        else if (other.gameObject.CompareTag("Goal3"))
        {
            goalEnter = false;
            //centerEnter = false;
            targetEnter[2] = false;
            goalExit = true;
            //other.GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
        }
        else if (other.gameObject.CompareTag("Start"))
        {
            startStay = false;
            startExit = true;
            goalExit = false;
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
        //other.GetComponent<Renderer>().material.color = new Color(1, 0, 0, 0.3f);

        
        if (other.gameObject.CompareTag("Goal1"))
        {
            //await UniTask.Delay(200);
            goalEnter = true;
            targetEnter[0] = true;
            //other.GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
        }
        if (other.gameObject.CompareTag("Goal2"))
        {
            //await UniTask.Delay(200);
            goalEnter = true;
            targetEnter[1] = true;
            //other.GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
        }
        if (other.gameObject.CompareTag("Goal3"))
        {
            //await UniTask.Delay(200);
            goalEnter = true;
            targetEnter[2] = true;
            //other.GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
        }
        if (other.gameObject.CompareTag("Start"))
        {
            other.GetComponent<Renderer>().material.color = Color.red;
            startExit = false;
            startStay = false;
        }


        if (other.gameObject.CompareTag("Collider"))
        {
            colliderEnter = true;
            colliderExit = false;
        }
    }

    public bool IsStartStay() { return startStay; }

    public bool IsStartExit() { return startExit; }

    public bool IsGoalEnter() { return goalEnter; }

    public bool IsLeftEnter() { return leftEnter; }
    public bool IsRightEnter() { return rightEnter; }
    public bool IsCenterEnter() { return centerEnter; }

    public bool IsTarget1Enter() { return targetEnter[0]; }
    public bool IsTarget2Enter() { return targetEnter[1]; }
    public bool IsTarget3Enter() { return targetEnter[2]; }


    public bool IsGoalExit() { return goalExit; }

    public bool IsColliderStay()
    {
        Debug.Log(colliderStay);
        return (colliderStay);
    }

    
}
