class CLASS(Famas_Base): Rifle_Base_F {
    aimTransitionSpeed = 1.1;
    author = "Aegis Team, Mike";
    bullet10[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02.wss", 0.562341, 1, 15};
    bullet11[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03.wss", 0.562341, 1, 15};
    bullet12[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04.wss", 0.562341, 1, 15};
    bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01.wss", 0.446684, 1, 15};
    bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02.wss", 0.446684, 1, 15};
    bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03.wss", 0.446684, 1, 15};
    bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04.wss", 0.446684, 1, 15};
    bullet5[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01.wss", 0.562341, 1, 15};
    bullet6[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02.wss", 0.562341, 1, 15};
    bullet7[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03.wss", 0.562341, 1, 15};
    bullet8[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04.wss", 0.562341, 1, 15};
    bullet9[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01.wss", 0.562341, 1, 15};
    changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode.wss", 0.177828, 1, 5};
    deployedPivot = "bipod";
    dexterity = 1.5;
    distanceZoomMax = 300;
    distanceZoomMin = 300;
    drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry.wss", 0.562341, 1, 10};
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\famas\animations\famas_tact_high.rtm)};
    hasBipod = 1;
    hiddenSelections[] = {
        "CamoG2_1",
        "CamoG2_2",
        "CamoG2_3",
        "CamoG2_Low",
        "CamoRail",
        "CamoG2_Grip",
        "CamoF1_2",
        "CamoF1_3",
        "CamoM203",
        "CamoM203_Low"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\famas\famas_g2_1.paa),
        QPATHTOF(data\famas\famas_g2_2.paa),
        QPATHTOF(data\famas\famas_g2_3.paa),
        QPATHTOF(data\famas\famas_low.paa),
        QPATHTOF(data\famas\rail_famas.paa),
        QPATHTOF(data\famas\handgrip.paa),
        QPATHTOF(data\famas\famas_2.paa),
        QPATHTOF(data\famas\famas_3.paa),
        QPATHTOF(data\famas\m203.paa),
        QPATHTOF(data\famas\m203_low.paa)
    };
    htMax = 920;
    htMin = 8;
    inertia = 0.5;
    initSpeed = 750;
    magazineReloadSwitchPhase = 0.48;
    magazines[] = {"30Rnd_556x45_Stanag"};
    magazineWell[] = {"CBA_556x45_STANAG"};
    maxZeroing = 800;
    modes[] = {
        "Single",
        "Burst",
        "FullAuto",
        "single_medium_optics1",
        "single_medium_optics2",
        "burst_medium",
        "fullauto_medium"
    };
    muzzles[] = {"this", QCLASS(Famas_RifleGrenade)};
    recoil = "recoil_trg20";
    reloadAction = "GestureReloadFAMAS";
    reloadMagazineSound[] = {QPATHTOF(data\famas\FAMAS_reload.ogg), 1, 1, 35};
    scope = 0;
    soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down.wss", 0.707946, 1, 20};
    soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up.wss", 0.707946, 1, 20};
    soundBullet[] = {"bullet1", 0.087, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
    weaponInfoType = "RscWeaponZeroing";

    class CLASS(Famas_RifleGrenade): UGL_F {
        cameraDir = "OP_look";
        discreteDistance[] = {40,60,80};
        discreteDistanceCameraPoint[] = {"OP_eye_40","OP_eye_60","OP_eye_80"};
        discreteDistanceInitIndex = 1;
        displayName = "Rifle Grenade";
        magazines[] = {"1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS"};
        magazineWell[] = {"SLR_Grenades"};
        modes[] = {"Single"};
        recoil = "lxWS_recoil_RifleGrenade";
        reloadAction = "lxWS_GestureReload_slr_GL";
        reloadMagazineSound[] = {"lxWS\sounds_f_lxws\weapons\SLR\lxws_slr_GL_reload.wss",1.3,1,20};
        scope = 2;
        useExternalOptic = 0;
        useModelOptics = 0;

        class Single: Mode_SemiAuto {
            dispersion = 0.00073;
            maxRange = 250;
            maxRangeProbab = 0.2;
            midRange = 150;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            reloadTime = 0.07;
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
            };
        };
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_556 {
            displayName = "Muzzle Slot";
            iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
            iconPosition[] = {0, 0.45};
            iconScale = 0.2;
            linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
        };
        class CowsSlot: asdg_OpticRail1913_long {
            displayName = "Optics Slot";
            iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
            iconPinpoint = "Bottom";
            iconPosition[] = {0.5, 0.35};
            iconScale = 0.2;
            linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";

        };
        class PointerSlot: asdg_FrontSideRail {
            displayName = "Pointer Slot";
            iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
            iconPosition[] = {0.2, 0.45};
            iconScale = 0.25;
            linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
        };
        mass = 90;
    };

    class Single: Mode_SemiAuto {
        dispersion = 0.00073;
        maxRange = 250;
        maxRangeProbab = 0.2;
        midRange = 150;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.5;
        reloadTime = 0.0555;

        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType {
            SoundSetShot[] = {"lxWS_Velko_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
        };
    };
    class Burst: Mode_Burst {
        burst = 3;
        dispersion = 0.00073;
        maxRange = 100;
        maxRangeProbab = 0.050000001;
        midRange = 50;
        midRangeProbab = 0.69999999;
        minRange=2;
        minRangeProbab = 0.89999998;
        reloadTime = 0.0555;

        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType {
            SoundSetShot[] = {"lxWS_Velko_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
        };
    };
    class FullAuto: Mode_FullAuto {
        aiRateOfFire = 1e-006;
        dispersion = 0.00073;
        maxRange = 30;
        maxRangeProbab = 0.05;
        midRange = 15;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.9;
        reloadTime = 0.0555;

        class BaseSoundModeType;
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
        };
        class SilencedSound: BaseSoundModeType {
            SoundSetShot[] = {"lxWS_Velko_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
        };
    };
    class fullauto_medium: FullAuto {
        aiRateOfFire = 2;
        burst = 3;
        maxRange = 100;
        maxRangeProbab = 0.05;
        midRange = 75;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.5;
        showToPlayer = 0;
    };
    class Burst_medium: Burst {
        aiRateOfFire=2;
        maxRange=100;
        maxRangeProbab=0.050000001;
        midRange=75;
        midRangeProbab=0.69999999;
        minRange=2;
        minRangeProbab=0.5;
        showToPlayer=0;
    };
    class single_medium_optics1: Single {
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
        maxRange = 450;
        maxRangeProbab = 0.3;
        midRange = 300;
        midRangeProbab = 0.7;
        minRange = 5;
        minRangeProbab = 0.2;
        requiredOpticType = 1;
        showToPlayer = 0;
    };
    class single_medium_optics2: single_medium_optics1 {
        aiRateOfFire = 6;
        aiRateOfFireDistance = 600;
        maxRange = 600;
        maxRangeProbab = 0.05;
        midRange = 400;
        midRangeProbab = 0.7;
        minRange = 100;
        minRangeProbab = 0.1;
        requiredOpticType = 2;
    };
};

class CLASS(Famas_GL_Base): CLASS(Famas_Base) {
    class CLASS(Famas_M203): UGL_F {
        cameraDir = "OP_look";
        discreteDistance[] = {50,75,100,150,200,250,300,350,400};
        discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
        discreteDistanceInitIndex = 1;
        displayName = "M203";
        magazines[] = {"1Rnd_HE_Grenade_shell"};
        magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
        reloadAction = "GestureReloadFAMASUGL";
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload.wss", 1.3, 1, 20};
        scope = 2;
        useExternalOptic = 0;
        useModelOptics = 0;
    };
};
