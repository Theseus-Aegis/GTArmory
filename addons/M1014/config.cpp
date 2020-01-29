#include "script_component.hpp"

#include "\x\tacgt\addons\common\sg_soundshader.hpp"

class CfgPatches {
    class TACGT_Weapons_M1014 {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredaddons[] = {"TACGT", "TACGT_Common"};
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_FrontSideRail;
class CUP_PicatinnyTopShortMount;

class CfgWeapons {

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class CUP_sgun_M1014_base: Rifle_Base_F { 
        magazines[] = { "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_6Rnd_B_Beneli_74Pellets", "CUP_6Rnd_B_Benelli_74Slug", "TACGT_8Rnd_P_000", "TACGT_6Rnd_P_000", "TACGT_8Rnd_P_AP20", "TACGT_6Rnd_P_AP20" };
        magazineWell[] = { "CBA_12g_8rnds", "CBA_12g_6rnds", "TACGT_8rnd_12g", "TACGT_6rnd_12g" };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {M1014LB_SOUND_SET};
            };
            reloadTime=0;
        };
    };
    
    class CUP_sgun_M1014: CUP_sgun_M1014_base {};
    class CUP_sgun_M1014_solidstock: CUP_sgun_M1014 {};
    class CUP_sgun_M1014_vfg: CUP_sgun_M1014_base {};
	class CUP_sgun_M1014_Entry: CUP_sgun_M1014_base { 
        magazines[] = { "CUP_6Rnd_B_Beneli_74Pellets", "CUP_6Rnd_B_Benelli_74Slug", "TACGT_6Rnd_P_000", "TACGT_6Rnd_P_AP20" };
        magazineWell[] = { "TACGT_12g_6rnds", "TACGT_6rnd_12g" };
        class Single: Mode_SemiAuto {
        class BaseSoundModeType {};
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = {M1014SB_SOUND_SET};
            };
            reloadTime=0;
        };
    };
	class CUP_sgun_M1014_Entry_vfg: CUP_sgun_M1014_Entry {};

};
