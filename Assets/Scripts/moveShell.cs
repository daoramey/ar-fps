﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveShell : MonoBehaviour {

	public Rigidbody rb;

	// Use this for initialization
	void Start () {

		rb = GetComponent<Rigidbody> ();

		StartCoroutine ("rotate");
		StartCoroutine ("wait");
		Destroy (gameObject, 2);
		
	}
	
	// Update is called once per frame
	void Update () {

		rb.AddForce (transform.right * 0.05f);
		rb.AddForce (transform.up * 0.05f);

	}

	IEnumerator rotate()
	{
		while (true) 
		{
			yield return new WaitForSeconds (0.1f);
			transform.eulerAngles += new Vector3 (Random.Range (-360f, 360f), Random.Range (-360f, 360f), Random.Range (-360f, 360f));

		}
	}

	IEnumerator wait()
	{
		yield return new WaitForSeconds (0.2f);
		rb.useGravity = true;
		yield return new WaitForSeconds (0.2f);

		AudioSource shell = GetComponent<AudioSource> ();
		shell.Play ();
	}
}
