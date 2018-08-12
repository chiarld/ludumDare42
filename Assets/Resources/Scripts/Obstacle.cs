using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.Events;

public class Obstacle : MonoBehaviour {

    HitObstacle hitObstacleEvent = new HitObstacle();

	// Use this for initialization
	void Start () 
    {
        EventManager.AddHitObstacleInvoker(this);
    }
	
	// Update is called once per frame
	void Update () 
    {
		
	}

    // Collision detection
    private void OnCollisionEnter2D(Collision2D collision)
    {
        AudioHandler.PlaySound(Sounds.playerHurt);
        GameVariables.Health -= 100;
        hitObstacleEvent.Invoke(transform.position);
        Destroy(gameObject);
    }

    // Event related methods
    public void AddHitObstacleListener(UnityAction<Vector3> listener)
    {
        hitObstacleEvent.AddListener(listener);  
    }

}
