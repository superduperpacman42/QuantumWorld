using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityStandardAssets.CrossPlatformInput;

public class BlockScript : MonoBehaviour {

    private Vector3 target;
    public float speed = 1f;
    public int color;
    public Texture blue;
    public Texture red;
    public Texture purple;
    public Texture blue2;
    public Texture red2;
    public Texture purple2;
    public BlockScript entangled;
    public bool readyToEntangle = false;
    public int priority = 1; // high priority/bias -> less likely to happen
    private int startPriority; // high priority/bias -> less likely to happen
    public int bias = 0;
    public LevelupScript levelup;
    public bool checkState = false;
    private Vector3 startPos;
    private int startColor;

    // Behavior when passing through a gate: false = destroyed
    // Also behavior when selecting portal exit
    public bool redGate = false;
    public bool blueGate = false;
    public bool purpleGate = false;
    public int portal = 0;

    public bool redGate0;
    public bool blueGate0;
    public bool purpleGate0;
    public int portal0;
    public PortalScript redPortal;
    public PortalScript bluePortal;
    public PortalScript purplePortal;
    private int justTeleported = 0;

    // Use this for initialization
    void Start () {
        target = gameObject.transform.position;
        GetComponent<Renderer>().sharedMaterial.mainTexture.wrapMode = TextureWrapMode.Repeat;
        startPos = transform.position;
        startColor = color;
        redGate0 = redGate;
        blueGate0 = blueGate;
        purpleGate0 = purpleGate;
        portal0 = portal;
        startPriority = priority;
    }

    // Update is called once per frame
    void Update () {
        Vector3 d = target - gameObject.transform.position;
        if(d.magnitude > speed*Time.deltaTime) {
            if(d[0] > 0) {
                gameObject.transform.Translate(speed * Time.deltaTime, 0, 0);
            } else if(d[0] < 0) {
                gameObject.transform.Translate(-speed * Time.deltaTime, 0, 0);
            } else if (d[2] > 0) {
                gameObject.transform.Translate(0, 0, speed * Time.deltaTime);
            } else {
                gameObject.transform.Translate(0, 0, -speed * Time.deltaTime);
            }
        } else {
            gameObject.transform.position = target;
            if (justTeleported == 1) justTeleported = 0;
        }
        if (Input.GetKeyDown(KeyCode.Return))
        {
            reset();
        }
    }

    private void OnCollisionStay(Collision col)
    {
        if (col.gameObject.tag == "block" || col.gameObject.tag == "wall")
        {
            target[0] = Mathf.Round(gameObject.transform.position[0]);
            target[2] = Mathf.Round(gameObject.transform.position[2]);
            gameObject.transform.position = target;
        }
        if (col.gameObject.name == "Player" && target == gameObject.transform.position)
        {
            if (justTeleported == 2) justTeleported = 1;
            Vector3 d = col.gameObject.transform.position - gameObject.transform.position;
            if (Math.Abs(d[1]) > 1) return;
            if (Math.Abs(d[0]) > Math.Abs(d[2]))
            {
                if (d[0] > 0)
                {
                    target[0]--;
                }
                else
                {
                    target[0]++;
                }
            }
            else
            {
                if (d[2] > 0)
                {
                    target[2]--;
                }
                else
                {
                    target[2]++;
                }
            }
        }
    }

