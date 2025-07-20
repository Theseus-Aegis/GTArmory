// 6.5x39mm (MX, Sand)
class CLASS(30Rnd_65x39_Ball_MX_Sand): 30Rnd_65x39_caseless_mag {
    MACRO_SCOPE;
    ammo = QCLASS(65x39_Ball);
    displayName = "6.5mm 30Rnd MX Sand (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(30Rnd_65x39_Ball_Tracer_MX_Sand): CLASS(30Rnd_65x39_Ball_MX_Sand) {
    displayName = "6.5mm 30Rnd MX Sand [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "6.5x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_65x39_EPR_MX_Sand): CLASS(30Rnd_65x39_Ball_MX_Sand) {
    ammo = QCLASS(65x39_EPR);
    displayName = "6.5mm 30Rnd MX Sand (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "6.5x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_65x39_AP_MX_Sand): CLASS(30Rnd_65x39_EPR_MX_Sand) {
    ammo = QCLASS(65x39_AP);
    displayName = "6.5mm 30Rnd MX Sand (AP)";
    displayNameShort = "AP";
    descriptionShort = "6.5x39mm AP Reload Tracer";
};

// 6.5x39mm (MX, Black)
class CLASS(30Rnd_65x39_Ball_MX_Black): CLASS(30Rnd_65x39_Ball_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black;
    displayName = "6.5mm 30Rnd MX Black (Ball)";
};
class CLASS(30Rnd_65x39_Ball_Tracer_MX_Black): CLASS(30Rnd_65x39_Ball_Tracer_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black;
    displayName = "6.5mm 30Rnd MX Black [T] (Ball)";
};
class CLASS(30Rnd_65x39_EPR_MX_Black): CLASS(30Rnd_65x39_EPR_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black;
    displayName = "6.5mm 30Rnd MX Black (EPR)";
};
class CLASS(30Rnd_65x39_AP_MX_Black): CLASS(30Rnd_65x39_AP_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black;
    displayName = "6.5mm 30Rnd MX Black (AP)";
};

// 6.5x39mm (MX, Khaki)
class CLASS(30Rnd_65x39_Ball_MX_Khaki): CLASS(30Rnd_65x39_Ball_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Khaki;
    displayName = "6.5mm 30Rnd MX Khaki (Ball)";
};
class CLASS(30Rnd_65x39_Ball_Tracer_MX_Khaki): CLASS(30Rnd_65x39_Ball_Tracer_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Khaki;
    displayName = "6.5mm 30Rnd MX Khaki [T] (Ball)";
};
class CLASS(30Rnd_65x39_EPR_MX_Khaki): CLASS(30Rnd_65x39_EPR_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Khaki;
    displayName = "6.5mm 30Rnd MX Khaki (EPR)";
};
class CLASS(30Rnd_65x39_AP_MX_Khaki): CLASS(30Rnd_65x39_AP_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Khaki;
    displayName = "6.5mm 30Rnd MX Khaki (AP)";
};

// 6.5x39mm (MX, MG Sand)
class CLASS(100Rnd_65x39_Ball_MX_LSW_Sand): 100Rnd_65x39_caseless_mag {
    MACRO_SCOPE;
    ammo = QCLASS(65x39_Ball);
    displayName = "6.5mm 100Rnd MX LSW Sand [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "6.5x39mm Ball Tracer Every 4";
    tracersEvery = 4;
};
class CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Sand): CLASS(100Rnd_65x39_Ball_MX_LSW_Sand) {
    displayName = "6.5mm 100Rnd MX LSW Sand [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "6.5x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(100Rnd_65x39_EPR_MX_LSW_Sand): CLASS(100Rnd_65x39_Ball_MX_LSW_Sand) {
    ammo = QCLASS(65x39_EPR);
    displayName = "6.5mm 100Rnd MX LSW Sand [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "6.5x39mm EPR Tracer Every 4";
};

// 6.5x39mm (MX, MG Black)
class CLASS(100Rnd_65x39_Ball_MX_LSW_Black): CLASS(100Rnd_65x39_Ball_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Black;
    displayName = "6.5mm 100Rnd MX LSW Black [TE4] (Ball)";
};
class CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Black): CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Black;
    displayName = "6.5mm 100Rnd MX LSW Black [T] (Ball)";
};
class CLASS(100Rnd_65x39_EPR_MX_LSW_Black): CLASS(100Rnd_65x39_EPR_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Black;
    displayName = "6.5mm 100Rnd MX LSW Black [TE4] (EPR)";
};

