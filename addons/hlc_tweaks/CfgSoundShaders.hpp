// Re-add missing soundshader. Broken as of modpack 4.0.0-beta1
class CfgSoundShaders {
    class nia_p2269mm_closeShot_SoundShader {
        range = 20;
        rangeCurve[] = {
            {0, 1.5},
            {20, 0}
        };
        volume = "1.5*(1-interior)";
        samples[] = {
            {"hlc_wp_p226\snd\p226_close", 1}
        };
    };
};
