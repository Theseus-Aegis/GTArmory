#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(hgun_Glock18_Tan),
            QCLASS(hgun_Glock18_Black),
            QCLASS(TAR21_Black),
            QCLASS(GTAR21_EGLM_Black),
            QCLASS(CTAR21_Black),
            QCLASS(LMG_LAMG),
            QCLASS(RFB_762_F),
            QCLASS(Rhino_357),
            QCLASS(Rhino_44)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_ammunition",
            "CUP_Weapons_Glock17"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgRecoils.hpp"
#include "CfgWeapons.hpp"
