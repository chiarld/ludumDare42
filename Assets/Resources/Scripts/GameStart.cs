using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameStart : MonoBehaviour {
    
	void Awake () 
    {
        GameVariables.Health = 1000;
        GameVariables.Points = 0;
	}
	
}
