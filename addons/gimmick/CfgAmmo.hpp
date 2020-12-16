class CfgAmmo {
    class B_65x39_Caseless;

    class CLASS(MSBS_Gimmick_A_Red): B_65x39_Caseless {
        author = "Tyrone";
        hit = 6;
        tracerScale = 12;
        tracerStartTime = 0.01;
        tracerEndTime = 4;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    };

    class CLASS(MSBS_Gimmick_A_Green): CLASS(MSBS_Gimmick_A_Red) {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
};
