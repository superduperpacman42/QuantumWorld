using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartLevelScript : MonoBehaviour {

    public float delay = 4f;
    public GameObject title;
    public GameObject text;
    public GameObject background;
    public GameObject pointer;
    public Shoot shoot;
    private float t = 0;
    private bool done = false;
    private Vector3 startPos;
    private bool reallyDone = false;

    // Use this for initialization
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (done && Time.time - t > delay)
        {
            title.SetActive(false);
            text.SetActive(false);
            background.SetActive(false);
            if (!reallyDone)
            {
                pointer.transform.position = startPos;
                reallyDone = true;
                pointer.SetActive(true);
            }
        }
    }

    private void OnTriggerEnter(Collider col)
    {
        if (!done && col.tag == "player")
        {
            t = Time.time;
            title.SetActive(true);
            text.SetActive(true);
            background.SetActive(true);
            pointer.SetActive(false);
            done = true;
            startPos = pointer.transform.position;
            pointer.transform.position += new Vector3(1000, 0, 0);
        }
        if(col.tag == "player" && shoot.block!=null)
        {
            shoot.block.entangle(null);
            shoot.block = null;
        }
    }
}
