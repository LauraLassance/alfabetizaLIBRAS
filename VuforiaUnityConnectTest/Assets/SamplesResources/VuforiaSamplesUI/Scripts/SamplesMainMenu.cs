/*===============================================================================
Copyright (c) 2016-2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class SamplesMainMenu : MonoBehaviour
{

    #region PUBLIC_MEMBERS

    public enum MenuItem
    {
        AlfabetizaLIBRAS
    }

    public Canvas AboutCanvas;
    public Text AboutTitle;
    public Text AboutDescription;

    public static bool isAboutScreenVisible;

    // initialize static enum with one of the items
    public static MenuItem menuItem = MenuItem.AlfabetizaLIBRAS;

    public const string MenuScene = "1-Menu";
    public const string LoadingScene = "2-Loading";
    public const string LIBRASScene = "SampleScene";

    AboutScreenInfo aboutScreenInfo;

    #endregion // PUBLIC_MEMBERS

    #region MONOBEHAVIOUR_METHODS

    void Start()
    {
        // reset about screen state variable to false when returning from AR scene
        isAboutScreenVisible = false;

        if (aboutScreenInfo == null)
        {
            // initialize if null
            aboutScreenInfo = new AboutScreenInfo();
        }
        LoadScene(LIBRASScene);
    }

    #endregion // MONOBEHAVIOUR_METHODS

    #region PUBLIC_METHODS

    public static string GetSceneToLoad()
    {
        if (menuItem.ToString() == "AlfabetizaLIBRAS")
            LoadingScreen.SceneToLoad = "SampleScene";

        // called by SamplesLoadingScreen to load selected AR scene
        return "3-" + menuItem.ToString();
    }

    public static void LoadScene(string scene)
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(scene);
    }

    public void BackToMenu()
    {
        // called to return to Menu from About screen
        AboutCanvas.sortingOrder = 0;
        isAboutScreenVisible = false;
    }

    public void LoadAboutScene(string itemSelected)
    {
        UpdateConfiguration(itemSelected);

        // This method called from list of Sample App menu buttons
        switch (itemSelected)
        {
            case ("AlfabetizaLIBRAS"):
                menuItem = MenuItem.AlfabetizaLIBRAS;
                break;
        }

        LoadingScreen.SceneToLoad = "3-" + menuItem.ToString();

        if (itemSelected == "AlfabetizaLIBRAS")
            LoadingScreen.SceneToLoad = "SampleScene";

        AboutTitle.text = aboutScreenInfo.GetTitle(menuItem.ToString());
        AboutDescription.text = aboutScreenInfo.GetDescription(menuItem.ToString());

        AboutCanvas.transform.parent.transform.position = Vector3.zero; // move canvas into position
        AboutCanvas.sortingOrder = 2; // bring canvas in front of main menu
        isAboutScreenVisible = false;

    }

    void UpdateConfiguration(string scene)
    {
        VuforiaConfiguration.Instance.Vuforia.MaxSimultaneousImageTargets = (scene == "VuMarks" ? 10 : 4);
    }

    #endregion // PUBLIC_METHODS

}
