using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class TileScript : MonoBehaviour {

	// Where is the tile, REALLY? Updates when the user releases the pan gesture.	
	public Vector3 base_posn;

	public enum TileType { Square, Circle, Star };

	public TileType type = TileType.Square;

	public Sprite[] sprites;

	// Use this for initialization
	void Start() {
		
	}

	public void RandomizeType () {
		Array values = Enum.GetValues(typeof(TileType));
		type = (TileType)values.GetValue(UnityEngine.Random.Range(0, values.Length));

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
		}

		GetComponent<SpriteRenderer> ().sprite = which_sprite;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
