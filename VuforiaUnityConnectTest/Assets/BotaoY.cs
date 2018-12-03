using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BotaoY : MonoBehaviour {

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
        animator.Play("Y", -1, 0f);
        resumeAnim();
    }

    public void pauseAnim()
    {
        animator.speed = 0;
        MyPauseButton.GetComponentInChildren<Text>().text = "PLAY Y";
        Button btn = MyPauseButton.GetComponent<Button>();
        btn.onClick.AddListener(resumeAnim);
    }

    public void resumeAnim()
    {
        MyPauseButton.GetComponentInChildren<Text>().text = "PAUSE Y";
        animator.speed = 1;
        Button btn = MyPauseButton.GetComponent<Button>();
        btn.onClick.AddListener(pauseAnim);
    }
}
