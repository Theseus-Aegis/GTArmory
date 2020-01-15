#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
class CfgPatches {
    class hlcweapons_stgw57 {
        requiredaddons[] = {"TACR"};
        units[] = { "HLC_SG510_ammobox", "Weapon_rifle_stgw57ris", "Weapon_rifle_stgw57", "weapon_rifle_stgw57_commando", "weapon_rifle_sig5104", "weapon_rifle_amt" };
        weapons[] = { "hlc_rifle_STGW57", "hlc_rifle_stgw57_RIS", "hlc_rifle_stgw57_commando", "hlc_rifle_sig5104", "hlc_rifle_amt", "hlc_optic_Kern", "hlc_optic_Kern2d" };
        magazines[] = { "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_bball_amt", "hlc_20Rnd_762x51_T_amt" };
        version = "v1.35";
        author = "toadie";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class nia_charms_slot;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {};
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class hlc_STGW_base : Rifle_Base_F {
        dlc = "Niarms_SG510";
        scope = protected;
        recoil = "recoil_ebr";
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        magazines[] = {
            "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_24Rnd_75x55_T_stgw"
        };
        magazineWell[] = {"CBA_75x55_STGW57"};
        reloadAction = "GestureReloadEBR";
        __AI_DISPERSION_COEF;
        cameraDir = "";
        bullet1[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15 };
        drysound[] = { "hlc_wp_sigamt\snd\amt_dryfire", 1.01, 1, 10 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        modes[] = { "Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium" };
        reloadmagazinesound[] = { "hlc_wp_sigamt\snd\sigamt_reload", 0.630957, 1, 35 };
        changeFiremodeSound[] = { "hlc_wp_sigamt\snd\amtswitch", 1, 1, 8 };
        soundbullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";


        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot {};
            class CowsSlot {};
            class PointerSlot {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType {
                soundSetShot[] = { "TAC_sg510_Shot_SoundSet", "TAC_sg510_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "TAC_sg510_silencerShot_SoundSet", "TAC_sg510_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            reloadtime = 0.11;
            __AI_ROF_RIFLE_MEDIUM_SEMI;
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType {
                soundSetShot[] = { "TAC_sg510_Shot_SoundSet", "TAC_sg510_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "TAC_sg510_silencerShot_SoundSet", "TAC_sg510_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            reloadtime = 0.105;

            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;
        };
        class single_close_optics1 : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_far_optics1 : single_medium_optics1 {
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiBurstTerminable = 1;
            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;
        };
    };
};