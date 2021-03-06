class CfgAmmo {
    class BulletBase;
    class B_9x21_Ball_Tracer_Green;
    class B_45ACP_Ball;
    class B_545x39_Ball_F;
    class B_570x28_Ball;
    class B_580x42_Ball_F;
    class B_556x45_Ball;
    class B_762x39_Ball_F;
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Deploy;
    class CUP_B_762x54_Ball_White_Tracer;

    // 9mm ammo
    class CLASS(9x19_7N21): B_9x21_Ball_Tracer_Green {
        caliber = 1.4;
        hit = 6.5;
    };

    // 12G ammo
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

    // .357 Ammo
    class CLASS(357_Magnum): B_45ACP_Ball {
        hit = 8;
    };

    // .44 Magnum Ammo
    class CLASS(44_Magnum): CLASS(357_Magnum) {
        hit = 11;
    };

    // 5.45x39 Ammo
    class CLASS(545x39_BP): B_545x39_Ball_F {
        hit = 9;
        caliber = 1.19;
    };

    class CLASS(545x39_BT): B_545x39_Ball_F {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        hit = 9.4;
        caliber = 1.22;
    };

    // 5.7x28 Ammo
    class CLASS(57x28_SS190): B_570x28_Ball {
        hit = 9.4;
        caliber = 0.89;
    };

    // 5.8x42 Ammo
    class CLASS(580x42_DBP88): B_580x42_Ball_F {
        hit = 9.6;
        caliber = 1.1;
    };

    // 5.56x45 Ammo
    class CLASS(556x45_EPR_M855A1): B_556x45_Ball {
        hit = 10.28;
        airFriction = -0.0012744;
        caliber = 1.37;
        deflecting = 17;
        audibleFire = 20;
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[] = {0.175};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
    };

    class CLASS(556x45_EPR_M856A1_Red): CLASS(556x45_EPR_M855A1) {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    // 7.62x39 Ammo
    class CLASS(762x39_BP): B_762x39_Ball_F {
        hit = 14;
        caliber = 2.1;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };

    // 7.62x54r Ammo
    class CLASS(762x54_AP): CUP_B_762x54_Ball_White_Tracer {
        hit = 14.6;
        caliber = 2.4;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
};
