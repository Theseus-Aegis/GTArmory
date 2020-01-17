#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class CUP_Weapons_M1014 {
        name = "GTA_M1014";
        units[] = { };
        weapons[] = { };
        requiredVersion = 0.1;
        requiredaddons[] = {"GTA"};
    };
        author[] = {"TyroneMF"};
        version = "0.1";
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
        magazines[] = { "CUP_8Rnd_B_Beneli_74Slug", "CUP_8Rnd_B_Beneli_74Pellets", "CUP_6Rnd_B_Beneli_74Pellets", "CUP_6Rnd_B_Benelli_74Slug" };
        magazineWell[] = { "CBA_12g_8rnds", "CBA_12g_6rnds" };
        class Single: Mode_SemiAuto {
            class BaseSoundModeType { };
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_sgun_M1014_LB_Shot_SoundSet", "TAC_sgun_M1014_LB_tail_SoundSet" };
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = { "TAC_sgun_M1014_LB_Shot_SoundSet", "TAC_sgun_M1014_LB_tail_SoundSet" };
            };
            reloadTime=0;
        };
    };
    
    class CUP_sgun_M1014: CUP_sgun_M1014_base { };
    class CUP_sgun_M1014_solidstock: CUP_sgun_M1014 { };
    class CUP_sgun_M1014_vfg: CUP_sgun_M1014_base { };
	class CUP_sgun_M1014_Entry: CUP_sgun_M1014_base { 
        class Single: Mode_SemiAuto {
        class BaseSoundModeType { };
        class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_sgun_M1014_SB_Shot_SoundSet", "TAC_sgun_M1014_SB_tail_SoundSet" };
            };
        class SilencedSound: BaseSoundModeType {
            soundSetShot[] = { "TAC_sgun_M1014_SB_Shot_SoundSet", "TAC_sgun_M1014_SB_tail_SoundSet" };
            };
            reloadTime=0;
        };
    };
	class CUP_sgun_M1014_Entry_vfg: CUP_sgun_M1014_Entry { };

};