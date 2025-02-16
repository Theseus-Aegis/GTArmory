class CfgWeapons {
    class CUP_H_OpsCore_Green;
    class CLASS(OpsCore_Medic): CUP_H_OpsCore_Green {
        author = ECSTRING(main,Author);
        displayName = "OpsCore FAST (Medic)";
        scope = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "flag"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\cup_opscore_medic_co.paa),
            QPATHTOF(data\cup_opscore_medic_1_co.paa),
            QPATHTOF(data\cup_opscore_medic_2_co.paa),
            ""
        };
    };
    class CUP_H_OpsCore_Black;
    class CLASS(OpsCore_Grijs): CUP_H_OpsCore_Black {
        author = ECSTRING(main,Author);
        displayName = "OpsCore FAST (Grijs)";
        scope = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "flag"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\cup_opscore_grijs_co.paa),
            QPATHTOF(data\cup_opscore_grijs_1_co.paa),
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            ""
        };
    };
    class CUP_H_OpsCore_Black_NoHS;
    class CLASS(OpsCore_Grijs_NoHS): CUP_H_OpsCore_Black_NoHS {
        author = ECSTRING(main,Author);
        displayName = "OpsCore FAST (Grijs, No Headset)";
        scope = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "flag"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\cup_opscore_grijs_co.paa),
            QPATHTOF(data\cup_opscore_grijs_1_co.paa),
            "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\CUP_ops_core_parts_2_co.paa",
            ""
        };
    };

    class tacs_Cap_BlackLogo;
    class CLASS(Cap_GT): tacs_Cap_BlackLogo {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Cap (GT Armory)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_gtarmory_co.paa)};
    };

    class CUP_H_USA_Cap_AU_DEF;
    class CLASS(Cap_DEF_NYMets): CUP_H_USA_Cap_AU_DEF {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Cap w/DEF (New York Mets)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_def_nymets_co.paa)};
    };

    class CLASS(Cap_DEF_ASU): CUP_H_USA_Cap_AU_DEF {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Cap w/DEF (Arizona State)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_def_asu_co.paa)};
    };

    class H_Cap_White_IDAP_F;
    class CLASS(Cap_Medic): H_Cap_White_IDAP_F {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Cap (Medic)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_medic_co.paa)};
    };

    // PASGT
    class H_PASGT_basic_white_F;
    class CLASS(PASGT_ASU): H_PASGT_basic_white_F {
        displayName = "PASGT Helmet (ASU)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\pasgt_asu_co.paa)};
        picture = QPATHTOF(ui\pasgt_asu_ca.paa);
    };
};
