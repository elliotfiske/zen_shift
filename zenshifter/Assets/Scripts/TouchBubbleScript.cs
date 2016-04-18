using UnityEngine;
using System.Collections;

public class TouchBubbleScript : MonoBehaviour {

	public float life = 1.0f;

	// Use this for initialization
	void Start () {
		GetComponent<CircleCollider2D> ().radius = 0f;
	}
	
	// Update is called once per frame
	void Update () {
		GetComponent<CircleCollider2D> ().radius += 0.4f;
		life -= Time.deltaTime;

		if (life < 0) {
			Destroy (this.gameObject);
		}
	}

}
