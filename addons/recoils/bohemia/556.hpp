// F2000
class arifle_Mk20_F: mk20_base_F {
    recoil = QCLASS(556_Long_BP);
};
class arifle_Mk20C_F: mk20_base_F {
    recoil = QCLASS(556_Long_BP);
};
class arifle_Mk20_GL_F: mk20_base_F {
    recoil = QCLASS(556_Long_BP);
};

// HK416
class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F {
    recoil = QCLASS(556_Short);
};
class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F {
    recoil = QCLASS(556_Short);
};
class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F {
    recoil = QCLASS(556_Short);
};
class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F {
    recoil = QCLASS(556_Short_FG);
};
class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F {
    recoil = QCLASS(556_Short_FG);
};
class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F {
    recoil = QCLASS(556_Short_FG);
};
class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F {
    recoil = QCLASS(556_Medium_FG);
};
class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F {
    recoil = QCLASS(556_Medium_FG);
};
class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F {
    recoil = QCLASS(556_Medium_FG);
};

// TAR-21
class arifle_TRG21_F: Tavor_base_F {
    recoil = QCLASS(556_Long_BP);
};
class arifle_TRG21_GL_F: arifle_TRG21_F {
    recoil = QCLASS(556_Long_BP);
};
class arifle_TRG20_F: Tavor_base_F {
    recoil = QCLASS(556_Medium_BP);
};

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

// Minimi SPW
class LMG_03_F: LMG_03_base_F {
    recoil = QCLASS(556_Long_MG);
};
