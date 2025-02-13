using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;
using static Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetrics;

public class HandTracking : MonoBehaviour
{
    [SerializeField]
    private OVRSkeleton skeleton;
    [SerializeField]
    private OVRHand hand;
    public GameObject[] handObj;
    Transform[] joints;
    Transform forearm;
    Vector3 armDir;
    /*[SerializeField]
    float rx, ry, rz;*/
    Vector3[] jointsPos, _jointsPos;
    Quaternion[] jointsRot,_jointsRot;
    Vector3[] jointsRePos;

    int n = 27;

    private OVRBody body;
    private OVRCustomSkeleton customSkeleton;
    Quaternion armRot;
    Vector3 armPos;

    [SerializeField]
    private GameObject cube1, cube2;

    [SerializeField]
    private int t;

    List<Vector3>[] posList;
    List<Quaternion>[] rotList;
    ///parameter
    [SerializeField] int delay;
    int _delay;

    [SerializeField] float range = 0;
    ///parameter
    [SerializeField] float cp = 1;
    [SerializeField] float k = 1, k2 = 1;
    [SerializeField] float mid = 0;

    [SerializeField] bool delayFlag, displaceFlag, transFlag, fractureFlag, barrierFlag, sizeFlag, displaceGradFlag, lightFlag, translucentFlag, transRevFlag;

    [SerializeField]
    [Range(0, 1)] float alpha;
    [SerializeField]
    GameObject handObject;

    [SerializeField]
    Vector3 spos;
    [SerializeField]
    Vector3 gpos;

    

    public enum ExpMode
    {
        None,
        R10,
        R20,
        L10,
        L20,
    }

    [SerializeField]public ExpMode expMode;

    [SerializeField]
    Material _material;

    [SerializeField]
    float ca, cb, cc;

    [SerializeField]
    GameObject vhand;

    PotentialField potentialField;

    Vector2 tmpGrad, preGrad;

    [SerializeField]
    float thd;

    static public HandTracking instance;

    [SerializeField] GameObject slight;
    float LIntensity;

