class CfgMarkers {
    class CLASS(VRP) {
        scope = 2;
        name = "VRP";
        icon = QPATHTOF(data\vrp.paa);
        color[] = {1, 1, 1, 1};
        shadow = 1;
        side = 1;
        size = 32;
        showEditorMarkerColor = 1;
        markerClass = "Synixe";
    };
    class CLASS(WP): CLASS(VRP) {
        name = "Waypoint";
        icon = QPATHTOF(data\waypoint.paa);
    };
    class CLASS(RP): CLASS(VRP) {
        name = "Rally Point";
        icon = QPATHTOF(data\rallypoint.paa);
    };
    class CLASS(LZ): CLASS(VRP) {
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
