class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class GunParticles;
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class UGL_F;

    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {QCLASS(RGO_Muzzle), QCLASS(RGD5_Muzzle)};

        class ThrowMuzzle;
        class CLASS(RGO_Muzzle): ThrowMuzzle {
            magazines[] = {QCLASS(RGO)};
        };
        class CLASS(RGD5_Muzzle): ThrowMuzzle {
            magazines[] = {QCLASS(RGD5)};
        };
    };

    #include "weapons\famas.hpp"
    #include "weapons\ksg.hpp"
    #include "weapons\sa80.hpp"
    #include "weapons\mp7.hpp"
};
