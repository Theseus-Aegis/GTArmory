class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class tac_supplies_randomizedBox;
    class tac_supplies_replacementBase;

    // IFAK
    class CLASS(IFAK): tac_supplies_replacementBase {
        scope = 2;
        picture = QPATHTOF(ui\ifak_ca.paa);
        displayName = "IFAK";
        tac_supplies_replacementList[] = {
            "ACE_bodyBag",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_fieldDressing",
            "ACE_splint",
            "ACE_splint",
            "ACE_tourniquet",
            "ACE_tourniquet",
            "ACE_tourniquet",
            "ACE_tourniquet",
            "tac_medical_painkillers",
            "tac_medical_painkillers"
        };
    };

    // Grenade Case
    class CLASS(Grenade_Case): tac_supplies_replacementBase {
        scope = 2;
        picture = QPATHTOF(ui\grenade_case_ca.paa);
        displayName = "Grenade Case";
        tac_supplies_replacementList[] = {
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell"
        };
    };

    // Smoke Grenade Case
    class CLASS(Smoke_Grenade_Case): tac_supplies_replacementBase {
        scope = 2;
        picture = QPATHTOF(ui\smoke_case_ca.paa);
        displayName = "Smoke Grenade Case";
        tac_supplies_replacementList[] = {
            "SmokeShellBlue",
            "SmokeShellBlue",
            "SmokeShellGreen",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellOrange",
            "SmokeShellPurple",
            "SmokeShellPurple",
            "SmokeShellRed",
            "SmokeShellRed"
        };
    };

    // M4 Weapon Case
    class CLASS(M4_Weapon_Case): tac_supplies_replacementBase {
        scope = 2;
        picture = QPATHTOF(ui\m4_weapon_case_ca.paa);
        displayName = "Weapons Casse (M4A1)";
        tac_supplies_replacementList[] = {
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "tacgt_30Rnd_556x45_Ball_EMAG",
            "CUP_arifle_M4A1_black"
        };
    };

    // Lootboxes - Linked to TAC Mods
    #include "lootboxes\handgun.hpp"
    #include "lootboxes\smg.hpp"
    #include "lootboxes\rifle.hpp"
    #include "lootboxes\gl.hpp"
    #include "lootboxes\lmg.hpp"
    #include "lootboxes\marksman.hpp"
};
