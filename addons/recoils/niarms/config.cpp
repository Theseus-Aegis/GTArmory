#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_recoils",
            "hlcweapons_acr",
            "hlcweapons_AUG",
            "hlcweapons_ar15",
            "hlcweapons_SG550",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    #include "weapons\baseclasses.hpp"
    #include "weapons\68.hpp"
    #include "weapons\556.hpp"
    #include "weapons\762N.hpp"
    #include "weapons\762R.hpp"
};
