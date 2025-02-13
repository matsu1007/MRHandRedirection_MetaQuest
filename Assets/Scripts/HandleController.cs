using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.WSA;

public class HandleController : MonoBehaviour
{
    HandleController instance;
    StreamWriter sw;

    bool visible = false;
    [SerializeField] GameObject[] children;
    Vector3[] relative;



    public void Awake()
    {
        if (instance == null) instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        /*children = new GameObject[gameObject.transform.childCount];
        for (int i = 0; i < children.Length; i++)
        {
            children[i] = transform.GetChild(i).gameObject;
        }*/

        relative = new Vector3[children.Length];
        for (int i = 0; i < children.Length; i++)
        {
            relative[i] = children[i].transform.position - gameObject.transform.position;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.SecondaryIndexTrigger))
        {
            gameObject.transform.position = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RHand);
            gameObject.transform.position += new Vector3(0, 0.045f, 0);
            float angleY = OVRInput.GetLocalControllerRotation(OVRInput.Controller.RHand).y;
            gameObject.transform.rotation = Quaternion.Euler(transform.rotation.x, angleY, transform.rotation.z);
            for(int i=0;i<children.Length; i++)
            {
                children[i].transform.position = relative[i] + gameObject.transform.position;
            }

            string f = ExpManager2.instance.GetFolder() + "/" + ExpManager2.instance.GetSubject() + "/" + ExpManager2.instance.GetCondition() + "/" + "StartPos.csv";
            sw = new StreamWriter(f, false, Encoding.GetEncoding("Shift_JIS"));
            string[] s = { "x", "y", "z" };
            string ss = string.Join(",", s);
            sw.WriteLine(ss);
            string[] sss = { transform.position.x.ToString(), transform.position.y.ToString(), transform.position.z.ToString() };
            ss = string.Join(",", sss);
            sw.WriteLine(ss);
            sw.Close();
        }

        if (OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger))
        {
            if(visible)
            {
                for (int i = 0;i<children.Length;i++)
                {
                    children[i].GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0);
                }
                visible = false;
            }
            else
            {
                for (int i = 0; i < children.Length; i++)
                {
                    children[i].GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0.2f);
                }
                visible = true;
            }
        }
    }
}
