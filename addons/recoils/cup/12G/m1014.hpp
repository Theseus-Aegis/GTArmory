// M1014 Rifles - All others inherit.

// M1014 - Long Barrel
class CUP_sgun_M1014: CUP_sgun_M1014_base {
    recoil = QCLASS(12G_LongBarrel);
};
// Foregrip
class CUP_sgun_M1014_vfg: CUP_sgun_M1014_base {
    recoil = QCLASS(12G_Foregrip_LongBarrel);
};

// M1014 - Short Barrel
class CUP_sgun_M1014_Entry: CUP_sgun_M1014_base {
    recoil = QCLASS(12G_ShortBarrel);
};
// Foregrip
class CUP_sgun_M1014_Entry_vfg: CUP_sgun_M1014_Entry {
    recoil = QCLASS(12G_Foregrip_ShortBarrel);
};
