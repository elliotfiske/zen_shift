using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Linq;

public enum Skills {
	NoPurple,
	BetterCombos,
	BetterSquares,
	InstantCash,
	ScoreMult,
	MatchMult,
	Idler,
}

public struct SkillObj {
	public Skills type;
	public decimal power;
	public decimal cost;
}

static class MyExtensions
{
	public static void Shuffle<T>(this IList<T> list)
	{
		int n = list.Count;
		while (n > 1)
		{
			n--;
			int k = UnityEngine.Random.Range(0, n+1);
			T value = list[k];
			list[k] = list[n];
			list[n] = value;
		}
	}
}

public class ScoreManager : MonoBehaviour {

	public static bool can_purple = true;
	public float no_purp_time = 0f;

	public static decimal total_spent = 0;

	public Button[] buttons;

	public static decimal score = 0;

	public decimal displayed_score = 0;

	public decimal score_per_second = 0m;

	public static decimal square_multiplier = 0.0m;
	public static decimal combo_multiplier = 0.0m;
	public static decimal big_match_multiplier = 0.0m;
	public static decimal score_mult = 0.0m;

	public SkillObj[] buyable_skillz = new SkillObj[3];

	List<Skills> skill_pool = new List<Skills>();

	public SkillObj GenerateSkill() {

		if (skill_pool.Count == 0) {
			Array values = Enum.GetValues(typeof(Skills));

			for (int i = 0; i < values.Length; i++) {
				skill_pool.Add ((Skills) values.GetValue (i));
			}

			skill_pool.Shuffle ();
		}

		SkillObj result = new SkillObj ();
		result.type = skill_pool.First();
		skill_pool.RemoveAt(0);
		result.cost = UnityEngine.Random.Range (400, 1000) + (score + (decimal) Math.Sqrt((double) total_spent)) * 0.6m;

		// Calculate a reasonable-ish value for the skill
		decimal power_result = 0m;
		switch (result.type) {
		case Skills.BetterCombos:
			power_result = (decimal)Math.Pow ( (double) result.cost, 0.1) * 3;
			break;
		case Skills.BetterSquares:
			power_result = (decimal)Math.Pow ( (double) result.cost, 0.1) * 3;
			break;
		case Skills.Idler:
			power_result = (decimal)Math.Pow ( (double) result.cost, 0.45) * 2.0m;
			break;
		case Skills.InstantCash:
			power_result = result.cost * (decimal)  UnityEngine.Random.Range (1.3f, 2.0f);
			break;
		case Skills.NoPurple:
			power_result = (decimal)Math.Pow ( (double) result.cost, 0.05) + (decimal)  UnityEngine.Random.Range (3.0f, 5.0f);
			break;
		case Skills.MatchMult:
			power_result = (decimal)Math.Pow ((double)result.cost, 0.13) * 8;
			break;
		case Skills.ScoreMult:
			power_result = (decimal)Math.Pow ( (double) result.cost, 0.1) * 0.8m;
			break;
		default: 
			print ("UH OH: unknowns skill " + result.type);
			break;
		}

		result.power = power_result;

		return result;
	}

	// Use this for initialization
	void Start () {
//		print ("IF U LET THIS GET TO LIVE THEN U ARE A DUMB");
//		PlayerPrefs.DeleteAll ();

		// Choose 3 random powerups to start
		for (int i = 0; i < 3; i++) {
			buyable_skillz [i] = GenerateSkill ();
			SetButton (buttons [i], buyable_skillz [i]);
		}

		// load score if found
		if (PlayerPrefs.HasKey ("score")) {
			string old_score = PlayerPrefs.GetString("score");
			decimal yay = 0;
			if (Decimal.TryParse (old_score, out yay)) {
				score = yay;
			} else {
				PlayerPrefs.SetString ("score", "0");
				PlayerPrefs.Save ();
			}
		}
	}

