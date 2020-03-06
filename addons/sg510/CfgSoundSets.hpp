class CfgSoundSets {
    class CLASS(sg510_Shot_SoundSet) {
        soundShaders[] = {"sg510_closeShot_SoundShader", "sg510_midShot_SoundShader", "sg510_distShot_SoundShader", "sg510_Closure_SoundShader"};
        volumeFactor = 0.8;
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
        frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class CLASS(sg510_tail_SoundSet) {
        soundShaders[] = {"sg510_tailDistant_SoundShader", "sg510_tailForest_SoundShader", "sg510_tailHouses_SoundShader", "sg510_tailInterior_SoundShader", "sg510_tailMeadows_SoundShader", "sg510_tailTrees_SoundShader"};
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        stereoStartDistance = 100;
        stereoRadius = 50;
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class CLASS(sg510_silencerShot_SoundSet) {
        soundShaders[] = {"sg510_silencerShot_SoundShader", "sg510_Closure_SoundShader"};
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare3Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class CLASS(sg510_silencerTail_SoundSet) {
        soundShaders[] = {"sg510_silencerTailTrees_SoundShader", "sg510_silencerTailForest_SoundShader", "sg510_silencerTailMeadows_SoundShader", "sg510_silencerTailHouses_SoundShader", "sg510_silencerTailInterior_SoundShader"};
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        stereoStartDistance = 100;
        stereoRadius = 50;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
};
