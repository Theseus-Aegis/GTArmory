class CfgSoundSets {
    class TACGT_sgun_Saiga12_Shot_SoundSet {
        soundShaders[] = { "TACGT_sgun_Saiga12_closeShot_SoundShader", "TACGT_sgun_Saiga12_closeShotCenter_SoundShader", "TACGT_sgun_Saiga12_distShot_SoundShader" };
        volumeFactor = 0.9;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class TACGT_sgun_Saiga12_tail_SoundSet {
        soundShaders[] = { "TACGT_sgun_Saiga12_tailForest_SoundShader", "TACGT_sgun_Saiga12_tailHouses_SoundShader", "TACGT_sgun_Saiga12_tailInt_SoundShader", "TACGT_sgun_Saiga12_tailMeadows_SoundShader", "TACGT_sgun_Saiga12_tailUrban_SoundShader" };
        volumeFactor = "1.25* 0.9";
        obstructionFactor = 0;
        occlusionFactor = 0.3;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
};
