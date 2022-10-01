class CfgAmmo {
 /*
  * Most require Ball (HP), EPR and AP variants.
  * HP has minimal penetration with high damage
  * EPR has medium penetration with medium damage
  * AP has high penetration with medium damage
 */

    // Base classes
    class BulletBase; // 12G
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Deploy;
    class B_9x21_Ball_Tracer_Yellow; // 9x19
    class B_545x39_Ball_F; // 5.45x39
    class CUP_B_570x28_Ball_Tracer_Yellow; // 5.7x28
    class B_45ACP_Ball; // .45ACP
    class B_580x42_Ball_F; // 5.8x42
    class B_556x45_Ball; // 5.56x45
    class B_65x39_Caseless; // 6.5x39
    class B_762x39_Ball_F; // 7.62x39
    class B_762x51_Ball; // 7.62x51
    class B_762x54_Ball; // 7.62x54R
    class HLC_300Blackout_RNBT; // .300 Blackout Subsonic
    class CUP_B_9x39_SP5; // 9x39

    // 12G
    class CLASS(12g_Pellets_Submunition): B_12Gauge_Pellets_Submunition {
        caliber = 0.5;
        cost = 1;
        hit = 25;
        simulationStep = 0.0001;
        cartridge = "";
        submunitionAmmo = QCLASS(12g_Pellets_Submunition_Deploy);
        submunitionConeType[] = {"random", 12};
        submunitionConeAngle = 0.8;
        triggerSpeedCoef[] = {0.85, 1};
        triggerTime = 0.008;
    };

    class CLASS(12g_Pellets_Submunition_Deploy): B_12Gauge_Pellets_Submunition_Deploy {
        airFriction = -0.0030;
        caliber = 0.525;
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        deflecting = 35;
    };

    class CLASS(S_12G_AP20): BulletBase {
        timetoLive = 6;
        hit = 25;
        cartridge = "FxCartridge_slug";
        cost = 5;
        caliber = 1.3;
        model = "\A3\weapons_f\empty.p3d";
        simulation = "shotBullet";
    };

    class CLASS(P_12G_000): B_12Gauge_Pellets_Submunition {
        caliber = 0.525;
        submunitionConeType[] = {"random", 12};
        triggerTime = 0.008;
        submunitionAmmo = QCLASS(12g_Pellets_Submunition_Deploy);
        submunitionConeAngle = 0.81;
    };

    // 9x19mm
    class B_9x21_Ball_Tracer_Yellow;
    class CLASS(9x19_Ball): B_9x21_Ball_Tracer_Yellow {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.8;
        hit = 10;
        MACRO_TRACERS
    };
    class CLASS(9x19_EPR): CLASS(9x19_Ball) {
        caliber = 1.3;
        hit = 8;
    };
    class CLASS(9x19_AP): CLASS(9x19_EPR) {
        caliber = 1.6;
    };

    // 5.45x39mm
    class CLASS(545x39_Ball): B_545x39_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.2;
        hit = 12;
        MACRO_TRACERS
    };
    class CLASS(545x39_EPR): CLASS(545x39_Ball) {
        caliber = 1.6;
        hit = 10;
    };
    class CLASS(545x39_AP): CLASS(545x39_EPR) {
        caliber = 1.8;
    };

    // .45ACP
    class CLASS(45ACP_Ball): B_45ACP_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.8;
        hit = 10;
        MACRO_TRACERS
    };
    class CLASS(45ACP_EPR): CLASS(45ACP_Ball) {
        caliber = 1.3;
        hit = 8;
    };

    // .357 Magnum
    class CLASS(357_Magnum): B_45ACP_Ball {
        hit = 10;
    };

    // .44 Magnum
    class CLASS(44_Magnum): CLASS(357_Magnum) {
        hit = 12;
    };

    // 10mm
    class CLASS(10mm_Ball): CLASS(357_Magnum) {
        hit = 11;
    };

    // 5.7x28mm
    class CLASS(57x28_Ball): CUP_B_570x28_Ball_Tracer_Yellow {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.4;
        hit = 12;
        MACRO_TRACERS
    };
    class CLASS(57x28_EPR): CLASS(57x28_Ball) {
        caliber = 1.75;
        hit = 10;
    };
    class CLASS(57x28_AP): CLASS(57x28_EPR) {
        caliber = 2;
    };

    // 4.6x30mm (Comparable to 5.7x28mm but slightly worse performing penetration.)
    class CLASS(46x30_Ball): CLASS(57x28_Ball) {
        caliber = 1.25;
        hit = 12.2;
    };
    class CLASS(46x30_EPR): CLASS(46x30_Ball) {
        caliber = 1.64;
        hit = 10.7;
    };
    class CLASS(46x30_AP): CLASS(46x30_EPR) {
        caliber = 1.89;
    };

    // 5.8x42mm
    class CLASS(58x42_Ball): B_580x42_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.25;
        hit = 12.5;
        MACRO_TRACERS
    };
    class CLASS(58x42_EPR): CLASS(58x42_Ball) {
        caliber = 1.65;
        hit = 10.5;
    };
    class CLASS(58x42_AP): CLASS(58x42_EPR) {
        caliber = 1.85;
    };

    // 5.56x45mm
    class CLASS(556x45_Ball): B_556x45_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.25;
        hit = 12.5;
        MACRO_TRACERS
    };
    class CLASS(556x45_EPR): CLASS(556x45_Ball) {
        caliber = 1.65;
        hit = 11.5;
    };
    class CLASS(556x45_AP): CLASS(556x45_EPR) {
        caliber = 1.95;
    };

    // 6.5x39mm
    class CLASS(65x39_Ball): B_65x39_Caseless {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.25;
        hit = 12.8;
        MACRO_TRACERS
    };
    class CLASS(65x39_EPR): CLASS(65x39_Ball) {
        caliber = 1.6;
        hit = 11.8;
    };
    class CLASS(65x39_AP): CLASS(65x39_EPR) {
        caliber = 2;
    };

    // 6.8x43mm
    class CLASS(68x43_Ball): CLASS(65x39_Ball) {
        caliber = 1.33;
        hit = 13.2;
    };
    class CLASS(68x43_EPR): CLASS(68x43_Ball) {
        caliber = 1.8;
        hit = 13;
    };
    class CLASS(68x43_AP): CLASS(68x43_EPR) {
        caliber = 2.1;
    };

    // 7.62x39mm
    class CLASS(762x39_Ball): B_762x39_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.25;
        hit = 12.8;
        MACRO_TRACERS
    };
    class CLASS(762x39_EPR): CLASS(762x39_Ball) {
        caliber = 1.55;
        hit = 12.3;
    };
    class CLASS(762x39_AP): CLASS(762x39_EPR) {
        caliber = 1.78;
    };

    // 7.62x51mm
    class CLASS(762x51_Ball): B_762x51_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.25;
        hit = 12.8;
        MACRO_TRACERS
    };
    class CLASS(762x51_EPR): CLASS(762x51_Ball) {
        caliber = 1.76;
        hit = 11.8;
    };
    class CLASS(762x51_AP): CLASS(762x51_EPR) {
        caliber = 2.13;
    };

    // 7.62x54R
    class CLASS(762x54r_Ball): B_762x54_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1.45;
        hit = 13;
        MACRO_TRACERS
    };
    class CLASS(762x54r_EPR): CLASS(762x54r_Ball) {
        caliber = 1.85;
        hit = 12;
    };
    class CLASS(762x54r_AP): CLASS(762x54r_EPR) {
        caliber = 2.25;
    };


    // .300AAC - Subsonic
    class CLASS(300AAC_Ball): HLC_300Blackout_RNBT {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 1;
        hit = 12;
        MACRO_TRACERS
    };
    class CLASS(300AAC_EPR): CLASS(300AAC_Ball) {
        caliber = 1.2;
        hit = 11;
    };
    class CLASS(300AAC_AP): CLASS(300AAC_EPR) {
        caliber = 1.4;
    };

    // 9x39mm - Subsonic
    class CLASS(9x39_Ball): CUP_B_9x39_SP5 {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.9;
        hit = 11;
        MACRO_TRACERS
    };
    class CLASS(9x39_EPR): CLASS(9x39_Ball) {
        caliber = 1.1;
        hit = 10.5;
    };
    class CLASS(9x39_AP): CLASS(9x39_EPR) {
        caliber = 1.2;
    };
};
