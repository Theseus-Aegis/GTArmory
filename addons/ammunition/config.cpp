class CfgPatches {
    class GTA_Ammo {
    units[] = { };
    weapons[] = { };
    requiredVersion = 0.1;
    requiredAddons[] = { "GTA_Weapons_M1014" };
    magazines[] = { "GTA_8Rnd_P_000", "GTA_6Rnd_P_000", "GTA_8Rnd_P_AP20", "GTA_6Rnd_P_AP20"  };
    ammo[] = { "GTA_S_12G_AP20", "GTA_P_12G_000" };
    };
    author[] = {"TyroneMF"};
    version = "0.1";
};

class CfgAmmo {
    class Default;
    class BulletCore;
    class BulletBase: BulletCore {
        timetoLive = 6;
    };

class B_12Gauge_Pellets_Submunition: BulletBase { };
class B_12Gauge_Pellets_Submunition_Deploy: BulletBase { };

    class GTA_12g_Pellets_Submunition: B_12Gauge_Pellets_Submunition {
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

    class GTA_12g_Pellets_Submunition_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
        airFriction = -0.0030;
        caliber = 0.525;
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 360;
        deflecting = 35;
    };

    class GTA_S_12G_AP20: BulletBase {
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
	class GTA_P_12G_000: B_12Gauge_Pellets_Submunition {
        caliber = 0.525;
        submunitionConeType[] = { "random", 12 };
        triggerTime = 0.008;
        submunitionAmmo = "GTA_12g_Pellets_Submunition_Deploy";
        submunitionConeAngle = 0.81;
	};
};

class CfgMagazines {

class CA_Magazine;
class GTA_8Rnd_P_000: CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = "8Rnd #000 Buckshot Shells";
        displayNameShort = "#000 Buckshot Shells";
        ammo = "GTA_P_12G_000";
        count = 8;
        initSpeed = 385;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort = "When you really gotta blow a hole in somethin";
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

class GTA_8Rnd_P_AP20: CA_Magazine {
        author = "TyroneMF";
        scope = 2;
        displayName = "8Rnd AP-20 Slug";
        displayNameShort = "AP-20 Slug";
        ammo = "GTA_S_12G_AP20";
        count = 8;
        initSpeed = 510;
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
        descriptionShort = "AP-20 Slugs for precise armour penetration";
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_8Rnd";
    };

class GTA_6Rnd_P_000: GTA_8Rnd_P_000 {
        author = "TyroneMF";
        scope = 2;
        displayName = "6Rnd #000 Buckshot Shells";
        displayNameShort = "#000 Buckshot Shells";
        ammo = "GTA_P_12G_000";
        count = 6;
        initSpeed = 385;
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_12gauge_ca.paa";
        descriptionShort = "When you really gotta blow a hole in somethin";
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_6Rnd";
    };

class GTA_6Rnd_P_AP20: GTA_8Rnd_P_AP20 {
        author = "TyroneMF";
        scope = 2;
        displayName = "6Rnd AP-20 Slug";
        displayNameShort = "AP-20 Slug";
        ammo = "GTA_S_12G_AP20";
        count = 6;
        initSpeed = 510;
        picture = "\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
        descriptionShort = "AP-20 Slugs for precise armour penetration";
        mass = 6;
        reloadaction = "CUP_GestureReloadM1014_6Rnd";
    };
};

class CfgMagazineWells {
    class GTA_8rnd_12g {
        GTA_mags[] = { "GTA_8Rnd_P_000", "GTA_8Rnd_P_AP20" };
    };

    class GTA_6rnd_12g {
        GTA_mags[] = { "GTA_6Rnd_P_AP20", "GTA_6Rnd_P_AP20" };
    };
};
