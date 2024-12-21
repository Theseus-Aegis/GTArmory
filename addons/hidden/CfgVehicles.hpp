class CfgVehicles {
    class CUP_supplyCrate_Base;
    class CUP_VABox: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_GER: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_USARMY: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_CDF: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_GB: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_NAPA: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_PMC: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_RACS: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_TK_GUE: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_UN: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_ChDKZ: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_RU: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_SLA: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_TK: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_TKMILITIA: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_USMC: CUP_supplyCrate_Base {
        scope = 1;
    };
    class CUP_VABox_ACR: CUP_supplyCrate_Base {
        scope = 1;
    };

    // Intel Items that conflict with Theseus' intel collect
    class Land_File1_F;
    class Intel_File1_F: Land_File1_F {
        scope = 1;
        scopeCurator = 1;
    };
    class Land_File2_F;
    class Intel_File2_F: Land_File2_F {
        scope = 1;
        scopeCurator = 1;
    };
    class Land_Photos_V3_F;
    class Intel_Photos_F: Land_Photos_V3_F {
        scope = 1;
        scopeCurator = 1;
    };

    class ace_intelitems_base;
    class acex_intelitems_document: ace_intelitems_base {
        scope = 1;
        scopeCurator = 1;
    };
    class acex_intelitems_notepad: ace_intelitems_base {
        scope = 1;
        scopeCurator = 1;
    };
    class acex_intelitems_photo: ace_intelitems_base {
        scope = 1;
        scopeCurator = 1;
    };
};
