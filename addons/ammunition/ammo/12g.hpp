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
