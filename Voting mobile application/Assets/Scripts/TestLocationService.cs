using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;

public class TestLocationService : MonoBehaviour
{
    public Text cityName;
    public Text countryName;
    public Text countryID;
    private void Start()
    {
        StartCoroutine("DetectCountry");
    }

    [System.Obsolete]
    IEnumerator DetectCountry()
    {
        UnityWebRequest request = UnityWebRequest.Get("https://extreme-ip-lookup.com/json");
        request.chunkedTransfer = false;
        yield return request.Send();
        if (request.isNetworkError)
        {
            Debug.Log("Error");
        }
        else
        {
            if (request.isDone)
            {
                Country res = JsonUtility.FromJson<Country>(request.downloadHandler.text);
                countryName.text = res.country;
                countryID.text = res.countryCode;
                cityName.text =  res.city;
            }
        }
    }

    public class Country
    {
        public string businessName;
        public string businessWebsite;
        public string city;
        public string continent;
        public string country;
        public string countryCode;
        public string ipName;
        public string ipType;
        public string isp;
        public string lat;
        public string lon;
        public string org;
        public string query;
        public string region;
        public string status;
    }
}