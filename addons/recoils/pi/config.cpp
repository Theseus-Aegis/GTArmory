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
            "bnae_falkor",
            "bnae_RK95"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    // Falkor
    class bnae_falkor_base;

    // RK95s
    class bnae_rk95_base;

    #include "762R\rk.hpp"
    #include "300WM\falkor.hpp"
};
