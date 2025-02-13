using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using Unity.VisualScripting;
using UnityEngine;

public class AnchorManager : MonoBehaviour
{
    private OVRSpatialAnchor _spatialAnchor;
    private List<OVRSpatialAnchor> anchors;
    private Guid[] uuids;

    private async void CreateAnchor()
    {
        if (_spatialAnchor)
        {
            Destroy(_spatialAnchor);
        }
        //_spatialAnchor=gameObject.AddComponent<OVRSpatialAnchor>();
        _spatialAnchor = GetComponent<OVRSpatialAnchor>();

        await Wait4Completion(_spatialAnchor);
    }

    private async Task Wait4Completion(OVRSpatialAnchor anchor)
    {
        var timeout = Task.Delay(5000);
        while (_spatialAnchor && !_spatialAnchor.Created)
        {
            if (await Task.WhenAny(Task.Delay(100), timeout) == timeout)
            {
                Debug.LogError("Anchor creation timed out");
                return;
            }
        }
        if (_spatialAnchor) Debug.Log("Success Created!");
        else Debug.Log("Failed creation");
    }

    private async void DeleteAnchor()
    {
        if (!_spatialAnchor) return;

        
        await DeleteAnchorAsync(_spatialAnchor);
    }

    private async Task DeleteAnchorAsync(OVRSpatialAnchor anchor)
    {
        var result = await anchor.EraseAnchorAsync();
        if(result.Success)
        {
            Debug.Log("Delete Anchor");

            uuids = Array.Empty<Guid>();
            PlayerPrefs.SetString("Uuid", "");

            if(_spatialAnchor)
            {
                Destroy(_spatialAnchor);
            }
        }
        else
        {
            Debug.Log("Cannot delete");
        }

    }

    private async void SaveAnchor()
    {
        if(!_spatialAnchor) return;
        Debug.Log("Saving...");

        await SaveAnchorAsync();
    }

    private async Task SaveAnchorAsync()
    {
        anchors.Clear();
        anchors.Add(_spatialAnchor);

        var result=await OVRSpatialAnchor.SaveAnchorsAsync(anchors);
        if (result.Success)
        {
            Debug.Log("Saved Anchor");
            PlayerPrefs.SetString("Uuid", _spatialAnchor.Uuid.ToString());
            uuids = new Guid[1] { new Guid(_spatialAnchor.Uuid.ToString()) };
        }
        else
        {
            Debug.Log("Not Saved");
            return;
        }
    }

    private async void LoadAnchors()
    {
        if(uuids.Length == 0)
        {
            Debug.Log("No Anchor");
            return;
        }
        await LoadAnchorAsync();    
    }

    private async Task LoadAnchorAsync()
    {
        List<OVRSpatialAnchor.UnboundAnchor> unboundAnchors = new();
        var result = await OVRSpatialAnchor.LoadUnboundAnchorsAsync(uuids, unboundAnchors);

        if(!result.Success || unboundAnchors.Count == 0)
        {
            return;
        }

        if (unboundAnchors[0].Localized)
        {
            OnLocalized(unboundAnchors[0], true);
        }
        else if (!unboundAnchors[0].Localizing)
        {
            OnLocalized(unboundAnchors[0], await unboundAnchors[0].LocalizeAsync());
        }
    }

    private void OnLocalized(OVRSpatialAnchor.UnboundAnchor unboundAnchor,bool success)
    {
        if(!success)
        {
            Debug.Log("Can't Load");
            return ;
        }

        var pose = unboundAnchor.Pose;
        transform.SetPositionAndRotation(pose.position, pose.rotation);

        if (_spatialAnchor)
        {
            Destroy(_spatialAnchor);
        }
        _spatialAnchor = GetComponent<OVRSpatialAnchor>();

        unboundAnchor.BindTo(_spatialAnchor);
        Debug.Log("Load Success");
    }

    // Start is called before the first frame update
    void Start()
    {
        anchors = new();
        var savedUuid = PlayerPrefs.GetString("Uuid", "");

        if (savedUuid != "")
        {
            uuids = new Guid[1] { new Guid(savedUuid) };
            Debug.Log("Start load");
            LoadAnchors();
        }
        else
        {
            uuids = Array.Empty<Guid>();
            Debug.Log("Not load");
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.PrimaryIndexTrigger))
        {
            //transform.SetPositionAndRotation(HandTracking.instance.GetIndexTip(), HandTracking.instance.GetIndexTipRot());
            transform.SetPositionAndRotation(OVRInput.GetLocalControllerPosition(OVRInput.Controller.LHand), OVRInput.GetLocalControllerRotation(OVRInput.Controller.LHand));

            CreateAnchor();
        }
        else if (OVRInput.GetDown(OVRInput.RawButton.X))
        {
            SaveAnchor();
        }
        else if(OVRInput.GetDown(OVRInput.RawButton.Y))
        {
            DeleteAnchor();
        }
    }
}
