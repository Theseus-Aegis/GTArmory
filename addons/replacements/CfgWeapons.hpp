class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class CLASS(IFAK): CBA_MiscItem {
        scope = 2;
        author = ECSTRING(main,Author);
        picture = QPATHTOF(ui\ifak_ca.paa);
        displayName = CSTRING(IFAK_Name);
        descriptionShort = "";
        model = "\a3\Weapons_F\Ammo\mag_FirstAidkit.p3d";
    };
};
