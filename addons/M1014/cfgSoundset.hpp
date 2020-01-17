class CfgSoundSets {
    class TAC_sgun_M1014_LB_Shot_SoundSet {
        soundShaders[] = { "GTA_sgun_M1014_closeShot_SoundShader", "GTA_sgun_M1014_closeShotCenter_SoundShader", "GTA_sgun_M1014_distShot_SoundShader" };
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
    class TAC_sgun_M1014_LB_tail_SoundSet {
        soundShaders[] = { "GTA_sgun_M1014_tailForest_SoundShader", "GTA_sgun_M1014_tailHouses_SoundShader", "GTA_sgun_M1014_tailInt_SoundShader", "GTA_sgun_M1014_tailMeadows_SoundShader", "GTA_sgun_M1014_tailUrban_SoundShader" };
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
    class TAC_sgun_M1014_SB_Shot_SoundSet {
        soundShaders[] = { "GTA_sgun_M1014_closeShot_SoundShader", "GTA_sgun_M1014_closeShotCenter_SoundShader", "GTA_sgun_M1014_distShot_SoundShader" };
        volumeFactor = 1.1;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class TAC_sgun_M1014_SB_tail_SoundSet {
        soundShaders[] = { "GTA_sgun_M1014_tailForest_SoundShader", "GTA_sgun_M1014_tailHouses_SoundShader", "GTA_sgun_M1014_tailInt_SoundShader", "GTA_sgun_M1014_tailMeadows_SoundShader", "GTA_sgun_M1014_tailUrban_SoundShader" };
        volumeFactor = "1.5* 0.9";
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