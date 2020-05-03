class CfgVehicles {
    class Item_Base_F;
    class I_C_Soldier_Bandit_2_F;

    // Ground Items
    class CLASS(MM_Item_Minotaur_Uniform): Item_Base_F {
        author = "GilleeDoo";
        displayName = CSTRING(MM_minotaur_uniform);
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_MM_item_minotaur_uniform,1);
        };
    };

    // Uniforms
    class CLASS(MM_Minotaur_Uniform): I_C_Soldier_Bandit_2_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(MM_Minotaur_Uniform);
        hiddenSelectionsTextures[] = {QPATHTOF(data\mm_minotaur_uniform_co.paa)};
    };
};
