#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(Rhino_357),
            QCLASS(Rhino_44)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "tacgt_ammunition"};
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
