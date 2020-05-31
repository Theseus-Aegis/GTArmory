class CfgWeapons {
    class LMG_03_F;

    class CLASS(LMG_03_F): LMG_03_F {
        scope = 1;
        scopeArsenal = 0;
        displayName = "Test MG";
        magazines[] = {QCLASS(200Rnd_9x19_Box)};
        magazineWell[] = {};
        modes[] = {"FullAutoSlow"};
        baseWeapon = QCLASS(LMG_03_F);
    };
};
