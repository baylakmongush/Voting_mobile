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
    public Text age;
    private UserState userState;
    private string[] textValue;
    List<string> json;
    List<string> namesOfCity;
    public Text log;
    int i = 0;

    private static string GetDatabasePath()
    {
        string fileName = "country.db";
        #if UNITY_EDITOR
                return Path.Combine(Application.streamingAssetsPath, fileName);
        #endif
        #if UNITY_ANDROID
                    string filePath = Path.Combine(Application.persistentDataPath, fileName);
                    if(!File.Exists(filePath)) UnpackDatabase(filePath);
                    return filePath;
        #endif
    }

    void Start()
    {
        string connectionString = "URI=file:" + GetDatabasePath();
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
        }
        namesOfCity = new List<string>();
        json = new List<string>();
    }

    public void DBSelect()
    {
        string connectionString = "URI=file:" + GetDatabasePath();
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
            userState.age = age.text;
            string potion = JsonUtility.ToJson(userState);
            System.IO.File.WriteAllText(Application.dataPath + "/DataBases/data.json", potion);
        }
    }

    public void NextLevel()
    {
        if (countryName.text != "Select country" && cityName.text != "Select city" && age.text != "Have you been 18 already?")
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        else
            log.enabled = true;
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
