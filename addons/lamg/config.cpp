#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(LMG_LAMG)
        };
        magazines[] = {
            QCLASS(100Rnd_65x39_Cased_Box),
            QCLASS(100Rnd_65x39_Yellow_Cased_Box)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        author = ECSTRING(main,Authors);
        authors[] = {"GilleeDoo, Tyrone"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgSoundShaders.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgRecoils.hpp"
