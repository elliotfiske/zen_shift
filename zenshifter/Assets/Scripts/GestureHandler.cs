using UnityEngine;
using System.Collections;
using TouchScript.Gestures;
using System;

public class GestureHandler : MonoBehaviour {

	public GridScript grid;

	// How far has the pan gesture gone in total?
	public Vector3 total_offset;

	// Register for pan gesture events
	private void OnEnable() {
		GetComponent<PanGesture>().PanStarted += PanBegan;
		GetComponent<PanGesture>().Panned += PanMoved;
		GetComponent<PanGesture>().PanCompleted += PanEnded;

		GetComponent<TapGesture>().Tapped += Tapped;
	}

	private void OnDisable() {
		GetComponent<PanGesture> ().PanStarted -= PanBegan;
		GetComponent<PanGesture> ().Panned -= PanMoved;
		GetComponent<PanGesture> ().PanCompleted -= PanEnded;

		GetComponent<TapGesture> ().Tapped -= Tapped;
	}

	// Finger down!  Tell the grid, it'll start dragging a row or col if it can.
	void PanBegan(object sender, EventArgs e) {
		
		var panGesture = sender as PanGesture;
		var worldPoint = Camera.main.ScreenToWorldPoint(panGesture.ScreenPosition);

		total_offset = Vector3.zero;

		// Determine if pan horizontal or vertical
		var dir = panGesture.LocalDeltaPosition;
		if (Math.Abs (dir.x) < Math.Abs (dir.y)) {
			grid.TouchDownCol (worldPoint);	
		}
		else {
			grid.TouchDownRow (worldPoint);
		}  
	}

	// Pan moved.  Tell the grid what the new offset is.
	public void PanMoved(object sender, EventArgs e) {
		var panGesture = sender as PanGesture;

		grid.TouchMoved (panGesture.LocalDeltaPosition);
		total_offset += panGesture.LocalDeltaPosition;
	}

	// Pan ended.  Tell the grid to snap to whatever.
	void PanEnded(object sender, EventArgs e) {
		var panGesture = sender as PanGesture;

		grid.TouchEnded (total_offset);
	}

	public void Tapped(object sender, EventArgs e) {
		var tapGesture = sender as TapGesture;
		var worldPoint = Camera.main.ScreenToWorldPoint(tapGesture.ScreenPosition);
	}

	// Use this for initialization
	void Start () {
		grid = GameObject.FindObjectOfType<GridScript> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
