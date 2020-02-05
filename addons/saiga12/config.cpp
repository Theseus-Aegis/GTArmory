#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt", "tacgt_common"};
        author = "";
        authors = {""};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
