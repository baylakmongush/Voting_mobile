using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;
using System.Data;
using UnityEngine.UI;
using System.IO;
using System.Data.SqlTypes;

public class SelectCountry : MonoBehaviour
{
    public Dropdown selectCountries;
    public Dropdown selectCity;
    public Text cityName;
    public Text countryName;
    private UserState userState;
    private string[] textValue;
    List<string> json;
    List<string> namesOfCity;
    int i = 0;

    void Start()
    {
        string connectionString = "URI=file:" + Application.dataPath + "/DataBases/country.db";
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
                        // "id: {0}; sortname: {1}; name: {2}; phonecode: {3};";
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
        string connectionString = "URI=file:" + Application.dataPath + "/DataBases/country.db";
        using (IDbConnection dbcon = (IDbConnection)new SqliteConnection(connectionString))
        {
            dbcon.Open();
            var sql = "SELECT DISTINCT name FROM `world-cities` WHERE country = " + "'" + json[0] + "' ORDER BY name";
            using (IDbCommand dbcmd = dbcon.CreateCommand())
            {
                dbcmd.CommandText = sql;
                using (IDataReader reader = dbcmd.ExecuteReader())
                {
                    selectCity.ClearOptions();
                    while (reader.Read())
                    {
                       // namesOfCity.Add(reader.GetString(0));
                        selectCity.options.Add(new Dropdown.OptionData() { text = reader.GetString(0) });
                        // "id: {0}; sortname: {1}; name: {2}; phonecode: {3};";
                    }

                   // StartCoroutine(PrintOptions(0));
                }
            }
            dbcon.Close();
        }
    }

    private IEnumerator PrintOptions(float time)
    {
        while (true)
        {
            yield return null;
            if (namesOfCity.Count > 0)
            {
                selectCity.AddOptions(new List<string> { namesOfCity[i] });
                namesOfCity.RemoveAt(i);
            }
        }
    }
    public void SaveData()
    {
        textValue = countryName.text.Split('.');
        json.Add(textValue[0].Trim());
        json.Add(textValue[1].Trim());
    }

    public void SaveToJson()
    {
        userState = new UserState()
        {
            id = json[1],
            country = json[0],
            city = cityName.text
        };
        string potion = JsonUtility.ToJson(userState);
        System.IO.File.WriteAllText(Application.dataPath + "/DataBases/data.json", potion);
    }

    public void SelecttoCountry()
    {
        SaveData();
        DBSelect();
        Debug.Log(json[0] + namesOfCity.Count);
    }

    public void SelectCity()
    {
        SaveToJson();
        json.Clear();
    }

    [System.Serializable]
    public class UserState
    {
        public string id;
        public string country;
        public string city;
    }
}
