using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextTyper : MonoBehaviour
{

    [SerializeField]
    Text textContent;

    string message;
    int charCount = 0;

    // Use this for initialization
    void Start()
    {
        message = textContent.text;
        textContent.text = "";
        AudioHandler.PlaySound(Sounds.typing);
        InvokeRepeating("Type", GameConstants.TypingStart, GameConstants.TypingSpeed);
    }

    // Update is called once per frame
    void Update()
    {

    }

    void Type()
    {
        if(charCount < message.Length)
        {
            textContent.text += message[charCount];
            charCount++;
        }
        else
        {
            SceneHandler.StartScene(Scenes.MainMenu);
            Destroy(gameObject);
        }
    }
}
