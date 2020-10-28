using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MySql.Data;
using MySql.Data.MySqlClient;
using System.IO;

public class DBManager : MonoBehaviour
{
    void Start()
    {
        string cs = @"server=127.0.0.1;userid=root;
           password=adventuretimes!12;database=voting;Pooling=true;CharSet=utf8;";

        MySqlConnection conn = null;

        try
        {
            conn = new MySqlConnection(cs);
            conn.Open();
            MySqlCommand cmd = new MySqlCommand("SELECT * FROM `valuesvoting`", conn);
            var result = cmd.ExecuteReader();
            while (result.Read())
            {
                int value = result.GetInt32(0);
                string name = result.GetString(1);
                string rand = result.GetString(2);

                Debug.Log("value= " + value + "  name =" + name + "  random =" + rand);
            }
        }
        catch (MySqlException ex)
        {
            Debug.Log("Error: {0}" + ex.ToString());
        }
    }
}
