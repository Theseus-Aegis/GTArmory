class CfgWeapons {
    class Pistol_Base_F;
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
                soundSetShot[] = {"CUP_Glock17_StandardSound_SoundSet","Rook40_Tail_SoundSet","Rook40_InteriorTail_SoundSet"};
                begin1[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s1", 1, 1, 800};
                begin2[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s2", 1, 1, 800};
                begin3[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s3", 1, 1, 800};
                begin4[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s4", 1, 1, 800};
                soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
            };

            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"CUP_Glock17_SilencedSound_SoundSet","Rook40_silencerTail_SoundSet","Rook40_silencerInteriorTail_SoundSet"};
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
};
