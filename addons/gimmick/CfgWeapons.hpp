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
        baseWeapon = QCLASS(MSBS65_Gimmick);
    };
};
