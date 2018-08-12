using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameVariables
{
    static int points;
    static int health;

    public static int Points
    {
        get { return points; }
        set { points = value; }
    }

    public static int Health
    {
        get { return health; } 
        set { health = value; }
    }
    
}
