// Tan variants (Black/Woodland inherit from these)
class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {
    displayName = "SCAR-L";
};

class CUP_arifle_Mk16_STD_FG: CUP_arifle_Mk16_STD {
    displayName = "SCAR-L (Front Grip)";
};

class CUP_arifle_Mk16_STD_SFG: CUP_arifle_Mk16_STD {
    displayName = "SCAR-L (Surefire Front Grip)";
};

// Requires Magfix (Inherits)
class CUP_arifle_Mk16_STD_EGLM: CUP_arifle_Mk16_STD {
    displayName = "SCAR-L (EGLM)";
    magazineWell[] = {"CBA_556x45_STANAG", "STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_SCAR_EGLM"};
};

class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {
    displayName = "SCAR-L MR";
};

class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {
    displayName = "SCAR-L CQC";
};

class CUP_arifle_Mk16_CQC_FG: CUP_arifle_Mk16_CQC {
    displayName = "SCAR-L CQC (Front Grip)";
};

class CUP_arifle_Mk16_CQC_AFG: CUP_arifle_Mk16_CQC_FG {
    displayName = "SCAR-L CQC (AFG)";
};

class CUP_arifle_Mk16_STD_AFG: CUP_arifle_Mk16_STD_FG {
    displayName = "SCAR-L (AFG)";
};

class CUP_arifle_Mk16_CQC_SFG: CUP_arifle_Mk16_CQC {
    displayName = "SCAR-L CQC (Surefire Front Grip)";
};

// Requires Magfix (Inherits)
class CUP_arifle_Mk16_CQC_EGLM: CUP_arifle_Mk16_CQC {
    displayName = "SCAR-L CQC (EGLM)";
    magazineWell[] = {"CBA_556x45_STANAG", "STANAG_556x45", "STANAG_556x45_Large", "CBA_556x45_SCAR_EGLM"};
};
