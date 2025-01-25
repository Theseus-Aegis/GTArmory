class CLASS(KSG_Base): Rifle_Base_F {
    author = "Avery The Kitty, Mike";
    aiDispersionCoefX = 4;
    aiDispersionCoefY = 6;
    aimTransitionSpeed = 1.2;
    class Library {
        libTextDesc = "";
    };
    changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_firemode.wss", 0.177, 1, 5};
    cursor = "sgun";
    displayName = "Kel-Tec KSG-25A Shotgun";
    descriptionShort = "Kel-Tec KSG-25A Shotgun";
    distanceZoomMax = 100;
    distanceZoomMin = 100;
    dexterity = 1.5;
    drySound[] = {"A3\Sounds_F_Enoch\Assets\Arsenal\HunterShotgun_01\HunterShotgun_01_Shot_Dry_01.wss", 0.501, 1, 10};
    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Machineguns\M200\Data\Anim\M200.rtm"};
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
    reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M1014\data\sfx\Reload_6Rnd.wss", 1, 1, 35};
    scope = 0;
    scopeArsenal = 0;
    uiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";

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
