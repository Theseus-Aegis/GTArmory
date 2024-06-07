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
            "RF_Data_Loadorder"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    // ASh12 using 7.62x39 Recoils, no bullpup variant should account for larger caliber.
    class Rifle_Base_F;
    class arifle_ash12_base_RF: Rifle_Base_F {
        recoil = QCLASS(762R_Medium);
    };
    class arifle_ash12_GL_base_RF: arifle_ash12_base_RF {
        recoil = QCLASS(762R_Medium_FG);
    };
    class arifle_ash12_LR_base_RF: arifle_ash12_base_RF {
        recoil = QCLASS(762R_Long);
    };
};
