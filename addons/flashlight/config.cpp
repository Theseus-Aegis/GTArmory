#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(UTG_Flashlight),
            QCLASS(Surefire_Flashlight_Black),
            QCLASS(Surefire_Flashlight_OD),
            QCLASS(Surefire_Flashlight_Tan),
            QCLASS(ANPEQ_15_Top_Laser_Black),
            QCLASS(ANPEQ_15_Top_Light_Black),
            QCLASS(ANPEQ_15_Top_Vis_Laser_Black),
            QCLASS(ANPEQ_15_Top_Light_Tan),
            QCLASS(ANPEQ_15_Top_Laser_Tan),
            QCLASS(ANPEQ_15_Top_Vis_Laser_Tan),
            QCLASS(ANPEQ_15_Top_Light_OD),
            QCLASS(ANPEQ_15_Top_Laser_OD),
            QCLASS(ANPEQ_15_Top_Vis_Laser_OD),
            QCLASS(ANPEQ_15_Light_Black),
            QCLASS(ANPEQ_15_Laser_Black),
            QCLASS(ANPEQ_15_Vis_Laser_Black),
            QCLASS(ANPEQ_15_Light_Tan),
            QCLASS(ANPEQ_15_Laser_Tan),
            QCLASS(ANPEQ_15_Vis_Laser_Tan),
            QCLASS(ANPEQ_15_Light_OD),
            QCLASS(ANPEQ_15_Laser_OD),
            QCLASS(ANPEQ_15_Vis_Laser_OD)
        };
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_West_Attachments"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
    tacgt_UTG_Flashlight = 1;
    tacgt_Surefire_Flashlight_Black = 1;
    tacgt_Surefire_Flashlight_OD = 1;
    tacgt_Surefire_Flashlight_Tan = 1;
    tacgt_ANPEQ_15_Top_Laser_Black = 1;
    tacgt_ANPEQ_15_Top_Light_Black = 1;
    tacgt_ANPEQ_15_Top_Vis_Laser_Black = 1;
    tacgt_ANPEQ_15_Top_Light_Tan = 1;
    tacgt_ANPEQ_15_Top_Laser_Tan = 1;
    tacgt_ANPEQ_15_Top_Vis_Laser_Tan = 1;
    tacgt_ANPEQ_15_Top_Light_OD = 1;
    tacgt_ANPEQ_15_Top_Laser_OD = 1;
    tacgt_ANPEQ_15_Top_Vis_Laser_OD = 1;
    tacgt_ANPEQ_15_Light_Black = 1;
    tacgt_ANPEQ_15_Laser_Black = 1;
    tacgt_ANPEQ_15_Vis_Laser_Black = 1;
    tacgt_ANPEQ_15_Light_Tan = 1;
    tacgt_ANPEQ_15_Laser_Tan = 1;
    tacgt_ANPEQ_15_Vis_Laser_Tan = 1;
    tacgt_ANPEQ_15_Light_OD = 1;
    tacgt_ANPEQ_15_Laser_OD = 1;
    tacgt_ANPEQ_15_Vis_Laser_OD = 1;
    };
};

#include "CfgWeapons.hpp"
