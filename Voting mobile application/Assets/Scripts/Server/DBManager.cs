using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MySql.Data;
using MySql.Data.MySqlClient;
using System.IO;

public class DBManager : MonoBehaviour
{
    // MySQL настройки 
    string constr = "Server=localhost;Database=voting;User ID=root;Password=Theek7Ee;Pooling=true;CharSet=utf8;";
	// соединение 
	MySqlConnection con = null;
	// команда к БД
	MySqlCommand cmd = null;
	// чтение
	MySqlDataReader rdr = null;
	// ошибки
	MySqlError er = null;

	// массив синхронизируемых игровых объектов
	GameObject[] bodies;

	// Названия синхронизируемых полей таблицы в БД
	string ID, Name, levelname, objectType;
	float posx, posy, posz, tranx, trany, tranz;
	// описание структуры синхронизируемых данных
	public struct data
	{
		public int UID;
		public string ID, Name, levelname, objectType;
		public float posx, posy, posz, tranx, trany, tranz;
	}
	// коллекция в которую будут записываться данные о синхронизируемых объектах
	List<data> _GameItems;
	void Awake()
	{
		try
		{
			// установка элемента соединения 
			con = new MySqlConnection(constr);

			// посмотрим, сможем ли мы установить соединение 
			con.Open();
			Debug.Log("Connection State: " + con.State);
		}
		catch (IOException ex) { Debug.Log(ex.ToString()); }
	}

	void OnApplicationQuit()
	{
		Debug.Log("killing con");
		if (con != null)
		{
			// Конечно, правильнее использовать:
			// if (con.State != ConnectionState.Closed) 
			// но из-за проблем с версиями сборок приходится использовать костыли
			if (con.State.ToString() != "Closed")
				con.Close();
			con.Dispose();
		}
	}
}