    public void Awake()
    {
        if (instance == null) instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        jointsPos = new Vector3[n];
        _jointsPos = new Vector3[n];
        jointsRot = new Quaternion[n];
        _jointsRot = new Quaternion[n];
        jointsRePos = new Vector3[n];

        posList = new List<Vector3>[n];
        rotList = new List<Quaternion>[n];

        for (int i = 0; i < n; i++)
        {
            posList[i] = new List<Vector3>();
            rotList[i] = new List<Quaternion>();
        }

        body =GetComponent<OVRBody>();
        customSkeleton = GetComponent<OVRCustomSkeleton>();

        potentialField = GetComponent<PotentialField>();


        string cond = ExpManager2.instance.GetCondition();
        if (cond == "Cond2" || cond == "Cond3" || cond == "Cond4")
        {
            _material.SetFloat("_Mode", 2);
            _material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
            _material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
            _material.SetInt("_ZWrite", 0);
            _material.DisableKeyword("_ALPHATEST_ON");
            _material.EnableKeyword("_ALPHABLEND_ON");
            _material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        }
        else
        {
            _material.SetOverrideTag("RenderType", "");
            _material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
            _material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
            _material.SetInt("_ZWrite", 1);
            _material.DisableKeyword("_ALPHATEST_ON");
            _material.DisableKeyword("_ALPHABLEND_ON");
            _material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        }

        if (cond == "Cond5")
        {
            slight.GetComponent<Light>().intensity = 1.5f;

        }
        else
        {
            slight.GetComponent<Light>().intensity = 1;
        }

        Debug.Log("Start!");
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(hand.IsTracked);
        if (hand.IsTracked) {
            //Debug.Log(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_WristRoot].Transform.position);
            int i = 0;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_WristRoot].Transform.rotation;//0
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_WristRoot].Transform.position;
            //joints[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Thumb0].Transform;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Thumb1].Transform.rotation;//1
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Thumb1].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Thumb2].Transform.rotation;//2
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Thumb2].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Thumb3].Transform.rotation;//3
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Thumb3].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_ThumbTip].Transform.rotation;//4
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_ThumbTip].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Index1].Transform.rotation;//5
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Index1].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Index2].Transform.rotation;//6
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Index2].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Index3].Transform.rotation;//7
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Index3].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.rotation;//8
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Middle1].Transform.rotation;//9
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Middle1].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Middle2].Transform.rotation;//10
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Middle2].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Middle3].Transform.rotation;//11
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Middle3].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_MiddleTip].Transform.rotation;//12
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_MiddleTip].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Ring1].Transform.rotation;//13
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Ring1].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Ring2].Transform.rotation;//14
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Ring2].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Ring3].Transform.rotation;//15
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Ring3].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_RingTip].Transform.rotation;//16
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_RingTip].Transform.position;
            //joints[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Pinky0].Transform;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Pinky1].Transform.rotation;//17
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Pinky1].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Pinky2].Transform.rotation;//18
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Pinky2].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Pinky3].Transform.rotation;//19
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_Pinky3].Transform.position;
            jointsRot[i] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_PinkyTip].Transform.rotation;//20
            jointsPos[i++] = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_PinkyTip].Transform.position;
            
            forearm = customSkeleton.Bones[(int)OVRSkeleton.BoneId.Body_RightArmLower].Transform;
            armPos = customSkeleton.Bones[(int)OVRSkeleton.BoneId.Body_RightHandWristTwist].Transform.position;
            armDir = armPos - jointsPos[0];
            armRot = customSkeleton.Bones[(int)OVRSkeleton.BoneId.Body_RightHandWristTwist].Transform.rotation;

            //Debug.Log(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_ForearmStub].Transform.position);

            Vector3 refPos = cube1.transform.position;
            spos = cube1.transform.position;
            gpos = cube2.transform.position;


            jointsRot[i] = armRot;
            jointsPos[i++] = internalDivide(jointsPos[0], forearm.position, 6, 0);
            jointsRot[i] = armRot;
            jointsPos[i++] = internalDivide(jointsPos[0], forearm.position, 5, 1);
            jointsRot[i] = armRot;
            jointsPos[i++] = internalDivide(jointsPos[0], forearm.position, 4, 2);
            jointsRot[i] = armRot;
            jointsPos[i++] = internalDivide(jointsPos[0], forearm.position, 3, 3);
            jointsRot[i] = armRot;
            jointsPos[i++] = internalDivide(jointsPos[0], forearm.position, 2, 4);
            jointsRot[i] = armRot;
            jointsPos[i++] = internalDivide(jointsPos[0], forearm.position, 1, 5);

            ////////////////////////////////////////////////////////////////////
            ///
            jointsRePos[0] = jointsPos[0];
            for (int j = 0; j < 5; j++)
            {
                jointsRePos[4 * j + 1] = jointsPos[4 * j + 1] - jointsPos[0];
                jointsRePos[4 * j + 2] = jointsPos[4 * j + 2] - jointsPos[4 * j + 1];
                jointsRePos[4 * j + 3] = jointsPos[4 * j + 3] - jointsPos[4 * j + 2];
                jointsRePos[4 * j + 4] = jointsPos[4 * j + 4] - jointsPos[4 * j + 3];
            }


            if (this.gameObject.GetComponent<expManager>().enabled == true) runEffect(expManager.instance.runNunber());
            else if (this.gameObject.GetComponent<expManager>().enabled == true) runEffect(PreExpManager.instance.runNunber());
            else if (this.gameObject.GetComponent<ExpManager2>().enabled == true) RunEffect2(ExpManager2.instance.Preference());

            //////////////DELAY//////////////////////////////////////////
            if (delayFlag)
            {
                _delay = delay + 8;
            }
            else
            {
                _delay = 8;
            }

            for (int j = 0; j < jointsPos.Length; j++)
            {
                /*if (!delayFlag)
                {
                    _jointsPos[j] = jointsPos[j];
                    _jointsRot[j] = jointsRot[j];
                    posList[j].Clear();
                    rotList[j].Clear();
                }
                else
                {
                    posList[j].Add(jointsPos[j]);
                    rotList[j].Add(jointsRot[j]);

                    _jointsPos[j] = weightedMean(posList[j], _delay);
                    _jointsRot[j] = rotList[j][serchNearest(_jointsPos[j], posList[j], _delay)];
                }*/

                posList[j].Add(jointsPos[j]);
                rotList[j].Add(jointsRot[j]);

                _jointsPos[j] = weightedMean(posList[j], _delay);
                _jointsRot[j] = rotList[j][serchNearest(_jointsPos[j], posList[j], _delay)];


                if (posList[j].Count > _delay * 2)
                {
                    posList[j].RemoveAt(0);
                    rotList[j].RemoveAt(0);
                }
            }
            /////////////////////////////////////////////////////////////

            for (int j = 0; j < _jointsPos.Length; j++)
            {
                handObj[j].transform.position = _jointsPos[j];
                handObj[j].transform.rotation = _jointsRot[j];
                if (j < 21) handObj[j].transform.Rotate(0, 0, 180f);
                else handObj[j].transform.Rotate(0, 180f, 0);
            }

            //////////DISPLACE////////////////////////////
            if (displaceFlag)
            {
                handObj[21].transform.position = displaceHandSine(handObj[21].transform.position, skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position);
                handObj[0].transform.position = displaceHandSine(handObj[0].transform.position, skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position);
            }
            //////////////////////////////////////////////
            //////////DISPLACE_GRAD///////////////////////
            if (displaceGradFlag)
            {
                tmpGrad = potentialField.calGrad(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position);
                if (tmpGrad.magnitude >= thd)
                {
                    tmpGrad = tmpGrad.normalized * thd;
                }
                if (!TouchDecision.instance.IsColliderStay())
                {
                    handObj[21].transform.position = displaceHandGrad(handObj[21].transform.position, skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position, tmpGrad);
                    handObj[0].transform.position = displaceHandGrad(handObj[0].transform.position, skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position, tmpGrad);
                    preGrad = tmpGrad;
                }
                else
                {
                    handObj[21].transform.position = displaceHandGrad(handObj[21].transform.position, skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position, preGrad);
                    handObj[0].transform.position = displaceHandGrad(handObj[0].transform.position, skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position, preGrad);
                }
                Debug.Log(tmpGrad.magnitude);
            }
            //////////////////////////////////////////////

            //////////ALPHA////////////////////////////////
            ///
            if (transFlag) alpha = _calcAlpha(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position);
            else if (transRevFlag) alpha = 1 - __calcAlpha(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position);
            else if (ExpManager2.instance.GetCondition() == "Cond4") alpha = 0.6f;
            else if (ExpManager2.instance.GetCondition() == "Cond2") alpha = 0;
            else alpha = 1;
            //handObject.GetComponent<Renderer>().material.SetFloat("_Alpha", alpha);

            _material.SetColor("_Color", new Color(1.0f, 1.0f, 1.0f, alpha));
            //Debug.Log(alpha);
            /*if (alpha > 0.95) handObject.GetComponent<Renderer>().material.shader = Shader.Find("Standard");
            else handObject.GetComponent<Renderer>().material.shader = Shader.Find("Custom/MyLeapHandShader");*/


            ///////////////////////////////////////////////
            if (fractureFlag)
            {
                handObj[0].transform.Rotate(calcFractureAngle(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position), 0, 0);
            }
            ///////////////////////////////////////////////
            ///
            if (barrierFlag)
            {
                if (barrierFunc(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position) >= 0)
                {
                    handObj[21].transform.position = calcBarrierPos(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position, handObj[21].transform.position);
                    handObj[0].transform.position = calcBarrierPos(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position, handObj[0].transform.position);
                }
            }
            /////////////////////////////////////////////////
            ///
            if(sizeFlag)
            {
                sizeEffect(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position);
            }
            /////////////////////////////////////////////////////
            ///
            
            


            /*cube1.transform.position = internalDivide(jointsPos[0], forearm.position, 6-t, t);
            cube2.transform.position = customSkeleton.Bones[(int)OVRSkeleton.BoneId.Body_RightHandWristTwist].Transform.position;
            cube2.GetComponent<Renderer>().material.color = Color.red;*/
            /*cube1.transform.position = joints[0].transform.position;
            cube2.transform.position = forearm.transform.position;
            cube2.GetComponent<Renderer>().material.color=Color.red;*/

            
        }




    }

    public Vector3 GetPalm()
    {
        //return customSkeleton.Bones[(int)OVRSkeleton.BoneId.Body_RightHandPalm].Transform.position;
        return customSkeleton.Bones[(int)OVRSkeleton.BoneId.Body_RightHandIndexTip].Transform.position;
    }

    public Vector3 GetIndexTip()
    {
        return skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.position;
    }

    public Quaternion GetIndexTipRot()
    {
        return skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_IndexTip].Transform.rotation;
    }

    public Vector3 GetMiddleTip()
    {
        return skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_MiddleTip].Transform.position;
    }

    private Vector3 internalDivide(Vector3 left, Vector3 right,int a,int b)
    {
        return (b * left + a * right) / (a + b);
    }

    Vector3 weightedMean(List<Vector3> list, int d)
    {
        int n = list.Count;
        Vector3 sum = Vector3.zero;
        if (n < d) d = n;
        for (int i = 0; i < d; i++)
        {
            sum += list[n - i - 1];
        }
        sum /= d;
        return sum;
    }

    int serchNearest(Vector3 refp, List<Vector3> list, int d)
    {
        int n = list.Count - 1;
        if (n < d) d = n;
        float min = Vector3.SqrMagnitude(refp - list[n]);
        int minidx = n;
        float calc;
        for (int i = 1; i < d; i++)
        {
            if (min > (calc = Vector3.SqrMagnitude(refp - list[n - i])))
            {
                min = calc;
                minidx = n - i;
            }
        }
        return minidx;
    }

    Vector3 _displaceHand(Vector3 wrist, Vector3 npos, Vector3 refp)
    {
        float d = Vector3.Distance(npos, refp);
        if (d < range && d > range - mid)
        {
            wrist += new Vector3(0, 1, 0) * (float)Math.Pow((range - d) / mid, k) * cp;
            //Debug.Log(Math.Pow((range - d) / mid, k));
        }
        else if (d <= range - mid)
        {
            wrist += new Vector3(0, 1, 0) * (float)Math.Pow(d / (range - mid), k) * cp;
            //Debug.Log(Math.Pow(d / (range - mid), k));
            
        }
        Debug.Log(d);
        return wrist;
    }

    Vector3 __displaceHand(Vector3 wrist, Vector3 npos)
    {
        float d;
        //d = (gpos-(npos-spos)).z;
        d = (npos - spos).z - 0.015f;
        /*if (d < range && d > mid)
        {
            wrist += new Vector3(1, 0, 0) * (float)Math.Pow((range - d) / (range - mid), k2) * cp;
         
        }
        else if (d <= mid && d >= 0)
        {
            wrist += new Vector3(1, 0, 0) * (float)Math.Pow(d / mid, k) * cp;
            

        }*/
        if (d <= mid+0.02 && d >= 0) wrist += new Vector3(1, 0, 0) * (float)Math.Pow(d / mid, k) * cp;
        Debug.Log(d);
        return wrist;
    }

    Vector3 displaceHandGrad(Vector3 wrist, Vector3 npos,Vector2 grad)
    {
        float d;
        d = (npos - spos).z - 0.015f;

        /*if(d <= mid+0.02 &&d >= 0)
        {
            wrist += new Vector3(grad.x, 0, grad.y);
        }*/
        wrist += new Vector3(grad.x, 0, grad.y);
        //Debug.Log(grad);
        return wrist;
    }

    Vector3 displaceHandSine(Vector3 wrist,Vector3 npos)
    {
        float d, dz, s;
        s = 0.02f;
        dz = (npos - spos).z - 0.015f;
        d = Vector3.Distance(npos, spos) - 0.015f;
        if (d <= mid + s && d >= 0.02 && dz>0) wrist += new Vector3(1, 0, 0) * (float)Math.Sin(((d-s) / mid) * Math.PI) * cp * ExpManager2.instance.judgeTarget();
        return wrist;
    }

    float calcFractureAngle(Vector3 npos)
    {
        float a, d, s;
        s = 0.02f;
        d = (npos - spos).z - 0.015f+s;
        if (d <= mid + s && d >= 0) a = (float)Math.Pow(d / mid, k) * 45;
        else a = 0;
        Debug.Log("ANGLE"+a/45);
        return a;
    }
    

    float calcAlpha(Vector3 npos, Vector3 rpos)
    {
        float d;
        if ((d = Vector3.SqrMagnitude(npos - rpos)) < range)
        {
            return (float)Math.Pow((range - d) / range, 1);
        }
        else return 0;
    }

    float _calcAlpha(Vector3 npos)
    {
        float d, dz, s, a;
        s = 0.02f;
        dz = (npos - spos).z - 0.015f;
        d = Vector3.Distance(npos, spos) - 0.015f;
        if (d <= mid + s && d >= 0.02 && dz > 0) a = (float)Math.Pow((d - s) / mid, k) * ExpManager2.instance.judgeTarget();
        else a = 0;
        Debug.Log("ALPHA"+a);
        return a;
    }

    float __calcAlpha(Vector3 npos)
    {
        float d, dz, s, a;
        s = 0.02f;
        dz = (npos - spos).z - 0.015f;
        d = Vector3.Distance(npos, spos) - 0.015f;
        if (d <= mid + s && d >= 0.02 && dz > 0) a = (float)Math.Pow((d - s) / mid, k);
        else a = 0;
        Debug.Log("ALPHA" + a);
        return a;
    }

    float barrierFunc(Vector3 npos)
    {
        return ca * npos.x + cb * npos.z + cc;
    }

    Vector3 calcBarrierPos(Vector3 npos,Vector3 palm)
    {
        return new Vector3(((-cc - cb * npos.z) / ca) - npos.x, 0, 0) + palm; 
    }

    void sizeEffect(Vector3 npos)
    {
        float d;
        d = (npos - spos).z - 0.015f;
        if (d <= mid + 0.02 && d >= 0) vhand.transform.localScale = Vector3.one * (float)Math.Pow(d / mid, k);
        else vhand.transform.localScale = Vector3.one;
    }

    void runEffect(int effect)
    {
        switch (effect)
        {
            case -1:
                //break;
            case 0:
                delayFlag=false;
                displaceFlag=false;
                transFlag = false;
                break;
            case 1:
                delayFlag=false;
                displaceFlag=true;
                transFlag = false;
                cp = -0.1f;
                break;
            case 2:
                delayFlag=false;
                displaceFlag=true;
                transFlag = false;
                cp = 0.1f;
                break;
            case 3:
                delayFlag=false;
                displaceFlag=true;
                transFlag = true;
                cp = -0.1f;
                break;
            case 4:
                delayFlag = false;
                displaceFlag = true;
                transFlag = true;
                cp = 0.1f;
                break;
            case 5:
                delayFlag = false;
                displaceFlag = true;
                cp = 0.1f;
                break;
            case 6:
                delayFlag = true;
                displaceFlag = false;
                delay = 10;
                break;
            case 7:
                delayFlag = true;
                displaceFlag = false;
                delay = 20;
                break;
            case 8:
                delayFlag = true;
                displaceFlag = false;
                delay = 30;
                break;
            case 9:
                delayFlag = true;
                displaceFlag = false;
                delay = 40;
                break;
            case 10:
                delayFlag = true;
                displaceFlag = false;
                delay = 50;
                break;
        }
    }

    void RunEffect2(int eff)
    {
        Debug.Log("EFFECT:"+eff);
        switch(eff)
        {
            case 0:
                displaceFlag = false;
                transFlag = false;
                transRevFlag = false;
                lightFlag = false;
                break;
            case 1:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = false;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 2:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = false;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 3:
                displaceFlag = true;
                transFlag = true;
                transRevFlag = false;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 4:
                displaceFlag = true;
                transFlag = true;
                transRevFlag = false;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 5:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = true;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 6:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = true;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 7:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = false;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 8:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = false;
                lightFlag = false;
                cp = -0.1f;
                break;
            case 9:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = false;
                lightFlag = true;
                cp = -0.1f;
                break;
            case 10:
                displaceFlag = true;
                transFlag = false;
                transRevFlag = false;
                lightFlag = true;
                cp = -0.1f;
                break;
        }
    }

}
