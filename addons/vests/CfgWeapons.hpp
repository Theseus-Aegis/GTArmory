class CfgWeapons {
    class V_PlateCarrierIAGL_oli;
    class CLASS(EODHeavyVest_Blk): V_PlateCarrierIAGL_oli {
        author = "GilleeDoo, Mike";
        displayName = "EOD Heavy Vest (Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip_ia_vest01_blk_co.paa),
            QPATHTOF(data\ga_carrier_gl_rig_blk_co.paa)
        };
        picture = QPATHTOF(ui\icon_ga_carrier_gl_rig_blk.paa);
    };
    class CLASS(EODHeavyVest_Gry): CLASS(EODHeavyVest_Blk) {
        author = "GilleeDoo, Mike";
        displayName = "EOD Heavy Vest (Grijs)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\equip_ia_vest01_gry_co.paa),
            QPATHTOF(data\ga_carrier_gl_rig_gry_co.paa)
        };
        picture = QPATHTOF(ui\icon_ga_carrier_gl_rig_gry.paa);
    };
};
