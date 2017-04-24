using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityStandardAssets.Characters.FirstPerson;

public class PauseScript : MonoBehaviour {

    public FirstPersonController player;
    private bool done = false;
    private float t = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (Time.time - t > 2 && done)
        {
            SceneManager.LoadScene("game");
        }
    }

    private void OnTriggerEnter(Collider col)
    {
        if (!done && col.tag == "player")
        {
            player.stopped = true;
            done = true;
            t = Time.time;
        }
    }
}
