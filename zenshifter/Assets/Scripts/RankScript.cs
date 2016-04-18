using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RankScript : MonoBehaviour {

	string[] weak_adj  = { "Sad", "Measly", "Wimpy", "Gross", "Weak", "Silly", "Donald", "Frowny",
						"Dead", "Ugly", "Awkward", "Sweaty", "Moist", "Damp", "Young", "Filthy",
						   "Lil'", "Smelly", "Snivelling", "Terminal", "Slumpy", "Limp"};
	string[] weak_noun = { "Clown", "Potato", "Mouse", "Rat", "Baby", "Infant", "Child", "Trump",
		"Sauce", "Bush", "Worm", "Cow", "Gravy", "Bug", "Soup", "Stockton", "Bizkit",
	"Soup", "Snake", "Spider", "Scrub", "Pleb", "Burglar", "Casual"};

	string[] decent_adj  = { "Tasty", "Skilled", "Nice", "Good", "Cool", "Bobcat", "Wicked", "Dread", "Dank", "Frog", "VR", "Double",
	"Triple", "Happy", "Friendly", "Turtle", "Seal", "DJ", "Spooky", };
	string[] decent_noun = { "Wizard", "Circle", "Square", "Star", "Pentagon", "Sorcerer", "Snake Oiler", "Goldthwait",
	"Developer", "Thomas", "Steinke", "Meme", "Fractions 2", "Hagrid", "Francis",
		"Artist", "Developer", "Tamer", "Clubber", "Dog", "5-Seater Minivan", "Hippy", "Snek", "Mr. Skeltal", "Skeleton",};

	string[] pro_adj  = { "Radical", "Emperor", "Godly", "Super", "Amazing", "Hyper", "Sith Lord", 
		"Darth", "Bernie", "Kanye", "Bobcat", "Master", "Princess", "Queen", "Captain", "Mega", "Royal", 
		"King", "Prince", "Ultra", "Radiant", "Bejewelled", "Angelic", "Dunder", "Dank", "Chancellor", "Power", "Rare", "Legendary", "All-Star",
		"Supreme", "Major", "Spoopy", "Wow Much", "l33t",
		  };
	string[] pro_noun = { "Light-Drifter", "Wizard", "Hero", "Snake Oiler", "Goldthwait", "Sanders", "Skywalker", 
		"Princess", "Mustang", "Jick", "Riff", "HotStuff", "Avatar", "America", "Boris", "Princess", "Awesome", "Doge",
		"Hutniss", "Coolio", "Angel", "Demigod", "Dunkey", "Fractions 2", "Rinzler", "Sonic", "Sanic", "Voldemort", "Pepe",
		"Len", "Lazer", "Scary Skeletons", "Grandma", "Hacker",
		 };

	// Use this for initialization
	void Start () {
		UpdateRank ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void UpdateRank() {
		
		string rank = "Rank: ";
		if (ScoreManager.score + ScoreManager.total_spent < 10000m) {
			rank += weak_adj [UnityEngine.Random.Range (0, weak_adj.Length)];
			rank += " ";
			rank += weak_noun [UnityEngine.Random.Range (0, weak_noun.Length)];
		} else if (ScoreManager.score + ScoreManager.total_spent < 200000m) {
			rank += decent_adj [UnityEngine.Random.Range (0, decent_adj.Length)];
			rank += " ";
			rank += decent_noun [UnityEngine.Random.Range (0, decent_noun.Length)];
		} else if (ScoreManager.score + ScoreManager.total_spent < 900000m) {
			rank += pro_adj[UnityEngine.Random.Range(0,pro_adj.Length)];
			rank += " ";
			rank += pro_noun[UnityEngine.Random.Range(0,pro_noun.Length)];
		} else {
			rank += pro_adj[UnityEngine.Random.Range(0,pro_adj.Length)];
			rank += " ";
			rank += pro_adj[UnityEngine.Random.Range(0,pro_adj.Length)];
			rank += " ";
			rank += pro_noun[UnityEngine.Random.Range(0,pro_noun.Length)];
		}

		GetComponent<Text> ().text = rank;
	}
}
