using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpawnControllerL2 : MonoBehaviour {

	public GameObject zombie;
	public Button startBtn;
	private int counter;

	// Use this for initialization
	void Start () {

		startBtn.onClick.AddListener (startInvoke);

	}


	void startInvoke()
	{
		counter = 40;
		InvokeRepeating ("spawn", 0f, 3f);
	}

	void spawn()
	{
		Vector3 position = new Vector3 (Random.Range (-10f, 10f), 3, Random.Range (-10f, 10f));
		Instantiate (zombie, position, Quaternion.Euler(0,0,0));
		if (--counter ==0) 
		{
			CancelInvoke ("spawn");
		}
	}
}
