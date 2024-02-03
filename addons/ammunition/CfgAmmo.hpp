class CfgAmmo {
 /*
  * Most calibers have Ball, EPR & AP. (Simulated)
  * Caliber value only affects vehicles and terrain objects for penetration.
  * Hit value is increased per type to simulate actual penetration values.
  * ACE properties taken from magazines that have them, if they don't exist they just inherit base ones.
 */

    // Base classes
    class BulletBase; // 12G
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Deploy;
    class B_9x21_Ball_Tracer_Yellow; // 9x19
    class B_545x39_Ball_F; // 5.45x39
    class B_45ACP_Ball; // .45ACP
    class B_580x42_Ball_F; // 5.8x42
    class B_556x45_Ball; // 5.56x45
    class B_65x39_Caseless; // 6.5x39
    class B_762x39_Ball_F; // 7.62x39
    class B_762x51_Ball; // 7.62x51
    class B_762x54_Ball; // 7.62x54R

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
        cartridge = "FxCartridge_slug";
        submunitionAmmo = QCLASS(12g_Pellets_Submunition_Deploy);
        submunitionConeAngle = 0.81;
    };

    // 9x19mm
    class B_9x21_Ball_Tracer_Yellow;
    class CLASS(9x19_Ball): B_9x21_Ball_Tracer_Yellow {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.1;
        cartridge = "FxCartridge_9mm";
        hit = 8;
        MACRO_TRACERS;
    };
    class CLASS(9x19_EPR): CLASS(9x19_Ball) {
        caliber = 0.9;
        hit = 9;
    };
    class CLASS(9x19_AP): CLASS(9x19_EPR) {
        caliber = 1.3;
        hit = 9.5;
    };

    // 5.45x39mm
    class CLASS(545x39_Ball): B_545x39_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.3;
        hit = 10;
        MACRO_TRACERS;
    };
    class CLASS(545x39_EPR): CLASS(545x39_Ball) {
        caliber = 1;
        hit = 11;
    };
    class CLASS(545x39_AP): CLASS(545x39_EPR) {
        caliber = 1.3;
        hit = 11.5;
    };

    // .45ACP
    class CLASS(45ACP_Ball): B_45ACP_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.15;
        cartridge = "FxCartridge_9mm";
        hit = 11;
        MACRO_TRACERS;
    };
    class CLASS(45ACP_EPR): CLASS(45ACP_Ball) {
        caliber = 0.85;
        hit = 12;
    };

    // .357 Magnum
    class CLASS(357_Magnum): B_45ACP_Ball {
        hit = 12;
    };

    // .44 Magnum
    class CLASS(44_Magnum): CLASS(357_Magnum) {
        hit = 13;
    };

    // 10mm
    class CLASS(10mm_Ball): CLASS(357_Magnum) {
        hit = 12;
    };

    // 5.8x42mm
    class CLASS(58x42_Ball): B_580x42_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.25;
        hit = 10;
        MACRO_TRACERS;
    };
    class CLASS(58x42_EPR): CLASS(58x42_Ball) {
        caliber = 1.35;
        hit = 10.5;
        ACE_muzzleVelocities[] = {903};
        ACE_barrelLengths[] = {640};
    };
    class CLASS(58x42_AP): CLASS(58x42_EPR) {
        caliber = 11;
    };

    // 5.56x45mm
    class CLASS(556x45_Ball): B_556x45_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.4;
        hit = 11;
        MACRO_TRACERS;
    };
    class CLASS(556x45_EPR): CLASS(556x45_Ball) {
        hit = 12;
        caliber = 1.5;
        ACE_bulletMass = 4.3359237;
        ACE_muzzleVelocities[] = {780, 886, 950};
        ACE_barrelLengths[] = {254.0, 393.7, 508.0};
    };
    class CLASS(556x45_AP): CLASS(556x45_EPR) {
        hit = 12.5;
        caliber = 2;
        ACE_bulletMass = 4.5359237;
        ACE_muzzleVelocities[] = {820, 900, 950};
    };

    // 6.5x39mm
    class CLASS(65x39_Ball): B_65x39_Caseless {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.35;
        cartridge = "FxCartridge_65";
        hit = 10.8;
        MACRO_TRACERS;
    };
    class CLASS(65x39_EPR): CLASS(65x39_Ball) {
        caliber = 1.6;
        hit = 11.8;
        ACE_muzzleVelocities[] = {750, 820, 840, 852, 860};
        ACE_barrelLengths[] = {254.0, 406.4, 508.0, 609.6, 660.4};
    };
    class CLASS(65x39_AP): CLASS(65x39_EPR) {
        hit = 12.3;
        caliber = 2;
    };

    // 6.8x43mm
    class CLASS(68x43_Ball): CLASS(65x39_Ball) {
        caliber = 0.35;
        hit = 11;
    };
    class CLASS(68x43_EPR): CLASS(68x43_Ball) {
        caliber = 1.8;
        hit = 12;
    };
    class CLASS(68x43_AP): CLASS(68x43_EPR) {
        caliber = 2.3;
        hit = 12.5;
    };

    // 7.62x39mm
    class CLASS(762x39_Ball): B_762x39_Ball_F {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.25;
        hit = 11.3;
        MACRO_TRACERS;
    };
    class CLASS(762x39_EPR): CLASS(762x39_Ball) {
        caliber = 1.55;
        hit = 12.3;
    };
    class CLASS(762x39_AP): CLASS(762x39_EPR) {
        hit = 12.8;
        caliber = 1.78;
    };

    // 7.62x51mm
    class CLASS(762x51_Ball): B_762x51_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.28;
        hit = 12.8;
        MACRO_TRACERS;
    };
    class CLASS(762x51_EPR): CLASS(762x51_Ball) {
        caliber = 1.85;
        hit = 13.8;
        ACE_caliber=7.823;
        ACE_bulletLength=31.496;
        ACE_bulletMass=8.424;
        ACE_muzzleVelocityVariationSD=0.45;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.377};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={838, 892, 910};
        ACE_barrelLengths[]={330.2, 406.4, 508.0};
    };
    class CLASS(762x51_AP): CLASS(762x51_EPR) {
        caliber = 2.3;
        hit = 14.3;
        ACE_bulletMass = 8.22946157;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.359};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_muzzleVelocities[] = {875, 910, 930};
        ACE_barrelLengths[] = {330.2, 406.4, 508.0};
    };

    // 7.62x54R
    class CLASS(762x54r_Ball): B_762x54_Ball {
        aiAmmoUsageFlags = "64 + 128";
        caliber = 0.33;
        hit = 13;
        MACRO_TRACERS;
    };
    class CLASS(762x54r_EPR): CLASS(762x54r_Ball) {
        caliber = 2;
        hit = 14;
    };
    class CLASS(762x54r_AP): CLASS(762x54r_EPR) {
        caliber = 2.5;
        hit = 14.5;
    };

    // 300WM, slightly stronger than 7.62x54r
    class CLASS(300WM_EPR): CLASS(762x54r_EPR) {
        caliber = 2.2;
        hit = 14.5;
    };
    class CLASS(300WM_AP): CLASS(300WM_EPR) {
        caliber = 2.6;
        hit = 14.9;
    };
};
