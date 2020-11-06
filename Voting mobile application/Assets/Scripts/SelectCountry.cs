using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;
using System.Data;
using UnityEngine.UI;
using System.IO;
using System.Data.SqlTypes;
using UnityEngine.SceneManagement;

public class SelectCountry : MonoBehaviour
{
    public Dropdown selectCountries;
    public Dropdown selectCity;
    public Text cityName;
    public Text countryName;
    public Text countryID;
    public Text age;
    private UserState userState;
    private string[] textValue;
    List<string> json;
    List<string> namesOfCity;
    public Text log;
    int i = 0;
    string DBPath;

    private static string GetDatabasePath()
    {
        #if UNITY_EDITOR
                return Path.Combine(Application.streamingAssetsPath, "country.db");
        #endif
        #if UNITY_STANDALONE
                            string filePath = Path.Combine(Application.dataPath, "country.db");
                            if(!File.Exists(filePath)) UnpackDatabase(filePath);
                            return filePath;
        #elif UNITY_ANDROID
                string filePath = Path.Combine(Application.persistentDataPath, "country.db");
                                if (!File.Exists(filePath)) UnpackDatabase(filePath);
                                return filePath;
        #endif
    }

    /// <summary> Распаковывает базу данных в указанный путь. </summary>
    /// <param name="toPath"> Путь в который нужно распаковать базу данных. </param>
    private static void UnpackDatabase(string toPath)
    {
        string fromPath = Path.Combine(Application.streamingAssetsPath, "country.db");

        WWW reader = new WWW(fromPath);
        while (!reader.isDone) { }

        File.WriteAllBytes(toPath, reader.bytes);
    }

    void Start()
    {
       /*DBPath = GetDatabasePath();
        string connectionString = "URI=file:" + DBPath;
        using (IDbConnection dbcon = (IDbConnection)new SqliteConnection(connectionString))
        {
            dbcon.Open();
            var sql = "SELECT * FROM country";
            using (IDbCommand dbcmd = dbcon.CreateCommand())
            {
                dbcmd.CommandText = sql;
                using (IDataReader reader = dbcmd.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        selectCountries.options.Add(new Dropdown.OptionData() { text = reader.GetString(3) + ". " + reader.GetString(1)});
                    }
                }
            }
            dbcon.Close();
        }*/
        namesOfCity = new List<string>();
        json = new List<string>();
    }

    public void DBSelect()
    {
        string connectionString = "URI=file:" + DBPath;
        using (IDbConnection dbcon = (IDbConnection)new SqliteConnection(connectionString))
        {
            dbcon.Open();
            var sql = "SELECT DISTINCT name FROM `world-cities` WHERE country = " + "'" + json[0] + "' ORDER BY name";
            using (IDbCommand dbcmd = dbcon.CreateCommand())
            {
                dbcmd.CommandText = sql;
                using (IDataReader reader = dbcmd.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        selectCity.options.Add(new Dropdown.OptionData() { text = reader.GetString(0) });
                    }
                }
            }
            dbcon.Close();
        }
    }

    public void SaveData()
    {
        textValue = countryName.text.Split('.');
        json.Add(textValue[0].Trim());
        json.Add(textValue[1].Trim());
    }

    public void SaveCity()
    {
        json.Add(cityName.text);
    }

    public void SaveToJson()
    {
        userState = new UserState()
        {
            id = json[1],
            country = json[0],
            city = json[2]
        };
    }

    public void SelecttoCountry()
    {
        json.Clear();
        selectCity.options.RemoveRange(1, selectCity.options.Count - 1);
        SaveData();
        DBSelect();
    }

    public void SelectCity()
    {
        if (countryName.text != "Select country" && countryName.text != null)
        {
            SaveCity();
            SaveToJson();
            json.Clear();
        }
    }

    public void SelectAge()
    {
        if (countryName.text != "Select country" && cityName.text != "Select city")
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
            System.IO.File.WriteAllText(getPath() + "/DataBases/data.json", potion);
        }
    }

    public void NextLevel()
    {
        if (countryName.text != "Select country" && cityName.text != "Select city" && age.text != "Have you been 18 already?")
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
