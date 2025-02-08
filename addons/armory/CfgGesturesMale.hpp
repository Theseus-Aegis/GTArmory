class CfgGesturesMale {
    class States {
        class GestureReloadBase;
        class GestureReloadSA80: GestureReloadBase {
            file = QPATHTOF(data\sa80\animations\GestureReloadSA80.rtm);
            speed = 0.2;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            weaponIK = 1;
            leftHandIKCurve[] = {
                0, 1,
                0.04, 0,
                0.9, 0,
                0.94, 1
            };
        };
        class GestureReloadSA80Prone: GestureReloadSA80 {
            file = QPATHTOF(data\sa80\animations\GestureReloadSA80Prone.rtm);
            leftHandIKCurve[] = {
                0, 1,
                0.04, 0,
                0.9, 0,
                0.94, 1
            };
        };
    };
};
