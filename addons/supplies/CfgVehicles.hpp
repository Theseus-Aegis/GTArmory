class CfgVehicles {
    class Box_NATO_WpsLaunch_F;
    class Box_AAF_Uniforms_F;

    class tac_supplies_Launchers: Box_NATO_WpsLaunch_F {
        author = ECSTRING(main,Author);
        displayName = "[TAC] Launcher Supplies";
        EDITOR_CATEGORY;
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
            MACRO_ADDWEAPON(tacs_MRAWS_Black_Rail_F,3);
            MACRO_ADDWEAPON(launch_MRAWS_green_F,3);
            MACRO_ADDWEAPON(tacs_MRAWS_Black_F,3);
            MACRO_ADDWEAPON(launch_NLAW_F,3);
            MACRO_ADDWEAPON(CUP_launch_M136,3);
            MACRO_ADDWEAPON(tacgt_rpag_2,2);
            MACRO_ADDWEAPON(CUP_launch_M72A6,4);
        };
        class TransportBackpacks {};
    };

    class tac_supplies_Engineer: Box_AAF_Uniforms_F {
        author = ECSTRING(main,Author);
        displayName = "[TAC] Engineer Supplies";
        EDITOR_CATEGORY;
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
            MACRO_ADDITEM(iedd_item_notebook,4);
        };
        class TransportBackpacks {
            MACRO_ADDBACKPACK(CLASS(Wall_E_Backpack),1);
        };
    };

    class tac_supplies_Medic: tac_supplies_Engineer {
        displayName = "[TAC] Medic Supplies";
        EDITOR_CATEGORY;
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
        EDITOR_CATEGORY;
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
        EDITOR_CATEGORY;
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
        EDITOR_CATEGORY;
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

    class CLASS(Supply_Keres): CLASS(Supply_Empty_1_1) {
        displayName = "[TAC] Keres";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_keres_ca.paa)
        };
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_HandFlare_White,10);
            MACRO_ADDMAGAZINE(CUP_30Rnd_9x19AP_Vityaz,20);
            MACRO_ADDMAGAZINE(SmokeShellBlue,24);
            MACRO_ADDMAGAZINE(tacgt_30Rnd_9x19_EPR,20);
            MACRO_ADDMAGAZINE(tacgt_30Rnd_9x19_EPR_MP5,30);
            MACRO_ADDMAGAZINE(tacgt_33Rnd_9x19_Ball_Mag_RF,12);
            MACRO_ADDMAGAZINE(tacgt_65Rnd_9x19_Ball_Mag_RF,2);
            MACRO_ADDMAGAZINE(tacgt_8Rnd_AA40_000,24);
            MACRO_ADDMAGAZINE(tacgt_8Rnd_AA40_AP20,16);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_bodyBag_blue,20);
            MACRO_ADDITEM(ACE_CableTie,20);
            MACRO_ADDITEM(ace_earplugs,10);
            MACRO_ADDITEM(ACE_fieldDressing,100);
            MACRO_ADDITEM(ACE_painkillers,10);
            MACRO_ADDITEM(ACE_splint,10);
            MACRO_ADDITEM(ACE_SpraypaintBlue,10);
            MACRO_ADDITEM(ACE_tourniquet,20);
            MACRO_ADDITEM(ACRE_PRC152,10);
            MACRO_ADDITEM(CUP_G_ESS_RGR_Facewrap_Skull,2);
            MACRO_ADDITEM(CUP_H_PMC_Cap_Back_EP_Grey,2);
            MACRO_ADDITEM(CUP_H_PMC_Cap_Grey,2);
            MACRO_ADDITEM(CUP_muzzle_fh_MP5,4);
            MACRO_ADDITEM(CUP_optic_1P87_RIS,2);
            MACRO_ADDITEM(CUP_optic_MEPRO,2);
            MACRO_ADDITEM(CUP_PMC_Facewrap_Skull,2);
            MACRO_ADDITEM(CUP_U_CRYE_BLK_Roll,2);
            MACRO_ADDITEM(G_Balaclava_Skull1,2);
            MACRO_ADDITEM(G_Bandanna_aviator,2);
            MACRO_ADDITEM(G_Bandanna_Skull1,2);
            MACRO_ADDITEM(G_Bandanna_Skull2,2);
            MACRO_ADDITEM(H_Beret_blk,2);
            MACRO_ADDITEM(ItemCompass,10);
            MACRO_ADDITEM(ItemMap,10);
            MACRO_ADDITEM(optic_Aco_smg,2);
            MACRO_ADDITEM(optic_Holosight_smg_blk_F,2);
            MACRO_ADDITEM(optic_MRD_black,2);
            MACRO_ADDITEM(optic_r1_high_lxWS,2);
            MACRO_ADDITEM(tacgt_Light_TLR1,2);
            MACRO_ADDITEM(tacgt_Surefire_Flashlight_Black,6);
            MACRO_ADDITEM(tacs_Hat_Beret_BlackLogo,2);
            MACRO_ADDITEM(tacs_milgp_battle_belt_assaulter_blk,2);
            MACRO_ADDITEM(tacs_Uniform_Combat_RS_BS_BP_BB,2);
            MACRO_ADDITEM(tacs_Uniform_Garment_LS_BS_BP_BB,2);
            MACRO_ADDITEM(tacs_Uniform_Long_Plaid_Black,2);
            MACRO_ADDITEM(U_O_R_Gorka_01_black_F,2);
            MACRO_ADDITEM(V_Chestrig_blk,4);
            MACRO_ADDITEM(V_MU_Chestrig_light_blk,2);
            MACRO_ADDITEM(V_MU_HarnessO_blk,2);
        };
        class TransportBackpacks {};
        class TransportWeapons {
            MACRO_ADDWEAPON(ACE_Vector,4);
            MACRO_ADDWEAPON(Binocular,4);
            MACRO_ADDWEAPON(Camera_lxWS,4);
            MACRO_ADDWEAPON(CUP_smg_MP5A5_Rail_VFG,2);
            MACRO_ADDWEAPON(CUP_smg_vityaz_vfg_top_rail,2);
            MACRO_ADDWEAPON(hgun_Glock19_auto_RF,2);
            MACRO_ADDWEAPON(sgun_aa40_lxWS,2);
            MACRO_ADDWEAPON(SMG_02_F,2);
            MACRO_ADDWEAPON(SMG_05_F,2);
        };
    };
    class CLASS(Supply_Special): CLASS(Supply_Keres) {
        displayName = "[TAC] Special";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\supply_base_texture_co.paa),
            QPATHTOF(data\supply_special_ca.paa)
        };
        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
        class TransportWeapons {};
    };

    class Land_CanisterFuel_F;
    class CLASS(CanisterFuel_Theseus): Land_CanisterFuel_F {
        displayName = "[TAC] Fuel Canister";
        EDITOR_CATEGORY;
        scope = 2;
        scopeCurator = 2;
        editorPreview = QPATHTOF(ui\supplies_FuelCanister.jpg);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\canisterfuel_theseus.paa)};
    };
};
