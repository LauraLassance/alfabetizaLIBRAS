/*===============================================================================
Copyright (c) 2016-2018 PTC Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other
countries.
===============================================================================*/

using System.Collections.Generic;

public class AboutScreenInfo
{
    #region PRIVATE_MEMBERS

    readonly Dictionary<string, string> titles;
    readonly Dictionary<string, string> descriptions;

    #endregion // PRIVATE_MEMBERS


    #region PUBLIC_METHODS

    public string GetTitle(string titleKey)
    {
        return GetValuefromDictionary(titles, titleKey);
    }

    public string GetDescription(string descriptionKey)
    {
        return GetValuefromDictionary(descriptions, descriptionKey);
    }

    #endregion // PUBLIC_METHODS


    #region PRIVATE_METHODS

    string GetValuefromDictionary(Dictionary<string, string> dictionary, string key)
    {
        if (dictionary.ContainsKey(key))
        {
            string value;
            dictionary.TryGetValue(key, out value);
            return value;
        }

        return "Key not found.";
    }

    #endregion // PRIVATE_METHODS


    #region CONSTRUCTOR

    public AboutScreenInfo()
    {

        // Init our Title Strings

        titles = new Dictionary<string, string>()
        {
            { "AlfabetizaLIBRAS", "Alfabetiza LIBRAS" }
        };

        // Init our Common Cache Strings

        string vuforiaVersion = Vuforia.VuforiaUnity.GetVuforiaLibraryVersion();
        string unityVersion = UnityEngine.Application.unityVersion;
        UnityEngine.Debug.Log("Vuforia " + vuforiaVersion + "\nUnity " + unityVersion);

        string vuforia = Vuforia.VuforiaRuntime.Instance.InitializationState != Vuforia.VuforiaRuntime.InitState.NOT_INITIALIZED
                                ? "<color=green>Yes</color>"
                                : "<color=red>No</color>";

        string description = "\n<size=26>Description:</size>";
        string keyFunctionality = "<size=26>Key Functionality:</size>";
        string targets = "<size=26>Targets:</size>";
        string instructions = "<size=26>Instructions:</size>";
        string footer =
            "<size=26>Build Version Info:</size>" +
            "\n• Vuforia " + vuforiaVersion +
            "\n• Unity " + unityVersion +
            "\n" +
            "\n<size=26>Project Settings Info:</size>" +
            "\n• Vuforia Enabled: " + vuforia +
            "\n" +
            "\n<size=26>Statistics:</size>" +
            "\nData collected is used solely for product quality improvements" +
            "\nhttps://developer.vuforia.com/legal/statistics" +
            "\n" +
            "\n<size=26>Developer Agreement:</size>" +
            "\nhttps://developer.vuforia.com/legal/vuforia-developer-agreement" +
            "\n" +
            "\n<size=26>Privacy Policy:</size>" +
            "\nhttps://developer.vuforia.com/legal/privacy" +
            "\n" +
            "\n<size=26>Terms of Use:</size>" +
            "\nhttps://developer.vuforia.com/legal/EULA" +
            "\n\n" +
            "© 2018 PTC Inc. All Rights Reserved.";

        // Init our Description Strings

        descriptions = new Dictionary<string, string>();

        // Image Targets

        descriptions.Add(
            "AlfabetizaLIBRAS",
            description +
            "\nShows models of hands over the card. The hands are displaying" +
            " the LIBRAS gesture equivalent to the letter shown in the card." +
            "\n\n" +
            keyFunctionality +
            "\n• Simultaneous detection and tracking of multiple targets" +
            "\n• Load and activate multiple device databases" +
            "\n• Activate Extended Tracking" +
            "\n• Manage camera functions: flash and continuous autofocus" +
            "\n\n" +
            targets +
            "\n• Included Targets" +
            "\n\n" +
            instructions +
            "\n• Point camera at target to view" +
            "\n• Single tap to focus" +
            "\n• Double tap to access options menu" +
            "\n\n" +
            footer + "\n");
    }

    #endregion // CONSTRUCTOR

}
