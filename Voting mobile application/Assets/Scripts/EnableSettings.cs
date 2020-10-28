using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnableSettings : MonoBehaviour
{
    public GameObject sett;
    public void EnablePanel()
    {
        sett.SetActive(true);
    }

    public void DisablePanel()
    {
        sett.SetActive(false);
    }
}
