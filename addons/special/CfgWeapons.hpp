class CfgWeapons {
    class H_PilotHelmetHeli_B;
    class milgp_v_marciras_medic_belt_khk;
    class milgp_v_marciras_medic_belt_rgr;
    class Uniform_Base;
    class UniformItem;
    class U_I_C_Soldier_Bandit_2_F;

    // Kelly - Redo with a vest.

    // JJ
    class CLASS(JJ_HeliPilot_Black): H_PilotHelmetHeli_B {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Heli Pilot Helmet Black 'JJ' Edition";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\jj_heliPilot_black_co.paa)
        };
    };

    // Joram
    class CLASS(Joram_HeliPilot_Black): H_PilotHelmetHeli_B {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Heli Pilot Helmet Black 'Joram' Edition";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\joram_heliPilot_black_co.paa)
        };
    };

    // Rory
    class CLASS(RG_marciras_hh_belt_khk): milgp_v_marciras_medic_belt_khk {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho 'RG' Edition + Belt (KHK)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_khk_co.paa",
            "milgp_vests\textures\v_battle_belt_khk_co.paa",
            QPATHTOF(data\rg_marciras_hh_belt_khk_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class CLASS(RG_marciras_hh_belt_rgr): milgp_v_marciras_medic_belt_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho 'RG' Edition + Belt (RGR)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "milgp_vests\textures\v_marciras_rgr_co.paa",
            "milgp_vests\textures\v_battle_belt_rgr_co.paa",
            QPATHTOF(data\rg_marciras_hh_belt_rgr_co.paa),
            "milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    // Mick
    class CLASS(MM_Minotaur_Uniform): U_I_C_Soldier_Bandit_2_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Minotaur Uniform 'MM' Edition";
        picture = QPATHTOF(ui\mm_minotaur_uniform.paa);
        class ItemInfo: UniformItem {
            uniformModel = "";
            uniformClass = QCLASS(MM_Minotaur_Uniform);
            containerClass = "Supply40";
            mass = 40;
        };
    };
};
