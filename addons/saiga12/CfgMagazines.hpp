class CfgMagazines {
    class CA_Magazine;
    // 8Rnd
    class CUP_8Rnd_B_Saiga12_74Pellets_M: CA_Magazine {
        count = 8;
        displayName = CSTRING(8Rnd_Pellet_Display);
        ammo = QCLASS(P_12G_000);
    };
    class CUP_8Rnd_B_Saiga12_74Slug_M: CA_Magazine {
        count = 8;
        displayName = CSTRING(8Rnd_Slug_Display);
        ammo = QCLASS(S_12G_AP20);
    };
    // 20Rnd
    class CUP_20Rnd_B_Saiga12_74Pellets_M: CUP_8Rnd_B_Saiga12_74Pellets_M {
        count = 20;
        displayName = CSTRING(20Rnd_Pellet_Display);
        ammo = QCLASS(P_12G_000);
    };
    class CUP_20Rnd_B_Saiga12_74Slug_M: CUP_8Rnd_B_Saiga12_74Slug_M {
        count = 20;
        displayName = CSTRING(20Rnd_Slug_Display);
        ammo = QCLASS(S_12G_AP20);
    };
};
