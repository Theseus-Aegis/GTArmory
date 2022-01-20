class CfgMagazines {
    class CA_Magazine;

    // 8Rnd
    class CUP_5Rnd_B_Saiga12_Buck_00: CA_Magazine {
        count = 8;
        displayName = "8Rnd Saiga 12k Pellets (Magnum)";
        ammo = QCLASS(P_12G_000);
    };
    class CUP_5Rnd_B_Saiga12_Slug: CA_Magazine {
        count = 8;
        displayName = "8Rnd Saiga 12k Slug (AP-20)";
        ammo = QCLASS(S_12G_AP20);
    };
    // 20Rnd
    class CUP_12Rnd_B_Saiga12_Buck_00: CUP_5Rnd_B_Saiga12_Buck_00 {
        count = 20;
        displayName = "20Rnd Saiga 12k Pellets (Magnum)";
        ammo = QCLASS(P_12G_000);
    };
    class CUP_12Rnd_B_Saiga12_Slug: CUP_5Rnd_B_Saiga12_Slug {
        count = 20;
        displayName = "20Rnd Saiga 12k Slug (AP-20)";
        ammo = QCLASS(S_12G_AP20);
    };
};
