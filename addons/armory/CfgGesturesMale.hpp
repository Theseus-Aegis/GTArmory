class CfgGesturesMale {
    class States {
        class GestureReloadBase;
        // SA80
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

        // FAMAS
        class GestureReloadFAMAS: GestureReloadBase {
            file = QPATHTOF(data\famas\animations\GestureReloadFAMAS.rtm);
            speed = -(128/30);
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            weaponIK = 1;
            leftHandIKCurve[] = {
                0, 1,
                0.07, 0,
                0.898, 0,
                1, 1
            };
        };
        class GestureReloadFAMASProne: GestureReloadFAMAS {
            file = QPATHTOF(data\famas\animations\GestureReloadFAMASProne.rtm);
        };
        class GestureReloadFAMASContext: GestureReloadFAMAS {
            mask = "handsWeapon_context";
        };
        class GestureReloadFAMASContextAnimDrive: GestureReloadFAMAS {
            mask = "handsWeapon_contextAnimDrive";
        };
        class GestureReloadFAMASUGL: GestureReloadFAMAS {
            file = QPATHTOF(data\famas\animations\GestureReloadFAMASUGL.rtm);
            speed = -(86/30);
            leftHandIKCurve[] = {
                0, 1,
                0.081, 0,
                0.848, 0,
                0.872, 1
            };
        };
        class GestureReloadFAMASUGLProne: GestureReloadFAMASUGL {
            file = QPATHTOF(data\famas\animations\GestureReloadFAMASUGLProne.rtm);
        };
        class GestureReloadFAMASUGLContext: GestureReloadFAMASUGL {
            mask = "handsWeapon_context";
        };
        class GestureReloadFAMASUGLContextAnimDrive: GestureReloadFAMASUGL {
            mask = "handsWeapon_contextAnimDrive";
        };
    };
};
