using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Unity.VisualScripting;
using UnityEngine;

public class ExpManager2 : MonoBehaviour
{
    private StreamWriter sw;
    public string folder = "被験者実験2";
    [SerializeField] private string subject = "matsumoto";

    List<int> numbers = new List<int>();
    int start = 1;
    [SerializeField] int end = 60;
    int n;
    List<int> effectNum = new List<int>();
    static public ExpManager2 instance;
    bool enterFlag = false;
    float nt;
    Vector3 palmPos;

    //private TouchDecision touch;
    bool countFlag = false;

    enum TargetMode
    {
        A,
        B,
        C,
        D,
        E,
        F
    }

    TargetMode targetMode;

    [SerializeField]
    private GameObject[] targets;

    HandTracking handTracking;

    enum Condition
    {
        None, Cond1, Cond2, Cond3, Cond4, Cond5
    }
    [SerializeField] private Condition condition;

    [SerializeField] GameObject startPos;

    //float[] distance;
    float[] amplitude = new float[] { 1, 0, -0.5f, -0.2f };
    float[,] amplitudes = new float[3, 3]
    {
        {1,0,0 },
        {0,1,0},
        {0,0,1},
    };
    int[] preIDs;

    private int touched = 2;

    [SerializeField] private float span = 0.5f;
    private float currentTime = 0;
    private bool timeflag = false;



    public void Awake()
    {
        if (instance == null) instance = this;

        handTracking = GetComponent<HandTracking>();
    }

