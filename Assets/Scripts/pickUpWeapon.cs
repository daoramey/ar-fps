using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pickUpWeapon : MonoBehaviour {

	public GameObject pickupBtn;
	public GameObject crossHair;

	// Use this for initialization
	void Start () {
		
	}
	
	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.name == "pistol") 
		{
			pickupBtn.gameObject.SetActive (true);
			crossHair.gameObject.SetActive (false);
		}
	}

	void OnCollisionExit (Collision col)
	{
		if (col.gameObject.name == "pistol") 
		{
			pickupBtn.gameObject.SetActive (false);
			crossHair.gameObject.SetActive (true);
		}
	}
}
