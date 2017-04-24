using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Shoot : MonoBehaviour
{
    public float weaponRange = 500f;
    public Transform player;

    public Camera fpsCam;
    private LineRenderer laserLine;
    private float nextFire;
    private Vector3 direction;
    public BlockScript block;
    private BlockScript[] lastEntangled = new BlockScript[2];

    void Start()
    {
        laserLine = GetComponent<LineRenderer>();
        fpsCam = GetComponentInParent<Camera>();
        player = transform;
    }


    void Update()
    {
        if ((Input.GetButton("Fire1") || Input.GetButton("Fire2")))
        {
            Vector3 rayOrigin = player.transform.position+new Vector3(0.0f,.75f, 0.0f);

            RaycastHit hit;

            laserLine.SetPosition(0, rayOrigin - new Vector3(0.25f, .75f, 0.0f));
            direction = fpsCam.transform.rotation.eulerAngles;
            direction[0] *= 2;
            if (direction[0] <= -90) direction[0] += 360; 
            direction = Quaternion.Euler(direction)*(new Vector3(0,0,1));

            if (Physics.Raycast(rayOrigin, direction, out hit, weaponRange))
            {
                laserLine.SetPosition(1, hit.point);
                if (hit.collider.GetComponent<BlockScript>() != null)
                {
                    BlockScript block2 = hit.collider.GetComponent<BlockScript>();
                    if (block!=null&&!block.readyToEntangle)
                    {
                        block = null;
                    }
                    if (block!=null && block!=block2 && (block2.color+block.color)%2==0) // 2nd block, not entangled yet, right color
                    {
                        block.entangle(block2);
                        lastEntangled[0] = block;
                        lastEntangled[1] = block2;
                        block.readyToEntangle = false;
                        block = null;
                    } else if (lastEntangled[0] == null || lastEntangled[1]==null || (lastEntangled[0] != block2 && lastEntangled[1] != block2) || lastEntangled[0].entangled == null || lastEntangled[1].entangled == null)// first block, not entangled yet
                    {
                        if (lastEntangled[0] != null)
                        {
                            lastEntangled[0].entangle(null);
                            lastEntangled[1].entangle(null);
                        }
                        block = block2;
                        Texture c = block.color == 1 ? block.red2 : block.color == 0 ? block.purple2 : block.blue2;
                        block.GetComponent<Renderer>().material.SetTexture("_EmissionMap", c);
                        block.readyToEntangle = true;
                    }
                }
            }
            else
            {
                laserLine.SetPosition(1, rayOrigin + (direction * weaponRange));
            }
            laserLine.enabled = true;
        }
        else
        {
            laserLine.enabled = false;
        }
        if (Input.GetKeyDown(KeyCode.Return))
        {
            block = null;
            lastEntangled[0] = null;
            lastEntangled[1] = null;
        }
    }
}