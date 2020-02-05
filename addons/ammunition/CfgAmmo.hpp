class CfgAmmo {
    class Default;
    class BulletCore;
    class BulletBase: BulletCore {
        timetoLive = 6;
    };

class B_12Gauge_Pellets_Submunition: BulletBase { };
class B_12Gauge_Pellets_Submunition_Deploy: BulletBase { };

    class tacgt_12g_Pellets_Submunition: B_12Gauge_Pellets_Submunition {
        caliber = 0.5;
        cost = 1;
        hit = 25;
        simulationStep = 0.0001;
        cartridge = "";
        submunitionAmmo = "tacgt_12g_Pellets_Submunition_Deploy";
        submunitionConeType[] = {"random", 12};
        submunitionConeAngle = 0.8;
        triggerSpeedCoef[] = {0.85, 1};
        triggerTime = 0.008;
    };

    class tacgt_12g_Pellets_Submunition_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
        airFriction = -0.0030;
        caliber = 0.525;
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 360;
        deflecting = 35;
    };

    class tacgt_S_12G_AP20: BulletBase {
        timetoLive = 0.1;
        hit = 35;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_slug";
        cost = 5;
        typicalSpeed = 600;
        visibleFire = 18;
        audibleFire = 18;
        airFriction = -0.0080000004;
        caliber = 3;
        deflecting = 10;
        model = "\A3\weapons_f\empty";
        simulation = "shotSubmunitions";
    };

    class B_12Gauge_Pellets_Submunition;
	class tacgt_P_12G_000: B_12Gauge_Pellets_Submunition {
        caliber = 0.525;
        submunitionConeType[] = { "random", 12 };
        triggerTime = 0.008;
        submunitionAmmo = "tacgt_12g_Pellets_Submunition_Deploy";
        submunitionConeAngle = 0.81;
	};
};
