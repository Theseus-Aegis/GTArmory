class CfgAmmo {
    class HLC_300Blackout_Ball; // .300 Blackout Ball (Formerly subsonic)

    // .300AAC - Not subsonic anymore - Ridiculous drop at 400m
    class CLASS(300AAC_Ball): HLC_300Blackout_Ball {
        aiAmmoUsageFlags = 192;
        caliber = 0.19;
        cartridge = "FxCartridge_762";
        hit = 12;
        MACRO_TRACERS;
    };
    class CLASS(300AAC_EPR): CLASS(300AAC_Ball) {
        caliber = 1.2;
        hit = 13;
    };
    class CLASS(300AAC_AP): CLASS(300AAC_EPR) {
        caliber = 1.4;
        hit = 13.5;
    };
};
