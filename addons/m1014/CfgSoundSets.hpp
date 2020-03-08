class CfgSoundSets {
    class CLASS(sgun_LB_Shot_SoundSet) {
        soundShaders[] = {"TACGT_sgun_closeShot_SoundShader", "TACGT_sgun_closeShotCenter_SoundShader", "TACGT_sgun_distShot_SoundShader"};
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
    class CLASS(sgun_LB_tail_SoundSet) {
        soundShaders[] = {"TACGT_sgun_tailForest_SoundShader", "TACGT_sgun_tailHouses_SoundShader", "TACGT_sgun_tailInt_SoundShader", "TACGT_sgun_tailMeadows_SoundShader", "TACGT_sgun_tailUrban_SoundShader"};
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
    class CLASS(sgun_SB_Shot_SoundSet) {
        soundShaders[] = {"TACGT_sgun_closeShot_SoundShader", "TACGT_sgun_closeShotCenter_SoundShader", "TACGT_sgun_distShot_SoundShader"};
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
    class CLASS(sgun_SB_tail_SoundSet) {
        soundShaders[] = {"TACGT_sgun_tailForest_SoundShader", "TACGT_sgun_tailHouses_SoundShader", "TACGT_sgun_tailInt_SoundShader", "TACGT_sgun_tailMeadows_SoundShader", "TACGT_sgun_tailUrban_SoundShader"};
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
