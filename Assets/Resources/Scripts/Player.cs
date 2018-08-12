using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour 
{

    BoxCollider2D bc2d;
    Rigidbody2D rb2d;
    float playerHalfHeight;
    float playerHalfWidth;
    static Vector3 playerPosition;

    public static Vector3 PlayerPosition
    {
        get { return playerPosition; }   
    }

	// Use this for initialization
	void Start () 
    {
        bc2d = GetComponent<BoxCollider2D>();
        rb2d = GetComponent<Rigidbody2D>();
        playerHalfHeight = bc2d.size.y / 2;
        playerHalfWidth = bc2d.size.x / 2;
        playerPosition = transform.position;
    }

    // Faster update
    private void FixedUpdate()
    {
        Movement();

    }

    // Monitors player input and moves player
    void Movement()
    {
        // Falling logic
        playerPosition = rb2d.position;
        playerPosition.y -= GameConstants.PlayerFallingSpeed;

        // Player input for horizontal movement
        float horizontalAxis = Input.GetAxis("Horizontal");

        if (horizontalAxis != 0)
        {
            playerPosition.x += horizontalAxis * Time.deltaTime * GameConstants.PlayerMovingSpeed;
        }

        // Clamping and looping
        Clamp();
        Loop();

        // Final update
        rb2d.MovePosition(playerPosition); 

    }

    // Loops player from bottom to top of the screen
    void Loop()
    {
        if (playerPosition.y + playerHalfHeight < ScreenUtils.BottomScreen)
        {
            playerPosition.y = ScreenUtils.TopScreen - playerHalfHeight;
        }
        GameVariables.Points += 100;
    }


    // Clamps player right and left
    void Clamp()
    {
        if (playerPosition.x  + playerHalfHeight > ScreenUtils.RightScreen)
        {
            playerPosition.x = ScreenUtils.RightScreen - playerHalfWidth;
        }
        if (playerPosition.x - playerHalfWidth < ScreenUtils.LeftScreen)
        {
            playerPosition.x = ScreenUtils.LeftScreen + playerHalfWidth;
        }
    }
}
