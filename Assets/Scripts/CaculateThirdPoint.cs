using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CaculateThirdPoint : MonoBehaviour
{
    public Transform t1;
    public Transform t2;
    public Transform MyPosition;
    public GameObject resultPosition;

    private Transform t3;

    void Start()
    {
        
    }

    void Update()
    {
        CaculatePoint();
    }

    void CaculatePoint()
    {
        var pos1 = t1.position;
        var pos2 = t2.position;

        float d1 = Vector3.Distance(pos1, MyPosition.position);
        float d2 = Vector3.Distance(pos2, MyPosition.position);

        float cx = (Mathf.Pow(d1, 2) - Mathf.Pow(d2, 2) + 1)/2;

        resultPosition.transform.position = new Vector3(cx,0,0);
        Debug.Log("cx: " + cx);
    }
}
