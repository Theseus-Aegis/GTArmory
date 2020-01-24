#include "script_component.hpp"

class CfgPatches {
    class TACGT_Weapons_MP5 {
        name = COMPONENT_NAME;
        units[] = { "" };
        weapons[] = { "" };
        magazines[] = { "" };
        requiredVersion = 0.1;
        requiredaddons[] = { "TACGT" };
    };
        VERSION_CONFIG;
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgMagazineWells {
    class TACGT_9x19_MP5 {
        TACGT_NIA_mags[] = {
            "hlc_30Rnd_9x19_B_MP5",
            "hlc_30Rnd_9x19_GD_MP5",
            "hlc_30Rnd_9x19_SD_MP5"
        };
    };
    class TACGT_10x25_MP5 {
        TACGT_NIA_mags[] = {
            "hlc_30Rnd_10mm_B_MP5",
            "hlc_30Rnd_10mm_JHP_MP5"
        };
    };
};

class CfgWeapons {

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_MP5_base : Rifle_Base_F {
        magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_SD_MP5"};
        magazineWell[] = { "TACGT_9x19_MP5" };
    };

    class hlc_smg_mp510 :hlc_smg_MP5N {
        magazines[] = {"hlc_30Rnd_10mm_B_MP5","hlc_30Rnd_10mm_JHP_MP5"};
        magazineWell[] = { "TACGT_10x25_MP5" };
    };

    class hlc_smg_MP5N : hlc_Mp5_base { };

    class hlc_smg_9mmar : hlc_smg_MP5N {

        class BaseSoundModeType { };

        class Single: Mode_SemiAuto {
            class StandardSound: BaseSoundModeType {
            soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
            };
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
            };
        };

        class Burst: Mode_Burst {
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
            };
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
            };
        };

        class FullAuto: Mode_FullAuto {
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
            };
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
            };
        };
    };
};
