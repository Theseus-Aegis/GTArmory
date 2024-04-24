class CfgWeapons {
    class CUP_launch_RShG2_Loaded;
    class CUP_launch_RShG2;
    class CUP_launch_RShG2_Used;

    class CLASS(rpag_2_loaded): CUP_launch_RShG2_Loaded {
        author = ECSTRING(main,Author);
        baseWeapon = QCLASS(rpag_2);
        descriptionShort = "";
        displayName = "RPAG-2 Thermobaric Launcher";
        dlc = QUOTE(PREFIX);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\rpag2_co.paa)};
        magazines[] = {QCLASS(rpag_thermobaric_rocket)};
        picture = QPATHTOF(ui\rpag2_ca.paa);
    };
    class CLASS(rpag_2): CUP_launch_RShG2 {
        author = ECSTRING(main,Author);
        descriptionShort = "Thermobaric missile launcher, unguided.";
        displayName = "RPAG-2 Thermobaric Launcher";
        dlc = QUOTE(PREFIX);
        baseWeapon = QCLASS(rpag_2);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\rpag2_co.paa)};
        picture = QPATHTOF(ui\rpag2_ca.paa);
    };
    class CLASS(rpag_2_used): CUP_launch_RShG2_Used {
        author = ECSTRING(main,Author);
        baseWeapon = QCLASS(rpag_2_used);
        displayName = "RPAG-2 Thermobaric Launcher (Used)";
        dlc = QUOTE(PREFIX);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\rpag2_co.paa)};
        picture = QPATHTOF(ui\rpag2_ca.paa);
    };
};
