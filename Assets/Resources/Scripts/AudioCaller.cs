using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioCaller : MonoBehaviour {

    AudioSource audioSource;

    // Runs before start
    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
        DontDestroyOnLoad(gameObject);
        if (!AudioHandler.Initialized)
        {
            AudioHandler.Initialize(audioSource);
        }
        else
        {
            Destroy(gameObject);
        }

    }
}
