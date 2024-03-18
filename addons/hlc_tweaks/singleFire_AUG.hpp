// Enable Semi-Auto for AUGs
class hlc_rifle_aug: hlc_aug_base {
    class Single: Single {
        showToPlayer = 1;
    };
};

class hlc_rifle_auga2: hlc_rifle_aug {
    class Single: Single {
        showToPlayer = 1;
    };
};

class hlc_rifle_auga3: hlc_rifle_aug {
    scope = 2;
    scopeArsenal = 2;
    class Single: Single {
        showToPlayer = 1;
    };
    class LinkedItems {
        delete LinkedItemsMuzzle;
    };
};
class hlc_rifle_auga3_b: hlc_rifle_auga3 {
    class LinkedItems {
        delete LinkedItemsMuzzle;
    };
};

class hlc_rifle_auga3_bl: hlc_rifle_auga3 {
    class LinkedItems {
        delete LinkedItemsMuzzle;
    };
};

// HBAR semi-auto, isn't not using inheritance fun guys?
class hlc_rifle_aughbar: hlc_rifle_aug {
    scope = 2;
    scopeArsenal = 2;
    modes[]= {
        "Single",
        "FullAuto",
        "50",
        "AI_long",
        "AI_close",
        "AI_short",
        "AI_far",
        "AI_toofar",
        "AI_far_optic1"
    };
    class Single: Single {
        showToPlayer = 1;
    };
};

class hlc_rifle_aughbar_b: hlc_rifle_aughbar {
    modes[] = {
        "Single",
        "FullAuto",
        "fullauto_medium",
        "single_medium_optics1",
        "single_far_optics2"
    };
};

class hlc_rifle_aughbar_t: hlc_rifle_aughbar {
    modes[] = {
        "Single",
        "FullAuto",
        "fullauto_medium",
        "single_medium_optics1",
        "single_far_optics2"
    };
};

class hlc_rifle_auga2lsw: hlc_rifle_aughbar {
    modes[]= {
        "Single",
        "FullAuto",
        "50",
        "AI_long",
        "AI_close",
        "AI_short",
        "AI_far",
        "AI_toofar",
        "AI_far_optic1"
    };
};
