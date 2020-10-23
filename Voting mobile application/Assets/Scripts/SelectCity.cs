using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;
using System.Data;
using UnityEngine.UI;
using System.IO;

public class SelectCity : MonoBehaviour
{
    public Dropdown selectCity;
    public Text cityName;
    private string[] textValue;
    UserState userState;
    void Update()
    {
        if (SelectCountry.isSelected)
        {
            FromJson();
            DBSelect();
            SelectCountry.isSelected = false;
        }
    }

    public void DBSelect()
    {
        string connectionString = "URI=file:" + Application.dataPath + "/DataBases/country.sqlite";
        using (IDbConnection dbcon = (IDbConnection)new SqliteConnection(connectionString))
        {
            dbcon.Open();
            var sql = "SELECT * FROM cities WHERE state_id=" + userState.id;
            using (IDbCommand dbcmd = dbcon.CreateCommand())
            {
                dbcmd.CommandText = sql;
                using (IDataReader reader = dbcmd.ExecuteReader())
                {
                    selectCity.ClearOptions();
                    while (reader.Read())
                    {
                        selectCity.options.Add(new Dropdown.OptionData() { text = reader.GetString(1) });
                        // "id: {0}; sortname: {1}; name: {2}; phonecode: {3};";
                    }
                }
            }
            dbcon.Close();
        }
    }

    public void Selected()
    {

    }

    public void FromJson()
    {
        string path = Application.dataPath + "/DataBases/data.json";
        string json = File.ReadAllText(path);
        userState = JsonUtility.FromJson<UserState>(json);
        Debug.Log(userState.id);
    }

    public void SaveToJson()
    {
        textValue = cityName.text.Split('.');
        userState = new UserState()
        {
            city = textValue[1].Trim()
        };
        string potion = JsonUtility.ToJson(userState);
        System.IO.File.WriteAllText(Application.dataPath + "/DataBases/data.json", potion);
    }

   // public void Selected()
  //  {
  //      if (selectCity.value > 0)
  //      {
  //          SaveToJson();
  //      }
  //  }

    [System.Serializable]
    public class UserState
    {
        public string id;
        public string country;
        public string city;
    }
}
