class asdg_MuzzleSlot_9MM;
class Mode_SemiAuto;
class Mode_FullAuto;
class asdg_SlotInfo;
class asdg_PistolUnderRail: asdg_SlotInfo {
    class compatibleItems {
        CUP_acc_Glock17_Flashlight = 1;
    };
};
class CfgWeapons {
    
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };
    class CUP_hgun_Glock17: Pistol_Base_F {
        displayName = "Glock 17";
    };
    class CUP_hgun_Glock17_tan: CUP_hgun_Glock17 {
        displayName = "Glock 17 (Tan)";
    };
    class CUP_hgun_Glock17_blk: CUP_hgun_Glock17 {
        displayName = "Glock 17 (Black)";
    };
    CLASS(hgun_Glock18_Tan): CUP_hgun_Glock17_tan {
        author = "TyroneMF";
        scope = 2;
        modes[] = {"Single", "FullAuto"};

        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType {
                weaponSoundEffect="DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0351422,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0351422,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };

            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"CUP_Glock17_StandardSound_SoundSet","Rook40_Tail_SoundSet","Rook40_InteriorTail_SoundSet"};
                begin1[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s1",1,1,800};
                begin2[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s2",1,1,800};
                begin3[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s3",1,1,800};
                begin4[] = {"CUP\Weapons\CUP_Weapons_Glock17\data\sfx\Glock17_s4",1,1,800};
                soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
            };

            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"CUP_Glock17_SilencedSound_SoundSet","Rook40_silencerTail_SoundSet","Rook40_silencerInteriorTail_SoundSet"};
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.56234133,1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.56234133,1,200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
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
        displayName="Glock 18C (Tan)";
        autoFire=1;
    };

    CLASS(hgun_Glock18_Black): TACGT_hgun_Glock18_Tan
    {
        author = "TyroneMF";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\CUP\Weapons\CUP_Weapons_glock17\data\glock17_blk_co.paa"};
        displayName = "Glock 18C (Black)";
    };
};