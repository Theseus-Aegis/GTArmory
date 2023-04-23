#define MACRO_MMAC \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MMAC_BELT \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_gry_co.paa), \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

class milgp_v_mmac_light_rgr;
class CLASS(mmac_light_gry):milgp_v_mmac_light_rgr {
    displayName = "MMAC Light (GRY)";
    MACRO_MMAC
};

class milgp_v_mmac_assaulter_rgr;
class CLASS(mmac_assaulter_gry): milgp_v_mmac_assaulter_rgr {
    displayName = "MMAC Assaulter (GRY)";
    MACRO_MMAC
};

class milgp_v_mmac_assaulter_belt_rgr;
class CLASS(mmac_assaulter_belt_gry): milgp_v_mmac_assaulter_belt_rgr {
    displayName = "MMAC Assaulter + Belt (GRY)";
    MACRO_MMAC_BELT
};

class milgp_v_mmac_medic_rgr;
class CLASS(mmac_medic_gry):milgp_v_mmac_medic_rgr {
    displayName = "MMAC Medic (GRY)";
    MACRO_MMAC
};

class milgp_v_mmac_medic_belt_rgr;
class CLASS(mmac_medic_belt_gry):milgp_v_mmac_medic_belt_rgr {
    displayName = "MMAC Medic + Belt (GRY)";
    MACRO_MMAC_BELT
};

class milgp_v_mmac_teamleader_rgr;
class CLASS(mmac_teamleader_gry):milgp_v_mmac_teamleader_rgr {
    displayName = "MMAC TeamLeader (GRY)";
    MACRO_MMAC
};

class milgp_v_mmac_teamleader_belt_rgr;
class CLASS(mmac_teamleader_belt_gry):milgp_v_mmac_teamleader_belt_rgr {
    displayName = "MMAC TeamLeader + Belt (GRY)";
    MACRO_MMAC_BELT
};

class milgp_v_mmac_marksman_rgr;
class CLASS(mmac_marksman_gry):milgp_v_mmac_marksman_rgr {
    displayName = "MMAC Marksman (GRY)";
    MACRO_MMAC
};

class milgp_v_mmac_marksman_belt_rgr;
class CLASS(mmac_marksman_belt_gry):milgp_v_mmac_marksman_belt_rgr {
    displayName = "MMAC Marksman + Belt (GRY)";
    MACRO_MMAC_BELT
};

class milgp_v_mmac_hgunner_rgr;
class CLASS(mmac_hgunner_gry):milgp_v_mmac_hgunner_rgr {
    displayName = "MMAC HeavyGunner (GRY)";
    MACRO_MMAC
};

class milgp_v_mmac_hgunner_belt_rgr;
class CLASS(mmac_hgunner_belt_gry):milgp_v_mmac_hgunner_belt_rgr {
    displayName = "MMAC HeavyGunner + Belt (GRY)";
    MACRO_MMAC_BELT
};

class milgp_v_mmac_grenadier_rgr;
class CLASS(mmac_grenadier_gry):milgp_v_mmac_grenadier_rgr {
    displayName = "MMAC Grenadier (GRY)";
    MACRO_MMAC
};

class milgp_v_mmac_grenadier_belt_rgr;
class CLASS(mmac_grenadier_belt_gry):milgp_v_mmac_grenadier_belt_rgr {
    displayName = "MMAC Grenadier + Belt (GRY)";
    MACRO_MMAC_BELT
};
