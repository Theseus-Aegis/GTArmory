#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(MX_68x43_Sand),
            QCLASS(MX_68x43_Black)
        };
        magazines[] = {
            QCLASS(30Rnd_68x43_MX_Sand),
            QCLASS(30Rnd_68x43_MX_Black)
        };
        ammo[] = {
            QCLASS(68x43_SPC)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"
