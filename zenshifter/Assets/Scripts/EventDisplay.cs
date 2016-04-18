using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EventDisplay : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void AddString(string s) {
		string cool = s + GetComponent<Text> ().text;

		if (cool.Length > 600) {
			cool = cool.Substring (0, 600);
		}

		GetComponent<Text> ().text = cool;
	}
}
