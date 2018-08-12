using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public static class EventManager
{
    // Hit Obstacle Event 
    static List<Obstacle> hitObstacleInvokers = new List<Obstacle>();
    static List<UnityAction<Vector3>> hitObstacleListeners = new List<UnityAction<Vector3>>();

    public static void AddHitObstacleInvoker(Obstacle invoker)
    {
        hitObstacleInvokers.Add(invoker);
        foreach(UnityAction<Vector3> listener in hitObstacleListeners)
        {
            invoker.AddHitObstacleListener(listener);
        }
    }

    public static void AddHitObstacleListener(UnityAction<Vector3> listener)
    {
        hitObstacleListeners.Add(listener);
        foreach(Obstacle invoker in hitObstacleInvokers)
        {
            invoker.AddHitObstacleListener(listener);   
        }
    }
}
