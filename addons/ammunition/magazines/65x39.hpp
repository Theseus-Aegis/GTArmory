// 6.5x39mm (MX, Sand)
class CLASS(30Rnd_65x39_Ball_MX_Sand): 30Rnd_65x39_caseless_mag {
    MACRO_SCOPE
    ammo = QCLASS(65x39_Ball);
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    displayName = "6.5mm 30Rnd MX Sand (Ball)";
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_65x39_Ball_Tracer_MX_Sand): CLASS(30Rnd_65x39_Ball_MX_Sand) {
    descriptionShort = "6.5x39mm Ball Tracer";
    displayName = "6.5mm 30Rnd MX Sand [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_65x39_EPR_MX_Sand): CLASS(30Rnd_65x39_Ball_MX_Sand) {
    ammo = QCLASS(65x39_EPR);
    descriptionShort = "6.5x39mm EPR Reload Tracer";
    displayName = "6.5mm 30Rnd MX Sand (EPR)";
};
class CLASS(30Rnd_65x39_AP_MX_Sand): CLASS(30Rnd_65x39_EPR_MX_Sand) {
    ammo = QCLASS(65x39_AP);
    descriptionShort = "6.5x39mm AP Reload Tracer";
    displayName = "6.5mm 30Rnd MX Sand (AP)";
};

// 6.5x39mm (MX, Black)
class CLASS(30Rnd_65x39_Ball_MX_Black): CLASS(30Rnd_65x39_Ball_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black
    displayName = "6.5mm 30Rnd MX Black (Ball)";
};
class CLASS(30Rnd_65x39_Ball_Tracer_MX_Black): CLASS(30Rnd_65x39_Ball_Tracer_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black
    displayName = "6.5mm 30Rnd MX Black [T] (Ball)";
};
class CLASS(30Rnd_65x39_EPR_MX_Black): CLASS(30Rnd_65x39_EPR_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black
    displayName = "6.5mm 30Rnd MX Black (EPR)";
};
class CLASS(30Rnd_65x39_AP_MX_Black): CLASS(30Rnd_65x39_AP_MX_Sand) {
    MACRO_65_MAGAZINE_MX_Black
    displayName = "6.5mm 30Rnd MX Black (AP)";
};

// 6.5x39mm (MX, MG Sand)
class CLASS(100Rnd_65x39_Ball_MX_LSW_Sand): 100Rnd_65x39_caseless_mag {
    MACRO_SCOPE
    ammo = QCLASS(65x39_Ball);
    descriptionShort = "6.5x39mm Ball Tracer Every 4";
    displayName = "6.5mm 100Rnd MX LSW Sand [TE4] (Ball)";
    tracersEvery = 4;
};
class CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Sand): CLASS(100Rnd_65x39_Ball_MX_LSW_Sand) {
    descriptionShort = "6.5x39mm Ball Tracer";
    displayName = "6.5mm 100Rnd MX LSW Sand [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(100Rnd_65x39_EPR_MX_LSW_Sand): CLASS(100Rnd_65x39_Ball_MX_LSW_Sand) {
    ammo = QCLASS(65x39_EPR);
    descriptionShort = "6.5x39mm EPR Tracer Every 4";
    displayName = "6.5mm 100Rnd MX LSW Sand [TE4] (EPR)";
};

// 6.5x39mm (MX, MG Black)
class CLASS(100Rnd_65x39_Ball_MX_LSW_Black): CLASS(100Rnd_65x39_Ball_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Black
    displayName = "6.5mm 100Rnd MX LSW Black [TE4] (Ball)";
};
class CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Black): CLASS(100Rnd_65x39_Ball_Tracer_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Black
    displayName = "6.5mm 100Rnd MX LSW Black [T] (Ball)";
};
class CLASS(100Rnd_65x39_EPR_MX_LSW_Black): CLASS(100Rnd_65x39_EPR_MX_LSW_Sand) {
    MACRO_65_MAGAZINE_MX_LSW_Black
    displayName = "6.5mm 100Rnd MX LSW Black [TE4] (EPR)";
};

