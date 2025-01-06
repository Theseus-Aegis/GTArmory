class CfgVehicles {
    class Box_NATO_WpsLaunch_F;
    class tac_supplies_Launchers: Box_NATO_WpsLaunch_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(PSRL1_AT_RF,12);
            MACRO_ADDMAGAZINE(PSRL1_FRAG_RF,12);
            MACRO_ADDMAGAZINE(PSRL1_HE_RF,12);
            MACRO_ADDMAGAZINE(PSRL1_HEAT_RF,6);
        };
        class TransportWeapons {
            MACRO_ADDWEAPON(launch_PSRL1_PWS_black_RF,3);
            MACRO_ADDWEAPON(launch_PSRL1_PWS_olive_RF,3);
            MACRO_ADDWEAPON(launch_PSRL1_PWS_sand_RF,3);
            MACRO_ADDWEAPON(launch_PSRL1_black_RF,3);
            MACRO_ADDWEAPON(launch_PSRL1_olive_RF,3);
            MACRO_ADDWEAPON(launch_PSRL1_sand_RF,3);
        };
    };
};
