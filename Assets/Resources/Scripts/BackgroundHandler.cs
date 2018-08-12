using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class BackgroundHandler{

    static Dictionary<Scenes, Sprite> backgroundsDictionary = new Dictionary<Scenes, Sprite>();
    static bool initialized = false;
    static SpriteRenderer spriteRenderer;

    public static bool Initialized
    {
        get { return initialized; }   
    }

    public static void Initialize(SpriteRenderer givenSpriteRenderer)
    {
        spriteRenderer = givenSpriteRenderer;
        backgroundsDictionary.Add(Scenes.Story, null);
        backgroundsDictionary.Add(Scenes.MainMenu, null);
        backgroundsDictionary.Add(Scenes.HelpMenu, Resources.Load<Sprite>(@"Sprites/helpMenu"));
        backgroundsDictionary.Add(Scenes.Game, null);
        backgroundsDictionary.Add(Scenes.End, null);
        initialized = true;

    }

    public static void UpdateBackground()
    {
        switch (SceneHandler.CurrentScene)
        {
            case Scenes.Story:
                spriteRenderer.sprite = backgroundsDictionary[Scenes.Story];
                break;
            case Scenes.MainMenu:
                spriteRenderer.sprite = backgroundsDictionary[Scenes.MainMenu];
                break;
            case Scenes.HelpMenu:
                spriteRenderer.sprite = backgroundsDictionary[Scenes.HelpMenu];
                break;
            case Scenes.Game:
                spriteRenderer.sprite = backgroundsDictionary[Scenes.Game];
                break;
            case Scenes.End:
                spriteRenderer.sprite = backgroundsDictionary[Scenes.End];
                break;
        }
    }

}
