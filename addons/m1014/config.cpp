#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "tacgt",
            "tacgt_common",
            "tacgt_ammunition"
        };
        author = "";
        authors = {""};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
