using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class SpawnController : MonoBehaviour {

	public GameObject zombie;

	// Use this for initialization
	void Start () {
		InvokeRepeating ("spawn", 0f, 0.5f);
	}

	void spawn()
	{
		Vector3 position = new Vector3 (Random.Range (-30f, 30f), 0, Random.Range (-30f, 30f));
		Instantiate (zombie, position, Quaternion.Euler(0,0,0));
	}
}
