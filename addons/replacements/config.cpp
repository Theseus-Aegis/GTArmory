#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QCLASS(Replacement_Box)};
        weapons[] = {
            QCLASS(IFAK),
            QCLASS(Grenade_Case),
            QCLASS(Smoke_Grenade_Case),
            QCLASS(M4_Weapon_Case),
            QCLASS(Lootbox_GL),
            QCLASS(Lootbox_Handgun),
            QCLASS(Lootbox_LMG),
            QCLASS(Lootbox_Marksman),
            QCLASS(Lootbox_Rifle),
            QCLASS(Lootbox_SMG)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_main",
            "tacgt_theseus",
            "tac_supplies"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
