using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class AudioHandler
{
    static Dictionary<Sounds, AudioClip> soundDictionary = new Dictionary<Sounds, AudioClip>();
    static bool initialized = false;
    static AudioSource audioSource;

    public static bool Initialized
    {
        get { return initialized; }
    }

    public static void Initialize(AudioSource givenAudioSource)
    {
        audioSource = givenAudioSource;
        soundDictionary.Add(Sounds.buttonPress, Resources.Load<AudioClip>(@"Sounds/buttonPress"));
        soundDictionary.Add(Sounds.infernoSoundtrack, Resources.Load<AudioClip>(@"Sounds/infernoSoundtrack"));
        soundDictionary.Add(Sounds.playerHurt, Resources.Load<AudioClip>("Sounds/playerHurt"));
        soundDictionary.Add(Sounds.typing, Resources.Load<AudioClip>("Sounds/typing"));
        initialized = true;

    }

    public static void PlaySound(Sounds soundName)
    {
        audioSource.PlayOneShot(soundDictionary[soundName]);
    }
}
