class CfgWeapons {
    class CUP_H_OpsCore_Green;

    class CLASS(OpsCore_Medic): CUP_H_OpsCore_Green {
        scope = 2;
        author = "GilleeDoo, TyroneMF";
        displayName = CSTRING(OpsCore_Medic_Display);
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
};
