class CfgMarkers {
    // Team Specific
    class CLASS(Ares1) {
        scope = 2;
        name = "Ares 1";
        icon = QPATHTOF(data\ares1.paa);
        color[] = {1, 1, 1, 1};
        shadow = 1;
        side = 1;
        size = 32;
        showEditorMarkerColor = 1;
        markerClass = "Theseus";
    };

    class CLASS(Ares2): CLASS(Ares1) {
        name = "Ares 2";
        icon = QPATHTOF(data\ares2.paa);
    };

    class CLASS(Ares3): CLASS(Ares2) {
        name = "Ares 3";
        icon = QPATHTOF(data\ares3.paa);
    };

    class CLASS(Ares4): CLASS(Ares3) {
        name = "Ares 4";
        icon = QPATHTOF(data\ares4.paa);
    };

    class CLASS(AresActual): CLASS(Ares4) {
        name = "Ares Actual";
        icon = QPATHTOF(data\actual.paa);
    };

    class CLASS(Helios): CLASS(AresActual) {
        name = "Helios";
        icon = QPATHTOF(data\helios.paa);
    };

    class CLASS(Nemesis): CLASS(Helios) {
        name = "Nemesis";
        icon = QPATHTOF(data\nemesis.paa);
    };

    // Planning Specific
    class CLASS(VRP): CLASS(Ares1) {
        name = "VRP";
        icon = QPATHTOF(data\vrp.paa);
    };
    class CLASS(WP): CLASS(VRP) {
        name = "Waypoint";
        icon = QPATHTOF(data\waypoint.paa);
    };
    class CLASS(RP): CLASS(WP) {
        name = "Rally Point";
        icon = QPATHTOF(data\rallypoint.paa);
    };
    class CLASS(LZ): CLASS(RP) {
        name = "Landing Zone";
        icon = QPATHTOF(data\landingzone.paa);
    };

    // Hide useless markers we don't use. (Available in Editor, not in mission)
    class flag;
    class b_unknown: flag {
        scope = 1;
    };
    class o_unknown: b_unknown {
        scope = 1;
    };
    class n_unknown: b_unknown {
        scope = 1;
    };

    class flag_NATO;
    class White: flag_NATO {
        scope = 1;
    };
    class RedCrystal: flag_NATO {
        scope = 1;
    };
};
