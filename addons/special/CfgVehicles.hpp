class CfgVehicles {
    class Item_Base_F;
    class I_C_Soldier_Bandit_2_F;
    class B_CTRG_Soldier_2_arid_F;

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
