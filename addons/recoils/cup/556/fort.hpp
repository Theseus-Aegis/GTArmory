// Fort Rifles / X95s (TAVORs)

// Fort 221 - Short Bullpup
class CUP_arifle_Fort221: arifle_TRG20_F {
    recoil = QCLASS(556_Bullpup_Short);
};
class CUP_arifle_X95: Tavor_base_F {
    recoil = QCLASS(556_Bullpup_Short);
};
// Foregrip
class CUP_arifle_X95_Grippod: CUP_arifle_X95 {
    recoil = QCLASS(556_Bullpup_Foregrip_Short);
};

// Fort 222 - Long Barrel
class CUP_arifle_Fort222: arifle_TRG21_F {
    recoil = QCLASS(556_Bullpup_Long);
};

// Fort 224 - Short Barrel
class CUP_arifle_Fort224: CUP_arifle_X95 {
    recoil = QCLASS(556_Bullpup_Short);
};
// Foregrip
class CUP_arifle_Fort224_Grippod: CUP_arifle_X95_Grippod {
    recoil = QCLASS(556_Bullpup_Foregrip_Short);
};
