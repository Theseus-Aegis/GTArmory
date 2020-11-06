class CfgWeapons {
    class arifle_TRG21_F;
    class CLASS(TAR21_Black): arifle_TRG21_F {
        displayName = CSTRING(TAR21_Black_Display);
        scope = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa)
        };
        baseWeapon = QCLASS(TAR21_Black);
    };

    class arifle_TRG21_GL_F;
    class CLASS(GTAR21_EGLM_Black): arifle_TRG21_GL_F {
        displayName = CSTRING(GTAR21_EGLM_Black_Display);
        scope = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa),
            "\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa",
            "\a3\weapons_f\data\gl_holo_co.paa"
        };
        baseWeapon = QCLASS(TAR21_GL_Black);
    };

    class arifle_TRG20_F;
    class CLASS(CTAR21_Black): arifle_TRG20_F {
        displayName = CSTRING(CTAR21_Black_Display);
        scope = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa)
        };
        baseWeapon = QCLASS(CTAR21_Black);
    };
};
