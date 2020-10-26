using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonMovement : MonoBehaviour
{
    const float MinImpulseForce = 1f;
    const float MaxImpulseForce = 3f;
    bool istrue = true;
    Vector3 OldPosition;
    Rigidbody2D rb;
    float angle;
    Vector2 direction;
    float waitedMove = 0;
    bool movingBall = false;

    void Start()
    {
           Movement();
        //   OldPosition = transform.position;
        rb = GetComponent<Rigidbody2D>();
    }
    /*void Update()
    {
        if (OldPosition == transform.position && istrue)
        {
            Movement();
            istrue = false;
        }
        else
            istrue = true;
        OldPosition = transform.position;
    }*/
    //Работает безотказно

    // Update is called once per frame
    void Movement()
    {
        float angle = Random.Range(0, 2 * Mathf.PI);
        Vector2 moveDirection = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
        float magnitude = Random.Range(MinImpulseForce, MaxImpulseForce);
        GetComponent<Rigidbody2D>().AddForce(moveDirection * 1.3f, ForceMode2D.Impulse);
    }
    /*    void Update()
        {
            //move ball
            waitedMove += Time.deltaTime;
            angle = -90 * Mathf.Deg2Rad;
            bool moveBool = waitedMove >= 1f;
            if (moveBool && !movingBall)
            {
                direction = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
                rb.AddForce(direction * 60f);
                movingBall = true;
            }
        }

            public void SetDirection(Vector2 direction)
        {
            Rigidbody2D rb2d = GetComponent<Rigidbody2D>();
            rb2d.velocity = rb2d.velocity.magnitude * direction;
        }*/

}
