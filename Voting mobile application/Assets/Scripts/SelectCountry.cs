using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;
using System.Data;
using UnityEngine.UI;

public class SelectCountry : MonoBehaviour
{
    public Dropdown selectCountries;
    public Text countryName;
    private UserState userState;
    private string[] textValue;
    public static bool isSelected = false;
    void Start()
    {
        string connectionString = "URI=file:" + Application.dataPath + "/DataBases/country.sqlite";
        using (IDbConnection dbcon = (IDbConnection)new SqliteConnection(connectionString))
        {
            dbcon.Open();
            var sql = "SELECT * FROM countries";
            using (IDbCommand dbcmd = dbcon.CreateCommand())
            {
                dbcmd.CommandText = sql;
                using (IDataReader reader = dbcmd.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        selectCountries.options.Add(new Dropdown.OptionData() { text = reader.GetInt32(0) + ". " + reader.GetString(2) });
                        // "id: {0}; sortname: {1}; name: {2}; phonecode: {3};";
                    }
                }
            }
            dbcon.Close();
        }
    }

    public void SaveToJson()
    {
        Debug.Log(countryName);
        textValue = countryName.text.Split('.');
        userState = new UserState()
        {
            id = textValue[0],
            country = textValue[1].Trim()
        };
        string potion = JsonUtility.ToJson(userState);
        System.IO.File.WriteAllText(Application.dataPath + "/DataBases/data.json", potion);
    }

    public void Selected()
    {
        if (selectCountries.value > 0)
        {
            SaveToJson();
            isSelected = true;
        }
    }

    [System.Serializable]
    public class UserState
    {
        public string id;
        public string country;
        public string city;
    }
}
