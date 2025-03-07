using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadOnClick : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	


	public void LoadScene(int level){

		SceneManager.LoadScene (level);
	}
}
