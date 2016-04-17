using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MatchMaker : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void GotMatch(List<GameObject> tiles) {
		foreach (GameObject tile in tiles) {
			tile.GetComponent<TileScript> ().Explode ();
		}
	}

	// find matches and mark em as match-if-ied
	public void FindMatches(GridScript grid) {
		// find row matches
		for (int y = 0; y < grid.num_rows; y++) {
			int innarow = 1;
			TileType curr_tile = TileType.NONE;
			List<GameObject> curr_tiles = new List<GameObject> ();

			for (int x = 0; x < grid.num_cols; x++) {
//				print ("Type " + curr_tile + " vs Type " + grid.grid [y] [x].GetComponent<TileScript> ().type);
				if (curr_tile != grid.grid [y] [x].GetComponent<TileScript> ().type) {
					if (innarow >= 3) {
						// Found match!
						GotMatch(curr_tiles);
					}
					innarow = 0;
					curr_tiles.Clear ();

					curr_tile = grid.grid [y] [x].GetComponent<TileScript> ().type;
				}
				curr_tiles.Add (grid.grid [y] [x]);
				innarow++;
			}

			// Check again at the end of a row
			if (innarow >= 3) {
				// Found match!
				GotMatch(curr_tiles);
			}
		}

		// find col matches
		for (int x = 0; x < grid.num_cols; x++) {
			int innarow = 1;
			TileType curr_tile = TileType.NONE;
			List<GameObject> curr_tiles = new List<GameObject> ();

			for (int y = 0; y < grid.num_rows; y++) {
				print ("Type " + curr_tile + " vs Type " + grid.grid [y] [x].GetComponent<TileScript> ().type);
				if (curr_tile != grid.grid [y] [x].GetComponent<TileScript> ().type) {
					if (innarow >= 3) {
						// Found match!
						GotMatch(curr_tiles);
					}
					innarow = 0;
					curr_tiles.Clear ();

					curr_tile = grid.grid [y] [x].GetComponent<TileScript> ().type;
				}
				curr_tiles.Add (grid.grid [y] [x]);
				innarow++;
			}

			// Check again at the end of a row
			if (innarow >= 3) {
				// Found match!
				GotMatch(curr_tiles);
			}
		}
	}
}