    // Start is called before the first frame update
    void Start()
    {
        if (condition == Condition.None)
        {
            end = 20;
        }
        else
        {
            end = 40;
        }

        for (int i = start; i <= end; i++)
        {
            numbers.Add(i);
        }

        while (numbers.Count > 0)
        {

            int index = UnityEngine.Random.Range(0, numbers.Count);

            effectNum.Add(numbers[index]);

            numbers.RemoveAt(index);
        }
        n = -1;

        if (!System.IO.Directory.Exists(folder + "/" + subject))
        {
            System.IO.Directory.CreateDirectory(folder + "/" + subject);
        }
        if (!System.IO.Directory.Exists(folder + "/" + subject + "/" + condition.ToString()))
        {
            System.IO.Directory.CreateDirectory(folder + "/" + subject + "/" + condition.ToString());
        }

        for (int i = start; i <= end; i++)
        {
            string s = i.ToString();
            string f = folder + "/" + subject + "/" + condition.ToString() + "/" + "SaveData" + s + ".csv";
            sw = new StreamWriter(f, false, Encoding.GetEncoding("Shift_JIS"));
            string[] s1 = { "n", "t", "x", "y", "z", "m" };
            string s2 = string.Join(",", s1);
            sw.WriteLine(s2);
            sw.Close();
        }

        string f2 = folder + "/" + subject + "/" + condition.ToString() + "/" + "TouchTarget.csv";
        sw = new StreamWriter(f2, false, Encoding.GetEncoding("Shift_JIS"));
        string[] s3 = { "N", "T1", "T2", "T3", "LR", "M", "PL" };
        string s4 = string.Join(",", s3);
        sw.WriteLine(s4);
        sw.Close();

        f2 = folder + "/" + subject + "/" + condition.ToString() + "/" + "StartPos.csv";
        sw = new StreamWriter(f2, false, Encoding.GetEncoding("Shift_JIS"));
        string[] s5 = { "x", "y", "z" };
        s4 = string.Join(",", s5);
        sw.WriteLine(s4);
        string[] s6 = { startPos.transform.position.x.ToString(), startPos.transform.position.y.ToString(), startPos.transform.position.z.ToString() };
        s4 = string.Join(",", s6);
        sw.WriteLine(s4);
        sw.Close();

        Debug.Log("Generate Files!");

        //distance = new float[targets.Length];
        preIDs = Enumerable.Repeat(-1, 30).ToArray();

        for(int i = 0; i < targets.Length; i++)
        {
            targets[i].GetComponent<Renderer>().material.color = new Color(1, 1, 1, 0.2f);
        }

        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return) && !enterFlag && TouchDecision2.instance.IsStartStay())
        {
            enterFlag = true;
            timeflag = true;
            //nt = Time.time;
            n++;

            if(touched==1)
            {
                /* targets[0].SetActive(false);
                 targets[1].SetActive(true);
                 targets[2].SetActive(true);*/
                targets[0].GetComponent<Collider>().enabled = false;
                targets[1].GetComponent<Collider>().enabled = true;
                targets[2].GetComponent<Collider>().enabled = true;
                targetMode = TargetMode.B;
            }
            else if (touched==2)
            {
                targets[0].GetComponent<Collider>().enabled = true;
                targets[1].GetComponent<Collider>().enabled = false;
                targets[2].GetComponent<Collider>().enabled = true;
                targetMode = TargetMode.C;
            }
            else if (touched == 3)
            {
                targets[0].GetComponent<Collider>().enabled = true;
                targets[1].GetComponent<Collider>().enabled = true;
                targets[2].GetComponent<Collider>().enabled = false;
                targetMode = TargetMode.A;
            }



            startPos.GetComponent<Renderer>().material.color = Color.blue;
        }
        if (enterFlag && TouchDecision2.instance.IsStartExit() && !countFlag)
        {
            nt = Time.time;
            countFlag = true;
        }
        if (TouchDecision2.instance.IsGoalEnter() && countFlag)
        {
            /*if (timeflag)
            {
                currentTime = 0;
            }
            else
            {
                currentTime += Time.deltaTime;
            }*/
            string s = n.ToString();
            string t1 = Convert.ToInt32(TouchDecision2.instance.IsTarget1Enter()).ToString();
            string t2 = Convert.ToInt32(TouchDecision2.instance.IsTarget2Enter()).ToString();
            string t3 = Convert.ToInt32(TouchDecision2.instance.IsTarget3Enter()).ToString();
            
            string m = targetMode.ToString();
            
            string f = folder + "/" + subject + "/" + condition.ToString() + "/" + "TouchTarget.csv";

            string LR;
            int lr;
            if (targetMode == TargetMode.A)
            {
                lr = Convert.ToInt32(TouchDecision2.instance.IsTarget1Enter());
            }
            else if (targetMode == TargetMode.B)
            {
                lr = Convert.ToInt32(TouchDecision2.instance.IsTarget2Enter());
            }
            else
            {
                lr = Convert.ToInt32(TouchDecision2.instance.IsTarget1Enter());
            }
            if (lr == 1) LR = "L";
            else LR = "R";

            string e;
            if (Preference() == 0)
            {
                e = "N";
            }
            else if (Preference()%2==1)
            {
                e = "L";
            }
            else if(Preference()%2==0)
            {
                e= "R";
            }
            else
            {
                e = "Z";
            }
            


            /*if (currentTime > span)
            {
                enterFlag = false;
            }*/
            enterFlag = false;
            countFlag = false;
            timeflag = false;

            if (TouchDecision2.instance.IsTarget1Enter()&&touched!=1)
            {
                touched = 1;
                sw = new StreamWriter(f, true, Encoding.GetEncoding("Shift_JIS"));
                string[] s1 = { s, t1, t2, t3, LR, m, e };
                string s2 = string.Join(",", s1);
                sw.WriteLine(s2);
                sw.Close();
            }
            else if(TouchDecision2.instance.IsTarget2Enter()&&touched!=2) 
            { 
                touched = 2;
                sw = new StreamWriter(f, true, Encoding.GetEncoding("Shift_JIS"));
                string[] s1 = { s, t1, t2, t3, LR, m, e };
                string s2 = string.Join(",", s1);
                sw.WriteLine(s2);
                sw.Close();
            }
            else if (TouchDecision2.instance.IsTarget3Enter()&&touched!=3)
            {
                touched = 3;
                sw = new StreamWriter(f, true, Encoding.GetEncoding("Shift_JIS"));
                string[] s1 = { s, t1, t2, t3, LR, m, e };
                string s2 = string.Join(",", s1);
                sw.WriteLine(s2);
                sw.Close();
            }

        }
        if (Input.GetKeyDown(KeyCode.LeftShift))
        {
            string s = effectNum[n].ToString();
            string f = folder + "/" + subject + "/" + condition.ToString() + "/" + "SaveData" + s + ".csv";
            sw = new StreamWriter(f, false, Encoding.GetEncoding("Shift_JIS"));
            string[] s1 = { "n", "t", "x", "y", "z", "m" };
            string s2 = string.Join(",", s1);
            sw.WriteLine(s2);
            sw.Close();


            n--;
            enterFlag = false;
            countFlag = false;

        }
        //Debug.Log("KEY:"+Input.GetKeyDown(KeyCode.Return));
        Debug.Log("FLAG:" + enterFlag);
        Debug.Log("N:" + n);
        Debug.Log("Pick:"+touched);
        //if (n != -1) Debug.Log("effect:" + effectNum[n]);

        //palm = customSkeleton.Bones[(int)OVRSkeleton.BoneId.Body_RightHandPalm].Transform.position;
        //palmPos = handTracking.GetPalm();
        if (handTracking == null)
        {
            Debug.LogError("handTracking is null");
        }
        else
        {
            palmPos = handTracking.GetPalm();
        }

        if (countFlag)
        {
            SaveData(n.ToString(), (Time.time - nt).ToString(), palmPos.x.ToString(), palmPos.y.ToString(), palmPos.z.ToString(), Preference().ToString());
        }
    }


    public void SaveData(string t1, string t2, string t3, string t4, string t5, string t6)
    {
        string s = effectNum[n].ToString();
        string f = folder + "/" + subject + "/" + condition.ToString() + "/" + "SaveData" + s + ".csv";
        sw = new StreamWriter(f, true, Encoding.GetEncoding("Shift_JIS"));
        string[] s1 = { t1, t2, t3, t4, t5, t6 };
        string s2 = string.Join(",", s1);
        sw.WriteLine(s2);
        sw.Close();
    }

    public int runNunber()
    {
        if (!enterFlag) return 2;
        int eff = effectNum[n];

        //エフェクト3種類，計60試行の場合
        /*if (eff <= end / 6) return 1;
        else if (eff <= end * 2 / 6) return 2;
        else if (eff <= end * 3 / 6) return 3;
        else return 0;*/

        //エフェクト2種類，各5パラ，各3試行，計60試行
        /*if (eff >= 30) return 0;
        else if (eff < 3 * 1) return 1;
        else if (eff < 3 * 2) return 2;
        else if (eff < 3 * 3) return 3;
        else if (eff < 3 * 4) return 4;
        else if (eff < 3 * 5) return 5;
        else if (eff < 3 * 6) return 6;
        else if (eff < 3 * 7) return 7;
        else if (eff < 3 * 8) return 8;
        else if (eff < 3 * 9) return 9;
        else if (eff < 3 * 10) return 10;
        else return 0;*/

        if (condition == Condition.None) return -1;
        else if (condition == Condition.Cond1)
        {
            if (eff <= end / 2) return 1;
            else return 0;
        }
        else
        {
            if (eff <= end / 2) return 2;
            else return 0;
        }
        


    }

    public int Preference()
    {
        /*if (!enterFlag) return 0;

        int eff = effectNum[n];*/
        int eff = 1;

        if(condition == Condition.None) return 0;
        else if (condition == Condition.Cond1)
        {
            if (eff % 2 == 0)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
        else if(condition == Condition.Cond2)
        {
            if (eff % 2 == 0)
            {
                return 3;
            }
            else
            {
                return 4;
            }
        }
        else if (condition == Condition.Cond3)
        {
            if (eff % 2 == 0)
            {
                return 5;
            }
            else
            {
                return 6;
            }
        }
        else if (condition == Condition.Cond4)
        {
            if (eff % 2 == 0)
            {
                return 7;
            }
            else
            {
                return 8;
            }
        }
        else
        {
            if (eff % 2 == 0)
            {
                return 9;
            }
            else
            {
                return 10;
            }
        }

    }

    public float judgeTarget()
    {
        Vector3 tip = handTracking.GetMiddleTip();
        float minimum = 100;
        float amp = 0;
        int id = -1;
        float dist;

        /*for (int i = 0; i < targets.Length; i++)
        {
            if (targets[i].activeSelf)
            {
                distance[i] = Vector3.Distance(tip, targets[i].transform.position);
                if (distance[i] < minimum)
                {
                    minimum = distance[i];
                    id = i;
                }
            }
        }*/

        for(int i = 0; i < targets.Length; i++)
        {
            if (i != touched-1)
            {
                dist = Vector3.Distance(tip, targets[i].transform.position);
                if (dist < minimum)
                {
                    minimum = dist;
                    id = i;
                }
            }
        }

        /* amp += amplitude[id];
         for (int i = 0; i < targets.Length; i++)
         {
             if (targets[i].activeSelf)
             {
                 amp += amplitude[i] * countID(i, preIDs);
             }

         }
         amp /= (preIDs.Length + 1);*/

        amp += SetAmplitude(id);
        for (int i = 0; i < targets.Length; i++)
        {
            if (targets[i].activeSelf)
            {
                amp += SetAmplitude(i) * countID(i, preIDs);
            }

        }
        amp /= (preIDs.Length + 1);


        for (int i = preIDs.Length - 1; i > 0; i--)
        {
            preIDs[i] = preIDs[i - 1];
        }
        preIDs[0] = id;

        /*Debug.Log("AMP:" + amp);
        Debug.Log(string.Join(", ", preIDs));*/
        return amp;
    }

    int countID(int id, int[] pre)
    {
        int count = 0;
        for (int i = 0; i < pre.Length; i++)
        {
            if (pre[i] == id) count++;
        }
        return count;
    }

    float SetAmplitude(int id)
    {
        int prf = Preference() % 2;
        /*if ((targetMode == TargetMode.A && prf == 0) || (targetMode == TargetMode.C && prf == 0)) return amplitudes[0, id];*/
        if ((targetMode == TargetMode.A && prf == 0) || (targetMode == TargetMode.C && prf == 0)) return amplitudes[2, id];
        else if ((targetMode == TargetMode.B && prf == 0) || (targetMode == TargetMode.A && prf == 1)) return amplitudes[1, id];
        else if ((targetMode == TargetMode.C && prf == 1) || (targetMode == TargetMode.B && prf == 1)) return amplitudes[2, id];
        else return 0;
    }

    public string GetFolder()
    {
        return folder;
    }

    public string GetSubject()
    {
        return subject;
    }

    public string GetCondition()
    {
        return condition.ToString();
    }
}

