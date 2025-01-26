class CLASS(KSG_Base): Rifle_Base_F {
    author = "Aegis Team, Mike";
    aiDispersionCoefX = 4;
    aiDispersionCoefY = 6;
    aimTransitionSpeed = 1.2;
    bullet1[] = {"a3\sounds_f\weapons\shells\shotgun\metal_shotgun_01", 0.501, 1, 15};
    bullet2[] = {"a3\sounds_f\weapons\shells\shotgun\metal_shotgun_02", 0.501, 1, 15};
    bullet3[] = {"a3\sounds_f\weapons\shells\shotgun\metal_shotgun_03", 0.501, 1, 15};
    bullet4[] = {"a3\sounds_f\weapons\shells\shotgun\metal_shotgun_04", 0.501, 1, 15};
    bullet5[] = {"a3\sounds_f\weapons\shells\shotgun\dirt_shotgun_01", 0.398, 1, 15};
    bullet6[] = {"a3\sounds_f\weapons\shells\shotgun\dirt_shotgun_02", 0.398, 1, 15};
    bullet7[] = {"a3\sounds_f\weapons\shells\shotgun\dirt_shotgun_03", 0.398, 1, 15};
    bullet8[] = {"a3\sounds_f\weapons\shells\shotgun\dirt_shotgun_04", 0.398, 1, 15};
    bullet9[] = {"a3\sounds_f\weapons\shells\shotgun\grass_shotgun_01", 0.223, 1, 15};
    bullet10[] = {"a3\sounds_f\weapons\shells\shotgun\grass_shotgun_02", 0.223, 1, 15};
    bullet11[] = {"a3\sounds_f\weapons\shells\shotgun\grass_shotgun_03", 0.223, 1, 15};
    bullet12[] = {"a3\sounds_f\weapons\shells\shotgun\grass_shotgun_04", 0.223, 1, 15};
    class Library {
        libTextDesc = "";
    };
    changeFiremodeSound[] = {"a3\sounds_f_exp\arsenal\weapons\rifles\rifle_ak47\ak47_firemode.wss", 0.177, 1, 5};
    cursor = "sgun";
    displayName = "Kel-Tec KSG-25A Shotgun";
    descriptionShort = "Kel-Tec KSG-25A Shotgun";
    distanceZoomMax = 100;
    distanceZoomMin = 100;
    dexterity = 1.5;
    drySound[] = {"a3\sounds_f_enoch\assets\arsenal\huntershotgun_01\huntershotgun_01_shot_dry_01.wss", 0.501, 1, 10};
    handAnim[] = {"OFP2_ManSkeleton", "\a3\weapons_f\machineguns\m200\data\anim\m200.rtm"};
    hiddenSelections[] = {"camo"};
    htMax = 550;
    htMin = 16;
    inertia = 0.5;
    initSpeed = 375;
    magazines[] = {
        QCLASS(8Rnd_P_000),
        QCLASS(8Rnd_S_AP20),
        QCLASS(8Rnd_Smoke_M1014)
    };
    magazineWell[] = {"CBA_12g_8rnds"};
    maxZeroing = 100;
    model = QPATHTOF(data\ksg\KSG_F.p3d);
    modes[] = {"Single"};
    muzzles[] = {"this", QCLASS(KSG_Secondary)};
    picture = QPATHTOF(ui\icon_ksg_olive_ca.paa);
    recoil = QCLASS(12G_Short);
    reloadAction = "CUP_GestureReloadM1014_1Rnd";
    reloadMagazineSound[] = {"cup\weapons\cup_weapons_m1014\data\sfx\reload_6rnd.wss", 1, 1, 35};
    scope = 0;
    scopeArsenal = 0;
    soundBullet[] = {
        "bullet1", 0.083,
        "bullet2", 0.083,
        "bullet3", 0.083,
        "bullet4", 0.083,
        "bullet5", 0.083,
        "bullet6", 0.083,
        "bullet7", 0.083,
        "bullet8", 0.083,
        "bullet9", 0.083,
        "bullet10", 0.083,
        "bullet11", 0.083,
        "bullet12", 0.083
    };
    uiPicture = "\a3\weapons_f\data\ui\icon_regular_ca.paa";

    class Single: Mode_SemiAuto {
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet", "HunterShotgun_01_Tail_SoundSet"};
        };
        sounds[] = {"StandardSound"};
        textureType = "left";
        dispersion = 0.00131;
        reloadTime = 0.01;
        minRange = 1;
        minRangeProbab = 0.5;
        midRange = 50;
        midRangeProbab = 0.7;
        maxRange = 100;
        maxRangeProbab = 0.2;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_short {
            iconPosition[] = {0.35, 0.32};
            iconScale = 0.2;
        };
        class PointerSlot {};
        mass = 90;
    };
};

class CLASS(KSG_Olive): CLASS(KSG_Base) {
    baseWeapon = QCLASS(KSG_Olive);
    displayName = "Kel-Tec KSG-25A (Olive)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\ksg\ksg_co.paa)};
    scope = 2;
    scopeArsenal = 2;

    class CLASS(KSG_Secondary): CLASS(KSG_Base) {
        displayName = "Kel-Tec KSG-25A (Olive)";
        class Single: Single {
            textureType = "right";
        };
    };
};

class CLASS(KSG_Black): CLASS(KSG_Olive) {
    baseWeapon = QCLASS(KSG_Black);
    displayName = "Kel-Tec KSG-25A (Black)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\ksg\ksg_black_co.paa)};
    picture = QPATHTOF(ui\icon_ksg_black_ca.paa);
    class CLASS(KSG_Secondary): CLASS(KSG_Secondary) {
        displayName = "Kel-Tec KSG-25A (Black)";
    };
};
