using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public enum GridState { NoTouch, DraggingRow, DraggingCol, SlidingRow, SlidingCol, ResolvingMatches };

public class GridScript : MonoBehaviour {

	public static Vector3 GRAVITY = new Vector3 (0, -18f, 0);

	public GridState state;

	public GameObject square_template;

	public int dragging_row = -1;
	public int dragging_col = -1;

	public int num_rows;
	public int num_cols;

	// Multiply the x, y coords by the grid_size to get their pixel coords
	public float grid_size_x;
	public float grid_size_y;

	public GameObject[][] grid;
	// To simulate a neverending wrap-around, we secretly just add 2 copied rows/cols to either end of the 
	//  currently dragged rows.
	public List<GameObject> buffer_tiles = new List<GameObject>();

	// We don't want to iterate through ALL the currently dragged tiles.
	// Put them under a parent and just move the parent, dummy!
	public GameObject drag_parent;

	// Set a row's "offset" to the specified amount.
	void SlideRow(int row_ndx, float offset) {
		drag_parent.transform.Translate (new Vector3 (offset, 0));	
	}

	// Set a col's "offset" to the specified amount.
	void SlideCol(int col_ndx, float offset) {
		drag_parent.transform.Translate (new Vector3 (0, offset));
	}

	// Use this for initialization
	void Start () {

		// Pre populate the grid
		grid = new GameObject[num_rows][];

		for (int y = 0; y < num_rows; y++) {
			grid [y] = new GameObject[num_cols];
			for (int x = 0; x < num_cols; x++) {
				grid [y] [x] = (GameObject) Instantiate (square_template, 
					new Vector3(x * grid_size_x, y * grid_size_y, 0), Quaternion.identity);
				grid [y] [x].transform.parent = transform;
				grid [y] [x].transform.Translate (transform.position.x, transform.position.y, 0);

				grid [y] [x].GetComponent<TileScript> ().base_posn = grid [y] [x].transform.localPosition;
				grid [y] [x].GetComponent<TileScript> ().RandomizeType ();
			}
		}
	}

	// Slap a copy row on the side of the actual row
	public void AddCopycatRow(int dragging_row, int offset, GameObject daddy) {
		for (int x = 0; x < num_cols; x++) {
			var tile = grid [dragging_row] [x];
			var copycat = (GameObject)Instantiate (tile);
			copycat.GetComponent<Rigidbody2D> ().isKinematic = true;
			buffer_tiles.Add (copycat);

			// It's in worldspace by default, treat it like it's my kid
			copycat.transform.Translate (transform.position);

			// Add to new drag parent transform
			copycat.transform.parent = daddy.transform;

			copycat.transform.Translate (new Vector3 (offset * num_cols * grid_size_x, 0));
		}
	}

	// Slap a copy col on the top and bottom of the actual col
	public void AddCopycatCol(int dragging_col, int offset, GameObject daddy) {
		for (int y = 0; y < num_rows; y++) {
			var tile = grid [y] [dragging_col];
			var copycat = (GameObject)Instantiate (tile);
			copycat.GetComponent<Rigidbody2D> ().isKinematic = true;
			buffer_tiles.Add (copycat);

			// It's in worldspace by default, treat it like it's my kid
			copycat.transform.Translate (transform.position);

			// Add to new drag parent transform
			copycat.transform.parent = daddy.transform;

			copycat.transform.Translate (new Vector3 (0, offset * num_rows * grid_size_y));
		}
	}

	// Calculate which row we're dragging, if any
	public void TouchDownRow(Vector3 world_point) {
		if (state != GridState.NoTouch) {
			return; // no touching, stuff is still resolving!
		}

		var local_point = world_point - transform.position;
		var raw_row = (local_point.y + grid_size_y / 2) / grid_size_y;

		int row = Mathf.FloorToInt (raw_row);

		drag_parent = new GameObject ("row_daddy", typeof(Animatable));

		if (row <= -1 || row >= num_rows) {
			// Outta bounds.
		} else {
			dragging_row = row;
			state = GridState.DraggingRow;

			AddCopycatRow (dragging_row, -2, drag_parent);
			AddCopycatRow (dragging_row, -1, drag_parent);
			AddCopycatRow (dragging_row, 1, drag_parent);
			AddCopycatRow (dragging_row, 2, drag_parent);

			for (int ndx = 0; ndx < num_cols; ndx++) {
				grid [dragging_row] [ndx].transform.parent = drag_parent.transform;
			}
		}
	}

