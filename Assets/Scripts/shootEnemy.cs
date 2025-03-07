using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;




public class shootEnemy : MonoBehaviour {

	public Button shootBtn;
	public Camera fpsCam;
	public float damage = 15f;
	public GameObject bloodEffect;
	public GameObject shootingEffect;
	public int forceAdd = 300;
	AudioSource shootSound;
	AudioSource reloadSound;
	public Text ammo1Text;
	public Text ammo2Text;
	public int ammo1;
	public int ammo2;
	private bool ammoIsEmpty;
	public ParticleSystem muzzleFlash;
	public GameObject pisolGO;
	private bool reloadCheck;
	public GameObject shell;
	public int NumberOfEnemies;
	public Text NumberOfEnemiesText;


	// Use this for initialization
	void Start () {

		shootBtn.onClick.AddListener (onShoot);


		AudioSource[] audios = GetComponents<AudioSource> ();
		shootSound = audios [0];
		reloadSound = audios [1];

		ammo1 = 20;
		ammo2 = 100;
		NumberOfEnemies =40;

		reloadCheck = true;
	}

	// Update is called once per frame
	void Update () {
		if (NumberOfEnemies <= 0) 
		//if (ammo2 <= 0) 
		{
			try
			{
				SceneManager.LoadScene ("level1sucessful");
			}
			catch (NullReferenceException ex) {
				
				Debug.Log("ZOMBIE was not set in the inspector");

		    }

	    }

	}

	IEnumerator waitForReload(){

		yield return new WaitForSeconds (3f);
		reloadCheck = true;
	
	}
	
		
	
	void onShoot()
	{

		if (!ammoIsEmpty && reloadCheck) 
		
		{


			//Ammo 

			if (ammo1 == 1) 
			{
				ammo1 = 21;
				pisolGO.GetComponent<Animator> ().SetTrigger ("reload");
				reloadCheck = false;
				StartCoroutine (waitForReload ());
				reloadSound.Play ();
			}
	
			ammo1 -= 1;
			string amo1String = (ammo1).ToString ();
			ammo1Text.text = amo1String;

			ammo2 -= 1;
			string amo2String = (ammo2).ToString ();
			ammo2Text.text = "/" + amo2String;

			if (ammo2 == 0) 
			{
				ammoIsEmpty = true;
				ammo1 = 0;
				string amo11String = (ammo1).ToString ();
				ammo1Text.text = amo11String;
			}
		


			// Raycasting

			RaycastHit hit;
			if (Physics.Raycast (fpsCam.transform.position, fpsCam.transform.forward, out hit)) 
			{

				Enemy target = hit.transform.GetComponent<Enemy> ();

				if (target != null) {
					target.TakeDamage (damage);
					//////////////////////////////////////////////////////////////////////////
					NumberOfEnemies -= 1;

					string NumberEnimiesString = (NumberOfEnemies).ToString ();
					NumberOfEnemiesText.text = NumberEnimiesString;


					//////////////////////////////////////////////////////////////////////////

					GameObject bloodGO = Instantiate (bloodEffect, hit.point, Quaternion.LookRotation (hit.normal));
					Destroy (bloodGO, 0.2f);
				} else {
					GameObject shootingGo = Instantiate (shootingEffect, hit.point, Quaternion.LookRotation (hit.normal));
					Destroy (shootingGo, 0.2f);
				}

				if (hit.rigidbody != null) 
				{
					hit.rigidbody.AddForce (-hit.normal * forceAdd);
				}

				//Debug.Log (hit.transform.name);
			}



			// Sound & Animation Play
				
			muzzleFlash.Play ();
			shootSound.Play ();
			pisolGO.GetComponent<Animator> ().Play ("Fire");



			// Loading Shell

			Vector3 position = GameObject.FindGameObjectWithTag ("positionPistol").transform.position;
			Quaternion rotation = Quaternion.Euler (0, 0, 0);


			Instantiate (shell, position, rotation);

		}

	
	}
}
