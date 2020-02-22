class CfgMagazineWells {
    CLASS(8rnd_12g) {
        TACGT_mags[] = {QCLASS(8Rnd_P_000), QCLASS(8Rnd_S_AP20)};
    };

    CLASS(6rnd_12g) {
        TACGT_mags[] = {QCLASS(6Rnd_P_000), QCLASS(6Rnd_S_AP20)};
    };
    
    class CBA_556x45_STANAG {
        TACGT_mags[] = {
            QCLASS(30Rnd_556x45_M855_PMAG),
            QCLASS(30Rnd_556x45_M855_EMAG),
            QCLASS(30Rnd_556x45_M995_PMAG),
            QCLASS(30Rnd_556x45_M995_EMAG),
            QCLASS(30Rnd_556x45_MK262_PMAG),
            QCLASS(30Rnd_556x45_MK262_EMAG),
            QCLASS(30Rnd_556x45_MK318_PMAG),
            QCLASS(30Rnd_556x45_MK318_EMAG)
        };
    };
};
