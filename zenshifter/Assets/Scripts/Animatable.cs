using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public enum AnimType { Position, Scale }
public enum AnimFunc { Linear, Quadratic, Cubic }

public struct Vector3Anim {
	public Vector3 start;
	public Vector3 end;

	public double start_time;
	public double duration;

	public Vector3 GetCurrentValue() {
		double u = (Time.time - start_time) / (duration);
		double s = 0;

		switch (func) {
		case AnimFunc.Linear:
			s = u;
			break;
		case AnimFunc.Quadratic:
			s = u * u;
			break;
		case AnimFunc.Cubic:
			s = u * u * u;
			break;
		default:
			break;
		}

		return Vector3.Lerp(start, end, (float) s);
	}

	public bool Done() {
		Debug.Log ("Comparing: " + Time.time + " And  " + (start_time + duration));
		return Time.time > start_time + duration;
	}

	public AnimType type;
	public AnimFunc func;
}

// Defines an object that we can set a target position, duration, and easing function.
public class Animatable : MonoBehaviour {

	List<Vector3Anim> anims = new List<Vector3Anim>();
	public bool Animating {
		get {
			return anims.Count > 0;
		}
	}

	// Take the end time and the duration in milliseconds
	public void AnimatePosition(Vector3 start, Vector3 end, double duration, AnimFunc func) {
		var new_anim = new Vector3Anim ();
		new_anim.start_time = Time.time;

		new_anim.start = transform.position;

		new_anim.start = start;
		new_anim.end = end;
		new_anim.duration = duration;
		new_anim.type = AnimType.Position;
		new_anim.func = func;

		anims.Add (new_anim);
	}

	// Update is called once per frame
	void Update () {
		for (int ndx = anims.Count - 1; ndx >= 0; ndx--) {
			Vector3Anim curr_anim = anims [ndx];
			switch (curr_anim.type) {
			case AnimType.Position:
				transform.localPosition = curr_anim.GetCurrentValue ();
				break;
			case AnimType.Scale:
				transform.localScale = curr_anim.GetCurrentValue ();
				break;
			}

			if (curr_anim.Done ()) {
				anims.Remove (curr_anim);
			}
		}
	}
}
