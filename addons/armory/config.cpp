#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(KSG_Olive),
            QCLASS(KSG_Black)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_theseus",
            "CUP_Weapons_LoadOrder"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class asdg_OpticRail1913_short;

#include "CfgWeapons.hpp"
