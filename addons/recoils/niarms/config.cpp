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
            "hlcweapons_acr",
            "hlcweapons_AUG",
            "hlcweapons_ar15",
            "hlcweapons_SG550",
        };
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons {
    // ACR-E
    class hlc_acr556_base;
    class hlc_rifle_ACR_SBR_black;
    class hlc_rifle_ACR68_SBR_black;
    class hlc_acr_base;

    // AUG
    class hlc_aug_base;
    class hlc_rifle_auga3;

    // Honey Badger
    class hlc_rifle_honeybase;

    // M4 Variants
    class hlc_ar15_base;
    class hlc_rifle_CQBR;

    // SG55X
    class hlc_sg550_base;

    #include "556\acr.hpp"
    #include "556\aug.hpp"
    #include "556\m4.hpp"
    #include "556\sig.hpp"
    #include "762R\sig.hpp"
    #include "blackout\ar15.hpp"
    #include "blackout\honeybadger.hpp"
};
