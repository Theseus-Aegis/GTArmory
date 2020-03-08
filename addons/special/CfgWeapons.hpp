class CfgWeapons {
    class BWA3_OpsCore;
    class BWA3_OpsCore_Fleck_Patch;
    class H_PilotHelmetHeli_B;
    class milgp_v_marciras_medic_belt_khk;
    class milgp_v_marciras_medic_belt_rgr;

    // Kelly
    class CLASS(KG_Opscore_Fleck_Patch): BWA3_OpsCore_Fleck_Patch {
        author = "GilleeDoo";
        scope = 2;
        displayName = "$STR_TACGT_Special_KG_Opscore_Fleck_Patch_Display";
        hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {
            "\bwa3_headgear\data\bwa3_opscore_fleck_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,CA)",
            "\x\tacgt\addons\special\data\bwa3_opscore_patch_uvdl_KG_co.paa"
        };
    };

    class CLASS(KG_Opscore_Patch): BWA3_OpsCore {
        author = "GilleeDoo";
        scope = 2;
        displayName = "$STR_TACGT_Special_KG_Opscore_Patch_Display";
        hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {
            "\bwa3_headgear\data\bwa3_opscore_schwarz_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,CA)",
            "\x\tacgt\addons\special\data\bwa3_opscore_patch_uvdl_KG_co.paa"
        };
    };

    // JJ
    class CLASS(JJ_HeliPilot_Black): H_PilotHelmetHeli_B {
        author = "GilleeDoo";
        scope = 2;
        displayName = "$STR_TACGT_Special_JJ_HeliPilot_Black_Display";
        hiddenSelectionsTextures[] = {"\x\tacgt\addons\special\data\helmet_heli_JJ_co.paa"};
    };

    // Rory
    class CLASS(RG_marciras_hh_belt_khk): milgp_v_marciras_medic_belt_khk {
        author = "GilleeDoo";
        scope = 2;
        displayName = "$STR_TACGT_Special_RG_MarCiras_HH_Belt_KHK";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
			"milgp_vests\textures\v_marciras_khk_co.paa",
			"milgp_vests\textures\v_battle_belt_khk_co.paa",
			"\x\tacgt\addons\special\data\v_gear_01_khk_RG_co.paa",
			"milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    class CLASS(RG_marciras_hh_belt_rgr): milgp_v_marciras_medic_belt_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "$STR_TACGT_Special_RG_MarCiras_HH_Belt_RGR";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
			"milgp_vests\textures\v_marciras_rgr_co.paa",
			"milgp_vests\textures\v_battle_belt_rgr_co.paa",
			"\x\tacgt\addons\special\data\v_gear_01_rgr_RG_co.paa",
			"milgp_vests\textures\v_gear_02_co.paa"
        };
    };
};
