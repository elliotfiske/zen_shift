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

	// Returns a vector of the x, y coords of the tile in the grid
	public Vector2 FindCoords (TileScript victim, GridScript grid_guy) {
		for (int x = 0; x < grid_guy.num_cols; x++) {
			for (int y = 0; y < grid_guy.num_rows; y++) {
				if (victim == grid_guy.grid [y] [x].GetComponent<TileScript>()) {
					return new Vector2 (x, y);
				}
			}
		}
		print ("Tile that just matched doesn't exist in the grid??? of type " + victim.type);
		return Vector2.zero;
	}

	// Saves up all the matched tiles and destroys them when everything is resolved
	public List<GameObject> to_destroy;

	public void GotMatch(List<GameObject> tiles, GridScript grid_guy) {
		foreach (GameObject tile in tiles) {
			Vector2 coords = FindCoords(tile.GetComponent<TileScript>(), grid_guy);
			int tx = Mathf.RoundToInt (coords.x);
			int ty = Mathf.RoundToInt (coords.y);

			for (int y = ty + 1; y < grid_guy.num_rows; y++) {
				grid_guy.grid [y] [tx].GetComponent<Rigidbody2D> ().isKinematic = false;
			}

			tile.GetComponent<TileScript>().ded = true; // rip
		}
	}

	// find matches and mark em as match-if-ied
	public void FindMatches(GridScript grid) {
		to_destroy.Clear ();

		// find row matches
		for (int y = 0; y < grid.num_rows; y++) {
			int innarow = 1;
			TileType curr_tile = TileType.NONE;
			List<GameObject> curr_tiles = new List<GameObject> ();

			for (int x = 0; x < grid.num_cols; x++) {
				if (curr_tile != grid.grid [y] [x].GetComponent<TileScript> ().type) {
					if (innarow >= 3) {
						// Found match!
						GotMatch(curr_tiles, grid);
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
				GotMatch(curr_tiles, grid);
			}
		}

		// find col matches
		for (int x = 0; x < grid.num_cols; x++) {
			int innarow = 1;
			TileType curr_tile = TileType.NONE;
			List<GameObject> curr_tiles = new List<GameObject> ();

			for (int y = 0; y < grid.num_rows; y++) {
				if (curr_tile != grid.grid [y] [x].GetComponent<TileScript> ().type) {
					if (innarow >= 3) {
						// Found match!
						GotMatch(curr_tiles, grid);
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
				GotMatch(curr_tiles, grid);
			}
		}

		FixGrid (grid);
	}

	public void FixGrid(GridScript grid) {
		// Resolve grid for matched tiles
		List< List<TileScript> > new_tiles = new List< List<TileScript >>();
		for (int col = 0; col < grid.num_cols; col++) {
			new_tiles.Add (new List<TileScript> ());
		}

		for (int y = 0; y < grid.num_rows; y++) {
			for (int x = 0; x < grid.num_cols; x++) {
				var curr_tile = grid.grid [y] [x];

				if (curr_tile.GetComponent<TileScript> ().ded) {
					// ALGORITHM:
					// go up the column until we find a non-ded tile that can fall into my spot.
					// when we find one, mark it as ded and COPY it into my spot, then destroy me.
					// 
					// If we reach the top of the column with no viable candidate, spawn a new tile on
					// the right column-stack.
					bool found_sub = false;
					for (int ty = y; y < grid.num_rows; y++) {
						if (!grid.grid [ty] [x].GetComponent<TileScript> ().ded) {
							var new_me = GameObject.Instantiate(grid.grid [ty][x]);
							grid.grid [y] [x] = new_me;
							Destroy (curr_tile);

							grid.grid [ty] [x].GetComponent<TileScript>().ded = true;

							found_sub = true;

							break;
						}
					}

					if (!found_sub) {
						// make a new tile to go in my spot
						grid.grid[y][x] = Instantiate(grid.square_template);
						new_tiles [x].Add (grid.grid [y] [x].GetComponent<TileScript>());
						Destroy (curr_tile);
					}
				}
			}
		}

		// Resolve subs
		for (int col = 0; col < grid.num_cols; col++) {
			List<TileScript> curr_list = new_tiles [col];

			float curr_y = grid.num_cols * grid.grid_size;
			foreach (TileScript new_tile in curr_list) {
				new_tile.transform.localPosition = new Vector3 (col * grid.grid_size, curr_y);
				new_tile.GetComponent<TileScript> ().RandomizeType ();
				new_tile.GetComponent<Rigidbody2D> ().isKinematic = false;

				curr_y += grid.grid_size;
			}

		}
	}
}
