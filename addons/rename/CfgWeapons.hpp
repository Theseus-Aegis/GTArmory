class CfgWeapons {
    class optic_Hamr; // ACE Scopes
    class optic_Arco;
    class optic_MRCO;
    class arifle_MX_Base_F; // MX Series
    class arifle_MX_Black_F;
    class arifle_MX_GL_Black_F;
    class arifle_MX_SW_Black_F;
    class arifle_MXC_Black_F;
    class arifle_MXM_Black_F;

    // ACE 2D Scopes
    class ACE_optic_Hamr_2D: optic_Hamr {
        displayName = CSTRING(Hamr_2D_Display);
    };
    
    class ACE_optic_Arco_2D: optic_Arco {
        displayName = CSTRING(Arco_2D_Display);
    };
    
    class ACE_optic_MRCO_2D: optic_MRCO {
        displayName = CSTRING(MRCO_2D_Display);
    };
    
    // MX Series
    class arifle_MX_F: arifle_MX_Base_F {
        displayName = CSTRING(arifle_MX_F_Display);
    };
    class arifle_MX_GL_F: arifle_MX_Base_F {
        displayName = CSTRING(arifle_MX_GL_F_Display);
    };
    class arifle_MX_SW_F: arifle_MX_Base_F {
        displayName = CSTRING(arifle_MX_SW_F_Display);
    };
    class arifle_MXC_F: arifle_MX_Base_F {
        displayName = CSTRING(arifle_MXC_F_Display);
    };
    class arifle_MXM_F: arifle_MX_Base_F {
        displayName = CSTRING(arifle_MXM_F_Display);
    };
    class arifle_MX_khk_F: arifle_MX_Black_F {
        displayName = CSTRING(arifle_MX_khk_F_Display);
    };
    class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F {
        displayName = CSTRING(arifle_MX_GL_khk_F_Display);
    };
    class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F {
        displayName = CSTRING(arifle_MX_SW_khk_F_Display);
    };
    class arifle_MXC_khk_F: arifle_MXC_Black_F {
        displayName = CSTRING(arifle_MXC_khk_F_Display);
    };
    class arifle_MXM_khk_F: arifle_MXM_Black_F {
        displayName = CSTRING(arifle_MXM_khk_F_Display);
    };
};
