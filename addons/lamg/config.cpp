#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(LMG_LAMG)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "tacgt_ammunition"};
        author = ECSTRING(main,Authors);
        authors[] = {"GilleeDoo, Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgSoundShaders.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgRecoils.hpp"
