#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(SBR_458_Socom_Tan),
            QCLASS(SBR_458_Socom_OD)
        };
        magazines[] = {
            QCLASS(10Rnd_458_Socom_PMAG),
            QCLASS(10Rnd_458_Socom_PMAG_OD),
            QCLASS(10Rnd_458_Socom_PMAG_Tan)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "tacgt_ammunition", "CUP_Weapons_M16"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;

#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
