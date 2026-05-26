#include "famas_base.hpp"

class CLASS(Famas_G2): CLASS(Famas_Base) {
    baseWeapon = QCLASS(Famas_G2);
    descriptionShort = "";
    displayName = "FAMAS G2";
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\famas\animations\famas_new_high_2.rtm)};
    hiddenSelections[] = {
        "CamoG2_1",
        "CamoG2_2",
        "CamoG2_3",
        "CamoG2_Low",
        "CamoRail",
        "CamoF1_2",
        "CamoF1_3"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\famas\famas_g2_1.paa),
        QPATHTOF(data\famas\famas_g2_2.paa),
        QPATHTOF(data\famas\famas_g2_3.paa),
        QPATHTOF(data\famas\famas_low.paa),
        QPATHTOF(data\famas\rail_famas.paa),
        QPATHTOF(data\famas\famas_2.paa),
        QPATHTOF(data\famas\famas_3.paa)
    };
    model = QPATHTOF(data\famas\Famas_G2.p3d);
    picture = QPATHTOF(ui\icon_famas_g2_ca.paa);
    scope = 2;
    scopeCurator = 2;
};

class CLASS(Famas_G2_Grip): CLASS(Famas_Base) {
    baseWeapon = QCLASS(Famas_G2_Grip);
    displayName = "FAMAS G2 (Grip)";
    hiddenSelections[] = {
        "CamoG2_1",
        "CamoG2_2",
        "CamoG2_3",
        "CamoG2_Low",
        "CamoRail",
        "CamoG2_Grip",
        "CamoF1_2",
        "CamoF1_3"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\famas\famas_g2_1.paa),
        QPATHTOF(data\famas\famas_g2_2.paa),
        QPATHTOF(data\famas\famas_g2_3.paa),
        QPATHTOF(data\famas\famas_low.paa),
        QPATHTOF(data\famas\rail_famas.paa),
        QPATHTOF(data\famas\handgrip.paa),
        QPATHTOF(data\famas\famas_2.paa),
        QPATHTOF(data\famas\famas_3.paa)
    };
    model = QPATHTOF(data\famas\Famas_G2_HG.p3d);
    picture = QPATHTOF(ui\icon_famas_g2_grip_ca.paa);
    recoil = QCLASS(556_Long_FG);
    scope = 2;
    scopeCurator = 2;
};

class CLASS(Famas_G2_GL): CLASS(Famas_GL_Base) {
    baseWeapon = QCLASS(Famas_G2_GL);
    descriptionShort = "";
    displayName = "FAMAS G2 (GL)";
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(data\famas\animations\famas_new_gl.rtm)};
    hiddenSelections[] = {
        "CamoG2_1",
        "CamoG2_2",
        "CamoG2_3",
        "CamoG2_Low",
        "CamoRail",
        "CamoF1_2",
        "CamoF1_3",
        "CamoM203",
        "CamoM203_Low"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\famas\famas_g2_1.paa),
        QPATHTOF(data\famas\famas_g2_2.paa),
        QPATHTOF(data\famas\famas_g2_3.paa),
        QPATHTOF(data\famas\famas_low.paa),
        QPATHTOF(data\famas\rail_famas.paa),
        QPATHTOF(data\famas\famas_2.paa),
        QPATHTOF(data\famas\famas_3.paa),
        QPATHTOF(data\famas\m203.paa),
        QPATHTOF(data\famas\m203_low.paa)
    };
    model = QPATHTOF(data\famas\Famas_G2_M203.p3d);
    muzzles[] = {"this", QCLASS(Famas_M203)};
    picture = QPATHTOF(ui\icon_famas_g2_gl_ca.paa);
    recoil = QCLASS(556_Long_FG);
    scope = 2;
    scopeCurator = 2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};
