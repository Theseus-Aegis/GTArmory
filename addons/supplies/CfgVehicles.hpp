class CfgVehicles {
    class Box_NATO_WpsLaunch_F;
    class Box_AAF_Uniforms_F;

    class tac_supplies_Launchers: Box_NATO_WpsLaunch_F {
        author = ECSTRING(main,Author);
        displayName = CSTRING(Supply_Launchers_Name);
        EDITOR_CATEGORY
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 12000;
        transportMaxWeapons = 100;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
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
            MACRO_ADDMAGAZINE(RPG7_F,12);
            MACRO_ADDMAGAZINE(MRAWS_HEAT_F,12);
            MACRO_ADDMAGAZINE(MRAWS_HE_F,12);
            MACRO_ADDMAGAZINE(RPG32_F,12);
            MACRO_ADDMAGAZINE(RPG32_HE_F,12);
            MACRO_ADDMAGAZINE(CUP_OG7_M,12);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(launch_RPG7_F,3);
            MACRO_ADDWEAPON(launch_RPG32_green_F,3);
            MACRO_ADDWEAPON(launch_MRAWS_green_rail_F,3);
            MACRO_ADDWEAPON(launch_MRAWS_green_F,3);
            MACRO_ADDWEAPON(launch_NLAW_F,3);
            MACRO_ADDWEAPON(CUP_launch_M136,3);
        };
        class TransportBackpacks {};
    };

    class tac_supplies_Engineer: Box_AAF_Uniforms_F {
        author = ECSTRING(main,Author);
        displayName = CSTRING(Supply_Engineer_Name);
        EDITOR_CATEGORY
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 3000;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;
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
        };
        class TransportItems {
            MACRO_ADDITEM(B_UavTerminal,1);
            MACRO_ADDITEM(ACE_UAVBattery,3);
        };
        class TransportBackpacks {
            MACRO_ADDBACKPACK(B_UGV_02_Demining_backpack_F,1);
        };
    };

    class tac_supplies_Medic: tac_supplies_Engineer {
        displayName = CSTRING(Supply_Medic_Name);
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
        };
        class TransportMagazines {};
        class TransportWeapons {};
    };

    class tac_supplies_Medic_NCO: tac_supplies_Medic {
        displayName = CSTRING(Supply_Medic_NCO_Name);
    };

    class tac_supplies_Recruit: tac_supplies_Engineer {
        displayName = CSTRING(Supply_Recruit_Name);
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
        displayName = CSTRING(Supply_VIP_Name);
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
        author = "Tyrone";
        displayName = CSTRING(Supply_Empty_1_1);
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
        displayName = CSTRING(Supply_Empty_1_2);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_1_2_ca.paa)
        };
    };
    class CLASS(Supply_Empty_2_1): CLASS(Supply_Empty_1_1) {
        displayName = CSTRING(Supply_Empty_2_1);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_2_1_ca.paa)
        };
    };
    class CLASS(Supply_Empty_2_2): CLASS(Supply_Empty_1_1) {
        displayName = CSTRING(Supply_Empty_2_2);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_2_2_ca.paa)
        };
    };
    class CLASS(Supply_Empty_3_1): CLASS(Supply_Empty_1_1) {
        displayName = CSTRING(Supply_Empty_3_1);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_3_1_ca.paa)
        };
    };
    class CLASS(Supply_Empty_3_2): CLASS(Supply_Empty_1_1) {
        displayName = CSTRING(Supply_Empty_3_2);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_3_2_ca.paa)
        };
    };
    class CLASS(Supply_Empty_4_1): CLASS(Supply_Empty_1_1) {
        displayName = CSTRING(Supply_Empty_4_1);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_4_1_ca.paa)
        };
    };
    class CLASS(Supply_Empty_4_2): CLASS(Supply_Empty_1_1) {
        displayName = CSTRING(Supply_Empty_4_2);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_empty_4_2_ca.paa)
        };
    };
};
