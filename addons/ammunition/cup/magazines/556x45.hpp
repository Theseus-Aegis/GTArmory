// 5.56x45mm (EMAG, Black)
class CLASS(30Rnd_556x45_Ball_EMAG): 30Rnd_556x45_Stanag {
    MACRO_SCOPE;
    MACRO_556_MAGAZINE_EMAG_Black;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd EMAG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_EMAG): CLASS(30Rnd_556x45_Ball_EMAG) {
    displayName = "5.56mm 30Rnd EMAG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_EMAG): CLASS(30Rnd_556x45_Ball_EMAG) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd EMAG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_EMAG): CLASS(30Rnd_556x45_EPR_EMAG) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd EMAG (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

// 5.56x45mm (EMAG, Tan)
class CLASS(30Rnd_556x45_Ball_EMAG_Tan): CLASS(30Rnd_556x45_Ball_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan;
    displayName = "5.56mm 30Rnd EMAG Tan (Ball)";
};
class CLASS(30Rnd_556x45_Ball_Tracer_EMAG_Tan): CLASS(30Rnd_556x45_Ball_Tracer_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan;
    displayName = "5.56mm 30Rnd EMAG Tan [T] (Ball)";
};
class CLASS(30Rnd_556x45_EPR_EMAG_Tan): CLASS(30Rnd_556x45_EPR_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan;
    displayName = "5.56mm 30Rnd EMAG Tan (EPR)";
};
class CLASS(30Rnd_556x45_AP_EMAG_Tan): CLASS(30Rnd_556x45_AP_EMAG) {
    MACRO_556_MAGAZINE_EMAG_Tan;
    displayName = "5.56mm 30Rnd EMAG Tan (AP)";
};

// 5.56x45mm (PMAG, Black)
class CLASS(30Rnd_556x45_Ball_PMAG): CLASS(30Rnd_556x45_Ball_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black;
    displayName = "5.56mm 30Rnd PMAG (Ball)";
};
class CLASS(30Rnd_556x45_Ball_Tracer_PMAG): CLASS(30Rnd_556x45_Ball_Tracer_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black;
    displayName = "5.56mm 30Rnd PMAG [T] (Ball)";
};
class CLASS(30Rnd_556x45_EPR_PMAG): CLASS(30Rnd_556x45_EPR_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black;
    displayName = "5.56mm 30Rnd PMAG (EPR)";
};
class CLASS(30Rnd_556x45_AP_PMAG): CLASS(30Rnd_556x45_AP_EMAG) {
    MACRO_556_MAGAZINE_PMAG_Black;
    displayName = "5.56mm 30Rnd PMAG (AP)";
};

// 5.56x45mm (PMAG, Tan)
class CLASS(30Rnd_556x45_Ball_PMAG_Tan): CLASS(30Rnd_556x45_Ball_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan;
    displayName = "5.56mm 30Rnd PMAG Coyote (Ball)";
};
class CLASS(30Rnd_556x45_Ball_Tracer_PMAG_Tan): CLASS(30Rnd_556x45_Ball_Tracer_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan;
    displayName = "5.56mm 30Rnd PMAG Coyote [T] (Ball)";
};
class CLASS(30Rnd_556x45_EPR_PMAG_Tan): CLASS(30Rnd_556x45_EPR_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan;
    displayName = "5.56mm 30Rnd PMAG Coyote (EPR)";
};
class CLASS(30Rnd_556x45_AP_PMAG_Tan): CLASS(30Rnd_556x45_AP_PMAG) {
    MACRO_556_MAGAZINE_PMAG_Tan;
    displayName = "5.56mm 30Rnd PMAG Coyote (AP)";
};

// 5.56x45mm AK
class CLASS(30Rnd_556x45_Ball_AK): CUP_30Rnd_556x45_AK {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd AK (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_AK): CLASS(30Rnd_556x45_Ball_AK) {
    displayName = "5.56mm 30Rnd AK [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_AK): CLASS(30Rnd_556x45_Ball_AK) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd AK (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_AK): CLASS(30Rnd_556x45_EPR_AK) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd AK (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

// 5.56x45mm G36
class CLASS(30Rnd_556x45_Ball_G36): CUP_30Rnd_TE1_Green_Tracer_556x45_G36 {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd G36 (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 0; // Required due to inheriting a tracer mag.
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_G36): CLASS(30Rnd_556x45_Ball_G36) {
    displayName = "5.56mm 30Rnd G36 [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_G36): CLASS(30Rnd_556x45_Ball_G36) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd G36 (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_G36): CLASS(30Rnd_556x45_Ball_G36) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd G36 (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

// 5.56x45mm FAMAS
class CLASS(25Rnd_556x45_Ball_FAMAS): CUP_25Rnd_556x45_Famas {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 25Rnd FAMAS (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 9;
};
class CLASS(25Rnd_556x45_Ball_Tracer_FAMAS): CLASS(25Rnd_556x45_Ball_FAMAS) {
    displayName = "5.56mm 25Rnd FAMAS [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(25Rnd_556x45_EPR_FAMAS): CLASS(25Rnd_556x45_Ball_FAMAS) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 25Rnd FAMAS (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(25Rnd_556x45_AP_FAMAS): CLASS(25Rnd_556x45_Ball_FAMAS) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 25Rnd FAMAS (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

// 5.56x45mm AUG
class CLASS(30Rnd_556x45_Ball_AUG): CUP_30Rnd_556x45_AUG {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 30Rnd AUG (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "5.56x45mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    mass = 10;
};
class CLASS(30Rnd_556x45_Ball_Tracer_AUG): CLASS(30Rnd_556x45_Ball_AUG) {
    displayName = "5.56mm 30Rnd AUG [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_556x45_EPR_AUG): CLASS(30Rnd_556x45_Ball_AUG) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 30Rnd AUG (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "5.56x45mm EPR Reload Tracer";
};
class CLASS(30Rnd_556x45_AP_AUG): CLASS(30Rnd_556x45_EPR_AUG) {
    ammo = QCLASS(556x45_AP);
    displayName = "5.56mm 30Rnd AUG (AP)";
    displayNameShort = "AP";
    descriptionShort = "5.56x45mm AP Reload Tracer";
};

// 5.56x45mm Surefire 60Rnd
class CLASS(60Rnd_556x45_Ball_Surefire): CUP_60Rnd_556x45_SureFire {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 60Rnd Surefire [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 20;
};
class CLASS(60Rnd_556x45_Ball_Tracer_Surefire): CLASS(60Rnd_556x45_Ball_Surefire) {
    displayName = "5.56mm 60Rnd Surefire [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(60Rnd_556x45_EPR_Surefire): CLASS(60Rnd_556x45_Ball_Surefire) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 60Rnd Surefire [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
};

/// 5.56x45mm Beta-C
class CLASS(100Rnd_556x45_Ball_BetaC): CUP_100Rnd_556x45_BetaCMag {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 100Rnd Beta-C [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 30;
};
class CLASS(100Rnd_556x45_Ball_Tracer_BetaC): CLASS(100Rnd_556x45_Ball_BetaC) {
    displayName = "5.56mm 100Rnd Beta-C [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(100Rnd_556x45_EPR_BetaC): CLASS(100Rnd_556x45_Ball_BetaC) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 100Rnd Beta-C [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
};

// 5.56x45mm M249 Pouch 100
class CLASS(100Rnd_556x54_Ball_Pouch): CUP_100Rnd_TE4_Green_Tracer_556x45_M249 {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 100Rnd M249 Pouch [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 30;
};
class CLASS(100Rnd_556x54_Ball_Tracer_Pouch): CLASS(100Rnd_556x54_Ball_Pouch) {
    displayName = "5.56mm 100Rnd M249 Pouch [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(100Rnd_556x54_EPR_Pouch): CLASS(100Rnd_556x54_Ball_Pouch) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 100Rnd M249 Pouch [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
};

// 5.56x45mm M249 Pouch 200
class CLASS(200Rnd_556x45_Ball_Pouch): CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 200Rnd M249 Pouch [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 40;
};
class CLASS(200Rnd_556x45_Ball_Tracer_Pouch): CLASS(200Rnd_556x45_Ball_Pouch) {
    displayName = "5.56mm 200Rnd M249 Pouch [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(200Rnd_556x45_EPR_Pouch): CLASS(200Rnd_556x45_Ball_Pouch) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 200Rnd M249 Pouch [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
};

// 5.56x45mm M249 Box 200
class CLASS(200Rnd_556x45_Ball_Box): CUP_200Rnd_TE4_Green_Tracer_556x45_M249 {
    MACRO_SCOPE;
    ammo = QCLASS(556x45_Ball);
    displayName = "5.56mm 200Rnd M249 Box [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "5.56x45mm Ball Tracer Every 4";
    tracersEvery = 4;
    mass = 40;
};
class CLASS(200Rnd_556x45_Ball_Tracer_Box): CLASS(200Rnd_556x45_Ball_Box) {
    displayName = "5.56mm 200Rnd M249 Box [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "5.56x45mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(200Rnd_556x45_EPR_Box): CLASS(200Rnd_556x45_Ball_Box) {
    ammo = QCLASS(556x45_EPR);
    displayName = "5.56mm 200Rnd M249 Box [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "5.56x45mm EPR Tracer Every 4";
};
