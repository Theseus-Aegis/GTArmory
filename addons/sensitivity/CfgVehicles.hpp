#define MACRO_SENSITIVITY sensitivity = 5;

class CfgVehicles {
    // Base Classes
    class Land;
    class SoldierWB;
    class SoldierEB;
    class SoldierGB;

    class Man: Land {
        MACRO_SENSITIVITY
    };

    // TAC - Units
    class TACU_Main_U_BLUFOR_Soldier_Base: SoldierWB {
        MACRO_SENSITIVITY
    };

    class TACU_Main_U_OPFOR_Soldier_Base: SoldierEB {
        MACRO_SENSITIVITY
    };

    class TACU_Main_U_INDEP_Soldier_Base: SoldierGB {
        MACRO_SENSITIVITY
    };

};
