// BP
class CLASS(30Rnd_545x39_BP_Mag_AK12_Tan): CUP_30Rnd_545x39_AK12_Tan_M {
    author = ECSTRING(main,Author);
    scope = 2;
    displayName = "5.45mm 30Rnd AK-12 Tan [RT] Yellow (BP)";
    ammo = QCLASS(545x39_BP);
    lastRoundsTracer = 4;
};

// BT
class CLASS(30Rnd_545x39_BT_Mag_AK12_Tan): CLASS(30Rnd_545x39_BP_Mag_AK12_Tan) {
    displayName = "5.45mm 30Rnd AK-12 Tan [T] Red (BT)";
    ammo = QCLASS(545x39_BT);
    tracersEvery = 1;
};
