using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.IO;
using System.Text;

public class PostData : MonoBehaviour
{
	// Start is called before the first frame update
	string data;
	public Text value1;
	public Text value2;
	void Start()
	{
		//DontDestroyOnLoad(this);
		StartCoroutine(SetRequest("https://vote-adm.herokuapp.com/data"));
	}

	IEnumerator SetRequest(string uri)
	{
		string json = File.ReadAllText(Application.dataPath + "/DataBases/data.json");
		var request = new UnityWebRequest(uri, "POST");
		byte[] bodyRaw = Encoding.UTF8.GetBytes(json);
		request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
		request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
		request.SetRequestHeader("Content-Type", "application/json");
		yield return request.SendWebRequest();

		if (request.error != null)
		{
			Debug.Log("Erro: " + request.error);
		}
		else
		{
			Debug.Log("All OK");
			Debug.Log("Status Code: " + request.responseCode);
		}
	}
}
