#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "tac_supplies_Launchers",
            "tac_supplies_Engineer",
            "tac_supplies_Medic",
            "tac_supplies_Medic_NCO",
            "tac_supplies_Recruit",
            "tac_supplies_VIP",
            QCLASS(Supply_Empty_1_1),
            QCLASS(Supply_Empty_1_2),
            QCLASS(Supply_Empty_2_1),
            QCLASS(Supply_Empty_2_2),
            QCLASS(Supply_Empty_3_1),
            QCLASS(Supply_Empty_3_2),
            QCLASS(Supply_Empty_4_1),
            QCLASS(Supply_Empty_4_2)
        };
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacs_vests",
            "ace_medical_treatment",
            "CUP_Weapons_Ammunition",
            "CUP_Weapons_NVG",
            "CUP_Weapons_East_Attachments",
            "CUP_Weapons_M136"
        };
        author = ECSTRING(main,Authors);
        authors[] = {"GilleeDoo", "JoramD", "Tyrone"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
