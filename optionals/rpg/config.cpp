#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_RPG7", "CUP_Weapons_Ammunition"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
