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
        string json = File.ReadAllText(Application.dataPath + "/DataBases/data.json");
        Users potion = JsonUtility.FromJson<Users>(json);
        Debug.Log(potion.age + " = age");
        potion.vote = content.text;
        string newjson = JsonUtility.ToJson(potion);
        System.IO.File.WriteAllText(Application.dataPath + "/DataBases/data.json", newjson);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
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