// 6.5x39mm (MX, MG Khaki)
class CLASS(100Rnd_65x39_Ball_MX_LSW_Khaki): CLASS(100Rnd_65x39_Ball_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Khaki;
    displayName = "6.5mm 100Rnd MX LSW Khaki [TE4] (Ball)";
};
class CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Khaki): CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Khaki;
    displayName = "6.5mm 100Rnd MX LSW Khaki [T] (Ball)";
};
class CLASS(100Rnd_65x39_EPR_MX_LSW_Khaki): CLASS(100Rnd_65x39_EPR_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Khaki;
    displayName = "6.5mm 100Rnd MX LSW Khaki [TE4] (EPR)";
};

// 6.5x39mm (GROT/MSBS)
class CLASS(30Rnd_65x39_Ball_MSBS): 30Rnd_65x39_caseless_msbs_mag {
    MACRO_SCOPE;
    ammo = QCLASS(65x39_Ball);
    displayName = "6.5mm 30Rnd MSBS (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(30Rnd_65x39_Ball_Tracer_MSBS): CLASS(30Rnd_65x39_Ball_MSBS) {
    displayName = "6.5mm 30Rnd MSBS [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "6.5x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_65x39_EPR_MSBS): CLASS(30Rnd_65x39_Ball_MSBS) {
    ammo = QCLASS(65x39_EPR);
    displayName = "6.5mm 30Rnd MSBS (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "6.5x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_65x39_AP_MSBS): CLASS(30Rnd_65x39_EPR_MSBS) {
    ammo = QCLASS(65x39_AP);
    displayName = "6.5mm 30Rnd MSBS (AP)";
    displayNameShort = "AP";
    descriptionShort = "6.5x39mm AP Reload Tracer";
};

// 6.5x39mm Katiba/Type-115
class CLASS(30Rnd_65x39_Ball_Katiba): 30Rnd_65x39_caseless_green {
    MACRO_SCOPE;
    ammo = QCLASS(65x39_Ball);
    displayName = "6.5mm 30Rnd Katiba (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    lastRoundsTracer = 4;
    tracersEvery = 4;
};
class CLASS(30Rnd_65x39_Ball_Tracer_Katiba): CLASS(30Rnd_65x39_Ball_Katiba) {
    displayName = "6.5mm 30Rnd Katiba [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "6.5x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(30Rnd_65x39_EPR_Katiba): CLASS(30Rnd_65x39_Ball_Katiba) {
    ammo = QCLASS(65x39_EPR);
    displayName = "6.5mm 30Rnd Katiba (EPR)";
    displayNameShort = "EPR";
    descriptionShort = "6.5x39mm EPR Reload Tracer";
};
class CLASS(30Rnd_65x39_AP_Katiba): CLASS(30Rnd_65x39_EPR_Katiba) {
    ammo = QCLASS(65x39_AP);
    displayName = "6.5mm 30Rnd Katiba (AP)";
    displayNameShort = "AP";
    descriptionShort = "6.5x39mm AP Reload Tracer";
};

// 6.5x39mm Belt
class CLASS(200Rnd_65x39_Ball_Belt): 200Rnd_65x39_cased_Box {
    MACRO_SCOPE;
    ammo = QCLASS(65x39_Ball);
    displayName = "6.5mm 200Rnd Belt [TE4] (Ball)";
    displayNameShort = "Ball TE4";
    descriptionShort = "6.5x39mm Ball Tracer Every 4";
    tracersEvery = 4;
};
class CLASS(200Rnd_65x39_Ball_Tracer_Belt): CLASS(200Rnd_65x39_Ball_Belt) {
    displayName = "6.5mm 200Rnd Belt [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "6.5x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(200Rnd_65x39_EPR_Belt): CLASS(200Rnd_65x39_Ball_Belt) {
    ammo = QCLASS(65x39_EPR);
    displayName = "6.5mm 200Rnd Belt [TE4] (EPR)";
    displayNameShort = "EPR TE4";
    descriptionShort = "6.5x39mm EPR Tracer Every 4";
};

// 6.5x39mm DMR
class CLASS(20Rnd_65x39_Ball): 20Rnd_650x39_Cased_Mag_F {
    MACRO_SCOPE;
    ammo = QCLASS(65x39_Ball);
    displayName = "6.5mm 20Rnd (Ball)";
    displayNameShort = "Ball";
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    lastRoundsTracer = 2;
    tracersEvery = 4;
};
class CLASS(20Rnd_65x39_Ball_Tracer): CLASS(20Rnd_65x39_Ball) {
    displayName = "6.5mm 20Rnd [T] (Ball)";
    displayNameShort = "Ball Tracer";
    descriptionShort = "6.5x39mm Ball Tracer";
    tracersEvery = 1;
};
class CLASS(20Rnd_65x39_AP): CLASS(20Rnd_65x39_Ball) {
    ammo = QCLASS(65x39_AP);
    displayName = "6.5mm 20Rnd (AP)";
    displayNameShort = "AP";
    descriptionShort = "6.5x39mm AP Reload Tracer";
};
