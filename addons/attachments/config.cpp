#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_flashlight",
            "CUP_Weapons_West_Attachments"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CowsSlot;
class PointerSlot;

#include "PointerSlot.hpp"
#include "PointerSlot_Pistol.hpp"
#include "CowsSlot_Rail.hpp"
