// Velko R4/R5
class arifle_Velko_lxWS: arifle_Velko_base_lxWS {
    recoil = QCLASS(556_Long);
};

class arifle_VelkoR5_lxWS: arifle_Velko_base_lxWS {
    recoil = QCLASS(556_Short);
};

class arifle_VelkoR5_GL_lxWS: arifle_VelkoR5_lxWS {
    recoil = QCLASS(556_Short_FG);
};

// XMS
class arifle_XMS_Base_lxWS: arifle_SPAR_01_base_F {
    recoil = QCLASS(556_Short_BP);
};

class arifle_XMS_GL_lxWS: arifle_XMS_Base_lxWS  {
    recoil = QCLASS(556_Short_FG);
};

class arifle_XMS_Shot_lxWS: arifle_XMS_Base_lxWS {
    recoil = QCLASS(556_Short_FG);
};
