using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class scoring : MonoBehaviour {
	public Text score;
	public int count;
	// Use this for initialization
	void Start () {
		count = 0;
	}
	void FixedUpdate()
	{
		count += 1;
		//print(countTime);
		string myStringScore = count.ToString();
		score.text = "" + myStringScore;
	}
	// Update is called once per frame
	void Update () {
		
	}
}
