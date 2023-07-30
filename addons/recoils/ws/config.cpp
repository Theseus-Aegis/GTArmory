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
            "data_f_lxWS_Loadorder",
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    // AA40
    class sgun_aa40_base_lxWS;

    // Galat
    class arifle_Galat_base_lxWS;

    // Velko
    class arifle_Velko_base_lxWS;

    // SLR
    class arifle_SLR_V_lxWS;

    #include "556\velko.hpp"
    #include "556\xms.hpp"
    #include "762R\galat.hpp"
    #include "762N\slr.hpp"
    #include "12G\aa40.hpp"
};
