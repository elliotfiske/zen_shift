using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public enum TileType { Square, Circle, Star, NONE };

public class TileScript : MonoBehaviour {

	// Where is the tile, REALLY? Updates when the user releases the pan gesture.	
	public Vector3 base_posn;

	public TileType type = TileType.Square;

	public Sprite[] sprites;

	public GameObject particle_template;

	public bool ded = false;

	// Use this for initialization
	void Start() {
		
	}

	public void RandomizeType () {
		Array values = Enum.GetValues(typeof(TileType));
		type = (TileType)values.GetValue(UnityEngine.Random.Range(0, values.Length - 1));

		Sprite which_sprite = sprites[0];

		switch (type) {
		case TileType.Square:
			which_sprite = sprites [0];
			break;
		case TileType.Circle:
			which_sprite = sprites [1];
			break;
		case TileType.Star:
			which_sprite = sprites [2];
			break;
		default:
			print ("lol u screwed up again: " + type);
			break;
		}

		GetComponent<SpriteRenderer> ().sprite = which_sprite;
	}
	
	public void Explode() {
		
		GameObject farticles = (GameObject) GameObject.Instantiate (particle_template, transform.position, Quaternion.identity);
		Color c = new Color ();
		switch (type) {
		case TileType.Square:
			ColorUtility.TryParseHtmlString ("#c4e5bd", out c);
			farticles.GetComponent<ParticleSystem> ().startColor = c;
			break;
		case TileType.Circle:
			ColorUtility.TryParseHtmlString ("#ffb4b4", out c);
			farticles.GetComponent<ParticleSystem> ().startColor = c;
			break;
		case TileType.Star:
			ColorUtility.TryParseHtmlString ("#f8ff6b", out c);
			farticles.GetComponent<ParticleSystem> ().startColor = c;
			break;
		default:
			print ("lol u screwed up again: " + type);
			break;
		}
	}

	public void OnCollisionEnter2D(Collision2D coll) {
		
		if (coll.gameObject.tag == "FLOOR" || coll.gameObject.GetComponent<Rigidbody2D> ().isKinematic) {
			// snap to where I'm suppposed to be and stop animating physics
			GetComponent<Rigidbody2D>().isKinematic = true;
//			transform.localPosition = base_posn;
		}
	}
}
