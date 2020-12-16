class CfgWeapons {
    class arifle_MSBS65_black_F;

    class CLASS(MSBS65_Gimmick): arifle_MSBS65_black_F {
        author = "Tyrone";
        scope = 1;
        scopeArsenal = 1;
        displayName = CSTRING(MSBS65_Gimmick_Name);
        magazines[] = {
            QCLASS(MSBS65_Gimmick_M_Red),
            QCLASS(MSBS65_Gimmick_M_Green)
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
};
