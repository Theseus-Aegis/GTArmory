class CfgVehicles {
    class B_CTRG_Soldier_2_arid_F;
    class B_GEN_Commander_F;
    class C_Uniform_Scientist_02_formal_F;
    class I_C_Soldier_Bandit_2_F;
    class Item_Base_F;

    // Jack Uniform, Available to everyone by his request.
    class CLASS(JL_Item_Uniform): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Tee, Jeans (Sventa)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_Jack_Uniform,1);
        };
    };
    class CLASS(JL_Uniform): C_Uniform_Scientist_02_formal_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(JL_Uniform);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\scientist_02_1_sventa_co.paa),
            "a3\characters_f_enoch\uniforms\data\scientist_02_2_formal_co.paa",
            "a3\characters_f_enoch\uniforms\data\scientist_01_co.paa",
            "a3\Characters_F_Enoch\Uniforms\Data\scientist_id_default.paa"
        };
    };

    // Josh V - Ground Item & Uniform
    class CLASS(JV_Item_Uniform): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Kempton, 'Vee' Edition";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_JV_Uniform,1);
        };
    };
    class CLASS(JV_Uniform): B_GEN_Commander_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(JV_Uniform);
        hiddenSelections[]= {"camo", "insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\jv_kempton_uniform_co.paa),
            ""
        };
    };

    // Mick - Ground Item & Uniform
    class CLASS(MM_Item_Minotaur_Uniform): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Minotaur Uniform 'MM' Edition";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_MM_Minotaur_Uniform,1);
        };
    };
    class CLASS(MM_Minotaur_Uniform): I_C_Soldier_Bandit_2_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(MM_Minotaur_Uniform);
        hiddenSelectionsTextures[] = {QPATHTOF(data\mm_minotaur_uniform_co.paa)};
    };

    // Mike - Ground Item & Uniform
    class CLASS(MW_Item_Stealth_Uniform): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Stealth Uniform 'CUP' Edition (Tee, Arid)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_MW_stealth_tee,1);
        };
    };
    class CLASS(MW_Stealth_Uniform): B_CTRG_Soldier_2_arid_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(MW_marciras_wd_belt_rgr);
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_arid_f_co.paa",
            QPATHTOF(data\basicbody_mw_co.paa)
        };
    };
};
