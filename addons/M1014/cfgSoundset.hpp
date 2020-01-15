class CfgSoundSets {
    class TAC_sgun_M1014_Shot_SoundSet {
        soundShaders[] = { "CUP_sgun_M1014_closeShot_SoundShader", "CUP_sgun_M1014_closeShotCenter_SoundShader", "CUP_sgun_M1014_distShot_SoundShader" };
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
    class TAC_sgun_M1014_tail_SoundSet {
        soundShaders[] = { "CUP_sgun_M1014_tailForest_SoundShader", "CUP_sgun_M1014_tailHouses_SoundShader", "CUP_sgun_M1014_tailInt_SoundShader", "CUP_sgun_M1014_tailMeadows_SoundShader", "CUP_sgun_M1014_tailUrban_SoundShader" };
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