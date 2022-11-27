// ACE3 values: https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgWeapons.hpp#L643

class MagazineCoef {
    initSpeed = 1.0;
};
class AmmoCoef {
    hit = 1;
    typicalSpeed = 1;
    airFriction = 1;
    visibleFire = 0.1;
    audibleFire = 0.5;
    visibleFireTime = 0.5;
    audibleFireTime = 0.5;
    cost = 1;
};
class MuzzleCoef {
    dispersionCoef = "0.95f";
    artilleryDispersionCoef = "1.0f";
    fireLightCoef = "0.5f";
    recoilCoef = "0.95f";
    recoilProneCoef = "0.95f";
    minRangeCoef = "1.0f";
    minRangeProbabCoef = "1.0f";
    midRangeCoef = "1.0f";
    midRangeProbabCoef = "1.0f";
    maxRangeCoef = "1.0f";
    maxRangeProbabCoef = "1.0f";
};
