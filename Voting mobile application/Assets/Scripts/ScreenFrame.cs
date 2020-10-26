using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenFrame : MonoBehaviour
{
	const float BounceAngleHalfRange = 60f;
	// Start is called before the first frame update
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

/*	void OnCollisionEnter2D(Collision2D coll)
	{
		bool ballTop = coll.gameObject.GetComponent<ButtonMovement>().transform.position.y > transform.position.y - 0.05f;
			// calculate new ball direction
			if (ballTop)
			{
				float ballOffsetFromPaddleCenter = transform.position.x -
					coll.transform.position.x;
				float normalizedBallOffset = ballOffsetFromPaddleCenter / 5;
				float angleOffset = normalizedBallOffset * BounceAngleHalfRange;
				float angle = Mathf.PI / 2 + angleOffset;
				Vector2 direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));

				// tell ball to set direction to new direction
				ButtonMovement ballScript = coll.gameObject.GetComponent<ButtonMovement>();
				ballScript.SetDirection(direction);
			}
	}*/
}
