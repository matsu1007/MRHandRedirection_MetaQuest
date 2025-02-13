using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandTrackCut : MonoBehaviour
{
    [SerializeField]
    private OVRSkeleton skeleton;
    [SerializeField]
    private OVRHand hand;
    public GameObject[] handObj;
    Vector3[] jointsPos;
    Quaternion[] jointsRot;
    Vector3 forearm;

    int n = 21;

    /*[SerializeField]
    private GameObject cube1, cube2;*/

    // Start is called before the first frame update
    void Start()
    {
        jointsPos = new Vector3[n];
        jointsRot = new Quaternion[n];
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(hand.IsTracked);
        if (hand.IsTracked)
        {
            Debug.Log(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_WristRoot].Transform.rotation);
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




            forearm = skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_ForearmStub].Transform.position;

            Debug.Log(skeleton.Bones[(int)OVRSkeleton.BoneId.Hand_ForearmStub].Transform.rotation);


            for (int j = 0; j < jointsPos.Length; j++)
            {
                handObj[j].transform.position = jointsPos[j];
                handObj[j].transform.rotation = jointsRot[j];
                handObj[j].transform.Rotate(0, 0, 180f);
            }

            

            /*cube1.transform.position = joints[0].transform.position;
            cube2.transform.position = forearm.transform.position;
            cube2.GetComponent<Renderer>().material.color = Color.red;*/
        }




    }
}
