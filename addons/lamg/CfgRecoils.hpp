class CfgRecoils {
    class recoil_default;
    class recoil_mk200: recoil_default {
        muzzleOuter[] = {0.3, 0.7, 0.4, 0.2};
        kickBack[] = {0.02, 0.04};
        temporary = 0.005;
    };
    // LAMG more manageable recoil due to weight reduction from ammo.
    class CLASS(recoil_mk200): recoil_mk200 {
        muzzleOuter[] = {0.25, 0.55, 0.35, 0.2};
        kickBack[] = {0.02, 0.03};
        temporary = 0.004;
    };
};
