using UnityEngine;
using System.Collections.Generic;
using System.Collections;


public class GridScript : MonoBehaviour {

	public enum GridState { NoTouch, DraggingRow, DraggingCol, Sliding };

	public GridState state;

	public GameObject square_template;
	public GameObject circle_template;

	public int dragging_row = -1;
	public int dragging_col = -1;

	private int num_rows = 5;
	private int num_cols = 6;

	// Multiply the x, y coords by the grid_size to get their pixel coords
	private float grid_size = 1.85f;

	public GameObject[][] grid;
	// To simulate a neverending wrap-around, we secretly just add 2 copied rows/cols to either end of the 
	//  currently dragged rows.
	public List<GameObject> buffer_tiles = new List<GameObject>();

	// Set a row's "offset" to the specified amount.
	void SlideRow(int row_ndx, float offset) {
		for (int x = 0; x < num_cols; x++) {
			var tile_pos = grid [row_ndx] [x].transform.localPosition;
			tile_pos += new Vector3 (offset, 0);
			grid [row_ndx] [x].transform.localPosition = tile_pos;
		}

		foreach (GameObject tile in buffer_tiles) {
			var tile_pos = tile.transform.localPosition;
			tile_pos += new Vector3 (offset, 0);
			tile.transform.localPosition = tile_pos;
		}
	}

	// Set a col's "offset" to the specified amount.
	void SlideCol(int col_ndx, float offset) {
		for (int y = 0; y < num_rows; y++) {
			var tile_pos = grid [y] [col_ndx].transform.localPosition;
			tile_pos += new Vector3 (0, offset);
			grid [y] [col_ndx].transform.localPosition = tile_pos;
		}
	}

	// Use this for initialization
	void Start () {

		// Pre populate the grid
		grid = new GameObject[num_rows][];

		for (int y = 0; y < num_rows; y++) {
			grid [y] = new GameObject[num_cols];
			for (int x = 0; x < num_cols; x++) {
				grid [y] [x] = (GameObject) Instantiate (square_template, 
					new Vector3(x * grid_size, y * grid_size, 0), Quaternion.identity);
				grid [y] [x].transform.parent = transform;
				grid [y] [x].transform.Translate (transform.position.x, transform.position.y, 0);

				grid [y] [x].GetComponent<TileScript> ().base_posn = grid [y] [x].transform.localPosition;
				grid [y] [x].GetComponent<TileScript> ().RandomizeType ();
			}
		}
	}

	// Slap a copy row on the side of the actual row
	public void AddCopycatRow(int dragging_row, int offset) {
		for (int x = 0; x < num_cols; x++) {
			var tile = grid [dragging_row] [x];
			var copycat = (GameObject)Instantiate (tile);
			buffer_tiles.Add (copycat);

			// It's in worldspace by default, treat it like it's my kid
			copycat.transform.Translate (transform.position);

			copycat.transform.Translate (new Vector3 (offset * num_cols * grid_size, 0));
		}
	}

	// Calculate which row we're dragging, if any
	public void TouchDownRow(Vector3 world_point) {
		var local_point = world_point - transform.position;
		var raw_row = (local_point.y + grid_size / 2) / grid_size;

		int row = Mathf.FloorToInt (raw_row);

		if (row <= -1 || row >= num_rows) {
			// Outta bounds.
		} else {
			dragging_row = row;
			state = GridState.DraggingRow;

			AddCopycatRow (dragging_row, -2);
			AddCopycatRow (dragging_row, -1);
			AddCopycatRow (dragging_row, 1);
			AddCopycatRow (dragging_row, 2);
		}
	}

	// Calculate which row we're dragging, if any
	public void TouchDownCol(Vector3 world_point) {
		var local_point = world_point - transform.position;
		var raw_col = (local_point.x + grid_size / 2) / grid_size;

		int col = Mathf.FloorToInt (raw_col);

		if (col <= -1 || col >= num_cols) {
			// Outta bounds.
		} else {
			dragging_col = col;
			state = GridState.DraggingCol;
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

	// Set state back to "not draggin fam"
	public void TouchEnded(Vector3 drag_offset) {
		
		// Wipe buffer tiles
		foreach (GameObject tile in buffer_tiles) {
			Destroy (tile);
		}

		buffer_tiles.Clear ();

		// Snap  everybody to a grid, and modulo-ify them back to the right place
		if (state == GridState.DraggingCol) {

			var offset = drag_offset.y;
			offset /= grid_size;
			offset = Mathf.Round (offset);

			int num_moved = Mathf.RoundToInt(offset);
			offset *= grid_size;

		} else if (state == GridState.DraggingRow) {

			var offset = drag_offset.x;
			offset /= grid_size;
			offset = Mathf.Round (offset);

			// Number of indexes the tiles have shifted.
			int num_moved = Mathf.RoundToInt(offset);
			offset *= grid_size;

			// this list will contain what we need to stick back into the grid at the [dragging_row]th row
			List<GameObject> new_row = new List<GameObject> ();

			for (int x = 0; x < num_cols; x++) {
				var tile_pos = grid [dragging_row] [x].GetComponent<TileScript> ().base_posn;
				tile_pos += new Vector3 (offset, 0);
				grid [dragging_row] [x].transform.localPosition = tile_pos;

				var wrapped_offset = ModWrap(x - num_moved, num_cols);
				print ("Wrapped offset... " + wrapped_offset);
				new_row.Add (grid [dragging_row] [wrapped_offset]);
			}

			for(int x = 0; x < num_cols; x++) {
				grid [dragging_row] [x] = new_row [x];
				var pos = new_row [x].transform.localPosition;
				pos.x = x * grid_size;
				new_row [x].transform.localPosition = pos;
			}

		} else {
			print ("Ah man I screwed something up.. somewhere");
		}

		state = GridState.NoTouch;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
