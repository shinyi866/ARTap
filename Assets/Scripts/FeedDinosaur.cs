using System.Collections;
using System.Collections.Generic;
using RootMotion.FinalIK;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

public class FeedDinosaur : MonoBehaviour
{
    //public Animator anim;
    //public CharacterController controller;
    public Text txt;
    public static bool isEat;

    private Transform _topBone;
    private Transform Target;

    //private Transform Targettransform;
    private ARTrackedImageManager ARTrackedImage;
    private ARTrackedImage trackImage;

    private float CompeleteLength;
    private bool isSetWeight;
    private bool needWalk;
    private float ccidWeight = 0.0f;

    private void Awake()
    {
        ARTrackedImage = GetComponent<ARTrackedImageManager>();
    }

    void OnEnable()
    {
        ARTrackedImage.trackedImagesChanged += OnTrackedImagesStart;
    }

    void OnDisable()
    {
        ARTrackedImage.trackedImagesChanged -= OnTrackedImagesStart;
    }

    void FindTopBone()
    {
        if (ARTapToPlaceObject.spawnedObject == null)
            return;

        Transform topBone = ARTapToPlaceObject.spawnedObject.transform.Find("BrachiosaurusTransform/BrachiosaurusPelvis/BrachiosaurusSpine1/BrachiosaurusSpine2/BrachiosaurusSpine3/BrachiosaurusRibcage/BrachiosaurusNeck1/BrachiosaurusNeck2/BrachiosaurusNeck3/BrachiosaurusNeck4/BrachiosaurusNeck5/BrachiosaurusNeck6/BrachiosaurusNeck7/BrachiosaurusNeck8/BrachiosaurusNeck9/BrachiosaurusNeck10/BrachiosaurusNeck11/BrachiosaurusHead/BrachiosaurusHeadBone/Bone");

        if (topBone != null)
        {
            _topBone = topBone;
            Debug.Log("Find");
        }
        else
            Debug.Log("Don not Find");
    }

    bool TargetDirection()
    {
        FindTopBone();
        CompeleteLength = BoneLength.CompeleteLength - 0.35f;

        if (_topBone != null && (Target.position - _topBone.position).sqrMagnitude > CompeleteLength * CompeleteLength)
            return true;
        else
            return false;
    }

    void OnTrackedImagesStart(ARTrackedImagesChangedEventArgs eventArgs)
    {

        foreach (ARTrackedImage newImage in eventArgs.added)
        {
            txt.text = newImage.referenceImage.name;
            trackImage = newImage;
            Target = newImage.gameObject.transform;
        }        

        if(ARTapToPlaceObject.spawnedObject != null)
        {
            GameObject ARobject = ARTapToPlaceObject.spawnedObject;
            ARobject.GetComponent<CCDIK>().solver.target = Target;

            needWalk = TargetDirection();

            if(needWalk)
            {
                ARobject.GetComponent<Transform>().rotation = Quaternion.LookRotation(Target.position);
                ARobject.GetComponent<Animator>().SetBool("walk", true);
                if (ARobject.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length > ARobject.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).normalizedTime)
                    isSetWeight = true;
            }
            else
            {
                isSetWeight = true;
            }
            txt.text = "!NULL";

        }
    }

    private void LateUpdate()
    {
        if (ARTapToPlaceObject.spawnedObject == null)
            return;
        
        if (isSetWeight && ccidWeight < 0.3f)
        {
            ccidWeight += Time.deltaTime * 0.05f;
            Debug.Log("ccidWeight1  " + ccidWeight);
            GameObject ARobject = ARTapToPlaceObject.spawnedObject;
            ARobject.GetComponent<CCDIK>().solver.SetIKPositionWeight(ccidWeight);
        }
        else
        {
            isSetWeight = false;

            GameObject ARobject = ARTapToPlaceObject.spawnedObject;

            if (isEat)
            {
                ARTapToPlaceObject.spawnedObject.GetComponent<CCDIK>().solver.target = null;
                ARobject.GetComponent<Animator>().SetBool("walk", false);
                txt.text = "eatting0 " + ccidWeight.ToString();

                if (ccidWeight > 0.0f)
                {
                    ccidWeight -= Time.deltaTime * 0.05f;
                    ARobject.GetComponent<CCDIK>().solver.SetIKPositionWeight(ccidWeight);
                    txt.text = "eatting1  " + ccidWeight.ToString();
                    Debug.Log("ccidWeight2  " + ccidWeight);
                }
                else
                {
                    trackImage.destroyOnRemoval = true;
                    isEat = false;
                    txt.text = "eatting End  " + ccidWeight.ToString();
                }
            }
        }

        if(Input.GetKeyDown(KeyCode.L))
        {
            isSetWeight = true;
        }

        if (Input.GetKeyDown(KeyCode.K))
        {
            GameObject ARobject = ARTapToPlaceObject.spawnedObject;
            ARobject.GetComponent<Animator>().SetBool("walk", true);
        }

    }

}
