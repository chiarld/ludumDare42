using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class SceneHandler
{
    static Dictionary<Scenes, string> sceneDictionary = new Dictionary<Scenes, string>();
    static bool initialized = false;
    static Scenes currentScene = Scenes.Story;

    public static bool Initialized
    {
        get { return initialized; }
    }

    public static Scenes CurrentScene
    {
        get {return currentScene;}
    }

    public static void Initialize()
    {
        sceneDictionary.Add(Scenes.Story, "Story");
        sceneDictionary.Add(Scenes.MainMenu, "MainMenu");
        sceneDictionary.Add(Scenes.HelpMenu, "HelpMenu");
        sceneDictionary.Add(Scenes.Game, "Game");
        sceneDictionary.Add(Scenes.End, "End");
        initialized = true;
    }

    public static void StartScene(Scenes sceneName)
    {
        SceneManager.LoadScene(sceneDictionary[sceneName]);
        currentScene = sceneName;
        BackgroundHandler.UpdateBackground();
    }
}
