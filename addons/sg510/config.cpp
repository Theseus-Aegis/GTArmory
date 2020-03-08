#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "hlcweapons_sg550", "hlcweapons_stgw57"};
        author = CSTRING(Author);
        authors[] = {"TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

#include "CfgWeapons.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
