// L129A1 Rifles inherit

// L129A1 - Long Barrel
class CUP_srifle_L129A1: Rifle_Base_F {
    recoil = QCLASS(762N_LongBarrel);
};
// Foregrip
class CUP_srifle_L129A1_HG: CUP_srifle_L129A1 {
    recoil = QCLASS(762N_Foregrip_Long);
};
