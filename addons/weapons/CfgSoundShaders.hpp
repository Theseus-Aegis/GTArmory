class CfgSoundShaders {
    // MK200/Stoner volume fix.
    class Mk200_closeShot_SoundShader {
        samples[] = {
            {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closeShot_01", 1},
            {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closeShot_02", 1},
            {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_closeShot_03", 1}
        };
        volume = 0.4; // Default: 1
        range = 50;
        rangeCurve = "closeShotCurve";
    };
};
