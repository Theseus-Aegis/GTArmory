#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "hlcweapons_mp5",};
        author = CSTRING(Author);
        authors[] = {"TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
