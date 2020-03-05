class CfgAmmo {
    class BulletBase;
    class B_556x45_Ball;
    class B_762x39_Ball_F;
    class B_12Gauge_Pellets_Submunition: BulletBase {};
    class B_12Gauge_Pellets_Submunition_Deploy: BulletBase {};

    CLASS(12g_Pellets_Submunition): B_12Gauge_Pellets_Submunition {
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
    CLASS(12g_Pellets_Submunition_Deploy): B_12Gauge_Pellets_Submunition_Deploy {
        airFriction = -0.0030;
        caliber = 0.525;
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 360;
        deflecting = 35;
    };

    CLASS(S_12G_AP20): BulletBase {
        timetoLive = 6;
        hit = 40;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_slug";
        cost = 5;
        typicalSpeed = 600;
        visibleFire = 18;
        audibleFire = 18;
        airFriction = -0.008;
        caliber = 3;
        deflecting = 10;
        model = "\A3\weapons_f\empty.p3d";
        simulation = "shotBullet";
    };
    CLASS(P_12G_000): B_12Gauge_Pellets_Submunition {
        caliber = 0.525;
        submunitionConeType[] = {"random", 12};
        triggerTime = 0.008;
        submunitionAmmo = QCLASS(12g_Pellets_Submunition_Deploy);
        submunitionConeAngle = 0.81;
    };
    CLASS(556x45_EPR_M855A1): B_556x45_Ball {
        airFriction=-0.0012588;
        ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.307};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={791, 897, 961};
        ACE_barrelLengths[]={264.0, 393.7, 508.0};
    };

    CLASS(556x45_EPR_M855A1_Red): tacgt_556x45_EPR_M855A1 {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
};
