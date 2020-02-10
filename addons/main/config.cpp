#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Enoch_Loadorder", "A3_Data_F_Mod_Loadorder", "ace_main", "cba_main"};
        author = CSTRING(Author);
        authors[] = {"GilleeDoo", "Jonpas", "TyroneMF"};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgMods.hpp"
