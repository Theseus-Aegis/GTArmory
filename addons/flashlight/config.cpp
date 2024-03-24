#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(ANPEQ_15_Laser_Black),
            QCLASS(ANPEQ_15_Laser_OD),
            QCLASS(ANPEQ_15_Laser_Tan),
            QCLASS(ANPEQ_15_Light_Black),
            QCLASS(ANPEQ_15_Light_OD),
            QCLASS(ANPEQ_15_Light_Tan),
            QCLASS(ANPEQ_15_Low_Light_Black),
            QCLASS(ANPEQ_15_Low_Light_OD),
            QCLASS(ANPEQ_15_Low_Light_Tan),
            QCLASS(ANPEQ_15_Top_Laser_Black),
            QCLASS(ANPEQ_15_Top_Laser_OD),
            QCLASS(ANPEQ_15_Top_Laser_Tan),
            QCLASS(ANPEQ_15_Top_Light_Black),
            QCLASS(ANPEQ_15_Top_Light_OD),
            QCLASS(ANPEQ_15_Top_Light_Tan),
            QCLASS(ANPEQ_15_Top_Low_Light_Black),
            QCLASS(ANPEQ_15_Top_Low_Light_OD),
            QCLASS(ANPEQ_15_Top_Low_Light_Tan),
            QCLASS(ANPEQ_15_Top_Vis_Laser_Black),
            QCLASS(ANPEQ_15_Top_Vis_Laser_OD),
            QCLASS(ANPEQ_15_Top_Vis_Laser_Tan),
            QCLASS(ANPEQ_15_Vis_Laser_Black),
            QCLASS(ANPEQ_15_Vis_Laser_OD),
            QCLASS(ANPEQ_15_Vis_Laser_Tan),
            QCLASS(CZ_M3X_Laser),
            QCLASS(CZ_M3X_Light),
            QCLASS(CZ_M3X_Vis_Laser),
            QCLASS(LLM01_Laser_Black),
            QCLASS(LLM01_Light_Black),
            QCLASS(LLM01_Low_Light_Black),
            QCLASS(LLM01_Vis_Laser_Black),
            QCLASS(LLM_Laser_Black),
            QCLASS(LLM_Light_Black),
            QCLASS(LLM_Low_Light_Black),
            QCLASS(LLM_Vis_Laser_Black),
            QCLASS(MLPLS_Laser),
            QCLASS(MLPLS_Vis_Laser),
            QCLASS(Surefire_Flashlight_Black),
            QCLASS(Surefire_Flashlight_OD),
            QCLASS(Surefire_Flashlight_Tan),
            QCLASS(Surefire_Low_Flashlight_Black),
            QCLASS(Surefire_Low_Flashlight_OD),
            QCLASS(Surefire_Low_Flashlight_Tan),
            QCLASS(UTG_Flashlight),
            QCLASS(UTG_Low_Flashlight)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_West_Attachments"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "joint_rails.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
