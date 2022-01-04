// BP
class CLASS(30Rnd_545x39_BP_Mag_Bakelite): 30Rnd_545x39_Mag_F {
    author = ECSTRING(main,Author);
    displayName = "5.45mm 30Rnd Bakelite [RT] Yellow (BP)";
    scope = 2;
    ammo = QCLASS(545x39_BP);
    lastRoundsTracer = 4;
};

// BT
class CLASS(30Rnd_545x39_BT_Mag_Bakelite): CLASS(30Rnd_545x39_BP_Mag_Bakelite) {
    displayName = "5.45mm 30Rnd Bakelite [T] Red (BT)";
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};
