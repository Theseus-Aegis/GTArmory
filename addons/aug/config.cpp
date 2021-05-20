#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "hlcweapons_AUG"};
        author = ECSTRING(main,Authors);
        authors[] = {"Tyrone"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Single;

#include "CfgWeapons.hpp"
