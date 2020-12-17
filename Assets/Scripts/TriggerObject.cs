using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerObject : MonoBehaviour
{
    void OnTriggerEnter(Collider target)
    {
        GameObject foodInMouth = GameObject.Find("BrachiosaurusTransform/BrachiosaurusPelvis/BrachiosaurusSpine1/BrachiosaurusSpine2/BrachiosaurusSpine3/BrachiosaurusRibcage/BrachiosaurusNeck1/BrachiosaurusNeck2/BrachiosaurusNeck3/BrachiosaurusNeck4/BrachiosaurusNeck5/BrachiosaurusNeck6/BrachiosaurusNeck7/BrachiosaurusNeck8/BrachiosaurusNeck9/BrachiosaurusNeck10/BrachiosaurusNeck11/BrachiosaurusHead/BrachiosaurusHeadBone/watertree_leaves1_lod0");

        if (target.tag == "Food")
        {
            FeedDinosaur.isEat = true;
            Destroy(target.gameObject);
            foodInMouth.SetActive(true);
            Debug.Log("eating");
        }
    }
}
