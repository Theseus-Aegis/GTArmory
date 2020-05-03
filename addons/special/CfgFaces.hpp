class CfgFaces {
    class Default {
        class Custom;
    };
    
    class Man_A3: Default {
        class Default;
        class Sturrock;
    
        class CLASS(TyroneMF_Face): Sturrock {
            displayName = CSTRING(TyroneMF_Face_Display);
            textureHL = QPATHTOF(data\TyroneMF_face_co.paa);
        };
    };
};
