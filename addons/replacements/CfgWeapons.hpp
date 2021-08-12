class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class tac_supplies_randomizedBox;
    class CLASS(Replacement_Base): CBA_MiscItem {
        author = ECSTRING(main,Author);
        scope = 2;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };

    // IFAK
    class CLASS(IFAK): CLASS(Replacement_Base) {
        picture = QPATHTOF(ui\ifak_ca.paa);
        displayName = CSTRING(IFAK_Name);
    };

    // Grenade Case
    class CLASS(Grenade_Case): CLASS(Replacement_Base) {
        picture = QPATHTOF(ui\grenade_case_ca.paa);
        displayName = CSTRING(Grenade_Case_Name);
    };

    // Smoke Grenade Case
    class CLASS(Smoke_Grenade_Case): CLASS(Replacement_Base) {
        picture = QPATHTOF(ui\smoke_case_ca.paa);
        displayName = CSTRING(Smoke_Grenade_Case_Name);
    };

    // M4 Weapon Case
    class CLASS(M4_Weapon_Case): CLASS(Replacement_Base) {
        picture = QPATHTOF(ui\lootbox_rifle_ca.paa);
        displayName = CSTRING(M4_Weapon_Case_Name);
    };

    // Lootboxes - Linked to TAC Mods
    #include "lootboxes\handgun.hpp"
    #include "lootboxes\smg.hpp"
    #include "lootboxes\rifle.hpp"
    #include "lootboxes\gl.hpp"
    #include "lootboxes\lmg.hpp"
    #include "lootboxes\marksman.hpp"
};
