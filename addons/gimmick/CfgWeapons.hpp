class CfgWeapons {
    class arifle_MSBS65_black_F;

    class CLASS(MSBS65_Gimmick): arifle_MSBS65_black_F {
        author = "Tyrone";
        scope = 2;
        scopeArsenal = 2;
        displayName = "MSBS Y33T-CANNON";
        magazines[] = {
            QCLASS(MSBS65_Gimmick_M_Red),
            QCLASS(MSBS65_Gimmick_M_Green)
        };
        magazineWell[] = {
            QCLASS(MSBS65_Gimmick_MW)
        };
        baseWeapon = QCLASS(MSBS65_Gimmick);
    };
};