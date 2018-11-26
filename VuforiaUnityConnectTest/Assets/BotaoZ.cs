using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BotaoZ : MonoBehaviour
{
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
        animator.Play("Z", -1, 0f);
    }

    public void pauseAnim()
    {
        animator.speed = 0;
        MyPauseButton.GetComponentInChildren<Text>().text = "RESUME";
        Button btn = MyPauseButton.GetComponent<Button>();
        btn.onClick.AddListener(resumeAnim);
    }

    public void resumeAnim()
    {
        MyPauseButton.GetComponentInChildren<Text>().text = "PAUSE";
        animator.speed = 1;
        Button btn = MyPauseButton.GetComponent<Button>();
        btn.onClick.AddListener(pauseAnim);
    }
}
