using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneCaller : MonoBehaviour {

    // Runs before start
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if(!SceneHandler.Initialized)
        {
            SceneHandler.Initialize();  
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Update()
    {
        if(GameVariables.Health == 0)
        {
            SceneHandler.StartScene(Scenes.End);
            GameVariables.Health = 1000;
        }
    }
}
