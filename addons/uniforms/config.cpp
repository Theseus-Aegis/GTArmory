#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Uniform_PMC_Casual_YeeYees_V_Item),
            QCLASS(Uniform_PMC_Casual_Arcadian_V_Item),
            QCLASS(Uniform_PMC_Casual_GTArmoury_V_Item),
            QCLASS(Uniform_PMC_Casual_ACRE2_V_Item),
            QCLASS(Uniform_PMC_Casual_Theseus_V_Item),
            QCLASS(Uniform_Garment_Rolled_1_V_Item),
            QCLASS(Uniform_Garment_Rolled_2_V_Item),
            QCLASS(Uniform_Garment_Rolled_3_V_Item),
            QCLASS(Uniform_Garment_Rolled_4_V_Item),
            QCLASS(Uniform_Garment_Rolled_5_V_Item)
        };
        weapons[] = {
            QCLASS(Uniform_PMC_Casual_YeeYees),
            QCLASS(Uniform_PMC_Casual_Arcadian),
            QCLASS(Uniform_PMC_Casual_GTArmoury),
            QCLASS(Uniform_PMC_Casual_ACRE2),
            QCLASS(Uniform_PMC_Casual_Theseus),
            QCLASS(Uniform_PMC_RolledGarment_1),
            QCLASS(Uniform_PMC_RolledGarment_2),
            QCLASS(Uniform_PMC_RolledGarment_3),
            QCLASS(Uniform_PMC_RolledGarment_4),
            QCLASS(Uniform_PMC_RolledGarment_5)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "tacgt_theseus"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
