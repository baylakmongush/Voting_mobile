using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;
using System.Data;
using System;
using UnityEngine.UI;
using System.Xml.Linq;

public class DB_connect : MonoBehaviour
{
    public Dropdown selectCountries;
    private UserState userState;
    void Start()
    {
        userState = new UserState();
        string connectionString = "URI=file:" + Application.dataPath + "/DataBases/country.sqlite";
        using (IDbConnection dbcon = (IDbConnection)new SqliteConnection(connectionString))
        {
            dbcon.Open();
            // Выбираем нужные нам данных
            var sql = "SELECT * FROM countries";
            using (IDbCommand dbcmd = dbcon.CreateCommand())
            {
                dbcmd.CommandText = sql;
                // Выполняем запрос
                using (IDataReader reader = dbcmd.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        selectCountries.options.Add(new Dropdown.OptionData() { text = reader.GetString(2) });
                        userState.Country = reader.GetString(2);
                        userState.SortName = reader.GetString(1);

                        // "id: {0}; sortname: {1}; name: {2}; phonecode: {3};";
                    }
                }
            }
            dbcon.Close();
        }
    }

    public void SaveToJson()
    {
        string potion = JsonUtility.ToJson(userState);
        System.IO.File.WriteAllText(Application.dataPath + "/DataBases/data.json", potion);

    }

    private void Update()
    {
        if (selectCountries.value > 0)
        {
            SaveToJson();
        }
    }

    [System.Serializable]
public class UserState
    {
        static private string country;
        static private string sortname;

        public string Country
        {
            get => country;
            set => country = value;
        }

        public string SortName
        {
            get => sortname;
            set => sortname = value;
        }
    }
}
