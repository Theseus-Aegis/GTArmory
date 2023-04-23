#define MACRO_BATTLEBELT \
    author = "GilleeDoo"; \
    scope = 2; \
    hiddenSelections[] = {"camo1", "camo2", "camo3"}; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\v_battle_belt_gry_co.paa), \
        QPATHTOF(data\v_gear_01_gry_co.paa), \
        QPATHTOF(data\v_gear_02_co.paa) \
    };

class milgp_v_battle_belt_assaulter_RGR;
class CLASS(battle_belt_assaulter_gry):milgp_v_battle_belt_assaulter_RGR {
    displayName = "Battle Belt Assaulter (GRY)";
    MACRO_BATTLEBELT
};

class milgp_v_battle_belt_hgunner_RGR;
class CLASS(battle_belt_hgunner_gry):milgp_v_battle_belt_hgunner_RGR {
    displayName = "Battle Belt Assaulter (GRY)";
    MACRO_BATTLEBELT
};
