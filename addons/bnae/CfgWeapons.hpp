class CfgWeapons {
    class bnae_rk95_base;
    class bnae_rk95_virtual: bnae_rk95_base {
        class WeaponSlotsInfo;
    };

    class bnae_rk95r_virtual: bnae_rk95_virtual {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
};
