class CLASS(SA80_Base): Rifle_Base_F {
    ACE_barrelLength = 518;
    ACE_barrelTwist = 180.5;
    aimTransitionSpeed = 1;
    author = "Aegis Team, Mike";
    class Library {
        libTextDesc = "";
    };
    changeFiremodeSound[] = {QPATHTOF(sounds\sa80\l85a3_firemode.wss), 0.1778, 1, 5};
    deployedPivot = "bipod";
    descriptionShort = "";
    dexterity = 1.6;
    discreteDistance[] = {
        100,
        200,
        300,
        400,
        500,
        600
    };
    discreteDistanceInitIndex = 1;
    drySound[] = {QPATHTOF(sounds\sa80\l85a3_dry.wss), 0.562, 1, 10};
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\sa80\animations\SA80_vfg.rtm)};
    hasBipod = 1;
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3"
    };
    inertia = 0.5;
    initSpeed = 930;
    magazines[] = {QCLASS(30Rnd_65x39_Ball_MX_Black)};
    magazineReloadSwitchPhase = 0.34;
    magazineWell[] = {"CBA_65x39_MX"};
    maxZeroing = 700;
    model = QPATHTOF(data\sa80\SA80_F.p3d);
    recoil = QCLASS(65_Long_BP);
    reloadAction = "GestureReloadSA80";
    reloadMagazineSound[] = {QPATHTOF(sounds\sa80\l85a3_reload.wss), 1.7782, 1, 10};
    soundBipodDown[] = {"\a3\sounds_f_mark\arsenal\sfx\bipods\bipod_generic_down.wss", 0.70794576, 1, 20};
    soundBipodUp[] = {"\a3\sounds_f_mark\arsenal\sfx\bipods\bipod_generic_up.wss", 0.70794576, 1, 20};

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class MuzzleSlot: asdg_MuzzleSlot_65 {
            iconPosition[] = {0.043, 0.348};
            iconScale = 0.2;
        };
        class CowsSlot: asdg_OpticRail1913 {
            iconPosition[] = {0.479, 0.194};
            iconScale = 0.2;
        };
        class PointerSlot: asdg_FrontSideRail {
            iconPosition[] = {0.285, 0.344};
            iconScale = 0.2;
        };
        class UnderBarrelSlot {};
        mass = 85;
    };

    modes[] = {
        "Single",
        "FullAuto",
        "single_medium_optics1",
        "single_medium_optics2",
        "fullauto_medium"
    };

    class Single: Mode_SemiAuto {
        reloadTime = 0.0851; // 705RPM
        dispersion=0.00073000003;
        minRange = 2;
        minRangeProbab = 0.5;
        midRange = 150;
        midRangeProbab = 0.7;
        maxRange = 250;
        maxRangeProbab = 0.2;
        MACRO_SA80_SOUNDS;
    };
    class FullAuto: Mode_FullAuto {
        reloadTime = 0.0851;
        dispersion = 0.00058;
        minRange = 2;
        minRangeProbab = 0.9;
        midRange = 15;
        midRangeProbab = 0.7;
        maxRange = 30;
        maxRangeProbab = 0.05;
        aiRateOfFire = 1e-006;
        MACRO_SA80_SOUNDS;
    };
    class fullauto_medium: FullAuto {
        showToPlayer = 0;
        burstRangeMax=5;
        minRange = 2;
        minRangeProbab = 0.5;
        midRange = 75;
        midRangeProbab = 0.7;
        maxRange = 100;
        maxRangeProbab = 0.05;
        aiRateOfFire = 2;
    };
    class single_medium_optics1: Single {
        requiredOpticType = 1;
        showToPlayer = 0;
        minRange = 5;
        minRangeProbab = 0.2;
        midRange = 300;
        midRangeProbab = 0.7;
        maxRange = 450;
        maxRangeProbab = 0.3;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
    };
    class single_medium_optics2: single_medium_optics1 {
        requiredOpticType = 2;
        minRange = 100;
        minRangeProbab = 0.1;
        midRange = 400;
        midRangeProbab = 0.7;
        maxRange = 600;
        maxRangeProbab = 0.05;
        aiRateOfFire = 6;
        aiRateOfFireDistance = 600;
    };

    class GunParticles: GunParticles {
        class SecondEffect {
            positionName = "Nabojnicestart";
            directionName = "Nabojniceend";
            effectName = "CaselessAmmoCloud";
        };
    };
};

class CLASS(SA80_Carbine_Base): CLASS(SA80_Base) {
    ACE_barrelLength = 285;
    aimTransitionSpeed = 1.2;
    dexterity = 1.7;
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\sa80\animations\SA80_C.rtm)};
    hasBipod = 0;
    inertia = 0.4;
    initSpeed = 780;
    maxZeroing = 600;
    model = QPATHTOF(data\sa80\SA80_C_F.p3d);
    recoil = QCLASS(65_Medium_BP);

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: asdg_OpticRail1913_short {};
        class MuzzleSlot: asdg_MuzzleSlot_65 {
            iconPosition[] = {0.043, 0.348};
            iconScale = 0.2;
        };
        class PointerSlot: asdg_FrontSideRail {
            iconPosition[] = {0.285, 0.344};
            iconScale = 0.2;
        };
        mass = 75;
    };
    class Single: Single {
        dispersion = 0.00116;
    };
    class FullAuto: FullAuto {
        dispersion = 0.00116;
    };
};

class CLASS(SA80_GL_Base): CLASS(SA80_Base) {
    aimTransitionSpeed = 0.8;
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\sa80\animations\SA80_GL.rtm)};
    hasBipod = 0;
    inertia = 0.6;
    model = QPATHTOF(data\sa80\SA80_GL_F.p3d);
    muzzles[] = {"this", "EGLM"};
    uiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";

    class EGLM: UGL_F {
        displayName = "GLM";
        useModelOptics = 0;
        useExternalOptic = 0;
        cameraDir = "OP_look";
        discreteDistance[] = {
            50,
            75,
            100,
            150,
            200,
            250,
            300,
            350,
            400
        };
        discreteDistanceCameraPoint[] = {
            "OP_eye_50",
            "OP_eye_75",
            "OP_eye_100",
            "OP_eye_150",
            "OP_eye_200",
            "OP_eye_250",
            "OP_eye_300",
            "OP_eye_350",
            "OP_eye_400"
        };
        discreteDistanceInitIndex = 1;
        magazineReloadSwitchPhase = 0.4;
        reloadAction = "GestureReloadSPARUGL";
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL.wss", "db-2", 1, 10};
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class UnderBarrelSlot: asdg_UnderSlot {
            iconPosition[] = {0.123, 0.789};
            iconScale = 0.2;
        };
        mass = 95;
    };
};