	// Calculate which col we're dragging, if any
	public void TouchDownCol(Vector3 world_point) {
		if (state != GridState.NoTouch) {
			return; // no touching, stuff is still resolving!
		}

		var local_point = world_point - transform.position;
		var raw_col = (local_point.x + grid_size_x / 2) / grid_size_x;

		int col = Mathf.FloorToInt (raw_col);

		drag_parent = new GameObject ("row_daddy", typeof(Animatable));

		if (col <= -1 || col >= num_cols) {
			// Outta bounds.
		} else {
			dragging_col = col;
			state = GridState.DraggingCol;

			AddCopycatCol (dragging_col, -2, drag_parent);
			AddCopycatCol (dragging_col, -1, drag_parent);
			AddCopycatCol (dragging_col, 1, drag_parent);
			AddCopycatCol (dragging_col, 2, drag_parent);

			for (int ndx = 0; ndx < num_rows; ndx++) {
				grid [ndx] [dragging_col].transform.parent = drag_parent.transform;
			}
		}
	}

	// shrink a tile when we press it
	public void HoldMe(Vector3 world_point) {

		var local_point = world_point - transform.position;
		var raw_col = (local_point.x + grid_size_x / 2) / grid_size_x;

		int col = Mathf.FloorToInt (raw_col);

		var raw_row = (local_point.y + grid_size_y / 2) / grid_size_y;

		int row = Mathf.FloorToInt (raw_row);

		if (col >= 0 && col < num_cols && row >= 0 && row < num_rows) {
			grid [row] [col].GetComponent<Animator> ().SetBool ("held", true);
		}
	}

	// unshrink every tile when we're done
	public void TrashMe() {
		for (int x = 0; x < num_cols; x++) {
			for (int y = 0; y < num_rows; y++) {
				var tile = grid [y] [x];
				tile.GetComponent<Animator> ().SetBool ("held", false);
			}
		}
	}

	public void TouchMoved (Vector3 drag_offset) {
		switch (state) {
		case GridState.DraggingRow:
			SlideRow (dragging_row, drag_offset.x);
			break;
		case GridState.DraggingCol:
			SlideCol (dragging_col, drag_offset.y);
			break;
		default:
			// Probably started drag not on a row.
			break;
		}
	}

	int ModWrap(int k, int n) {  return ((k %= n) < 0) ? k+n : k;  }

	private int num_moved; // I'M NOT SORRY, FUTURE ME!!!

