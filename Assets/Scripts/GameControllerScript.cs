using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameControllerScript : MonoBehaviour {

	public GameObject bloodyScreen;
	public Text healthText;
	public int health;

	// Use this for initialization
	void Start () {

		health = 100;

	}
	
	// Update is called once per frame
	void Update () {

		if (health <= 0) 
		{
			SceneManager.LoadScene ("GameOver");
		}
	}
		
	public void zombieAttack (bool zombieIsThere)
	{
		bloodyScreen.gameObject.SetActive (true);
		StartCoroutine (wait1seconds ());
		health -= 5;

		string stringHealth = (health).ToString();
		healthText.text = "" + stringHealth;
	}

	IEnumerator wait1seconds()
	{
		yield return new WaitForSeconds (1f);
		bloodyScreen.gameObject.SetActive (false);
	}
}
