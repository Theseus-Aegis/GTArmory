// XMS Rifles - All rifles inherit

// XMS - Short Barrel
class arifle_XMS_Base_lxWS: arifle_SPAR_01_base_F {
    recoil = QCLASS(556_Bullpup_Foregrip_Short);
};

class arifle_XMS_GL_lxWS: arifle_XMS_Base_lxWS  {
    recoil = QCLASS(556_GL_Short);
};

class arifle_XMS_Shot_lxWS: arifle_XMS_Base_lxWS {
    recoil = QCLASS(556_GL_Short);
};
