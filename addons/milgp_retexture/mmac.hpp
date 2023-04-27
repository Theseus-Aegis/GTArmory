// Grey
#define MACRO_MMAC_GRY \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MMAC_BELT_GRY \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_gry_co.paa), \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Black
#define MACRO_MMAC_BLK \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MMAC_BELT_BLK \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_mmac_blk_co.paa), \
        QPATHTOF(data\v_battle_belt_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Grey
class milgp_v_mmac_light_rgr;
class CLASS(mmac_light_gry):milgp_v_mmac_light_rgr {
    displayName = "MMAC Light (GRY)";
    MACRO_MMAC_GRY
};

// Black
class milgp_v_mmac_light_rgr;
class CLASS(mmac_light_blk):milgp_v_mmac_light_rgr {
    displayName = "MMAC Light (BLK)";
    MACRO_MMAC_BLK
};

// Grey
class milgp_v_mmac_assaulter_rgr;
class CLASS(mmac_assaulter_gry): milgp_v_mmac_assaulter_rgr {
    displayName = "MMAC Assaulter (GRY)";
    MACRO_MMAC_GRY
};

class milgp_v_mmac_assaulter_belt_rgr;
class CLASS(mmac_assaulter_belt_gry): milgp_v_mmac_assaulter_belt_rgr {
    displayName = "MMAC Assaulter + Belt (GRY)";
    MACRO_MMAC_BELT_GRY
};

// Black
class milgp_v_mmac_assaulter_rgr;
class CLASS(mmac_assaulter_blk): milgp_v_mmac_assaulter_rgr {
    displayName = "MMAC Assaulter (BLK)";
    MACRO_MMAC_BLK
};

class milgp_v_mmac_assaulter_belt_rgr;
class CLASS(mmac_assaulter_belt_blk): milgp_v_mmac_assaulter_belt_rgr {
    displayName = "MMAC Assaulter + Belt (BLK)";
    MACRO_MMAC_BELT_BLK
};

// Grey
class milgp_v_mmac_medic_rgr;
class CLASS(mmac_medic_gry):milgp_v_mmac_medic_rgr {
    displayName = "MMAC Medic (GRY)";
    MACRO_MMAC_GRY
};

class milgp_v_mmac_medic_belt_rgr;
class CLASS(mmac_medic_belt_gry):milgp_v_mmac_medic_belt_rgr {
    displayName = "MMAC Medic + Belt (GRY)";
    MACRO_MMAC_BELT_GRY
};

// Black
class milgp_v_mmac_medic_rgr;
class CLASS(mmac_medic_blk):milgp_v_mmac_medic_rgr {
    displayName = "MMAC Medic (BLK)";
    MACRO_MMAC_BLK
};

class milgp_v_mmac_medic_belt_rgr;
class CLASS(mmac_medic_belt_blk):milgp_v_mmac_medic_belt_rgr {
    displayName = "MMAC Medic + Belt (BLK)";
    MACRO_MMAC_BELT_BLK
};

// Grey
class milgp_v_mmac_teamleader_rgr;
class CLASS(mmac_teamleader_gry):milgp_v_mmac_teamleader_rgr {
    displayName = "MMAC TeamLeader (GRY)";
    MACRO_MMAC_GRY
};

class milgp_v_mmac_teamleader_belt_rgr;
class CLASS(mmac_teamleader_belt_gry):milgp_v_mmac_teamleader_belt_rgr {
    displayName = "MMAC TeamLeader + Belt (GRY)";
    MACRO_MMAC_BELT_GRY
};

// Black
class milgp_v_mmac_teamleader_rgr;
class CLASS(mmac_teamleader_blk):milgp_v_mmac_teamleader_rgr {
    displayName = "MMAC TeamLeader (BLK)";
    MACRO_MMAC_BLK
};

class milgp_v_mmac_teamleader_belt_rgr;
class CLASS(mmac_teamleader_belt_blk):milgp_v_mmac_teamleader_belt_rgr {
    displayName = "MMAC TeamLeader + Belt (BLK)";
    MACRO_MMAC_BELT_BLK
};

// Grey
class milgp_v_mmac_marksman_rgr;
class CLASS(mmac_marksman_gry):milgp_v_mmac_marksman_rgr {
    displayName = "MMAC Marksman (GRY)";
    MACRO_MMAC_GRY
};

class milgp_v_mmac_marksman_belt_rgr;
class CLASS(mmac_marksman_belt_gry):milgp_v_mmac_marksman_belt_rgr {
    displayName = "MMAC Marksman + Belt (GRY)";
    MACRO_MMAC_BELT_GRY
};

// Black
class milgp_v_mmac_marksman_rgr;
class CLASS(mmac_marksman_blk):milgp_v_mmac_marksman_rgr {
    displayName = "MMAC Marksman (BLK)";
    MACRO_MMAC_BLK
};

class milgp_v_mmac_marksman_belt_rgr;
class CLASS(mmac_marksman_belt_blk):milgp_v_mmac_marksman_belt_rgr {
    displayName = "MMAC Marksman + Belt (BLK)";
    MACRO_MMAC_BELT_BLK
};

// Grey
class milgp_v_mmac_hgunner_rgr;
class CLASS(mmac_hgunner_gry):milgp_v_mmac_hgunner_rgr {
    displayName = "MMAC HeavyGunner (GRY)";
    MACRO_MMAC_GRY
};

class milgp_v_mmac_hgunner_belt_rgr;
class CLASS(mmac_hgunner_belt_gry):milgp_v_mmac_hgunner_belt_rgr {
    displayName = "MMAC HeavyGunner + Belt (GRY)";
    MACRO_MMAC_BELT_GRY
};

// Black
class milgp_v_mmac_hgunner_rgr;
class CLASS(mmac_hgunner_blk):milgp_v_mmac_hgunner_rgr {
    displayName = "MMAC HeavyGunner (BLK)";
    MACRO_MMAC_BLK
};

class milgp_v_mmac_hgunner_belt_rgr;
class CLASS(mmac_hgunner_belt_blk):milgp_v_mmac_hgunner_belt_rgr {
    displayName = "MMAC HeavyGunner + Belt (BLK)";
    MACRO_MMAC_BELT_BLK
};

// Grey
class milgp_v_mmac_grenadier_rgr;
class CLASS(mmac_grenadier_gry):milgp_v_mmac_grenadier_rgr {
    displayName = "MMAC Grenadier (GRY)";
    MACRO_MMAC_GRY
};

class milgp_v_mmac_grenadier_belt_rgr;
class CLASS(mmac_grenadier_belt_gry):milgp_v_mmac_grenadier_belt_rgr {
    displayName = "MMAC Grenadier + Belt (GRY)";
    MACRO_MMAC_BELT_GRY
};

// Black
class milgp_v_mmac_grenadier_rgr;
class CLASS(mmac_grenadier_blk):milgp_v_mmac_grenadier_rgr {
    displayName = "MMAC Grenadier (BLK)";
    MACRO_MMAC_BLK
};

class milgp_v_mmac_grenadier_belt_rgr;
class CLASS(mmac_grenadier_belt_blk):milgp_v_mmac_grenadier_belt_rgr {
    displayName = "MMAC Grenadier + Belt (BLK)";
    MACRO_MMAC_BELT_BLK
};
