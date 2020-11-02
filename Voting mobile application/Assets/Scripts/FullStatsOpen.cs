using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class FullStatsOpen : MonoBehaviour
{
    public GameObject fullStats;
    public GameObject Btns;
    public GameObject close;

    public void Click()
    {
        fullStats.SetActive(true);
        Btns.SetActive(false);
        close.SetActive(true);
    }

    public void Close()
    {
        fullStats.SetActive(false);
        close.SetActive(false);
        Btns.SetActive(true);
    }
}
