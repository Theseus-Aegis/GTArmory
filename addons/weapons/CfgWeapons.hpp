class CfgWeapons {
    // Chiappa Rhino
    class Pistol_Base_F;
    class hgun_Pistol_heavy_02_F: Pistol_Base_F {
        class Single: Mode_SemiAuto {
            reloadTime = 0;
        };
    };

    class CLASS(Rhino_357): hgun_Pistol_heavy_02_F {
        author = ECSTRING(main,Author);
        displayName = "Chiappa Rhino 60DS (.357)";
        baseWeapon = QCLASS(Rhino_357);
        magazines[] = {QCLASS(6Rnd_357)};
        magazineWell[] = {QCLASS(Cylinder_357)};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\357_magnum_co.paa),
            "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
        };
    };

    class CLASS(Rhino_44): hgun_Pistol_heavy_02_F {
        author = ECSTRING(main,Author);
        displayName = "Chiappa Rhino 60DS (.44)";
        baseWeapon = QCLASS(Rhino_44);
        magazines[] = {QCLASS(6Rnd_44)};
        magazineWell[] = {QCLASS(Cylinder_44)};
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\44_magnum_co.paa),
            "\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
        };
    };

    // Glock 18
    class CUP_hgun_Glock17: Pistol_Base_F {
        displayName = "Glock 17";
    };
    class CUP_hgun_Glock17_tan: CUP_hgun_Glock17 {
        displayName = "Glock 17 (Tan)";
    };
    class CUP_hgun_Glock17_blk: CUP_hgun_Glock17 {
        displayName = "Glock 17 (Black)";
    };

    class CLASS(hgun_Glock18_Tan): CUP_hgun_Glock17_tan {
        author = ECSTRING(main,Author);
        displayName = "Glock 18c (Tan)";
        scope = 2;
        autoFire = 1;
        modes[] = {"Single", "FullAuto"};

        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};

            class BaseSoundModeType {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 1.0351422, 1, 10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 1.0351422, 1.1, 10};
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };

            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"CUP_Glock17_StandardSound_SoundSet", "Rook40_Tail_SoundSet", "Rook40_InteriorTail_SoundSet"};
                begin1[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s1", 1, 1, 800};
                begin2[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s2", 1, 1, 800};
                begin3[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s3", 1, 1, 800};
                begin4[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s4", 1, 1, 800};
                soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
            };

            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"CUP_Glock17_SilencedSound_SoundSet", "Rook40_silencerTail_SoundSet", "Rook40_silencerInteriorTail_SoundSet"};
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-07", 0.56234133, 1, 200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-08", 0.56234133, 1, 200};
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };

            dispersion = 0.0043500001;
            reloadtime = 0.05;
            minRange = 5;
            minRangeProbab = 0.30000001;
            midRange = 25;
            midRangeProbab = 0.60000002;
            maxRange = 50;
            maxRangeProbab = 0.1;
        };
    };

    class CLASS(hgun_Glock18_Black): CLASS(hgun_Glock18_Tan) {
        displayName = "Glock 18c (Black)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_glock17\data\glock17_blk_co.paa"};
    };

    // LAMG
    class LMG_Mk200_F;
    class CLASS(LMG_LAMG): LMG_Mk200_F {
        author = ECSTRING(main,Author);
        displayName = "LAMG (GT Edition)";
        descriptionShort = "GT Edition Light Machine-Gun";
        scope = 2;
        recoil = QCLASS(recoil_mk200);
        magazines[] = {
            QCLASS(100Rnd_65x39_Ball_Belt),
            QCLASS(100Rnd_65x39_Ball_Tracer_Belt),
            QCLASS(100Rnd_65x39_EPR_Belt)
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\1st_person_gt_co.paa),
            QPATHTOF(data\body_gt_co.paa),
            "\A3\Weapons_F\Machineguns\M200\data\grip_co"
        };
        magazineWell[] = {};
        baseWeapon = QCLASS(LMG_LAMG);
    };

    // Keltec RFB
    class arifle_SDAR_F;
    class CLASS(RFB_762_F): arifle_SDAR_F {
        author = ECSTRING(main,Author);
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = QCLASS(RFB_762_F);
        displayName = "Keltec RFB";
        descriptionShort = "Underwater Rifle";
        magazines[] = {QCLASS(20Rnd_762x51_RFB_Mag)};
        magazineWell[] = {QCLASS(762x51_RFB)};
    };

    // TAR-21 Black
    class arifle_TRG21_F;
    class CLASS(TAR21_Black): arifle_TRG21_F {
        displayName = "TAR-21 (Black)";
        scope = 2;
        scopeArsenal = 2;
        picture = QPATHTOF(ui\tar21_black_ca.paa);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa)
        };
        baseWeapon = QCLASS(TAR21_Black);
    };

    class arifle_TRG21_GL_F;
    class CLASS(GTAR21_EGLM_Black): arifle_TRG21_GL_F {
        displayName = "GTAR-21 EGLM (Black)";
        scope = 2;
        scopeArsenal = 2;
        picture = QPATHTOF(ui\gtar21_eglm_black_ca.paa);
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa),
            "\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa",
            "\a3\weapons_f\data\gl_holo_co.paa"
        };
        baseWeapon = QCLASS(TAR21_GL_Black);
    };

    class arifle_TRG20_F;
    class CLASS(CTAR21_Black): arifle_TRG20_F {
        displayName = "CTAR-21 (Black)";
        scope = 2;
        scopeArsenal = 2;
        picture = QPATHTOF(ui\ctar21_black_ca.paa);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa)
        };
        baseWeapon = QCLASS(CTAR21_Black);
    };
};
