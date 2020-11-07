using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;

public class LoadVPersCab : MonoBehaviour
{
    public Text date;
    public Text country;
    UserState userState;
    Image image;

    private void Start()
    {
        image = GetComponent<Image>();
        System.DateTime theTime = System.DateTime.Now;
        FromJson();
        country.text = userState.country;
        date.text = theTime.Year + "," + theTime.Month + "," + theTime.Day;
        string path = "Sprites/";
        Debug.Log(path);
        Sprite[] loaded = Resources.LoadAll<Sprite>(path);
        Debug.Log(loaded);
        image.sprite = loaded.Where(a => a.name == userState.id.ToLower()).First();
    }

    public void FromJson()
    {
        string path = Path.Combine(getPath(), "data.json");
        string json = File.ReadAllText(path);
        userState = JsonUtility.FromJson<UserState>(json);
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
    }
}
