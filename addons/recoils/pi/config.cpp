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
            "bnae_falkor",
            "bnae_RK95"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class bnae_falkor_base;
    class bnae_rk95_base;

    // RK-95
    class bnae_rk95_virtual: bnae_rk95_base {
        recoil = QCLASS(762R_Long);
    };

    // Falkor Petra
    class bnae_falkor_blk_virtual: bnae_falkor_base {
        recoil = QCLASS(300WM_Long);
    };
    class bnae_falkor_camo1_virtual: bnae_falkor_base {
        recoil = QCLASS(300WM_Long);
    };
    class bnae_falkor_snd_virtual: bnae_falkor_base {
        recoil = QCLASS(300WM_Long);
    };
    class bnae_falkor_camo2_virtual: bnae_falkor_base {
        recoil = QCLASS(300WM_Long);
    };
};
