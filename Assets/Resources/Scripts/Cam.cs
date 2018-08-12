using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cam : MonoBehaviour 
{
    Vector3 cameraUpdatePosition;

	// Use this for initialization
	void Start () 
    {
	}
	
    // Faster update
    private void FixedUpdate()
    {
        CamFollow();
    }

    // Follows player as it goes down
    void CamFollow()
    {
        cameraUpdatePosition.x = Player.PlayerPosition.x;
        cameraUpdatePosition.y = GameConstants.CamAdjustY + Player.PlayerPosition.y;
        cameraUpdatePosition.z = ScreenUtils.CamPositionZ;

        transform.position = cameraUpdatePosition;
    }
}
