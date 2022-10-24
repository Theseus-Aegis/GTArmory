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
        magazines[] = {
            QCLASS(APERSBoundingMine_Range_Mag_Training),
            QCLASS(APERSMine_Range_Mag_Training),
            QCLASS(APERSTripMine_Wire_Mag_Training),
            QCLASS(ATMine_Range_Mag_Training),
            QCLASS(Claymore_Remote_Mag_Training),
            QCLASS(DemoCharge_Remote_Mag_Training),
            QCLASS(SatchelCharge_Remote_Mag_Training)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        author = ECSTRING(main,Authors);
        authors[] = {"Brett"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
