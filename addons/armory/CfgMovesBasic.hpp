class CfgMovesBasic {
    class ManActions {
        GestureReloadSA80 = "";
        GestureReloadFAMAS = "";
        GestureReloadFAMASUGL = "";
    };

    class Actions {
        class NoActions: ManActions {
            GestureReloadSA80[] = {"GestureReloadSA80", "Gesture"};
            GestureReloadFAMAS[] = {"GestureReloadFAMAS", "Gesture"};
            GestureReloadFAMASUGL[] = {"GestureReloadFAMASUGL", "Gesture"};
        };

        class RifleBaseStandActions;
        class RifleProneActions: RifleBaseStandActions {
            GestureReloadSA80[] = {"GestureReloadSA80Prone", "Gesture"};
            GestureReloadFAMAS[] = {"GestureReloadFAMASProne", "Gesture"};
            GestureReloadFAMASUGL[] = {"GestureReloadFAMASUGLProne", "Gesture"};
        };

        class RifleAdjustProneBaseActions;
        class RifleAdjustFProneActions: RifleAdjustProneBaseActions {
            GestureReloadSA80[] = {"GestureReloadSA80Context", "Gesture"};
            GestureReloadFAMAS[] = {"GestureReloadFAMASContext", "Gesture"};
            GestureReloadFAMASUGL[] = {"GestureReloadFAMASUGLContext", "Gesture"};
        };

        class RifleAdjustLProneActions: RifleAdjustProneBaseActions {
            GestureReloadSA80[] = {"GestureReloadSA80Context", "Gesture"};
            GestureReloadFAMAS[] = {"GestureReloadFAMASContext", "Gesture"};
            GestureReloadFAMASUGL[] = {"GestureReloadFAMASUGLContext", "Gesture"};
        };

        class RifleAdjustRProneActions: RifleAdjustProneBaseActions {
            GestureReloadSA80[] = {"GestureReloadSA80Context", "Gesture"};
            GestureReloadFAMAS[] = {"GestureReloadFAMASContext", "Gesture"};
            GestureReloadFAMASUGL[] = {"GestureReloadFAMASUGLContext", "Gesture"};
        };

        class DeployedProneActions: RifleProneActions {
            GestureReloadSA80[] = {"GestureReloadSA80Prone", "Gesture"};
            GestureReloadFAMAS[] = {"GestureReloadFAMASProne", "Gesture"};
            GestureReloadFAMASUGL[] = {"GestureReloadFAMASUGLProne", "Gesture"};
        };
    };
};
