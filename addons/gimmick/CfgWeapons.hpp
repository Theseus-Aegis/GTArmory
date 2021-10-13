class CfgWeapons {
    class arifle_MSBS65_black_F;

    class CLASS(MSBS65_Gimmick): arifle_MSBS65_black_F {
        author = ECSTRING(main,Author);
        scope = 1;
        scopeArsenal = 1;
        displayName = CSTRING(MSBS65_Gimmick_Name);
        magazines[] = {
            QCLASS(MSBS65_Gimmick_M_Red),
            QCLASS(MSBS65_Gimmick_M_Green),
            QCLASS(MSBS65_Gimmick_M_Yellow)
        };
        magazineWell[] = {
            QCLASS(MSBS65_Gimmick_MW)
        };
        modes[] = {"Single"};
        baseWeapon = QCLASS(MSBS65_Gimmick);

        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {QCLASS(msbs_y33t_soundSet)};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {QCLASS(msbs_y33t_soundSet)};
            };
        };
    };

    // 'Pickup' Weapon
    class CLASS(MSBS65_Gimmick_Super): CLASS(MSBS65_Gimmick) {
        displayName = CSTRING(MSBS65_Gimmick_Super_Name);
        modes [] = {"Single", "FullAuto"};
        baseWeapon = QCLASS(MSBS65_Gimmick_Super);

        class FullAuto: Mode_FullAuto {
            reloadTime = 0.1;
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {QCLASS(msbs_y33t_soundSet)};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {QCLASS(msbs_y33t_soundSet)};
            };
        };
    };
};
