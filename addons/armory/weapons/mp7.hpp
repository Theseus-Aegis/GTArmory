// Suppressors
class ItemCore;
class InventoryMuzzleItem_Base_F;
class CLASS(MP7_Suppressor_Black): ItemCore {
    afMax = 0;
    author = "Grave";
    displayName = "MP7 Suppressor (Black)";
    htMax = 600;
    htMin = 1;
    mFact = 1;
    mfMax = 0;
    model = QPATHTOF(data\mp7\mp7_suppressor_black.p3d);
    picture = QPATHTOF(ui\icon_mp7_suppressor_black_ca.paa);
    scope = 2;
    tBody = 100;

    class ItemInfo: InventoryMuzzleItem_Base_F {
        alternativeFire = "Zasleh2";
        inertia = 0.2;
        mass = 10;
        muzzleEnd = "zaslehPoint";
        soundTypeIndex = 1;

        class AmmoCoef {
            airFriction = 1;
            audibleFire = 0.3;
            audibleFireTime = 0.5;
            cost = 1;
            hit = 1;
            typicalSpeed = 1;
            visibleFire = 0.5;
            visibleFireTime = 0.5;
        };

        class MagazineCoef {
            initSpeed = 1.05;
        };

        class MuzzleCoef {
            artilleryDispersionCoef = "1.0f";
            dispersionCoef = "0.8f";
            fireLightCoef = "0.1f";
            maxRangeCoef = "1.0f";
            maxRangeProbabCoef = "1.0f";
            midRangeCoef = "1.0f";
            midRangeProbabCoef = "1.0f";
            minRangeCoef = "1.0f";
            minRangeProbabCoef = "1.0f";
            recoilCoef = "1.0f";
            recoilProneCoef = "1.0f";
        };
    };
};

class CLASS(MP7_Suppressor_Khaki): CLASS(MP7_Suppressor_Black) {
    displayName = "MP7 Suppressor (Khaki)";
    picture = QPATHTOF(ui\icon_mp7_suppressor_khaki_ca.paa);
    model = QPATHTOF(data\mp7\mp7_suppressor_khaki.p3d);
};

class CLASS(MP7_Suppressor_Sand): CLASS(MP7_Suppressor_Black) {
    displayName = "MP7 Suppressor (Sand)";
    picture = QPATHTOF(ui\icon_mp7_suppressor_sand_ca.paa);
    model = QPATHTOF(data\mp7\mp7_suppressor_sand.p3d);
};

// Weapon
class CLASS(MP7_Base): Rifle_Short_Base_F {
    ACE_barrelLength = 180.34;
    ACE_barrelTwist = 228.6;
    aimTransitionSpeed = 1.5;
    author = "Aegis Team, Mike";
    changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Firemode_pdw2000.wss", 0.251, 1, 5};
    cursor = "smg";
    dexterity = 1.8;
    discreteDistance[] = {100, 200};
    discreteDistanceInitIndex = 0;
    displayName = "MP7";
    drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Dry_pdw2000.wss", 0.099, 1, 20};
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\mp7\anim\SMG_04.rtm)};
    hiddenSelections[] = {"camo"};
    htMax = 380;
    htMin = 3;
    initSpeed = 735;
    magazineReloadSwitchPhase = 0.48;
    magazines[] = {QCLASS(40Rnd_46x30_MP7_Ball)};
    magazineWell[] = {QCLASS(46x30_MP7)};
    maxZeroing = 400;
    model = QPATHTOF(data\mp7\SMG_04_Rail_F.p3d);
    recoil = QCLASS(SMG_Base);
    reloadAction = "GestureReloadSMG_03";
    reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Reload_pdw2000.wss", 1, 1, 10};

    class Library {
        libTextDesc = "";
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_46 {
            linkProxy = "\A3\Data_F\Proxies\weapon_slots\MUZZLE";
            compatibleItems[] = {
                QCLASS(MP7_Suppressor_Black),
                QCLASS(MP7_Suppressor_Khaki),
                QCLASS(MP7_Suppressor_Sand)
            };
            iconPosition[] = {0.13, 0.42};
            iconScale = 0.2;
        };

        class CowsSlot: asdg_OpticRail1913_short {
            iconPosition[] = {0.36, 0.22};
            iconScale = 0.2;
        };

        class PointerSlot: asdg_FrontSideRail {
            iconPosition[] = {0.31, 0.43};
            iconScale = 0.2;
        };

        mass = 40;
    };

    discreteZoomMin = 50;
    discreteZoomMax = 50;
    modes[] = {"Single", "FullAuto"};

    class Single: Mode_SemiAuto {
        dispersion = 0.00131;
        maxRange = 350;
        maxRangeProbab = 0.05;
        midRange = 200;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.3;
        reloadTime = 0.06315789;
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            SoundSetShot[] = {
                "SMGPDW2000_Shot_SoundSet",
                "SMGPDW2000_Tail_SoundSet",
                "SMGPDW2000_InteriorTail_SoundSet"
            };
        };
        class SilencedSound: BaseSoundModeType {
            SoundSetShot[] = {
                "SMGPDW2000_silencerShot_SoundSet",
                "SMGPDW2000_silencerTail_SoundSet",
                "SMGPDW2000_silencerInteriorTail_SoundSet"
            };
        };
    };

    class FullAuto: Mode_FullAuto {
        aiRateOfFire = 1e-006;
        dispersion = 0.00131;
        maxRange = 100;
        maxRangeProbab = 0.05;
        midRange = 25;
        midRangeProbab = 0.7;
        minRange = 0;
        minRangeProbab = 0.1;
        reloadTime = 0.06315789;
        sounds[] = {"StandardSound", "SilencedSound"};
        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            SoundSetShot[] = {
                "SMGPDW2000_Shot_SoundSet",
                "SMGPDW2000_Tail_SoundSet",
                "SMGPDW2000_InteriorTail_SoundSet"
            };
        };
        class SilencedSound: BaseSoundModeType {
            SoundSetShot[] = {
                "SMGPDW2000_silencerShot_SoundSet",
                "SMGPDW2000_silencerTail_SoundSet",
                "SMGPDW2000_silencerInteriorTail_SoundSet"
            };
        };
    };
};

class CLASS(MP7_Black): CLASS(MP7_Base) {
    baseWeapon = QCLASS(MP7_Black);
    displayName = "MP7 (Black)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\mp7\SMG_04_blk_F_co.paa)};
    picture = QPATHTOF(ui\icon_mp7_black_ca.paa);
    scope = 2;
};

class CLASS(MP7_Khaki): CLASS(MP7_Base) {
    baseWeapon = QCLASS(MP7_Khaki);
    displayName = "MP7 (Khaki)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\mp7\SMG_04_khk_F_co.paa)};
    picture = QPATHTOF(ui\icon_mp7_khaki_ca.paa);
    scope = 2;
};

class CLASS(MP7_Sand): CLASS(MP7_Base) {
    baseWeapon = QCLASS(MP7_Sand);
    displayName = "MP7 (Sand)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\mp7\SMG_04_snd_F_co.paa)};
    picture = QPATHTOF(ui\icon_mp7_sand_ca.paa);
    scope = 2;
};
