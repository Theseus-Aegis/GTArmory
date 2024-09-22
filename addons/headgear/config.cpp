#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(OpsCore_Medic),
            QCLASS(OpsCore_Grijs),
            QCLASS(OpsCore_Grijs_NoHS),
            QCLASS(Cap_DEF_NYMets),
            QCLASS(Cap_DEF_ASU),
            QCLASS(PASGT_ASU)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main", "CUP_Creatures_Extra_OpsCore"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"GilleeDoo, Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
#include "CfgWeapons.hpp"
