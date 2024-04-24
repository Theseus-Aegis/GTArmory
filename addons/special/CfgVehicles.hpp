class CfgVehicles {
    class B_CTRG_Soldier_2_arid_F;
    class B_GEN_Commander_F;
    class B_Kitbag_Base;
    class C_E_LooterJacket_01_F;
    class C_Uniform_Scientist_02_formal_F;
    class I_C_Soldier_Bandit_2_F;
    class Item_Base_F;

    // Jay Uniform
    class CLASS(Custom_Fifright_Uniform_Item): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Kryptek Obskura Jacket, PMC Casual";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_Custom_Fifright_Uniform,1);
        };
    };
    class CLASS(Custom_Fifright_Uniform_V): C_E_LooterJacket_01_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(Custom_Fifright_Uniform);
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\custom_fifright_uniform_co.paa),
            "a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"
        };
    };

    // Jack Uniform, Available to everyone by his request.
    class CLASS(Custom_Laird_Uniform_Item): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Tee, Jeans (Sventa)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_Custom_Laird_Uniform,1);
        };
    };
    class CLASS(Custom_Laird_Uniform_V): C_Uniform_Scientist_02_formal_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(Custom_Laird_Uniform);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\custom_laird_uniform_co.paa),
            "a3\characters_f_enoch\uniforms\data\scientist_02_2_formal_co.paa",
            "a3\characters_f_enoch\uniforms\data\scientist_01_co.paa",
            "a3\Characters_F_Enoch\Uniforms\Data\scientist_id_default.paa"
        };
    };

    // Mick - Ground Item & Uniform
    class CLASS(Custom_Mathews_Uniform_Item): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Minotaur Uniform 'MM' Edition";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_Custom_Mathews_Uniform,1);
        };
    };
    class CLASS(Custom_Mathews_Uniform_V): I_C_Soldier_Bandit_2_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(Custom_Mathews_Uniform);
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_mathews_uniform_co.paa)};
    };

    // Ethan Backpack
    class CLASS(Custom_McQuade_Backpack): B_Kitbag_Base {
        scope = 2;
        author = "GilleeDoo";
        displayName = "Kitbag 'EM' Edition (Stars and Stripes)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\custom_mcquade_backpack_co.paa)};
    };

    // Josh V - Ground Item & Uniform
    class CLASS(Custom_Vee_Uniform_Item): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Kempton, 'Vee' Edition";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_Custom_Vee_Uniform,1);
        };
    };
    class CLASS(Custom_Vee_Uniform_V): B_GEN_Commander_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(Custom_Vee_Uniform);
        hiddenSelections[]= {"camo", "insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\custom_vee_uniform_co.paa),
            ""
        };
    };

    // Mike - Ground Item & Uniform
    class CLASS(Custom_Woods_Uniform_Item): Item_Base_F {
        author = "GilleeDoo";
        displayName = "Stealth Uniform 'CUP' Edition (Tee, Arid)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(tacgt_Custom_Woods_Uniform,1);
        };
    };
    class CLASS(Custom_Woods_Uniform_V): B_CTRG_Soldier_2_arid_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = QCLASS(Custom_Woods_Uniform);
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_exp\blufor\data\u_b_ctrg_soldier_arid_f_co.paa",
            QPATHTOF(data\custom_woods_uniform_co.paa)
        };
    };
};
