using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;

public class Anchor : MonoBehaviour
{
    private OVRSpatialAnchor _sptialAnchor;
    private System.Guid _uuid;

    private void Awake()
    {
        _sptialAnchor=GetComponent<OVRSpatialAnchor>();
    }

    // Start is called before the first frame update
    private IEnumerator Start()
    {
        //Created‚É‚È‚é‚Ü‚Å‘Ò‚Â
        while (_sptialAnchor && !_sptialAnchor.Created)
        {
            yield return null;
        }

        if (_sptialAnchor)
        {
            _uuid = _sptialAnchor.Uuid;
            Debug.Log("Success:" + _uuid);
        }
        else
        {
            Debug.Log("Failed");
            Destroy(gameObject);
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
