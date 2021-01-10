class CfgWeapons {
    class Pistol_Base_F;

    class CUP_hgun_Deagle: Pistol_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"Msbs65_01_Shot_SoundSet","Msbs65_01_Tail_SoundSet","Mx_Tail_Contact_SoundSet"};
            };
        };
    };
};
