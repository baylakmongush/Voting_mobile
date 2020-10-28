using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Greeting : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(OpenScene(3));
    }


    private IEnumerator OpenScene(float time)
    {
        yield return new WaitForSeconds(time);
        SceneManager.LoadScene("Creating account");
    }

}
