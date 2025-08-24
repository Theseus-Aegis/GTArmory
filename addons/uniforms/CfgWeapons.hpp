class CfgWeapons {
    class Uniform_Base;
    class U_C_ArtTShirt_01_v1_F: Uniform_Base {
        class ItemInfo;
    };
    class U_BG_Guerilla2_3: Uniform_Base {
        class ItemInfo;
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

    // Rolled Garments
    class CLASS(Uniform_PMC_RolledGarment_1): U_BG_Guerilla2_3 {
        displayName = "Garment Rolled (Green/OD)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\garment_rolled_1_co.paa)};
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Garment_Rolled_1_V);
            containerClass = "Supply40";
        };
    };

    class CLASS(Uniform_PMC_RolledGarment_2): U_BG_Guerilla2_3 {
        displayName = "Garment Rolled (Green Checkered/Tan)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\garment_rolled_2_co.paa)};
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Garment_Rolled_2_V);
            containerClass = "Supply40";
        };
    };

    class CLASS(Uniform_PMC_RolledGarment_3): U_BG_Guerilla2_3 {
        displayName = "Garment Rolled (Green/Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\garment_rolled_3_co.paa)};
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Garment_Rolled_3_V);
            containerClass = "Supply40";
        };
    };

    class CLASS(Uniform_PMC_RolledGarment_4): U_BG_Guerilla2_3 {
        displayName = "Garment Rolled (Red Checkered/Black)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\garment_rolled_4_co.paa)};
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Garment_Rolled_4_V);
            containerClass = "Supply40";
        };
    };

    class CLASS(Uniform_PMC_RolledGarment_5): U_BG_Guerilla2_3 {
        displayName = "Garment Rolled (Rust/Tan)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\garment_rolled_5_co.paa)};
        scope = 2;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Uniform_Garment_Rolled_5_V);
            containerClass = "Supply40";
        };
    };
};
