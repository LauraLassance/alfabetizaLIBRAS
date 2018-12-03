using System.Collections;
using System.Collections.Generic;
using Vuforia;
using UnityEngine;
using UnityEngine.UI;

public class BotaoX : MonoBehaviour {

    public Animator animator;
    public Transform my3DModel;
    public Transform MyPauseButton;

    // Use this for initialization
    void Start()
    {
        animator = my3DModel.GetComponent<Animator>();
    }

    public void playAnim()
    {
        animator.speed = 1;
        animator.Play("X", -1, 0f);
        resumeAnim();
    }

    public void pauseAnim()
    {
        animator.speed = 0;
        MyPauseButton.GetComponentInChildren<Text>().text = "PLAY X";
        Button btn = MyPauseButton.GetComponent<Button>();
        btn.onClick.AddListener(resumeAnim);
    }

    public void resumeAnim()
    {
        MyPauseButton.GetComponentInChildren<Text>().text = "PAUSE X";
        animator.speed = 1;
        Button btn = MyPauseButton.GetComponent<Button>();
        btn.onClick.AddListener(pauseAnim);
    }
}
