class CfgAmmo {
    // BI
    class FlareBase;
    class F_40mm_White: FlareBase {
        timeToLive = 180;
        coefGravity = 0.6;
    };

    // ACE
    class ACE_40mm_Flare_white: F_40mm_White {
        timeToLive = 180;
    };

    class F_20mm_White;
    class ACE_F_Hand_White: F_20mm_White {
        timeToLive = 120;
    };

    class F_20mm_Red;
    class ACE_F_Hand_Red: F_20mm_Red {
        timeToLive = 120;
    };

    class F_20mm_Green;
    class ACE_F_Hand_Green: F_20mm_Green {
        timeToLive = 120;
    };

    class F_20mm_Yellow;
    class ACE_F_Hand_Yellow: F_20mm_Yellow {
        timeToLive = 120;
    };

    class SmokeShell;
    class ACE_G_Handflare_White: SmokeShell {
        timeToLive = 120;
    };

    // Parachute
    class CUP_F_40mm_Star_White: F_40mm_White {
        timeToLive = 180;
        coefGravity = 0.25;
    };

    // Cluster
    class CUP_F_40mm_StarCluster_White: CUP_F_40mm_Star_White {
        timeToLive = 180;
        coefGravity = 0.6;
    };
    class CUP_F_40mm_StarCluster_Red: CUP_F_40mm_Star_White {
        timeToLive = 180;
        coefGravity = 0.6;
    };
    class CUP_F_40mm_StarCluster_Green: CUP_F_40mm_Star_White {
        timeToLive = 180;
        coefGravity = 0.6;
    };
};
