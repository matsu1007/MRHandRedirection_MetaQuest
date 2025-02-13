using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PotentialField : MonoBehaviour
{
    [SerializeField]
    GameObject[] obsts;

    [SerializeField]
    float[] weightObst;

    float potentialMax = 1;
    float potentialMin = -1;

    float delta = 0.001f;
    [SerializeField] float cnst = 0.01f;

    [SerializeField]
    GameObject start;

    [SerializeField]
    float pow;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public float calPot(float x, float z)
    {
        float tmpPot = 0;
        float obstPot;

        for (int i = 0; i < obsts.Length; i++)
        {
            //obstPot = 1 / Mathf.Sqrt(Mathf.Pow((x - obsts[i].transform.position.x) * 100, 2) + Mathf.Pow((z - obsts[i].transform.position.z) * 100, 2));
            obstPot = 1 / Mathf.Pow(Mathf.Pow((x - obsts[i].transform.position.x) * 100, 2) + Mathf.Pow((z - obsts[i].transform.position.z) * 100, 2), pow);
            //if (obstPot > potentialMax) obstPot = potentialMax;
            tmpPot += obstPot * weightObst[i];

            //Debug.Log(obstPot);
        }

        return tmpPot;
    }

    public Vector2 calGrad(Vector3 npos)
    {
        float vx, vz, v;
        vx = (calPot(npos.x + delta, npos.z) - calPot(npos.x, npos.z)) / delta;
        vz = (calPot(npos.x, npos.z + delta) - calPot(npos.x, npos.z)) / delta;
        //Debug.Log(vx);
        v = Mathf.Sqrt(vx * vx + vz * vz);
        /*vx /= v / cnst;
        vz /= v / cnst;*/
        vx *= cnst;
        vz *= cnst;
        //Debug.Log(vx);
        //Debug.Log(v);
        return new Vector2(vx, vz);
    }

    public Vector2 calGrav(Vector3 npos)
    {
        Vector2 tmpGrav = new Vector2(0, 0);
        float obstGrav;
        Vector2 dif;

        for (int i = 0; i < obsts.Length; i++)
        {
            obstGrav = 1 / (Mathf.Pow((npos.x - obsts[i].transform.position.x)*100, 2) + Mathf.Pow((npos.z - obsts[i].transform.position.z)*100, 2));
            dif = new Vector2(obsts[i].transform.position.x - npos.x, obsts[i].transform.position.z - npos.z);
            dif = dif.normalized;
            tmpGrav += obstGrav * dif * weightObst[i];
        }
        return tmpGrav * cnst;
    }

}
