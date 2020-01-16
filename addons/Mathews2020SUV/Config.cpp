class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        suv_cargo_back_side="suv_cargo_back_side";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class suv_cargo_back_side: Crew {
            file="\cup\wheeledvehicles\cup_wheeledvehicles_suv\data\Anim\suv_cargo_back_side.rtm";
            interpolateTo[]= { "Unconscious",1 };
            speed=1e+010;
        };
    };
};

class DefaultEventhandlers;
class CfgPatches {
    class TAC_SUV {
        units[]= { "TAC_Mathews_B_SUV", "TAC_Mathews_I_SUV" };
        weapons[]={ };
        requiredVersion=0.1;
        requiredAddons[]= { "TACR" };
    };
};
class CfgVehicles {

#include "SUVBaseClass.hpp"

    class TAC_Mathews_B_SUV: TAC_SUV_Base {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        crew="tacs_Unit_B_Contractor";
        typicalCargo[]= { "Unit_B_Contractor" };
        side=1;
        faction="TACS_BLU";
        HiddenSelectionsTextures[]= { "\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body_co.paa" };
        accuracy=0.5;
        author="Tyrone, Gilleedoo";
        editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\Data\preview\CUP_C_SUV_TK.jpg";
        class TransportWeapons { };
        class TransportMagazines { };
        maximumLoad=2500;
        class TransportItems { };
        class TransportBackpacks { };
    };

    class TAC_Mathews_I_SUV: TAC_SUV_Base {
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        crew="tacs_Unit_I_Contractor";
        typicalCargo[]= { "Unit_I_Contractor" };
        side=2;
        faction="TACS_IND";
        HiddenSelectionsTextures[]= { "\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body_co.paa" };
        accuracy=0.5;
        author="Tyrone, Gilleedoo";
        editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\Data\preview\CUP_C_SUV_TK.jpg";
        class TransportWeapons { };
        class TransportMagazines { };
        maximumLoad=2500;
        class TransportItems { };
        class TransportBackpacks { };
    };
};