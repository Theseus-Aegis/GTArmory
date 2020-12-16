class CfgSoundSets {
    class CLASS(msbs_y33t_soundSet) {
        soundShaders[] = {QCLASS(msbs_Y33t_soundShader)};
        volumeFactor = 1.0;
        obstructionFactor = 0.3;
        occlusionFactor = 0.5;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
};
