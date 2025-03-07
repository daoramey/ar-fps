using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class counttime : MonoBehaviour {

	public Text timing;
	public float count;

	// Use this for initialization
	void Start () {
		count = 0;
	}
	void FixedUpdate()
	{
		count += Time.deltaTime;
		int counttime = (int) count;
		string myStringScore = counttime.ToString();
		//string myStringScore = count.ToString();
		timing.text = "" + myStringScore;
		if (counttime >= 180)
		{
			count = 0;
			SceneManager.LoadScene ("level3sucessful");
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
