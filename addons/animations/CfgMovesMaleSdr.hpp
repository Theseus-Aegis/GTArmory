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

        // Remove stupid idle smoking animation that looks like you're sniffing your hand.
        class AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon;
        class AmovPsitMstpSlowWrflDnon: AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon {
            variantsPlayer[] = {
                "AmovPsitMstpSlowWrflDnon", 0.33,
                "AmovPsitMstpSlowWrflDnon_WeaponCheck1", 0.33,
                "AmovPsitMstpSlowWrflDnon_WeaponCheck2", 0.33
            };
            ConnectTo[] = {
                "AmovPsitMstpSlowWrflDnon_WeaponCheck1", 0.1,
                "AmovPsitMstpSlowWrflDnon_WeaponCheck2", 0.1,
                "AmovPsitMstpSlowWrflDnon_AmovPercMstpSlowWrflDnon", 0.02
            };
        };
    };
};