	public static string SmartFormatDec(decimal guy) {
		if (guy > 1e9m) {
			return System.String.Format ("{0:0.###e0}", (double)decimal.Truncate (guy));
		}

		return System.String.Format ("{0:0.0}", (double)decimal.Truncate (guy));;
	}

	// Update is called once per frame
	void Update () {
		score += score_per_second * (decimal) Time.deltaTime;

		if (no_purp_time > 0) {
			can_purple = false;
			no_purp_time -= Time.deltaTime;
		} else {
			can_purple = true;
			no_purp_time = 0;
		}

		if (score - displayed_score <= 1.0m) {
			displayed_score = score;
		}
		displayed_score = displayed_score + (score - displayed_score) * 0.7m;

		GetComponent<Text> ().text = "have: $" + SmartFormatDec (displayed_score);

		Color fine = Color.black;
		Color fade = fine;
		fade.a = 0.5f;

		for (int i = 0; i < 3; i++) {
			SkillObj skill = buyable_skillz [i];
			Button b = buttons [i];

			if (skill.cost > displayed_score) {
				// 2much $$$ 4 u 2 buy lawl
				b.interactable = false;
				b.transform.FindChild ("Text").GetComponent<Text> ().color = fade;
			} else {
				b.interactable = true;
				b.transform.FindChild ("Text").GetComponent<Text> ().color = fine;
			}
		}
	}

	public void ChoseSkill(int ndx) {
		GameObject.Find ("chaching").GetComponent<AudioSource> ().Play ();

		SkillObj chosen = buyable_skillz [ndx];
		score -= chosen.cost;
		total_spent += chosen.cost;

		switch (chosen.type) {
		case Skills.BetterCombos:
			combo_multiplier += chosen.power;
			break;
		case Skills.BetterSquares:
			square_multiplier += chosen.power;
			break;
		case Skills.Idler:
			score_per_second += chosen.power;
			break;
		case Skills.InstantCash:
			score += chosen.power;
			break;
		case Skills.NoPurple:
			no_purp_time += (float)chosen.power;
			FindObjectOfType<GridScript> ().KillPurple ();
			break;
		case Skills.ScoreMult:
			score_mult += chosen.power;
			break;
		case Skills.MatchMult:
			big_match_multiplier += chosen.power;
			break;
		default: 
			print ("UH OH: unknowns skill " + chosen.type);
			break;
		}

		buyable_skillz [ndx] = GenerateSkill ();
		SetButton(buttons[ndx], buyable_skillz[ndx]);
	}

	public void SetButton(Button b, SkillObj skill) {
		string formatted = System.String.Format (SkillText (skill.type), skill.power);
		string text = "$" + System.String.Format( "{0:0}", skill.cost) + "\n\n" + formatted;
		b.transform.FindChild ("Text").GetComponent<Text> ().text = text;
	}

	public string SkillText(Skills skill) {
		switch (skill) {
		case Skills.BetterCombos:
			return "<b>WOMBO</b>\n\nCombos are worth {0:0.0}% more";
		case Skills.BetterSquares:
			return "<b>HIP TO BE SQUARE</b>\n\nSquares are worth {0:0.0}% more";

		case Skills.Idler:
			return "<b>IDLER'S DELIGHT</b>\n\n+{0:0} cash per second";

		case Skills.InstantCash:
			return "<b>PYRAMID SCHEME</b>\n\nInstantly gives ${0:0}";

		case Skills.NoPurple:
			return "<b>PURPLE IS OVERRATED</b>\n\nNo new pentagons for {0:0.0} seconds";

		case Skills.MatchMult:
			return "<b>MATCH MORE GET MORE</b>\n\nBig matches give {0:0.0}% more ";

		case Skills.ScoreMult:
			return "<b>MORE CASH FOR YOUR CASH</b>\n\nScore Multiplier +{0:0.0}%";

		default: 
			print ("UH OH: unknowns skill " + skill);
			break;
		}

		return ":P";
	}
}
