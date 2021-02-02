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
            "tac_supplies_VIP"
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
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo", "JoramD", "TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
