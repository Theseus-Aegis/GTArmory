class CfgWeapons {
    class BWA3_OpsCore;
    class BWA3_OpsCore_Fleck_Patch;
    class milgp_u_tshirt_g3_field_pants_rgr;
    class milgp_v_marciras_medic_belt_khk;
    class milgp_v_marciras_medic_belt_rgr;

    // Kelly
    class CLASS(KG_Opscore_Fleck_Patch): BWA3_OpsCore_Fleck_Patch {
        author = "GilleeDoo";
        scope = 2;
        displayName = "OpsCore Flecktarn KG Edition";
        hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {
            "\bwa3_headgear\data\bwa3_opscore_fleck_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,CA)",
            "\x\tacgt\addons\special\textures\bwa3_opscore_patch_uvdl_KG_co.paa"
        };
    };

    class CLASS(KG_Opscore_Patch): BWA3_OpsCore {
        author = "GilleeDoo";
        scope = 2;
        displayName = "OpsCore Black KG Edition";
        hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {
            "\bwa3_headgear\data\bwa3_opscore_schwarz_co.paa",
            "#(argb,8,8,3)color(0,0,0,0,CA)",
            "\x\tacgt\addons\special\textures\bwa3_opscore_patch_uvdl_KG_co.paa"
        };
    };

    // Rory
    class CLASS(RG_marciras_hh_belt_khk): milgp_v_marciras_medic_belt_khk {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho RG Edition + Belt (KHK)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
			"milgp_vests\textures\v_marciras_khk_co.paa",
			"milgp_vests\textures\v_battle_belt_khk_co.paa",
			"\x\tacgt\addons\special\textures\v_gear_01_khk_RG_co.paa",
			"milgp_vests\textures\v_gear_02_co.paa"
        };
    };
    
    class CLASS(RG_marciras_hh_belt_rgr): milgp_v_marciras_medic_belt_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MarCiras Head Honcho RG Edition + Belt (RGR)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
			"milgp_vests\textures\v_marciras_rgr_co.paa",
			"milgp_vests\textures\v_battle_belt_rgr_co.paa",
			"\x\tacgt\addons\special\textures\v_gear_01_rgr_RG_co.paa",
			"milgp_vests\textures\v_gear_02_co.paa"
        };
    };

    // Mick NOT WORKING.
    CLASS(MM_tshirt_G3_field_pants_rgr): milgp_u_tshirt_g3_field_pants_rgr {
        author = "GilleeDoo";
        scope = 2;
        displayName = "MM Edition Minotaur TShirt + G3 Field Pants (RGR)";
        hiddenSelections[] = {"camo", "camo1", "camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {
			"\x\tacgt\addons\special\textures\u_tshirt_rgr_MM_co.paa",
            "\milgp_uniforms\textures\u_g3_field_pants_rgr_co.paa",
			"\milgp_uniforms\textures\u_equipment_blk_co.paa"
        };
    };
};