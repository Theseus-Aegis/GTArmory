class CfgWeapons {
    class arifle_SDAR_F;

    class CLASS(RFB_762_F): arifle_SDAR_F {
        author = ECSTRING(main,Author);
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = QCLASS(RFB_762_F);
        displayName = "Keltec RFB";
        descriptionShort = "Underwater Rifle";
        magazines[] = {QCLASS(20Rnd_762x51_RFB_Mag)};
        magazineWell[] = {QCLASS(762x51_RFB)};
    };
};
