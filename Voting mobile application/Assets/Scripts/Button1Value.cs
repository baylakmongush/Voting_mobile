using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;

public class Button1Value : MonoBehaviour
{
    public Text content;
    public void Click()
    {
        string json = File.ReadAllText(Path.Combine(getPath(), "data.json"));
        Users potion = JsonUtility.FromJson<Users>(json);
        Debug.Log(potion.age + " = age");
        potion.vote = content.text;
        string newjson = JsonUtility.ToJson(potion);
        System.IO.File.WriteAllText(Path.Combine(getPath(), "data.json"), newjson);
        SceneManager.LoadScene("Statistics");
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
    public class Users
    {
        public string id;
        public string country;
        public string city;
        public string age;
        public string vote;
    }
}
