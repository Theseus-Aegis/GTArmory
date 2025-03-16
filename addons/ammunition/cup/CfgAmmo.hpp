class CfgAmmo {
    class CUP_B_9x39_SP5; // 9x39

    // 9x39mm - Subsonic
    class CLASS(9x39_Ball): CUP_B_9x39_SP5 {
        aiAmmoUsageFlags = 192;
        caliber = 0.15;
        cartridge = "FxCartridge_9mm";
        hit = 10;
        MACRO_TRACERS;
    };
    class CLASS(9x39_EPR): CLASS(9x39_Ball) {
        caliber = 1.1;
        hit = 11;
    };
    class CLASS(9x39_AP): CLASS(9x39_EPR) {
        caliber = 1.3;
        hit = 11.5;
    };
};
