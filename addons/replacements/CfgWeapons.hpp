class CfgWeapons {
    class CBA_MiscItem;
    class CLASS(Replacement_Base): CBA_MiscItem {
        author = ECSTRING(main,Author);
        scope = 2;
    };

    // IFAK
    class CLASS(IFAK): CLASS(Replacement_Base) {
        picture = QPATHTOF(ui\ifak_ca.paa);
        displayName = CSTRING(IFAK_Name);
    };

    // Grenade Case
    class CLASS(Grenade_Case): CLASS(Replacement_Base) {
        //picture = QPATHTOF(ui\grenade_case_ca.paa);
        displayName = CSTRING(Grenade_Case_Name);
    };
};
