// 5.56x45mm (EMAG, Black)
class CLASS(30Rnd_556x45_Ball_EMAG): 30Rnd_556x45_Stanag {
    MACRO_SCOPE
    MACRO_556_MAGAZINE_EMAG_Black
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    displayName = "5.56mm 30Rnd EMAG (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_EMAG): CLASS(30Rnd_556x45_Ball_EMAG) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 30Rnd EMAG [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_EMAG): CLASS(30Rnd_556x45_Ball_EMAG) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 30Rnd EMAG (EPR)";
};
class CLASS(30Rnd_556x45_AP_EMAG): CLASS(30Rnd_556x45_EPR_EMAG) {
    ammo = QCLASS(556x45_AP);
    descriptionShort = "5.56x45mm AP Reload Tracer";
    displayName = "5.56mm 30Rnd EMAG (AP)";
};

// 5.56x45mm (EMAG, Tan)
class CLASS(30Rnd_556x45_Ball_EMAG_Tan): CLASS(30Rnd_556x45_Ball_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan
    displayName = "5.56mm 30Rnd EMAG Tan (Ball)";
};
class CLASS(30Rnd_556x45_Ball_Tracer_EMAG_Tan): CLASS(30Rnd_556x45_Ball_Tracer_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan
    displayName = "5.56mm 30Rnd EMAG Tan [T] (Ball)";
};
class CLASS(30Rnd_556x45_EPR_EMAG_Tan): CLASS(30Rnd_556x45_EPR_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan
    displayName = "5.56mm 30Rnd EMAG Tan (EPR)";
};
class CLASS(30Rnd_556x45_AP_EMAG_Tan): CLASS(30Rnd_556x45_AP_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan
    displayName = "5.56mm 30Rnd EMAG Tan (AP)";
};

// 5.56x45mm (PMAG, Black)
class CLASS(30Rnd_556x45_Ball_PMAG): CLASS(30Rnd_556x45_Ball_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black
    displayName = "5.56mm 30Rnd PMAG (Ball)";
};
class CLASS(30Rnd_556x45_Ball_Tracer_PMAG): CLASS(30Rnd_556x45_Ball_Tracer_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black
    displayName = "5.56mm 30Rnd PMAG [T] (Ball)";
};
class CLASS(30Rnd_556x45_EPR_PMAG): CLASS(30Rnd_556x45_EPR_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black
    displayName = "5.56mm 30Rnd PMAG (EPR)";
};
class CLASS(30Rnd_556x45_AP_PMAG): CLASS(30Rnd_556x45_AP_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black
    displayName = "5.56mm 30Rnd PMAG (AP)";
};

// 5.56x45mm (PMAG, Tan)
class CLASS(30Rnd_556x45_Ball_PMAG_Tan): CLASS(30Rnd_556x45_Ball_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan
    displayName = "5.56mm 30Rnd PMAG Tan (Ball)";
};
class CLASS(30Rnd_556x45_Ball_Tracer_PMAG_Tan): CLASS(30Rnd_556x45_Ball_Tracer_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan
    displayName = "5.56mm 30Rnd PMAG Tan [T] (Ball)";
};
class CLASS(30Rnd_556x45_EPR_PMAG_Tan): CLASS(30Rnd_556x45_EPR_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan
    displayName = "5.56mm 30Rnd PMAG Tan (EPR)";
};
class CLASS(30Rnd_556x45_AP_PMAG_Tan): CLASS(30Rnd_556x45_AP_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan
    displayName = "5.56mm 30Rnd PMAG Tan (AP)";
};

// 5.56x45mm Belt
class CLASS(200Rnd_556x45_Ball_Belt): 200Rnd_556x45_Box_F {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    displayName = "5.56mm 200Rnd Belt [TE4] (Ball)";
    tracersEvery = 4;
    mass = 40;
};
class CLASS(200Rnd_556x45_Ball_Tracer_Belt): CLASS(200Rnd_556x45_Ball_Belt) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 200Rnd Belt [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(200Rnd_556x45_EPR_Belt): CLASS(200Rnd_556x45_Ball_Belt) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
    displayName = "5.56mm 200Rnd Belt [TE4] (EPR)";
};

// 5.56x45mm AK
class CLASS(30Rnd_556x45_Ball_AK): CUP_30Rnd_556x45_AK {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    displayName = "5.56mm 30Rnd AK (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_AK): CLASS(30Rnd_556x45_Ball_AK) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 30Rnd AK [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_AK): CLASS(30Rnd_556x45_Ball_AK) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 30Rnd AK (EPR)";
};
class CLASS(30Rnd_556x45_AP_AK): CLASS(30Rnd_556x45_EPR_AK) {
    ammo = QCLASS(556x45_AP);
    descriptionShort = "5.56x45mm AP Reload Tracer";
    displayName = "5.56mm 30Rnd AK (AP)";
};

// 5.56x45mm G36
class CLASS(30Rnd_556x45_Ball_G36): CUP_30Rnd_TE1_Green_Tracer_556x45_G36 {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    displayName = "5.56mm 30Rnd G36 (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_G36): CLASS(30Rnd_556x45_Ball_G36) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 30Rnd G36 [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_G36): CLASS(30Rnd_556x45_Ball_G36) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 30Rnd G36 (EPR)";
};
class CLASS(30Rnd_556x45_AP_G36): CLASS(30Rnd_556x45_Ball_G36) {
    ammo = QCLASS(556x45_AP);
    descriptionShort = "5.56x45mm AP Reload Tracer";
    displayName = "5.56mm 30Rnd G36 (AP)";
};

