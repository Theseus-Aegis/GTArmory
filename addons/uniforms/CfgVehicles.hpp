class CfgVehicles {
    class C_Uniform_ArtTShirt_01_v1_F;
    class Item_Base_F;

    // Server's Up YeeYees
    class CLASS(Uniform_PMC_Casual_YeeYees_V_Item): Item_Base_F {
        displayName = "PMC Casual (YeeYees)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(CLASS(Uniform_PMC_Casual_YeeYees),1);
        };
    };

    class CLASS(Uniform_PMC_Casual_YeeYees_V): C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        author = "GilleeDoo, Mike";
        uniformClass = QCLASS(Uniform_PMC_Casual_YeeYees);
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_yeeyees_co.paa)};
    };

    // Arcadian
    class CLASS(Uniform_PMC_Casual_Arcadian_V_Item): Item_Base_F {
        displayName = "PMC Casual (Arcadian)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(CLASS(Uniform_PMC_Casual_Arcadian),1);
        };
    };

    class CLASS(Uniform_PMC_Casual_Arcadian_V): C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        author = "GilleeDoo, Mike";
        uniformClass = QCLASS(Uniform_PMC_Casual_Arcadian);
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_arcadian_co.paa)};
    };
    // GT Armoury
    class CLASS(Uniform_PMC_Casual_GTArmoury_V_Item): Item_Base_F {
        displayName = "PMC Casual (GT Armoury)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(CLASS(Uniform_PMC_Casual_GTArmoury),1);
        };
    };

    class CLASS(Uniform_PMC_Casual_GTArmoury_V): C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        author = "GilleeDoo, Mike";
        uniformClass = QCLASS(Uniform_PMC_Casual_GTArmoury);
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_gtarmoury_co.paa)};
    };
    // ACRE2
    class CLASS(Uniform_PMC_Casual_ACRE2_V_Item): Item_Base_F {
        displayName = "PMC Casual (ACRE2)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(CLASS(Uniform_PMC_Casual_ACRE2),1);
        };
    };

    class CLASS(Uniform_PMC_Casual_ACRE2_V): C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        author = "GilleeDoo, Mike";
        uniformClass = QCLASS(Uniform_PMC_Casual_ACRE2);
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_acre2_co.paa)};
    };
    // Theseus
    class CLASS(Uniform_PMC_Casual_Theseus_V_Item): Item_Base_F {
        displayName = "PMC Casual (Theseus)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(CLASS(Uniform_PMC_Casual_Theseus),1);
        };
    };

    class CLASS(Uniform_PMC_Casual_Theseus_V): C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        author = "GilleeDoo, Mike";
        uniformClass = QCLASS(Uniform_PMC_Casual_Theseus);
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_theseus_co.paa)};
    };
};
