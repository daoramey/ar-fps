using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Timing : MonoBehaviour {
	public Text timing;
	public float alltime;
	public float count;

	// Use this for initialization
	void Start () {
		alltime = 180;
	}
	void FixedUpdate()
	{
		count= alltime - Time.time;
		//print(countTime);
		string myStringScore = count.ToString();
		timing.text = "" + myStringScore;
		if (count <= 0)
		{
			count = 0;
			SceneManager.LoadScene ("GameOver");
		}
		else
		{
			return;
		}
	}
	// Update is called once per frame
	void Update () {
		
	}
}