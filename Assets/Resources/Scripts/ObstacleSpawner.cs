using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleSpawner : MonoBehaviour {

    [SerializeField]
    GameObject obstaclePrefab;
    [SerializeField]
    List<GameObject> spawnPositions;
    Vector3 testSpawnPosition;
    Vector3 spawnPosition;
    List<Vector3> activePositions = new List<Vector3>();



	// Use this for initialization
	void Start () {
        InvokeRepeating("Spawn", GameConstants.ObstacleSpawnStart, GameConstants.ObstacleSpawnSpeed);
        EventManager.AddHitObstacleListener(DeactivateObstacle);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    // Spawns obstacles
	void Spawn()
    {
        GetSpawnPosition();
        if (activePositions.Contains(testSpawnPosition))
        {
            GetSpawnPosition();
        }
        else
        {
            spawnPosition = testSpawnPosition;
            Instantiate(obstaclePrefab, spawnPosition, Quaternion.identity);
            activePositions.Add(testSpawnPosition);
        }
    }

    // Gets valid Spawn position
    Vector3 GetSpawnPosition()
    {
        testSpawnPosition = spawnPositions[Random.Range(0, spawnPositions.Capacity - 1)].transform.position;
        return testSpawnPosition;
    }

    // Event related methods
    void DeactivateObstacle(Vector3 hitPosition)
    {
        activePositions.Remove(hitPosition);
    }
}
