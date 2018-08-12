using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameHUD : MonoBehaviour {

    [SerializeField]
    Text pointsDisplay;

    [SerializeField]
    Text healthDisplay;

    private void Update()
    {
        healthDisplay.text = GameConstants.HealthPrefix + GameVariables.Health.ToString();
        pointsDisplay.text = GameConstants.PointsPrefix + GameVariables.Points.ToString() + GameConstants.PointsSufix;
    }

}
