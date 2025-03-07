using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;


public class startGame : MonoBehaviour {

	private UnityARHitTestExample UnityARHitTestExample;
	public Image crosshair;

	// Use this for initialization
	void Start () {
		UnityARHitTestExample = GetComponent<UnityARHitTestExample> ();
		Destroy (UnityARHitTestExample);
		crosshair.gameObject.SetActive (true);
	}
}
