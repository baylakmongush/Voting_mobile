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
        if (content != null)
        {
            string json = File.ReadAllText(getPath() + "/DataBases/data.json");
            Users potion = JsonUtility.FromJson<Users>(json);
            Debug.Log(potion.age + " = age");
            potion.vote = content.text;
            string newjson = JsonUtility.ToJson(potion);
            System.IO.File.WriteAllText(getPath() + "/DataBases/data.json", newjson);
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }
    }

    private static string getPath()
    {
        #if UNITY_EDITOR
                return Application.dataPath;
        #elif UNITY_ANDROID
                    return Application.persistentDataPath;
        #elif UNITY_IPHONE
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
