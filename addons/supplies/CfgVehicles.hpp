class CfgVehicles {
    class Box_NATO_WpsLaunch_F;
    class Box_AAF_Uniforms_F;

    class tac_supplies_Launchers: Box_NATO_WpsLaunch_F {
        author = ECSTRING(main,Author);
        displayName = "[TAC] Launcher Supplies";
        EDITOR_CATEGORY
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 12000;
        transportMaxWeapons = 100;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        ace_cargo_noRename = 1;  // Blocks renaming object
        editorPreview = QPATHTOF(ui\supplies_launchers.jpg);
        hiddenSelections[] = {
            "Camo_Signs",
            "Camo"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\launchers_sign_co.paa),
            QPATHTOF(data\launchers_texture_co.paa)
        };

        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_OG7_M,12);
            MACRO_ADDMAGAZINE(CUP_PG7V_M,12);
            MACRO_ADDMAGAZINE(CUP_PG7VM_M,12);
            MACRO_ADDMAGAZINE(CUP_PG7VR_M,12);
            MACRO_ADDMAGAZINE(MRAWS_HEAT_F,12);
            MACRO_ADDMAGAZINE(MRAWS_HE_F,12);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(CUP_launch_RPG7V_PGO7V3,3);
            MACRO_ADDWEAPON(launch_MRAWS_green_rail_F,3);
            MACRO_ADDWEAPON(launch_MRAWS_green_F,3);
            MACRO_ADDWEAPON(launch_NLAW_F,3);
            MACRO_ADDWEAPON(CUP_launch_M136,3);
        };
        class TransportBackpacks {};
    };

    class tac_supplies_Engineer: Box_AAF_Uniforms_F {
        author = ECSTRING(main,Author);
        displayName = "[TAC] Engineer Supplies";
        EDITOR_CATEGORY
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 3000;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
        ace_cargo_noRename = 1;  // Blocks renaming object
        editorPreview = QPATHTOF(ui\supplies_engineer.jpg);
        hiddenSelections[] = {
            "camo",
            "camo_signs"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_engineer_ca.paa)
        };

        class TransportMagazines {
            MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,6);
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,6);
            MACRO_ADDMAGAZINE(tac_breaching_BreachingCharge_Mag,12);
        };
        class TransportItems {
            MACRO_ADDITEM(B_UavTerminal,1);
            MACRO_ADDITEM(ACE_UAVBattery,3);
            MACRO_ADDITEM(Toolkit,10);
        };
        class TransportBackpacks {
            MACRO_ADDBACKPACK(CLASS(Wall_E_Backpack),1);
        };
    };

    class tac_supplies_Medic: tac_supplies_Engineer {
        displayName = "[TAC] Medic Supplies";
        EDITOR_CATEGORY
        editorPreview = QPATHTOF(ui\supplies_medic.jpg);
        hiddenSelections[] = {
            "camo",
            "camo_signs"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_medical_ca.paa)
        };

        class TransportBackpacks {};
        class TransportItems {
            MACRO_ADDITEM(ACE_salineIV_500,20);
            MACRO_ADDITEM(ACE_salineIV_250,20);
            MACRO_ADDITEM(ACE_surgicalKit,1);
        };
        class TransportMagazines {};
        class TransportWeapons {};
    };

    class tac_supplies_Recruit: tac_supplies_Engineer {
        displayName = "[TAC] Recruit Supplies";
        EDITOR_CATEGORY
        editorPreview = QPATHTOF(ui\supplies_Recruit.jpg);
        hiddenSelections[] = {
            "camo",
            "camo_signs"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_recruit_ca.paa)
        };

        class TransportMagazines {};
        class TransportItems {
            MACRO_ADDITEM(muzzle_snds_m,5);
            MACRO_ADDITEM(cup_muzzle_pbs4,5);
            MACRO_ADDITEM(CUP_NVG_PVS14,5);
        };
        class TransportBackpacks {};
    };

    class tac_supplies_VIP: tac_supplies_Recruit {
        displayName = "[TAC] VIP Protective Gear";
        EDITOR_CATEGORY
        editorPreview = QPATHTOF(ui\supplies_VIP.jpg);
        hiddenSelections[] = {
            "camo",
            "camo_signs"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_vip_ca.paa)
        };

        class TransportMagazines {};
        class TransportItems {
            MACRO_ADDITEM(H_PASGT_basic_black_F,5);
            MACRO_ADDITEM(tacs_Vest_Modular_Black,5);
        };
        class TransportBackpacks {};
    };

    class CLASS(Supply_Empty_1_1): tac_supplies_Engineer {
        author = "Mike";
        displayName = "[TAC] Supply Box (1-1)";
        EDITOR_CATEGORY
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 12000;
        transportMaxWeapons = 100;
        editorPreview = QPATHTOF(ui\supplies_Empty.jpg);
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};
        ace_dragging_dragDirection = 0;
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1, 0.75};
        ace_dragging_carryDirection = 90;
        ace_cargo_noRename = 0;  // Allows renaming object
        hiddenSelections[] = {
            "camo",
            "camo_signs"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_1_1_ca.paa)
        };

        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
    };
    class CLASS(Supply_Empty_1_2): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Supply Box (1-2)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_1_2_ca.paa)
        };
    };
    class CLASS(Supply_Empty_2_1): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Supply Box (2-1)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_2_1_ca.paa)
        };
    };
    class CLASS(Supply_Empty_2_2): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Supply Box (2-2)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_2_2_ca.paa)
        };
    };
    class CLASS(Supply_Empty_3_1): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Supply Box (3-1)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_3_1_ca.paa)
        };
    };
    class CLASS(Supply_Empty_3_2): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Supply Box (3-2)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_3_2_ca.paa)
        };
    };
    class CLASS(Supply_Empty_4_1): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Supply Box (4-1)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_4_1_ca.paa)
        };
    };
    class CLASS(Supply_Empty_4_2): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Supply Box (4-2)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_4_2_ca.paa)
        };
    };

    class Land_CanisterFuel_F;
    class CLASS(CanisterFuel_Theseus): Land_CanisterFuel_F {
        displayName = "[TAC] Fuel Canister";
        EDITOR_CATEGORY
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOF(ui\supplies_FuelCanister.jpg);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\canisterfuel_theseus.paa)};
    };
};