    private void OnTriggerStay(Collider col)
    {
        // Red gate
        if (col.tag == "redgate" && color == -1)
        {
            Kill();
        }
        else if (col.tag == "redgate" && color == 0)
        {
            if (entangled != null)
            {
                if (priority+bias < entangled.priority+entangled.bias)
                {
                    redGate = true;
                }
                entangled.color = redGate ? -1 : 1;
                entangled.GetComponent<Renderer>().material.SetTexture("_EmissionMap", redGate ? blue : red);
            }
            if (redGate)
            {
                color = 1;
                GetComponent<Renderer>().material.SetTexture("_EmissionMap", red);
                redGate = false;
                priority++;
            }
            else
            {
                if (entangled != null) entangled.priority++;
                Kill();
            }
        }

        // Blue gate
        else if (col.tag == "bluegate" && color == 1)
        {
            Kill();
        }
        else if (col.tag == "bluegate" && color == 0)
        {
            if (entangled != null)
            {
                if (priority-bias < entangled.priority-entangled.bias)
                {
                    blueGate = true;
                }
                entangled.color = blueGate ? 1 : -1;
                entangled.GetComponent<Renderer>().material.SetTexture("_EmissionMap", blueGate?red:blue);
            }
            if (blueGate)
            {
                color = -1;
                GetComponent<Renderer>().material.SetTexture("_EmissionMap", blue);
                blueGate = false;
                priority++;
            }
            else
            {
                if (entangled != null) entangled.priority++;
                Kill();
            }
        }

        // Purple gate
        else if (col.tag == "purplegate" && color != 0)
        {
            if (entangled != null)
            {
                if (priority < entangled.priority)
                {
                    purpleGate = true;
                }
                if (purpleGate) entangled.purpleGate = false; // Technically should turn green...
                else
                {
                    entangled.color = 0;
                    entangled.GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple);
                }
            }
            if (purpleGate)
            {
                color = 0;
                GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple);
                purpleGate = false;
            }
            else
            {
                if (entangled != null) entangled.priority++;
                Kill();
            }
        }

        // Goals
        else if (col.tag == "redgoal")
        {
            if (color == 1)
            {
                Kill();
                levelup.red--;
            }
            else return; // no effect
        }
        else if (col.tag == "bluegoal")
        {
            if (color == -1)
            {
                Kill();
                levelup.blue--;
            }
            else return; // no effect
        }
        else if (col.tag == "purplegoal")
        {
            if (color == 0)
            {
                Kill();
                levelup.purple--;
            }
            else return; // no effect
        }

        // Barrier
        else if (col.tag == "barrier")
        {
            Kill();
        }

        // Portals
        if (col.tag == "redportal" || col.tag == "blueportal" || col.tag == "purpleportal") return;

        readyToEntangle = false;
        entangle(null);
    }

    public void OnTriggerEnter(Collider col)
    {
        if (justTeleported>0)
        {
            return;
        }
        // Red portal
        if (col.tag == "redportal" && color == 1)
        {
            target = purplePortal.transform.position;
            target[1] = transform.position[1];
            transform.position = target;
            color = 0;
            GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple2);
            if (entangled != null)
            {
                entangled.color = 0;
                entangled.GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple2);
                GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple2);
            }
            else
            {
                GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple);
            }
            justTeleported = 2;
        }

        // Blue portal
        if (col.tag == "blueportal" && color == -1)
        {
            target = purplePortal.transform.position;
            target[1] = transform.position[1];
            transform.position = target;
            color = 0;
            if (entangled != null)
            {
                entangled.color = 0;
                entangled.GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple2);
                GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple2);
            }
            else
            {
                GetComponent<Renderer>().material.SetTexture("_EmissionMap", purple);
            }
            justTeleported = 2;
        }

        // Purple portal
        if (col.tag == "purpleportal" && color == 0)
        {
            if (entangled != null)
            {
                if (priority - bias < entangled.priority - entangled.bias)
                {
                    entangled.color = -1;
                    entangled.GetComponent<Renderer>().material.SetTexture("_EmissionMap", blue2);
                    target = bluePortal.transform.position;
                    target[1] = transform.position[1];
                    transform.position = target;
                    color = 1;
                    GetComponent<Renderer>().material.SetTexture("_EmissionMap", red2);
                }
                else
                {
                    entangled.color = 1;
                    entangled.GetComponent<Renderer>().material.SetTexture("_EmissionMap", red2);
                    target = redPortal.transform.position;
                    target[1] = transform.position[1];
                    transform.position = target;
                    color = -1;
                    GetComponent<Renderer>().material.SetTexture("_EmissionMap", blue2);
                }
            }
            else
            {
                if (portal==-1||(bias > 0&&portal==0))
                {
                    target = bluePortal.transform.position;
                    target[1] = transform.position[1];
                    transform.position = target;
                    color = -1;
                    GetComponent<Renderer>().material.SetTexture("_EmissionMap", blue);
                }
                else
                {
                    target = redPortal.transform.position;
                    target[1] = transform.position[1];
                    transform.position = target;
                    color = 1;
                    GetComponent<Renderer>().material.SetTexture("_EmissionMap", red);
                }
            }
            justTeleported = 2;
        }
    }

    public void reset()
    {
        transform.position = startPos;
        target = startPos;
        entangled = null;
        color = startColor;
        Texture c = color == 1 ? red : color == 0 ? purple : blue;
        GetComponent<Renderer>().material.SetTexture("_EmissionMap", c);
        redGate = redGate0;
        blueGate = blueGate0;
        purpleGate = purpleGate0;
        portal = portal0;
        priority = startPriority;
    }

    public void Kill()
    {
        gameObject.transform.position = new Vector3(0, -1, 0);
        target = new Vector3(0, -1, 0);
        entangle(null);
    }

    public void entangle(BlockScript block)
    {
        Texture c = color == 1 ? red : color == 0 ? purple : blue;
        if (entangled != null && block == null)
        {
            BlockScript temp = entangled;
            entangled = null;
            if (temp.entangled != null) {
                temp.entangle(null);
            }
            c = color == 1 ? red : color == 0 ? purple : blue;
        }
        else if (block != null)
        {
            if (entangled && entangled.entangled != null)
            {
                entangled.entangle(null);
            }
            entangled = block;
            if (block.entangled != this)
            {
                block.entangle(this);
            }
            c = color == 1 ? red2 : color == 0 ? purple2 : blue2;
        }
        GetComponent<Renderer>().material.SetTexture("_EmissionMap", c);
    }
}
