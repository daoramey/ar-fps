using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class boxspawn : MonoBehaviour {

	public GameObject medicalbox;

	// Use this for initialization
	void Start () {
		InvokeRepeating ("spawn", 0f, 5.0f);
	}

	void spawn()
	{
		Vector3 position = new Vector3 (Random.Range (-30f, 30f), 0, Random.Range (-30f, 30f));
		Instantiate (medicalbox, position, Quaternion.Euler(0,0,0));
	}
}