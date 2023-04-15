#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(MSBS65_Gimmick),
            QCLASS(MSBS65_Gimmick_Super)
        };
        magazines[] = {
            QCLASS(MSBS65_Gimmick_M_Red),
            QCLASS(MSBS65_Gimmick_M_Green),
            QCLASS(MSBS65_Gimmick_M_Yellow)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        author = ECSTRING(main,Authors);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgWeapons.hpp"

