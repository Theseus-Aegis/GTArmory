class 7Rnd_127x33_Mag;
class CLASS(7Rnd_127x33_Ball): 7Rnd_127x33_Mag {
    MACRO_SCOPE;
    // Technically wrong, x55 vs x33, but I don't really care
    // I don't know anything about bullets to make a different ammo type
    ammo = QCLASS(127x55_AP);
    displayName = "8Rnd .44 RM (Ball)";
    displayNameShort = "Ball";
    descriptionShort = ".44 RM Ball Reload Tracer";
    lastRoundsTracer = 1;
};
