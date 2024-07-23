#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacgt_main"};
        skipWhenMissingDependencies = 1;
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        // Handgun switch speedup
        class TransAnimBase;
        class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon: TransAnimBase {
            speed = 1.7; // default: 1.1875
        };
        class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon {
            speed = 2.1; // default: 1.52
        };

        // Swimming Speed
        class AswmPercMstpSnonWnonDnon;
        class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon {
            speed = 0.36; // default: 0.23834699
        };

        class AsswPercMstpSnonWnonDnon;
        class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon {
            speed = 0.36; // default: 0.23834699
        };

        class AbswPercMstpSnonWnonDnon;
        class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon {
            speed = 0.32; // default: 0.23834699
        };

        class AdvePercMstpSnonWrflDnon;
        class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon {
            speed = 0.2; // default: 0.122414
        };

        class AsdvPercMstpSnonWrflDnon;
        class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon {
            speed = 0.2; // default: 0.122414
        };

        class AbdvPercMstpSnonWrflDnon;
        class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon {
            speed = 0.2; // default: 0.122414
        };
    };
};
