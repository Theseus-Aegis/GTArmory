class milgp_v_mmac_assaulter_rgr;
class CLASS(mmac_assaulter_gry): milgp_v_mmac_assaulter_rgr {
    author = "GilleeDoo";
    scope = 2;
    displayName = "MMAC Assaulter (GRY)";
    // picture = QPATHTOF(ui\?.paa); // TODO
    hiddenSelections[] = {"camo", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\v_mmac_gry_co.paa),
        QPATHTOF(data\v_gear_01_gry_co.paa),
        "milgp_vests\textures\v_gear_02_co.paa"
    };
};

class milgp_v_mmac_assaulter_belt_rgr;
class CLASS(mmac_assaulter_belt_gry): milgp_v_mmac_assaulter_belt_rgr {
    author = "GilleeDoo";
    scope = 2;
    displayName = "MMAC Assaulter + Belt (GRY)";
    // picture = QPATHTOF(ui\?.paa); // TODO
    hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\v_mmac_gry_co.paa),
        QPATHTOF(data\v_battle_belt_gry_co.paa),
        QPATHTOF(data\v_gear_01_gry_co.paa),
        "milgp_vests\textures\v_gear_02_co.paa"
    };
};
