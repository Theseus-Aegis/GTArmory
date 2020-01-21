class CfgPatches {
    class GTA_Ammo {
    units[] = { };
    weapons[] = { };
    requiredVersion = 0.1;
    requiredAddons[] = { "GTA_Weapons_M1014" };
    magazines[] = { "GTA_8Rnd_P_Whammy", "GTA_6Rnd_P_Whammy", "GTA_8Rnd_P_AP20", "GTA_6Rnd_P_AP20"  };
    ammo[] = { "GTA_S_12G_AP20", "GTA_P_12G_Whammy" };
    };
};

class CfgAmmo {
    class Default;
    class BulletCore;
    class BulletBase: BulletCore {
        timetoLive = 6;
    };

    class GTA_12g_Pellets_Submunition: BulletBase {
        caliber = 0.5;
        cost = 1;
        hit = 25;
        simulationStep = 0.0001;
        cartridge = "";
        submunitionAmmo = "GTA_12g_Pellets_Submunition_Deploy";
        submunitionConeType[] = {"random", 12};
        submunitionConeAngle = 0.8;
        triggerSpeedCoef[] = {0.85, 1};
        triggerTime = 0.008;
    };

    class GTA_12g_Pellets_Submunition_Deploy: BulletBase {
        airFriction = -0.0030;
        caliber = 0.525;
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 360;
        deflecting = 35;
    };

    class GTA_S_12G_AP20: BulletBase {
        hit=35;
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_slug";
        cost=5;
        typicalSpeed=600;
        visibleFire=18;
        audibleFire=18;
        airFriction=-0.0080000004;
        caliber=3;
        deflecting=30;
        model = "\A3\weapons_f\empty";
        simulation="shotSubmunitions";
    };

    class B_12Gauge_Pellets_Submunition;
	class GTA_P_12G_Whammy: B_12Gauge_Pellets_Submunition {
        caliber = 0.525;
        submunitionConeType[] = { "random", 12 };
        triggerTime = 0.008;
        submunitionAmmo = "GTA_12g_Pellets_Submunition_Deploy";
        submunitionConeAngle = 0.81;
	};
};
    
class CfgMagazines {

class CA_Magazine;
class GTA_8Rnd_P_Whammy: CA_Magazine {
        author="Tyrone";
        scope=2;
        displayName="8Rnd Whammy Shells";
        displayNameShort="Whammy Shell";
        ammo="GTA_P_12G_Whammy";
        count=8;
        initSpeed=385;
        picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort="When you really gotta blow a hole in somethin";
        mass=6;
        reloadaction="CUP_GestureReloadM1014_8Rnd";
    };

class GTA_8Rnd_P_AP20: CA_Magazine {
        author="Tyrone";
        scope=2;
        displayName="8Rnd AP-20 Slug";
        displayNameShort="AP-20 Slug";
        ammo="GTA_S_12G_AP20";
        count=8;
        initSpeed=510;
        picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort="AP-20 Slugs for longer range armour penetration";
        mass=6;
        reloadaction="CUP_GestureReloadM1014_8Rnd";
    };

class GTA_6Rnd_P_Whammy: GTA_8Rnd_P_Whammy {
        author="Tyrone";
        scope=2;
        displayName="6Rnd Whammy Shells";
        displayNameShort="Whammy Shell";
        ammo="GTA_P_12G_Whammy";
        count=6;
        initSpeed=385;
        picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort="When you really gotta blow a hole in somethin";
        mass=6;
        reloadaction="CUP_GestureReloadM1014_6Rnd";
    };

class GTA_6Rnd_P_AP20: GTA_8Rnd_P_AP20 {
        author="Tyrone";
        scope=2;
        displayName="6Rnd AP-20 Slug";
        displayNameShort="AP-20 Slug";
        ammo="GTA_S_12G_AP20";
        count=6;
        initSpeed=510;
        picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort="AP-20 Slugs for longer range armour penetration";
        mass=6;
        reloadaction="CUP_GestureReloadM1014_6Rnd";
    };
};

class CfgMagazineWells {
    class GTA_8rnd_12g {
        GTA_mags[] = { "GTA_8Rnd_P_Whammy", "GTA_6Rnd_P_Whammy" };
    };

    class GTA_6rnd_12g {
        GTA_mags[] = { "GTA_8Rnd_P_AP20", "GTA_6Rnd_P_AP20" };
    };
};