using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class sucess2 : MonoBehaviour {
	public string stastic_score2;
	public Text score;

	// Use this for initialization
	void Start () {
		string scoreString = (score).ToString ();
		stastic_score2 = scoreString;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
