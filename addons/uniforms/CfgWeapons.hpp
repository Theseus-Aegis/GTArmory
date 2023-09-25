class CfgWeapons {
    class Uniform_Base;
    class U_C_ArtTShirt_01_v1_F: Uniform_Base {
        class ItemInfo;
    };

    // Server's Up YeeYees
    class CLASS(Uniform_PMC_Casual_YeeYees): U_C_ArtTShirt_01_v1_F {
        displayName = "PMC Casual (YeeYees)";
        picture = QPATHTOF(ui\icon_pmc_casual_yeeyees_co.paa);
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_PMC_Casual_YeeYees_V);
            containerClass = "Supply40";
        };
    };
    // Arcadian
    class CLASS(Uniform_PMC_Casual_Arcadian): U_C_ArtTShirt_01_v1_F {
        displayName = "PMC Casual (Arcadian)";
        picture = QPATHTOF(ui\icon_pmc_casual_arcadian_co.paa);
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_PMC_Casual_Arcadian_V);
            containerClass = "Supply40";
        };
    };
    // GT Armoury
    class CLASS(Uniform_PMC_Casual_GTArmoury): U_C_ArtTShirt_01_v1_F {
        displayName = "PMC Casual (GT Armoury)";
        picture = QPATHTOF(ui\icon_pmc_casual_gtarmoury_co.paa);
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_PMC_Casual_GTArmoury_V);
            containerClass = "Supply40";
        };
    };
    // ACRE2
    class CLASS(Uniform_PMC_Casual_ACRE2): U_C_ArtTShirt_01_v1_F {
        displayName = "PMC Casual (ACRE2)";
        picture = QPATHTOF(ui\icon_pmc_casual_acre2_co.paa);
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_PMC_Casual_ACRE2_V);
            containerClass = "Supply40";
        };
    };
};
