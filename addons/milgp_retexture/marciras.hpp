// Grey
#define MACRO_MARCIRAS_GRY \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MARCIRAS_BELT_GRY \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_gry_co.paa), \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Black
#define MACRO_MARCIRAS_BLK \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

#define MACRO_MARCIRAS_BELT_BLK \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_marciras_blk_co.paa), \
        QPATHTOF(data\v_battle_belt_blk_co.paa), \
        QPATHTOF(data\v_gear_01_blk_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

// Light Grey
class milgp_v_marciras_light_rgr;
class CLASS(marciras_light_gry): milgp_v_marciras_light_rgr {
    displayName = "MarCiras Light (GRY)";
    author = "GilleeDoo";
    scope = 2;
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\v_marciras_gry_co.paa),
        QPATHTOF(data\v_gear_01_gry_co.paa)
    };
};

// Light Black
class CLASS(marciras_light_blk): milgp_v_marciras_light_rgr {
    displayName = "MarCiras Light (BLK)";
    author = "GilleeDoo";
    scope = 2;
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\v_marciras_blk_co.paa),
        QPATHTOF(data\v_gear_01_blk_co.paa)
    };
};

// Assaulter Grey
class milgp_v_marciras_assaulter_rgr;
class CLASS(marciras_assaulter_gry): milgp_v_marciras_assaulter_rgr {
    displayname = "MarCiras Assaulter (GRY)";
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_assaulter_belt_rgr;
class CLASS(marciras_assaulter_belt_gry): milgp_v_marciras_assaulter_belt_rgr {
    displayname = "MarCiras Assaulter + Belt (GRY)";
    MACRO_MARCIRAS_BELT_GRY
};

// Assaulter Black
class CLASS(marciras_assaulter_blk): milgp_v_marciras_assaulter_rgr {
    displayname = "MarCiras Assaulter (BLK)";
    MACRO_MARCIRAS_BLK
};

class CLASS(marciras_assaulter_belt_blk): milgp_v_marciras_assaulter_belt_rgr {
    displayname = "MarCiras Assaulter + Belt (BLK)";
    MACRO_MARCIRAS_BELT_BLK
};

// Grenadier Grey
class milgp_v_marciras_grenadier_rgr;
class CLASS(marciras_grenadier_gry): milgp_v_marciras_grenadier_rgr {
    displayname = "MarCiras Grenadier (GRY)";
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_grenadier_belt_rgr;
class CLASS(marciras_grenadier_belt_gry): milgp_v_marciras_grenadier_belt_rgr {
    displayname = "MarCiras Grenadier + Belt (GRY)";
    MACRO_MARCIRAS_BELT_GRY
};

// Grenadier Black
class CLASS(marciras_grenadier_blk): milgp_v_marciras_grenadier_rgr {
    displayname = "MarCiras Grenadier (BLK)";
    MACRO_MARCIRAS_BLK
};

class CLASS(marciras_grenadier_belt_blk): milgp_v_marciras_grenadier_belt_rgr {
    displayname = "MarCiras Grenadier + Belt (BLK)";
    MACRO_MARCIRAS_BELT_BLK
};

// HeavyGunner Grey
class milgp_v_marciras_hgunner_rgr;
class CLASS(marciras_hgunner_gry): milgp_v_marciras_hgunner_rgr {
    displayname = "MarCiras HeavyGunner (GRY)";
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_hgunner_belt_rgr;
class CLASS(marciras_hgunner_belt_gry): milgp_v_marciras_hgunner_belt_rgr {
    displayname = "MarCiras HeavyGunner + Belt (GRY)";
    MACRO_MARCIRAS_BELT_GRY
};

// HeavyGuner Black
class CLASS(marciras_hgunner_blk): milgp_v_marciras_hgunner_rgr {
    displayname = "MarCiras HeavyGunner (BLK)";
    MACRO_MARCIRAS_BLK
};

class CLASS(marciras_hgunner_belt_gry): milgp_v_marciras_hgunner_belt_rgr {
    displayname = "MarCiras HeavyGunner + Belt (BLK)";
    MACRO_MARCIRAS_BELT_BLK
};

// Marksman Grey
class milgp_v_marciras_marksman_rgr;
class CLASS(marciras_marksman_gry): milgp_v_marciras_marksman_rgr {
    displayname = "MarCiras Marksman (GRY)";
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_marksman_belt_rgr;
class CLASS(marciras_marksman_belt_gry): milgp_v_marciras_marksman_belt_rgr {
    displayname = "MarCiras Marksman + Belt (GRY)";
    MACRO_MARCIRAS_BELT_GRY
};

// Marksman Black
class CLASS(marciras_marksman_blk): milgp_v_marciras_marksman_rgr {
    displayname = "MarCiras Marksman (BLK)";
    MACRO_MARCIRAS_BLK
};

class CLASS(marciras_marksman_belt_blk): milgp_v_marciras_marksman_belt_rgr {
    displayname = "MarCiras Marksman + Belt (BLK)";
    MACRO_MARCIRAS_BELT_BLK
};

// Medic Grey
class milgp_v_marciras_medic_rgr;
class CLASS(marciras_medic_gry): milgp_v_marciras_medic_rgr {
    displayname = "MarCiras Medic (GRY)";
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_medic_belt_rgr;
class CLASS(marciras_medic_belt_gry): milgp_v_marciras_medic_belt_rgr {
    displayname = "MarCiras Medic + Belt (GRY)";
    MACRO_MARCIRAS_BELT_GRY
};

// Medic Black
class CLASS(marciras_medic_blk): milgp_v_marciras_medic_rgr {
    displayname = "MarCiras Medic (BLK)";
    MACRO_MARCIRAS_BLK
};

class milgp_v_marciras_medic_belt_rgr;
class CLASS(marciras_medic_belt_blk): milgp_v_marciras_medic_belt_rgr {
    displayname = "MarCiras Medic + Belt (BLK)";
    MACRO_MARCIRAS_BELT_BLK
};

// TeamLeader Grey
class milgp_v_marciras_teamleader_RGR;
class CLASS(marciras_teamleader_gry): milgp_v_marciras_teamleader_RGR {
    displayname = "MarCiras TeamLeader (GRY)";
    MACRO_MARCIRAS_GRY
};

class milgp_v_marciras_teamleader_belt_RGR;
class CLASS(marciras_teamleader_belt_gry): milgp_v_marciras_teamleader_belt_RGR {
    displayname = "MarCiras TeamLeader + Belt (GRY)";
    MACRO_MARCIRAS_BELT_GRY
};

// TeamLeader Black
class CLASS(marciras_teamleader_blk): milgp_v_marciras_teamleader_RGR {
    displayname = "MarCiras TeamLeader (BLK)";
    MACRO_MARCIRAS_BLK
};

class CLASS(marciras_teamleader_belt_blk): milgp_v_marciras_teamleader_belt_RGR {
    displayname = "MarCiras TeamLeader + Belt (BLK)";
    MACRO_MARCIRAS_BELT_BLK
};