	// Set state back to "not draggin fam"
	public void TouchEnded(Vector3 drag_offset) {

		// Snap  everybody to a grid, and modulo-ify them back to the right place
		if (state == GridState.DraggingCol) {

			var rounded_offset = drag_offset.y;
			rounded_offset /= grid_size_y;
			rounded_offset = Mathf.Round (rounded_offset);

			// Number of indexes the tiles have shifted.
			num_moved = Mathf.RoundToInt(rounded_offset);
			rounded_offset *= grid_size_y;

			var old_pos = drag_parent.transform.position;
			var pos = old_pos;
			pos.y = rounded_offset;
			drag_parent.GetComponent<Animatable> ().AnimatePosition (old_pos, pos, 0.15, AnimFunc.Cubic);

			state = GridState.SlidingCol;

		} else if (state == GridState.DraggingRow) {

			var rounded_offset = drag_offset.x;
			rounded_offset /= grid_size_x;
			rounded_offset = Mathf.Round (rounded_offset);

			// Number of indexes the tiles have shifted.
			num_moved = Mathf.RoundToInt(rounded_offset);
			rounded_offset *= grid_size_x;

			var old_pos = drag_parent.transform.position;
			var pos = old_pos;
			pos.x = rounded_offset;
			drag_parent.GetComponent<Animatable> ().AnimatePosition (old_pos, pos, 0.15, AnimFunc.Cubic);

			state = GridState.SlidingRow;

		} else {
			print ("Ah man I screwed something up.. somewhere. Bad state: " + state);
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (state == GridState.NoTouch) {
//			if (purple_must_die) {
//				for (int x = 0; x < num_cols; x++) {
//					for (int y = 0; y < num_rows; y++) {
//						var tile = grid [y] [x].GetComponent<TileScript> ();
//						if (tile.type == TileType.Polygon) {
//							tile.ded = true;
//						}
//					}
//				}
//
//				purple_must_die = false;
//					
//				state = GameObject.FindObjectOfType<MatchMaker> ().FindMatches (this);
//				UpdateBasePosn ();
//			}
		} else
		// See if we should wait for animations to finish
		if (state == GridState.SlidingRow || state == GridState.SlidingCol) {
			if (!drag_parent.GetComponent<Animatable> ().Animating) {
				
				// Wipe buffer tiles
				foreach (GameObject tile in buffer_tiles) {
					Destroy (tile);
				}

				buffer_tiles.Clear ();

				if (state == GridState.SlidingCol) {
					// this list will contain what we need to stick back into the grid at the [dragging_row]th row
					List<GameObject> new_col = new List<GameObject> ();

					for (int y = 0; y < num_rows; y++) {
						var wrapped_offset = ModWrap (y - num_moved, num_rows);
						new_col.Add (grid [wrapped_offset] [dragging_col]);

						// Reset elements in the dragging_row to have me as the parent
						grid [y] [dragging_col].transform.parent = transform;
					}

					// Iterate through the new row and put its elements in the right place
					for (int y = 0; y < num_rows; y++) {
						grid [y] [dragging_col] = new_col [y];
						var pos = new_col [y].transform.localPosition;
						pos.y = y * grid_size_y;
						new_col [y].transform.localPosition = pos;

						new_col [y].GetComponent<TileScript> ().base_posn = new_col [y].transform.localPosition;
					}

				} else if (state == GridState.SlidingRow) {
					// this list will contain what we need to stick back into the grid at the [dragging_row]th row
					List<GameObject> new_row = new List<GameObject> ();

					for (int x = 0; x < num_cols; x++) {
						var wrapped_offset = ModWrap (x - num_moved, num_cols);
						new_row.Add (grid [dragging_row] [wrapped_offset]);

						print ("Hey row: " + num_moved);

						// Reset elements in the dragging_row to have me as the parent
						grid [dragging_row] [x].transform.parent = transform;
					}

					// Iterate through the new row and put its elements in the right place
					for (int x = 0; x < num_cols; x++) {
						grid [dragging_row] [x] = new_row [x];
						var pos = new_row [x].transform.localPosition;
						pos.x = x * grid_size_x;
						new_row [x].transform.localPosition = pos;

						new_row [x].GetComponent<TileScript> ().base_posn = new_row [x].transform.localPosition;
					}
				} else {
					print ("Ah man I screwed something up.. somewhere. Bad state: " + state);
				}
					
				Destroy (drag_parent);

				state = GameObject.FindObjectOfType<MatchMaker> ().FindMatches (this);
				UpdateBasePosn ();
			}
		} else if (state == GridState.ResolvingMatches) {
			ResolveMatches ();	
		}
	}

	public int rank_countdown = 2;

	public void DoCombos() {
		var combo = GameObject.FindObjectOfType<MatchMaker> ().combo;
		GameObject.FindObjectOfType<MatchMaker> ().combo = 0;

		if (combo > 2) {
			FindObjectOfType<EventDisplay> ().AddString (combo + " COMBO!\n");
		}

		rank_countdown--;
		if (rank_countdown <= 0) {
			rank_countdown = 3;
			FindObjectOfType<RankScript> ().UpdateRank ();
		}
	}

	public bool purple_must_die = false;

	public void KillPurple() {
//		purple_must_die = true;

//		for (int x = 0; x < num_cols; x++) {
//			for (int y = 0; y < num_rows; y++) {
//				var tile = grid [y] [x].GetComponent<TileScript> ();
//				if (tile.type == TileType.Polygon) {
//					tile.ded = true;
//				}
//			}
//		}
	}

	public void ResolveMatches() {
		// Check if all the tiles are done falling
		bool done = true;
		for (int x = 0; x < num_cols; x++) {
			for (int y = 0; y < num_rows; y++) {
				var tile = grid [y] [x];

				if (tile == null) {
					print ("Bad news boys. Null tile at row " + y + " col " + x);
				}

//				bool is_at_target_posn = Mathf.Abs (tile.GetComponent<TileScript> ().base_posn.y - tile.transform.position.y);
				bool is_movin = Mathf.Abs (tile.GetComponent<Rigidbody2D> ().velocity.y) > 0.02f;

				if (!tile.GetComponent<Rigidbody2D> ().isKinematic && is_movin) {
					done = false;
				}
			}
		}

		if (done) {
			// Reset tiles to kinematic and align them to grid
			for (int x = 0; x < num_cols; x++) {
				for (int y = 0; y < num_rows; y++) {
					var tile = grid [y] [x];
					tile.transform.localPosition = new Vector3 (x * grid_size_x, y * grid_size_y);
					tile.GetComponent<Rigidbody2D> ().isKinematic = true;
					tile.GetComponent<TileScript> ().base_posn = new Vector3 (x * grid_size_x, y * grid_size_y);
				}
			}

			// returns either NoTouch or ResolvingMatches
			state = GameObject.FindObjectOfType<MatchMaker> ().FindMatches (this);
			UpdateBasePosn ();

			if (state == GridState.NoTouch) {
				DoCombos ();
			}
		}
	}

	void UpdateBasePosn() {
		for (int x = 0; x < num_cols; x++) {
			for (int y = 0; y < num_rows; y++) {
				var tile = grid [y] [x];
				tile.GetComponent<TileScript> ().base_posn = new Vector3 (x * grid_size_x, y * grid_size_y);
			}
		}
	}
}