// 5.56x45mm FAMAS
class CLASS(25Rnd_556x45_Ball_FAMAS): CUP_25Rnd_556x45_Famas {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    displayName = "5.56mm 25Rnd FAMAS (Ball)";
    lastRoundsTracer = 4;
    mass = 9;
};
class CLASS(25Rnd_556x45_Ball_Tracer_FAMAS): CLASS(25Rnd_556x45_Ball_FAMAS) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 25Rnd FAMAS [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(25Rnd_556x45_EPR_FAMAS): CLASS(25Rnd_556x45_Ball_FAMAS) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 25Rnd FAMAS (EPR)";
};
class CLASS(25Rnd_556x45_AP_FAMAS): CLASS(25Rnd_556x45_Ball_FAMAS) {
    ammo = QCLASS(556x45_AP);
    descriptionShort = "5.56x45mm AP Reload Tracer";
    displayName = "5.56mm 25Rnd FAMAS (AP)";
};

// 5.56x45mm SG55X Series
class CLASS(30Rnd_556x45_Ball_SG): hlc_30Rnd_556x45_EPR_sg550 {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    displayName = "5.56mm 30Rnd SiG (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_SG): CLASS(30Rnd_556x45_Ball_SG) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 30Rnd SiG [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_SG): CLASS(30Rnd_556x45_Ball_SG) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 30Rnd SiG (EPR)";
};
class CLASS(30Rnd_556x45_AP_SG): CLASS(30Rnd_556x45_EPR_SG) {
    ammo = QCLASS(556x45_AP);
    descriptionShort = "5.56x45mm AP Reload Tracer";
    displayName = "5.56mm 30Rnd SiG (AP)";
};

// 5.56x45mm AUG
class CLASS(30Rnd_556x45_Ball_AUG): hlc_30Rnd_556x45_B_AUG {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    displayName = "5.56mm 30Rnd AUG (Ball)";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_AUG): CLASS(30Rnd_556x45_Ball_AUG) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 30Rnd AUG [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_AUG): CLASS(30Rnd_556x45_Ball_AUG) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 30Rnd AUG (EPR)";
};
class CLASS(30Rnd_556x45_AP_AUG): CLASS(30Rnd_556x45_EPR_AUG) {
    ammo = QCLASS(556x45_AP);
    descriptionShort = "5.56x45mm AP Reload Tracer";
    displayName = "5.56mm 30Rnd AUG (AP)";
};

// 5.56x45mm AUG 42Rnd
class CLASS(42Rnd_556x45_Ball_AUG): hlc_40Rnd_556x45_B_AUG {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    displayName = "5.56mm 42Rnd AUG (Ball)";
    lastRoundsTracer = 4;
    mass = 15;
};
class CLASS(42Rnd_556x45_Ball_Tracer_AUG): CLASS(42Rnd_556x45_Ball_AUG) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 42Rnd AUG [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(42Rnd_556x45_EPR_AUG): CLASS(42Rnd_556x45_Ball_AUG) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 42Rnd AUG (EPR)";
};
class CLASS(42Rnd_556x45_AP_AUG): CLASS(42Rnd_556x45_EPR_AUG) {
    ammo = QCLASS(556x45_AP);
    descriptionShort = "5.56x45mm EPR Reload Tracer";
    displayName = "5.56mm 42Rnd AUG (AP)";
};

// 5.56x45mm Surefire 60Rnd
class CLASS(60Rnd_556x45_Ball_Surefire): CUP_60Rnd_556x45_SureFire {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    displayName = "5.56mm 60Rnd Surefire [TE4] (Ball)";
    tracersEvery = 4;
    mass = 20;
};
class CLASS(60Rnd_556x45_Ball_Tracer_Surefire): CLASS(60Rnd_556x45_Ball_Surefire) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 60Rnd Surefire [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(60Rnd_556x45_EPR_Surefire): CLASS(60Rnd_556x45_Ball_Surefire) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
    displayName = "5.56mm 60Rnd Surefire [TE4] (EPR)";
};

// 5.56x45mm Drum 150
class CLASS(150Rnd_556x45_Ball_Drum): 150Rnd_556x45_Drum_Mag_F {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    displayName = "5.56mm 150Rnd Drum [TE4] (Ball)";
    tracersEvery = 4;
    mass = 35;
};
class CLASS(150Rnd_556x45_Ball_Tracer_Drum): CLASS(150Rnd_556x45_Ball_Drum) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 150Rnd Drum [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(150Rnd_556x45_EPR_Drum): CLASS(150Rnd_556x45_Ball_Drum) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
    displayName = "5.56mm 150Rnd Drum [TE4] (EPR)";
};

/// 5.56x45mm Beta-C
class CLASS(100Rnd_556x45_Ball_BetaC): CUP_100Rnd_556x45_BetaCMag {
    MACRO_SCOPE
    ammo = QCLASS(556x45_Ball);
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    displayName = "5.56mm 100Rnd Beta-C [TE4] (Ball)";
    tracersEvery = 4;
    mass = 30;
};
class CLASS(100Rnd_556x45_Ball_Tracer_BetaC): CLASS(100Rnd_556x45_Ball_BetaC) {
    descriptionShort = "5.56x45mm Ball Tracer";
    displayName = "5.56mm 100Rnd Beta-C [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(100Rnd_556x45_EPR_BetaC): CLASS(100Rnd_556x45_Ball_BetaC) {
    ammo = QCLASS(556x45_EPR);
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
    displayName = "5.56mm 100Rnd Beta-C [TE4] (EPR)";
};
