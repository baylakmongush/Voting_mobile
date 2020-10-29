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
        string cs = "Database=voting;Data Source=localhost;User Id=root;Password=adventuretimes!12;CharSet=utf8;";

        MySqlConnection conn = null;

        try
        {
            conn = new MySqlConnection(cs);
            //conn.Open();
            MySqlCommand cmd = new MySqlCommand("INSERT INTO valuesvoting (value1, value2) VALUES ('ponchik', 'pirozhok')", conn);
            cmd.Connection = conn;
            conn.Open();
            cmd.ExecuteNonQuery();
            cmd.Connection.Close();
        }
        catch (MySqlException ex)
        {
            Debug.Log("Error: {0}" + ex.ToString());
        }
    }
}
