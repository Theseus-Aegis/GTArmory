class CfgAmmo {
    class GrenadeHand;
    class CLASS(RGD5_Ammo): GrenadeHand {
        dangerRadiusHit = 55;
        deflecting = 15;
        explosionTime = 3;
        fuseDistance = 0;
        hit = 7;
        indirectHit = 7;
        indirectHitRange = 5;
        model = QPATHTOF(data\grenades\Handgrenade_rgd5_throw.p3d);
        suppressionRadiusHit = 21;
        timeToLive = 18;
        typicalSpeed = 24;
    };

    class CLASS(RGO_Ammo): CLASS(RGD5_Ammo) {
        dangerRadiusHit = 65;
        deflecting = 7;
        explosionTime = -1;
        hit = 8;
        indirectHit = 8;
        indirectHitRange = 7;
        model = QPATHTOF(data\grenades\Handgrenade_rgo_throw.p3d);
        suppressionRadiusHit = 65;
        typicalSpeed = 20;
    };
};
