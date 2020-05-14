class CfgSoundSets {
    class CLASS(AKM_Shot_SoundSet) {
        volumeFactor = 1.6;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShaders[] = {"AK47_Closure_SoundShader", "AK47_closeShot_SoundShader", "AK47_midShot_SoundShader", "AK47_distShot_SoundShader"};
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };

    class CLASS(AKM_tail_SoundSet) {
        volumeFactor = 1;
        obstructionFactor = 0;
        occlusionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        soundShaders[] = {"AK47_tailDistant_SoundShader", "AK47_tailForest_SoundShader", "AK47_tailHouses_SoundShader", "AK47_tailMeadows_SoundShader", "AK47_tailTrees_SoundShader"};
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };

    class CLASS(AKM_Silencer_SoundSet) {
        volumeFactor = 1;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShaders[] = {"AK47_Closure_SoundShader", "AK47_silencerShot_SoundShader"};
        olumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };

    class CLASS(AKM_SilencerTail_SoundSet) {
        doppler = 0;
        frequencyRandomizer = 1;
        loop = 0;
        obstructionFactor = 0;
        occlusionFactor = 0.3;
        soundShadersLimit = 2;
        spatial = 1;
        volumeFactor = 0.7;
        soundShaders[] = {"AK47_silencerTailTrees_SoundShader", "AK47_silencerTailForest_SoundShader", "AK47_silencerTailMeadows_SoundShader", "AK47_silencerTailHouses_SoundShader"};
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };

    class CLASS(AK74U_Shot_SoundSet) {
        doppler = 0;
        loop = 0;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        spatial = 1;
        volumeFactor = 1.6;
        soundShaders[] = {"AK74_closure_SoundShader", "AK74_closeShot_SoundShader", "AK74_midShot_SoundShader", "AK74_distShot_SoundShader"};
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
    };

    class CLASS(AK74U_tail_SoundSet) {
        doppler = 0;
        frequencyRandomizer = 1;
        loop = 0;
        volumeFactor = 1;
        obstructionFactor = 0;
        occlusionFactor = 0.3;
        soundShadersLimit = 2;
        spatial = 1;
        soundShaders[] = {"AK74_tailDistant_SoundShader", "AK74_tailForest_SoundShader", "AK74_tailHouses_SoundShader", "AK74_tailMeadows_SoundShader", "AK74_tailTrees_SoundShader"};
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        volumeCurve = "InverseSquare2Curve";
    };

    class CLASS(AK74U_Silencer_SoundSet) {
        doppler = 0;
        loop = 0;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        volumeFactor = 1;
        spatial = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        soundShaders[] = {"AK74_closure_SoundShader", "AK74_silencerShot_SoundShader"};
    };

    class CLASS(AK74U_SilencerTail_SoundSet) {
        doppler = 0;
        frequencyRandomizer = 1;
        volumeFactor = 0.7;
        loop = 0;
        obstructionFactor = 0;
        occlusionFactor = 0.3;
        soundShadersLimit = 2;
        spatial = 1;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        soundShaders[] = {"AK74_silencerTailTrees_SoundShader", "AK74_silencerTailForest_SoundShader", "AK74_silencerTailMeadows_SoundShader", "AK74_silencerTailHouses_SoundShader"};
        volumeCurve = "InverseSquare2Curve";
    };
};
