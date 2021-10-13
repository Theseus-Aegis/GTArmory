class CfgAmmo {
    class B_65x39_Caseless;
    class B_127x108_Ball;

    class CLASS(MSBS_Gimmick_A_Red): B_65x39_Caseless {
        author = ECSTRING(main,Author);
        hit = 6;
        tracerScale = 12;
        tracerStartTime = 0.01;
        tracerEndTime = 4;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class CLASS(MSBS_Gimmick_A_Green): CLASS(MSBS_Gimmick_A_Red) {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };

    // 'Pickup' Ammo
    class CLASS(MSBS_Gimmick_A_Yellow): B_127x108_Ball {
        author = ECSTRING(main,Author);
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
        tracerScale = 14;
        tracerStartTime = 0.01;
        tracerEndTime = 4;
    };
};
