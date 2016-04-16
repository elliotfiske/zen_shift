using UnityEngine;
using System.Collections;



public class GridScript : MonoBehaviour {

	public enum GridState { NoTouch, DraggingRow, DraggingCol};

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

	// Set a row's "offset" to the specified amount.
	void SlideRow(int row_ndx, float offset) {
		for (int x = 0; x < num_cols; x++) {
			var tile_pos = grid [row_ndx] [x].transform.localPosition;
			tile_pos += new Vector3 (offset, 0);
			grid [row_ndx] [x].transform.localPosition = tile_pos;
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
			}
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

	// Set state back to "not draggin fam"
	public void TouchEnded() {
		state = GridState.NoTouch;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
