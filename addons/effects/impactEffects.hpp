// Spark Effects from Metal, these only play on particles high settings.
class ImpactMetal {
    class CLASS(startSparksBurstLow) {
        simulation = "particles";
        type = QCLASS(sparksBurstLow);
        position[] = {0,0,0};
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.4;
        randomDirectionPeriodVar = 1;
        randomDirectionIntensityVar = 1;
        qualityLevel = 2;
    };
    class CLASS(startSparksBurstMed) {
        simulation = "particles";
        type = QCLASS(sparksBurstMed);
        position[] = {0,0,0};
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.6;
        randomDirectionPeriodVar = 1;
        randomDirectionIntensityVar = 1;
        qualityLevel = 2;
    };
    class CLASS(startSparksOmni) {
        simulation = "particles";
        type = QCLASS(sparksOmni);
        position[] = {0,0,0};
        intensity = 1;
        interval = 10;
        randomDirectionPeriodVar = 0.5;
        randomDirectionIntensityVar = 2;
        lifeTime = 1;
        qualityLevel = 2;
    };
    class CLASS(startSparksDrop) {
        simulation = "particles";
        type = QCLASS(sparksDrop);
        position[] = {0,0,0};
        intensity = 1;
        interval = 11;
        lifeTime = 1.5;
        qualityLevel = 2;
    };
    class CLASS(startSparksDrop2) {
        simulation = "particles";
        type = QCLASS(sparksDrop2);
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 2;
    };
    class CLASS(sparksSparkleEffect) {
        simulation = "particles";
        type = QCLASS(starterSparksOmniSparklings);
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.03;
        qualityLevel = 2;
    };
};

// Increases the visual effect of hitting something slightly, follow the same particle settings as vanilla does.
class ImpactConcrete {
    class ImpactDust {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactDustConcrete";
    };
    class ImpactDust2 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactDustConcrete2";
    };
};

class ImpactEffectsSmall {
    class ImpactDust1 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactDust2";
    };
    class ImpactDust1Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactDust2";
    };
    class ImpactDust1Low {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 0;
        simulation = "particles";
        type = "ImpactDust2Low";
    };
    class ImpactDustWater1 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactDustWater2";
    };
    class ImpactConcrete {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcrete";
    };
    class ImpactConcreteMed {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcrete";
    };
    class ImpactEffectsSmall06 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactSandSmoke2";
    };
};

class ImpactPlaster {
    class ImpactDust1 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactDustPlaster";
    };
    class ImpactDust1Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactDustPlaster";
    };
    class ImpactDust1Low {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 0;
        simulation = "particles";
        type = "ImpactDustPlasterLow";
    };
    class ImpactConcreteWall01 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall1";
    };
    class ImpactConcreteWall02 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall2";
    };
    class ImpactConcreteWall02Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcreteWall2";
    };
    class ImpactConcreteWall03 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall3";
    };
    class ImpactConcreteWall03Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcreteWall3";
    };
};
