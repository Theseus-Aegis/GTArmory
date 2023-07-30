class CfgAmmo {
    class CUP_B_570x28_Ball_Tracer_Yellow; // 5.7x28
    class CUP_B_9x39_SP5; // 9x39

    // 5.7x28mm
    class CLASS(57x28_Ball): CUP_B_570x28_Ball_Tracer_Yellow {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.5;
        hit = 12;
        MACRO_TRACERS
        ACE_caliber = 5.7;
        ACE_bulletLength = 21.6;
        ACE_bulletMass = 2;
        ACE_muzzleVelocities[] = {716, 776};
        ACE_barrelLengths[] = {264, 407};
    };

    // 9x39mm - Subsonic
    class CLASS(9x39_Ball): CUP_B_9x39_SP5 {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.15;
        hit = 10;
        MACRO_TRACERS
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
