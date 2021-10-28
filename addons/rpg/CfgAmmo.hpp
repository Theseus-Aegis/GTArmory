class CfgAmmo {
    class RocketBase;

    // Vanilla Ammunition
    // PG-7VM HEAT Grenade
    class R_PG7_F: RocketBase {
        MACRO_RPG_AMMO
    };
    // RPG-42 Rocket
    class R_PG32V_F: RocketBase {
        MACRO_RPG_AMMO
    };

    // RPG-42 HE Rocket
    class R_TBG32V_F: R_PG32V_F {
        MACRO_RPG_AMMO
    };

    // MAAWS HEAT 75 Round
    class R_MRAAWS_HEAT_F: RocketBase {
        MACRO_RPG_AMMO
    };

    // MAAWS HEAT 55 Round
    class R_MRAAWS_HEAT55_F: R_MRAAWS_HEAT_F {
        MACRO_RPG_AMMO
    };

    // MAAWS HE 44 Round
    class R_MRAAWS_HE_F: R_MRAAWS_HEAT_F {
        MACRO_RPG_AMMO
    };

    // CUP Ammunition
    // OG-7V (Frag) Rocket
    class CUP_R_OG7_AT: RocketBase {
        MACRO_RPG_AMMO
        ace_frag_enabled = 1;
        ace_frag_metal = 350;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 2800;
        ace_Frag_gurney_k = 3/5;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
    };

    // PG-7V (HEAT) Rocket
    class CUP_R_PG7V_AT: RocketBase {
        MACRO_RPG_AMMO
    };

    // PG-7VL (HEAT) Rocket
    class CUP_R_PG7VL_AT: RocketBase {
        MACRO_RPG_AMMO
    };

    // PG-7VM HEAT Rocket
    class CUP_R_PG7VM_AT: RocketBase {
        MACRO_RPG_AMMO
    };

    // PG-7VR (T-HEAT) Rocket
    class CUP_R_PG7VR_AT: RocketBase {
        MACRO_RPG_AMMO
    };

    // TBG-7V (Thermobaric) Rocket
    class CUP_R_TBG7V_AT: RocketBase {
        MACRO_RPG_AMMO
    };

    // RPG-26 Rocket
    class CUP_R_PG26_AT: RocketBase {
        MACRO_RPG_AMMO
    };

    // RPG-18 Rocket
    class CUP_R_RPG18_AT: RocketBase {
        MACRO_RPG_AMMO
    };
};
