#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
class CfgPatches {
    class hlcweapons_stgw57 {
        requiredaddons[] = {"GTA"};
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
    class compatibleItems { };
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class hlc_STGW_base : Rifle_Base_F {
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
    };

    class hlc_rifle_STGW57: hlc_STGW_base { };
    class hlc_rifle_stgw57_RIS: hlc_STGW_base { };
    class hlc_rifle_stgw57_commando: hlc_rifle_stgw57_RIS { };
    class hlc_rifle_sig5104: hlc_STGW_base { };
    class hlc_rifle_amt: hlc_rifle_sig5104 { };
};