// 6.5x39mm (GROT/MSBS)
class CLASS(30Rnd_65x39_Ball_MSBS): 30Rnd_65x39_caseless_msbs_mag {
    MACRO_SCOPE
    ammo = QCLASS(65x39_Ball);
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    displayName = "6.5mm 30Rnd MSBS (Ball)";
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_65x39_Ball_Tracer_MSBS): CLASS(30Rnd_65x39_Ball_MSBS) {
    descriptionShort = "6.5x39mm Ball Tracer";
    displayName = "6.5mm 30Rnd MSBS [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_65x39_EPR_MSBS): CLASS(30Rnd_65x39_Ball_MSBS) {
    ammo = QCLASS(65x39_EPR);
    descriptionShort = "6.5x39mm EPR Reload Tracer";
    displayName = "6.5mm 30Rnd MSBS (EPR)";
};
class CLASS(30Rnd_65x39_AP_MSBS): CLASS(30Rnd_65x39_EPR_MSBS) {
    ammo = QCLASS(65x39_AP);
    descriptionShort = "6.5x39mm AP Reload Tracer";
    displayName = "6.5mm 30Rnd MSBS (AP)";
};

// 6.5x39mm Katiba/Type-115
class CLASS(30Rnd_65x39_Ball_Katiba): 30Rnd_65x39_caseless_green {
    MACRO_SCOPE
    ammo = QCLASS(65x39_Ball);
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    displayName = "6.5mm 30Rnd Katiba (Ball)";
    lastRoundsTracer = 4;
};
class CLASS(30Rnd_65x39_Ball_Tracer_Katiba): CLASS(30Rnd_65x39_Ball_Katiba) {
    descriptionShort = "6.5x39mm Ball Tracer";
    displayName = "6.5mm 30Rnd Katiba [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(30Rnd_65x39_EPR_Katiba): CLASS(30Rnd_65x39_Ball_Katiba) {
    ammo = QCLASS(65x39_EPR);
    descriptionShort = "6.5x39mm EPR Reload Tracer";
    displayName = "6.5mm 30Rnd Katiba (EPR)";
};
class CLASS(30Rnd_65x39_AP_Katiba): CLASS(30Rnd_65x39_EPR_Katiba) {
    ammo = QCLASS(65x39_AP);
    descriptionShort = "6.5x39mm AP Reload Tracer";
    displayName = "6.5mm 30Rnd Katiba (AP)";
};

// 6.5x39mm Belt
class CLASS(200Rnd_65x39_Ball_Belt): 200Rnd_65x39_cased_Box {
    MACRO_SCOPE
    ammo = QCLASS(65x39_Ball);
    descriptionShort = "6.5x39mm Ball Tracer Every 4";
    displayName = "6.5mm 200Rnd Belt [TE4] (Ball)";
    tracersEvery = 4;
};
class CLASS(200Rnd_65x39_Ball_Tracer_Belt): CLASS(200Rnd_65x39_Ball_Belt) {
    descriptionShort = "6.5x39mm Ball Tracer";
    displayName = "6.5mm 200Rnd Belt [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(200Rnd_65x39_EPR_Belt): CLASS(200Rnd_65x39_Ball_Belt) {
    ammo = QCLASS(65x39_EPR);
    descriptionShort = "6.5x39mm EPR Tracer Every 4";
    displayName = "6.5mm 200Rnd Belt [TE4] (EPR)";
};

// 6.5x39mm DMR
class CLASS(20Rnd_65x39_Ball): 20Rnd_650x39_Cased_Mag_F {
    MACRO_SCOPE
    ammo = QCLASS(65x39_Ball);
    descriptionShort = "6.5x39mm Ball Reload Tracer";
    displayName = "6.5mm 20Rnd (Ball)";
    lastRoundsTracer = 2;
};
class CLASS(20Rnd_65x39_Ball_Tracer): CLASS(20Rnd_65x39_Ball) {
    descriptionShort = "6.5x39mm Ball Tracer";
    displayName = "6.5mm 20Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(20Rnd_65x39_AP): CLASS(20Rnd_65x39_Ball) {
    ammo = QCLASS(65x39_AP);
    descriptionShort = "6.5x39mm AP Reload Tracer";
    displayName = "6.5mm 20Rnd (AP)";
};
