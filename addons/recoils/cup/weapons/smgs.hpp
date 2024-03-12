// MP5 Series
class CUP_smg_MP5SD6: Rifle_Base_F {
    recoil = QCLASS(SMG_Base);
};
class CUP_smg_MP5A5: CUP_smg_MP5SD6 {};
class CUP_smg_MP5A5_Rail: CUP_smg_MP5A5 {};
class CUP_smg_MP5A5_Rail_VFG: CUP_smg_MP5A5_Rail {
    recoil = QCLASS(SMG_Foregrip);
};
class CUP_smg_MP5A5_Rail_AFG: CUP_smg_MP5A5_Rail {
    recoil = QCLASS(SMG_Foregrip);
};

// MP7
class CUP_smg_MP7: Rifle_Short_Base_F {
    recoil = QCLASS(SMG_Foregrip);
};

// Bizon
class CUP_smg_bizon: Rifle_Base_F {
    recoil = QCLASS(SMG_Base);
};

// PP-19 Vityaz
class CUP_smg_vityaz: CUP_smg_bizon {};
class CUP_smg_vityaz_vfg: CUP_smg_vityaz {
    recoil = QCLASS(SMG_Foregrip);
};
class CUP_smg_vityaz_top_rail: CUP_smg_vityaz {};
class CUP_smg_vityaz_vfg_top_rail: CUP_smg_vityaz_top_rail {
    recoil = QCLASS(SMG_Foregrip);
};
class CUP_smg_vityaz_vfg_front_rail: CUP_smg_vityaz_top_rail {
    recoil = QCLASS(SMG_Foregrip);
};

// SR-3M Vikhr
class CUP_arifle_SR3M_Vikhr: Rifle_Base_F {
    recoil = QCLASS(SMG_Base);
};

class CUP_arifle_SR3M_Vikhr_VFG: CUP_arifle_SR3M_Vikhr {
    recoil = QCLASS(SMG_Foregrip);
};
class CUP_arifle_SR3M_Vikhr_top_rail: CUP_arifle_SR3M_Vikhr {};
class CUP_arifle_SR3M_Vikhr_VFG_top_rail: CUP_arifle_SR3M_Vikhr_top_rail {
    recoil = QCLASS(SMG_Foregrip);
};
