class CfgWeapons {
    class Uniform_Base;
    class U_C_ArtTShirt_01_v1_F: Uniform_Base {
        class ItemInfo;
    };

    // Server's Up YeeYees
    class CLASS(Uniform_PMC_Casual_YeeYees): U_C_ArtTShirt_01_v1_F {
        displayName = "PMC Casual (YeeYees)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_yeeyees_co.paa)};
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
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_arcadian_co.paa)};
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
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_gtarmoury_co.paa)};
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
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_acre2_co.paa)};
        picture = QPATHTOF(ui\icon_pmc_casual_acre2_co.paa);
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_PMC_Casual_ACRE2_V);
            containerClass = "Supply40";
        };
    };
    // Theseus
    class CLASS(Uniform_PMC_Casual_Theseus): U_C_ArtTShirt_01_v1_F {
        displayName = "PMC Casual (Theseus)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\pmc_casual_theseus_co.paa)};
        picture = QPATHTOF(ui\icon_pmc_casual_theseus_co.paa);
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_PMC_Casual_Theseus_V);
            containerClass = "Supply40";
        };
    };
};
