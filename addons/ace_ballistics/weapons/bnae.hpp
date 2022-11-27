class Rifle_Base_F;
class Rifle_Long_Base_F: Rifle_Base_F {
    class WeaponSlotsInfo;
};

// https://www.falkordefense.com/rifles/petra/
class bnae_falkor_base: Rifle_Long_Base_F {
    initSpeed = -1.0;
    ACE_barrelTwist = 254.0; // 1:10"
    ACE_barrelLength = 508.0; // 20", the new version has a 22" barrel but the 3D model is the old version with a 20" barrel
    ACE_RailHeightAboveBore = 3.0;

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class asdg_OpticRail_bnae: asdg_OpticRail1913 {};
    };

    class Single: Mode_SemiAuto {
        dispersion = 0.00029; // 1 MOA; default: 0.00044=1.5 MOA
    };
};

class bnae_mk1_base: Rifle_Long_Base_F {
    initSpeed = -1.0;
    ACE_barrelTwist = 254.0;
    ACE_barrelLength = 640.08;
    ACE_RailHeightAboveBore = 1.8;

    class Single: Mode_SemiAuto {
        dispersion = 0.00044;
    };
};

// http://guns.connect.fi/gow/M95.html
class bnae_rk95_base: Rifle_Base_F {
    ACE_barrelTwist = 240.0;
    ACE_barrelLength = 420.0;

    class Single: Mode_SemiAuto {
        dispersion = 0.00044; // 1.5 MOA; default: 0.00058 = 2 MOA
    };

    class FullAuto: Mode_FullAuto {
        dispersion = 0.00044; // 1.5 MOA; default: 0.00058 = 2 MOA
    };
};

class bnae_rk95_virtual;
class bnae_rk95r_virtual: bnae_rk95_virtual {
    ACE_RailHeightAboveBore = 14.0;

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class asdg_OpticRail_bnae: asdg_OpticRail1913 {};
        mass = 100;
    };
};

class ItemCore;
class InventoryMuzzleItem_Base_F;

class bnae_suppressor_v2_base: ItemCore {
    class ItemInfo: InventoryMuzzleItem_Base_F {
        #include "bnae_ItemInfo.hpp"
    };
};

class bnae_suppressor_base: ItemCore {
    class ItemInfo: InventoryMuzzleItem_Base_F {
        #include "bnae_ItemInfo.hpp"
    };
};

class bnae_silencer_base: ItemCore {
    class ItemInfo: InventoryMuzzleItem_Base_F {
        #include "bnae_ItemInfo.hpp"
    };
};

class bnae_muzzle_base: ItemCore {
    class ItemInfo: InventoryMuzzleItem_Base_F {
        #include "bnae_ItemInfo.hpp"
    };
};
