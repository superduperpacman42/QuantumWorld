using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelupScript : MonoBehaviour {

    public int red = 0;
    public int blue = 0;
    public int purple = 0;
    public float speed = 1f;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (red+blue+purple==0)
        {
            transform.position += new Vector3(0, -speed*Time.deltaTime, 0);
        }
        if (transform.position[1] < -20) Destroy(gameObject);
	}
}
