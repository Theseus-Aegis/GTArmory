class CfgWeapons {
    class arifle_TRG21_F;
    class CLASS(TAR21_Black): arifle_TRG21_F {
        displayName = "TAR-21 (Black)";
        scope = 2;
        scopeArsenal = 2;
        picture = QPATHTOF(ui\tar21_black_ca.paa);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa)
        };
        baseWeapon = QCLASS(TAR21_Black);
    };

    class arifle_TRG21_GL_F;
    class CLASS(GTAR21_EGLM_Black): arifle_TRG21_GL_F {
        displayName = "GTAR-21 EGLM (Black)";
        scope = 2;
        scopeArsenal = 2;
        picture = QPATHTOF(ui\gtar21_eglm_black_ca.paa);
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
        displayName = "CTAR-21 (Black)";
        scope = 2;
        scopeArsenal = 2;
        picture = QPATHTOF(ui\ctar21_black_ca.paa);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\trg_black_co.paa)
        };
        baseWeapon = QCLASS(CTAR21_Black);
    };
};
