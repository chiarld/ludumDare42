using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundCaller : MonoBehaviour {

    SpriteRenderer spriteRenderer;

    // Runs before start
    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        DontDestroyOnLoad(gameObject);
        if (!BackgroundHandler.Initialized)
        {
            BackgroundHandler.Initialize(spriteRenderer);
        }
        else
        {
            Destroy(gameObject);
        }

    }
}
