class CfgFaces {
    class Default;
    class Man_A3: Default {
        class Sturrock;

        class CLASS(TyroneMF_Face): Sturrock {
            displayName = "Mike Woods";
            textureHL = QPATHTOF(data\custom_woods_face_co.paa);
            identityTypes[] = {}; // Disables this face being used on other units.
        };
    };
};
