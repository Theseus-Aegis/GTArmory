class CLASS(40Rnd_46x30_Ball): CUP_40Rnd_46x30_MP7 {
    MACRO_SCOPE
    ammo = QCLASS(46x30_Ball);
    descriptionShort = "4.6x30mm Ball Reload Tracer";
    displayName = "4.6mm 40Rnd (Ball)";
    lastRoundsTracer = 4;
    mass = 8;
};
class CLASS(40Rnd_46x30_Ball_Tracer): CLASS(40Rnd_46x30_Ball) {
    descriptionShort = "4.6x30mm Ball Tracer";
    displayName = "4.6mm 40Rnd [T] (Ball)";
    tracersEvery = 1;
};
class CLASS(40Rnd_46x30_EPR): CLASS(40Rnd_46x30_Ball) {
    ammo = QCLASS(46x30_EPR);
    descriptionShort = "4.6x30mm EPR Reload Tracer";
    displayName = "4.6mm 40Rnd (EPR)";
};
class CLASS(40Rnd_46x30_AP): CLASS(40Rnd_46x30_EPR) {
    ammo = QCLASS(46x30_AP);
    descriptionShort = "4.6x30mm AP Reload Tracer";
    displayName = "4.6mm 40Rnd (AP)";
};
