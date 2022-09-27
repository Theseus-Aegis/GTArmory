class CfgAmmo {
    class B_45ACP_Ball;
    class CLASS(357_Magnum): B_45ACP_Ball {
        hit = 8;
    };
    class CLASS(44_Magnum): CLASS(357_Magnum) {
        hit = 11;
    };
};
