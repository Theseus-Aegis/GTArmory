#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_theseus",
            "hlcweapons_core",
            "niaweapons_226",
            "hlcweapons_AUG",
            "hlcweapons_ar15"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Single;

#include "CfgWeapons.hpp"
#include "CfgSoundShaders.hpp"
