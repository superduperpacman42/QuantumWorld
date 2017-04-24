using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class OverlayScript : MonoBehaviour {

    public float delay = .5f;
    private float t;
    private bool moved;
    public GameObject next;
	
    // Use this for initialization
	void Start () {
        t = Time.time;
        moved = false;
    }

    // Update is called once per frame
    void Update() {
        if (Time.time - t > delay && CrossPlatformInputManager.GetAxis("Horizontal") != 0 ||
            CrossPlatformInputManager.GetAxis("Vertical") != 0 ||
            CrossPlatformInputManager.GetButtonDown("Jump") ||
            CrossPlatformInputManager.GetButtonDown("Submit") ||
            (Input.GetButton("Fire1")))
        { 
            moved = false;
            gameObject.SetActive(false);
            if (next != null) next.SetActive(true);
        }
        
    }
}
