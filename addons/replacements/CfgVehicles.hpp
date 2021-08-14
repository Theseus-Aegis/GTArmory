class CfgVehicles {
    class Box_AAF_Uniforms_F;
    class CLASS(Replacement_Box): Box_AAF_Uniforms_F {
        displayName = "Replacement Testing Box";
        scope = 1;
        maximumLoad = 3000;

        class TransportBackpacks {};
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            MACRO_ADDITEM(CLASS(IFAK),1);
            MACRO_ADDITEM(CLASS(Grenade_Case),1);
            MACRO_ADDITEM(CLASS(Smoke_Grenade_Case),1);
            MACRO_ADDITEM(CLASS(M4_Weapon_Case),1);
            MACRO_ADDITEM(CLASS(Lootbox_Handgun),1);
            MACRO_ADDITEM(CLASS(Lootbox_SMG),1);
            MACRO_ADDITEM(CLASS(Lootbox_Rifle),1);
            MACRO_ADDITEM(CLASS(Lootbox_GL),1);
            MACRO_ADDITEM(CLASS(Lootbox_LMG),1);
            MACRO_ADDITEM(CLASS(Lootbox_Marksman),1);
        };
    };
};
