class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class nia_charms_slot;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot {
    class compatibleItems {};
};

class CfgWeapons {

    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_STGW_base : Rifle_Base_F {

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};

            class BaseSoundModeType {};
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {SG510_SOUND_SET};
            };
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = {SG510S_SOUND_SET};
            };
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };
            class BaseSoundModeType {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"\hlc_wp_sigamt\snd\amt_first", 1, 1, 10};
                closure2[] = {"\hlc_wp_sigamt\snd\amt_first", 1, 1, 10};
                soundClosure[] = {closure1, 0.5, closure2, 0.5};
            };
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = {SG510_SOUND_SET};
            };
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = {SG510S_SOUND_SET};
            };
        };
    };
};
