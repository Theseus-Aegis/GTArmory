// Velko R4 / R5 - All rifles inherit

class arifle_Velko_lxWS: arifle_Velko_base_lxWS {
    recoil = QCLASS(556_LongBarrel);
};

class arifle_VelkoR5_lxWS: arifle_Velko_base_lxWS {
    recoil = QCLASS(556_ShortBarrel);
};

class arifle_VelkoR5_GL_lxWS: arifle_VelkoR5_lxWS {
    recoil = QCLASS(556_GL_Short);
};
