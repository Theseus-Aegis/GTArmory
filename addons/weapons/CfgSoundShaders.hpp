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
    class Mk200_midShot_SoundShader {
        samples[] = {
            {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_01", 1},
            {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_02", 1},
            {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_midShot_03", 1}
        };
        volume = 0.4; // Default: 0.5
        range = 2000;
        rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {2000, 0}};
    };
    class Mk200_distShot_SoundShader {
        samples[] = {
            {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_01", 1},
            {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_02", 1},
            {"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_03", 1}
        };
        volume = 0.45; // Default: 1
        range = 2000;
        rangeCurve[] = {{0,0}, {50,0}, {300,1}, {2000,1}};
    };
    class Mk200_tailDistant_SoundShader {
        samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_taildistant", 1}};
        volume = 0.45; // Default: 1
        range = 2000;
        rangeCurve[] = {{0, 0}, {600, 0.69}, {2000, 1}};
        limitation = 1;
    };
    class Mk200_silencerShot_SoundShader {
        samples[] = {
            {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerShot_01", 1},
            {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerShot_02", 1},
            {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerShot_03", 1}
        };
        volume = 0.45; // Default: 1
        range = 150;
        rangeCurve = "closeShotCurve";
    };
};
