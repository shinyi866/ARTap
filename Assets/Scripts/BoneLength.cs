using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoneLength : MonoBehaviour
{
    public int ChainLength = 12;
    public static float CompeleteLength;

    private Transform[] Bones;
    private float[] BonesLenght;

    private void Awake()
    {
        Init();
    }

    void Init()
    {
        Bones = new Transform[ChainLength + 1];
        BonesLenght = new float[ChainLength];

        var current = transform;
        for (var i = Bones.Length - 1; i >= 0; i--)
        {
            Bones[i] = current;

            if (i == Bones.Length - 1)
            {
                
            }
            else
            {
                // mid bone
                BonesLenght[i] = (Bones[i + 1].position - current.position).magnitude;
                CompeleteLength += BonesLenght[i];
            }

            current = current.parent;
        }
    }
}
