#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QCLASS(KSG_Olive),
            QCLASS(KSG_Black),
            QCLASS(MP7_Black),
            QCLASS(MP7_Khaki),
            QCLASS(MP7_Sand),
            QCLASS(MP7_Suppressor_Black),
            QCLASS(MP7_Suppressor_Khaki),
            QCLASS(MP7_Suppressor_Sand),
            QCLASS(SA80_Black),
            QCLASS(SA80_Black_GL),
            QCLASS(SA80_Black_C),
            QCLASS(SA80_Sand),
            QCLASS(SA80_Sand_GL),
            QCLASS(SA80_Sand_C)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacgt_ammunition",
            "tacgt_main",
            "tacgt_recoils",
            "tacgt_theseus",
            "CUP_Weapons_LoadOrder"
        };
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike", "Aegis Team"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class asdg_FrontSideRail;
class asdg_MuzzleSlot_65;
class asdg_MuzzleSlot_46;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class Mode_FullAuto;
class Mode_SemiAuto;

#include "CfgGesturesMale.hpp"
#include "CfgInGameUI.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgMovesBasic.hpp"
#include "CfgWeapons.hpp"
