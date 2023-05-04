// Grey
#define MACRO_JPC_GRY \
    picture = QPATHTOF(ui\icon_v_jpc_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_JPC_BELT_GRY \
    picture = QPATHTOF(ui\icon_v_jpc_gry_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo1","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_gry_co.paa), \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Black
#define MACRO_JPC_BLK \
    picture = QPATHTOF(ui\icon_v_jpc_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_JPC_BELT_BLK \
    picture = QPATHTOF(ui\icon_v_jpc_blk_ca.paa); \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo","camo1","camo2","camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_jpc_blk_co.paa), \
        QPATHTOF(data\v_battle_belt_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Light Grey
class milgp_v_jpc_Light_rgr;
class CLASS(jpc_light_gry): milgp_v_jpc_Light_rgr {
    displayName = "JPC Light (GRY)";
    MACRO_JPC_GRY
};

// Light Black
class CLASS(jpc_light_blk): milgp_v_jpc_Light_rgr {
    displayName = "JPC Light (BLK)";
    MACRO_JPC_BLK
};

// Assaulter Grey
class milgp_v_jpc_assaulter_rgr;
class CLASS(jpc_assaulter_gry): milgp_v_jpc_assaulter_rgr {
    displayname = "JPC Assaulter (GRY)";
    MACRO_JPC_GRY
};

class milgp_v_jpc_assaulter_belt_rgr;
class CLASS(jpc_assaulter_belt_gry): milgp_v_jpc_assaulter_belt_rgr {
    displayname = "JPC Assaulter + Belt (GRY)";
    MACRO_JPC_BELT_GRY
};

// Assaulter Black
class CLASS(jpc_assaulter_blk): milgp_v_jpc_assaulter_rgr {
    displayname = "JPC Assaulter (BLK)";
    MACRO_JPC_BLK
};

class CLASS(jpc_assaulter_belt_blk): milgp_v_jpc_assaulter_belt_rgr {
    displayname = "JPC Assaulter + Belt (BLK)";
    MACRO_JPC_BELT_BLK
};

// Grenadier Grey
class milgp_v_jpc_Grenadier_rgr;
class CLASS(jpc_grenadier_gry): milgp_v_jpc_Grenadier_rgr {
    displayname = "JPC Grenadier (GRY)";
    MACRO_JPC_GRY
};

class milgp_v_jpc_Grenadier_belt_rgr;
class CLASS(jpc_grenadier_belt_gry): milgp_v_jpc_Grenadier_belt_rgr {
    displayname = "JPC Grenadier + Belt (GRY)";
    MACRO_JPC_BELT_GRY
};

// Grenadier Black
class CLASS(jpc_grenadier_blk): milgp_v_jpc_Grenadier_rgr {
    displayname = "JPC Grenadier (BLK)";
    MACRO_JPC_BLK
};

class CLASS(jpc_grenadier_belt_blk): milgp_v_jpc_Grenadier_belt_rgr {
    displayname = "JPC Grenadier + Belt (BLK)";
    MACRO_JPC_BELT_BLK
};

// HeavyGunner Grey
class milgp_v_jpc_hgunner_rgr;
class CLASS(jpc_hgunner_gry): milgp_v_jpc_hgunner_rgr {
    displayname = "JPC HeavyGunner (GRY)";
    MACRO_JPC_GRY
};

class milgp_v_jpc_hgunner_belt_rgr;
class CLASS(jpc_hgunner_belt_gry): milgp_v_jpc_hgunner_belt_rgr {
    displayname = "JPC HeavyGunner + Belt (GRY)";
    MACRO_JPC_BELT_GRY
};

// HeavyGunner Black
class CLASS(jpc_hgunner_blk): milgp_v_jpc_hgunner_rgr {
    displayname = "JPC HeavyGunner (BLK)";
    MACRO_JPC_BLK
};

class CLASS(jpc_hgunner_belt_blk): milgp_v_jpc_hgunner_belt_rgr {
    displayname = "JPC HeavyGunner + Belt (BLK)";
    MACRO_JPC_BELT_BLK
};

// Marksman Grey
class milgp_v_jpc_Marksman_rgr;
class CLASS(jpc_marksman_gry): milgp_v_jpc_Marksman_rgr {
    displayname = "JPC Marksman (GRY)";
    MACRO_JPC_GRY
};

class milgp_v_jpc_marksman_belt_rgr;
class CLASS(jpc_marksman_belt_gry): milgp_v_jpc_marksman_belt_rgr {
    displayname = "JPC Marksman + Belt (GRY)";
    MACRO_JPC_BELT_GRY
};

// Marksman Black
class CLASS(jpc_marksman_blk): milgp_v_jpc_Marksman_rgr {
    displayname = "JPC Marksman (BLK)";
    MACRO_JPC_BLK
};

class CLASS(jpc_marksman_belt_blk): milgp_v_jpc_marksman_belt_rgr {
    displayname = "JPC Marksman + Belt (BLK)";
    MACRO_JPC_BELT_BLK
};

// Medic Grey
class milgp_v_jpc_Medic_rgr;
class CLASS(jpc_medic_gry): milgp_v_jpc_Medic_rgr {
    displayname = "JPC Medic (GRY)";
    MACRO_JPC_GRY
};

class milgp_v_jpc_medic_belt_rgr;
class CLASS(jpc_medic_belt_gry): milgp_v_jpc_medic_belt_rgr {
    displayname = "JPC Medic + Belt (GRY)";
    MACRO_JPC_BELT_GRY
};

// Medic Black
class CLASS(jpc_medic_blk): milgp_v_jpc_Medic_rgr {
    displayname = "JPC Medic (BLK)";
    MACRO_JPC_BLK
};

class CLASS(jpc_medic_belt_blk): milgp_v_jpc_medic_belt_rgr {
    displayname = "JPC Medic + Belt (BLK)";
    MACRO_JPC_BELT_BLK
};

// TeamLeader Grey
class milgp_v_jpc_TeamLeader_rgr;
class CLASS(jpc_teamleader_gry): milgp_v_jpc_TeamLeader_rgr {
    displayname = "JPC TeamLeader (GRY)";
    MACRO_JPC_GRY
};

class milgp_v_jpc_teamleader_belt_rgr;
class CLASS(jpc_teamleader_belt_gry): milgp_v_jpc_teamleader_belt_rgr {
    displayname = "JPC TeamLeader + Belt (GRY)";
    MACRO_JPC_BELT_GRY
};

// TeamLeader Black
class CLASS(jpc_teamleader_blk): milgp_v_jpc_TeamLeader_rgr {
    displayname = "JPC TeamLeader (BLK)";
    MACRO_JPC_BLK
};

class CLASS(jpc_teamleader_belt_blk): milgp_v_jpc_teamleader_belt_rgr {
    displayname = "JPC TeamLeader + Belt (BLK)";
    MACRO_JPC_BELT_BLK
};
