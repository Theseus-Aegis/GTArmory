class CfgFaces {
    class Default {
        class Custom;
    };

    class Man_A3: Default {
        class Default;
        class Sturrock;

        class CLASS(TyroneMF_Face): Sturrock {
            displayName = "Tyrone Woods";
            textureHL = QPATHTOF(data\TyroneMF_face_co.paa);
            identityTypes[] = {}; // Disables this face being used on other units.
        };
    };
};
