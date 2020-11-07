using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data;
using UnityEngine.UI;
using System.IO;
using UnityEngine.SceneManagement;

public class SelectCountry : MonoBehaviour
{
    public Text cityName;
    public Text countryName;
    public Text countryID;
    public Text age;
    private UserState userState;
    public Text log;

    public void SelectAge()
    {
        Debug.Log(age.text);
        userState = new UserState()
        {
            id = countryID.text,
            country = countryName.text,
            city = cityName.text,
            age  = age.text
        };
        string potion = JsonUtility.ToJson(userState);
        System.IO.File.WriteAllText(Path.Combine(getPath(), "data.json"), potion);
    }

    public void NextLevel()
    {
        if (age.text != "Have you been 18 already?")
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        else
            log.enabled = true;
    }

    private static string getPath()
    {
        #if UNITY_ANDROID && !UNITY_EDITOR
		        return Application.persistentDataPath;
        #elif UNITY_IPHONE && !UNITY_EDITOR
		        return GetiPhoneDocumentsPath();
        #else
                return Application.dataPath;
        #endif
    }

    [System.Serializable]
    public class UserState
    {
        public string id;
        public string country;
        public string city;
        public string age;
    }
}
