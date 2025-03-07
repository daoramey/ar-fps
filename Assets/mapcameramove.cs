using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mapcameramove : MonoBehaviour {
	public Transform playercamera;
	private Vector3 offset;
	// Use this for initialization
	void Start () {
		offset = transform.position - playercamera.transform.position;	
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = offset + playercamera.transform.position;
	}
}
