class CfgWeapons {
    class CUP_H_OpsCore_Green;
    class CLASS(OpsCore_Medic): CUP_H_OpsCore_Green {
        author = ECSTRING(main,Authors);
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

    class CUP_H_USA_Cap_AU_DEF;
    class CLASS(Cap_DEF_NYMets): CUP_H_USA_Cap_AU_DEF {
        author = "GilleeDoo";
        scope = 2;
        displayName = "Cap w/DEF (New York Mets)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\cap_def_nymets_co.paa)
        };
    };
};
