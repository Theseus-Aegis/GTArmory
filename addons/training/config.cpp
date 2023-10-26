#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(APERSBoundingMine_Training),
            QCLASS(ModuleMine_APERSBoundingMine_Training_F),
            QCLASS(APERSMine_Training),
            QCLASS(ModuleMine_APERSMine_Training_F),
            QCLASS(APERSTripMine_Training),
            QCLASS(ModuleMine_APERSTripMine_Training_F),
            QCLASS(ATMine_Training),
            QCLASS(ModuleMine_ATMine_Training_F),
            QCLASS(Claymore_Training),
            QCLASS(ModuleExplosive_Claymore_Training_F),
            QCLASS(DemoCharge_Training),
            QCLASS(ModuleExplosive_DemoCharge_Training_F),
            QCLASS(SatchelCharge_Training),
            QCLASS(ModuleExplosive_SatchelCharge_Training_F)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Brett"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
