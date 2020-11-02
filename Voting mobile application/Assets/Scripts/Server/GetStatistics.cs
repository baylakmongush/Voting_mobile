using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class GetStatistics : MonoBehaviour
{
	string data;
	public Text val1;
	public Text val2;

	public Text Country;
	public Text val1Countrytext;
	public Text val2Countrytext;
	public Slider val1CountryValue;
	public Slider val2CountryValue;
	public Image val1CountryImage;
	public Image val2CountryImage;

	public Text City;
	public Text val1Citytext;
	public Text val2Citytext;
	public Slider val1CityValue;
	public Slider val2CityValue;
	public Image val1CityImage;
	public Image val2CityImage;

	public Text Age;
	public Text val1Agetext;
	public Text val2Agetext;
	public Slider val1AgeValue;
	public Slider val2AgeValue;
	public Image val1AgeImage;
	public Image val2AgeImage;
	void Start()
	{
		StartCoroutine(GetRequest("http://127.0.0.1:5000/result"));
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
				Debug.Log(data);
				SaveStat dataSave = JsonUtility.FromJson<SaveStat>(data);
				val1.text = dataSave.value1 + "\n" + dataSave.value1Stat1 + "%";
				val2.text = dataSave.value2 + "\n" + dataSave.value2Stat1 + "%";

				Country.text = dataSave.country;
				float value1Stat2 = float.Parse(dataSave.value1Stat2);
				float value2Stat2 = float.Parse(dataSave.value2Stat2);
				val1Countrytext.text = dataSave.value1 + " (" + value1Stat2 + "%" + ")";
				val2Countrytext.text = dataSave.value2 + " (" + value2Stat2 + "%" + ")";
				if (value1Stat2 < 50.0f)
					val1CountryImage.color = Color.blue;
				if (value2Stat2 < 50.0f)
					val2CountryImage.color = Color.blue;
				val1CountryValue.value = value1Stat2;
				val2CountryValue.value = value2Stat2;

				City.text = dataSave.city;
				float value1Stat3 = float.Parse(dataSave.value1Stat2);
				float value2Stat3 = float.Parse(dataSave.value2Stat2);
				val1Citytext.text = dataSave.value1 + " (" + value1Stat3 + "%" + ")";
				val2Citytext.text = dataSave.value2 + " (" + value2Stat3 + "%" + ")";
				if (value1Stat3 < 50.0f)
					val1CityImage.color = Color.blue;
				if (value2Stat3 < 50.0f)
					val2CityImage.color = Color.blue;
				val1CityValue.value = value1Stat3;
				val2CityValue.value = value2Stat3;

				Age.text = dataSave.age;
				float value1Stat4 = float.Parse(dataSave.value1Stat2);
				float value2Stat4 = float.Parse(dataSave.value2Stat2);
				val1Agetext.text = dataSave.value1 + " (" + value1Stat4 + "%" + ")";
				val2Agetext.text = dataSave.value2 + " (" + value2Stat4 + "%" + ")";
				if (value1Stat4 < 50.0f)
					val1AgeImage.color = Color.blue;
				if (value2Stat4 < 50.0f)
					val2AgeImage.color = Color.blue;
				val1AgeValue.value = value1Stat4;
				val2AgeValue.value = value2Stat4;
}
		}
	}
}

public class SaveStat
{
	public string value1;
	public string value2;
	public string value1Stat1;
	public string value2Stat1;
	public string country;
	public string value1Stat2;
	public string value2Stat2;
	public string city;
	public string value1Stat3;
	public string value2Stat3;
	public string age;
	public string value1Stat4;
	public string value2Stat4;

}