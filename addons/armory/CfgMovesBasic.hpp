class CfgMovesBasic {
    class ManActions {
        GestureReloadSA80 = "";
    };

    class Actions {
        class NoActions: ManActions {
            GestureReloadSA80[] = {"GestureReloadSA80", "Gesture"};
        };

        class RifleBaseStandActions;
        class RifleProneActions: RifleBaseStandActions {
            GestureReloadSA80[] = {"GestureReloadSA80Prone", "Gesture"};
        };

        class RifleAdjustProneBaseActions;
        class RifleAdjustFProneActions: RifleAdjustProneBaseActions {
            GestureReloadSA80[] = {"GestureReloadSA80Context", "Gesture"};
        };

        class RifleAdjustLProneActions: RifleAdjustProneBaseActions {
            GestureReloadSA80[] = {"GestureReloadSA80Context", "Gesture"};
        };

        class RifleAdjustRProneActions: RifleAdjustProneBaseActions {
            GestureReloadSA80[] = {"GestureReloadSA80Context", "Gesture"};
        };

        class DeployedProneActions: RifleProneActions {
            GestureReloadSA80[] = {"GestureReloadSA80Prone", "Gesture"};
        };
    };
};
