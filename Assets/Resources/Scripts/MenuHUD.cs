using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuHUD : MonoBehaviour {

    public void ClickStart()
    {
        AudioHandler.PlaySound(Sounds.buttonPress);
        SceneHandler.StartScene(Scenes.Game);
    }

    public void ClickHelp()
    {
        AudioHandler.PlaySound(Sounds.buttonPress);
        SceneHandler.StartScene(Scenes.HelpMenu);
    }

    public void ClickGoBack()
    {
        AudioHandler.PlaySound(Sounds.buttonPress);
        SceneHandler.StartScene(Scenes.MainMenu);
    }
}
