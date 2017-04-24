using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class PointerScript : MonoBehaviour
{

    public float delay = .5f;
    private float t;
    private bool moved;
    private Vector3 startPos;

    // Use this for initialization
    void Start()
    {
        t = Time.time;
        moved = false;
        startPos = gameObject.transform.position;
        gameObject.transform.position += new Vector3(1000,0,0);
    }

    // Update is called once per frame
    void Update()
    {
        if (CrossPlatformInputManager.GetAxis("Horizontal") != 0 ||
            CrossPlatformInputManager.GetAxis("Vertical") != 0 ||
            CrossPlatformInputManager.GetButtonDown("Jump") ||
            CrossPlatformInputManager.GetButtonDown("Submit") ||
            (Input.GetButton("Fire1")))
        {
            moved = true;
        }
        if (moved && Time.time - t > delay)
        {
            gameObject.transform.position = startPos;

        }
    }
}
