using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreManager : MonoBehaviour {
	
	public static decimal score = 1e20m;

	public decimal displayed_score = 0;

	public static decimal square_multiplier = 1.0m;
	public static decimal combo_multiplier = 1.0m;
	public static decimal big_match_multiplier = 1.0m;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (score - displayed_score <= 1.0m) {
			displayed_score = score;
		}
		displayed_score = displayed_score + (score - displayed_score) * 0.7m;

		if (displayed_score > 1e10m) {
			GetComponent<Text> ().text = "have: $" + System.String.Format ("{0:0.###e0}", (double)decimal.Truncate (displayed_score));
		} else {
			GetComponent<Text> ().text = "have: $" + decimal.Truncate(displayed_score);
		}

	}
}
