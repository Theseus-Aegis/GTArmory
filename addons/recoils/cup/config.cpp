#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_recoils",
            "CUP_Weapons_LoadOrder"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    #include "weapons\baseclasses.hpp"
    #include "weapons\12G.hpp"
    #include "weapons\68.hpp"
    #include "weapons\545.hpp"
    #include "weapons\556.hpp"
    #include "weapons\762N.hpp"
    #include "weapons\762R.hpp"
};
