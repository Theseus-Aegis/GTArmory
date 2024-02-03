class CfgWeapons {
    class DeminingDisruptor_01_base_f;
    class DeminingDisruptor_01_F: DeminingDisruptor_01_base_f {
        class Muzzle_Pellets;
    };
    class CLASS(Diffuser): DeminingDisruptor_01_F {
        delete Muzzle_Slug; // Only want pellets.
        muzzles[] = {"Muzzle_Pellets"};
        class Muzzle_Pellets: Muzzle_Pellets {
            magazines[] = {QCLASS(Diffuser_Magazine)};
        };
    };
};
