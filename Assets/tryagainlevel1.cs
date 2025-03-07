using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class tryagainlevel1 : MonoBehaviour {


	// Use this for initialization
	void Start () {

	}
	void Awake()
	{
		Button button = gameObject.GetComponent(typeof(Button)) as Button;
		button.onClick.AddListener(btClick);
	}
	// Update is called once per frame
	void Update () {

	}
	void btClick()
	{
		SceneManager.LoadScene ("Level1");
	}
}