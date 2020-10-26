using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonMovement : MonoBehaviour
{
    const float MinImpulseForce = 1f;
    const float MaxImpulseForce = 2f;

    void Start()
    {
        Movement();
    }

    // Update is called once per frame
    void Movement()
    {
        float angle = Random.Range(0, 2 * Mathf.PI);
        Vector2 moveDirection = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
        float magnitude = Random.Range(MinImpulseForce, MaxImpulseForce);
        GetComponent<Rigidbody2D>().AddForce(moveDirection * 1.3f, ForceMode2D.Impulse);
    }
}
