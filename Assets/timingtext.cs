using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class timingtext : MonoBehaviour {
	public string myStringScore;

	public float x = 85;
	public float y = 19;
	public float scale = 1;

	public Color myColor;
	//定义数组
	public Texture[] myNumber = new Texture[10];
	//public Texture Tex;
	//
	private int index = 0;
	private int width = 30;
	private int height = 30;
	public float allTime = 100;
	public float countTime;
	// Use this for initialization
	void Start () {
		allTime = allTime + Time.time;
	}
	void FixedUpdate()
	{
		countTime = allTime - Time.time;
		//print(countTime);
		myStringScore = countTime.ToString();
		if (countTime <= 0)
		{
			//游戏结束之后进行设置
			countTime = 0;
			//Application.LoadLevelAdditive(4);
			//Application.Quit();//退出游戏
			// print("countTime");
			// return;
		}
		else
		{
			return;
		}
	}
	// Update is called once per frame
	void Update () {
		
	}
	// Use this for initialization
	void OnGUI()
	{
		GUI.color = myColor;
		if (myStringScore != null)
		{
			for (int i = 0; i < myStringScore.Length; i++)
			{
				if (myStringScore.Substring(i, 1) == ".")
				{
					break;
				}
				GUI.DrawTexture(new Rect(x + i * scale * width, y, scale * width, scale * height), myNumber[int.Parse(myStringScore.Substring(i, 1))], ScaleMode.StretchToFill, true, 0);
				//GUI.DrawTexture(new Rect(x + i * scale * width, y, scale * width, scale * height),myNumber[myStringScore[i]-48]);
			}
		}
	}
}
