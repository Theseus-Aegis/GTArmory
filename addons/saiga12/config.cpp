#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Weapons_Saiga12K"};
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "TyroneMF"};
        VERSION_CONFIG;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

#include "CfgWeapons.hpp"
