using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public enum AnimType { Transform, Scale }
public enum AnimFunc { Linear, Quadratic, Cubic }

public struct Vector3Anim {
	public Vector3 start;
	public Vector3 end;

	public double start_time;
	public double duration;

	public Vector3 GetCurrentValue() {
		double u = (DateTime.Now.Millisecond - start_time) / (duration);
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
		return DateTime.Now.Millisecond > start_time + duration;
	}

	public AnimType type;
	public AnimFunc func;
}

// Defines an object that we can set a target position, duration, and easing function.
public class Animatable : MonoBehaviour {

	List<Vector3Anim> anims = new List<Vector3Anim>();

	// Take the end time and the duration in milliseconds
	public void AnimatePosition(Vector3 end, double duration, AnimType type, AnimFunc func) {
		var new_anim = new Vector3Anim ();
		new_anim.start_time = DateTime.Now.Millisecond;

		switch (type) {
		case AnimType.Transform:
			new_anim.start = transform.position;
			break;
		case AnimType.Scale:
			new_anim.start = transform.localScale;
			break;
		}

		new_anim.end = end;
		new_anim.duration = duration;
		new_anim.type = type;
		new_anim.func = func;
	}

	// Update is called once per frame
	void Update () {
		for (int ndx = anims.Count - 1; ndx >= 0; ndx--) {
			Vector3Anim curr_anim = anims [ndx];
			switch (curr_anim.type) {
			case AnimType.Transform:
				transform.position = curr_anim.GetCurrentValue ();
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
