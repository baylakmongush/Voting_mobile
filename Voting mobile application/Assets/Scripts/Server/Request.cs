using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class Request : MonoBehaviour
{
	// Start is called before the first frame update
	string data;
	public Text value1;
	public Text value2;
	void Start()
	{
		//DontDestroyOnLoad(this);
		StartCoroutine(GetRequest("https://vote-adm.herokuapp.com/list"));
	}

	IEnumerator GetRequest(string uri)
	{
		using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
		{
			yield return webRequest.SendWebRequest();
			if (webRequest.isNetworkError)
			{
				Debug.Log("Error: " + webRequest.error);
			}
			else
			{
				data = webRequest.downloadHandler.text;
				SaveData dataSave = JsonUtility.FromJson<SaveData>(data);
				value1.text = dataSave.value1;
				value2.text = dataSave.value2;
			}
		}
	}
}

public class SaveData
{
	public string value1;
	public string value2;
}
