class CfgAmmo {

    // BI
    class FlareBase;
    class F_40mm_White: FlareBase {
        timeToLive = 180;
    };
    class F_40mm_Yellow: F_40mm_White {};
    class F_40mm_Red: F_40mm_White {};
    class F_40mm_Green: F_40mm_White {};

    // Cluster
    class CUP_F_40mm_Star_White;
    class CUP_F_40mm_StarCluster_White: CUP_F_40mm_Star_White {
        timeToLive = 180;
    };

    class CUP_F_40mm_StarCluster_Red: CUP_F_40mm_Star_White {
        timeToLive = 180;
    };

    class CUP_F_40mm_StarCluster_Green: CUP_F_40mm_Star_White {
        timeToLive = 180;
    };

    // Parachute
    class CUP_F_40mm_Star_White: F_40mm_White {
        timeToLive = 180;
    };

    class CUP_F_40mm_Star_Green: CUP_F_40mm_Star_White {};
    class CUP_F_40mm_Star_Red: CUP_F_40mm_Star_White {};
};
