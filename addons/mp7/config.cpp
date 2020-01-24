#include "script_component.hpp"

class CfgPatches {
    class TACGT_Weapons_MP7 {
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
class Mode_FullAuto;

class CfgWeapons {

    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class Rifle_Base_F;
    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class CUP_smg_MP7: Rifle_Short_Base_F {

        class Single: Mode_SemiAuto {
                sounds[] = { "StandardSound", "SilencedSound" };

            class StandardSound: BaseSoundModeType {
                SoundSetShot[] = {MP7_SOUND_SET};
            };

            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {MP7S_SOUND_SET};
            };
        };

        class FullAuto: Mode_FullAuto {
                sounds[] = { "StandardSound", "SilencedSound" };

            class StandardSound: BaseSoundModeType {
                SoundSetShot[] = {MP7_SOUND_SET};
            };

            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {MP7S_SOUND_SET};
            };
        };
    };

    class CUP_hgun_MP7: Pistol_Base_F {

        class Single: Mode_SemiAuto {
                sounds[] = { "StandardSound", "SilencedSound" };

            class StandardSound: BaseSoundModeType {
                SoundSetShot[] = {MP7_SOUND_SET};
            };

            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {MP7S_SOUND_SET};
            };
        };

        class FullAuto: Mode_FullAuto {
                sounds[] = { "StandardSound", "SilencedSound" };

            class StandardSound: BaseSoundModeType {
                SoundSetShot[] = {MP7_SOUND_SET};
            };

            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = {MP7S_SOUND_SET};
            };
        };
    };
};
