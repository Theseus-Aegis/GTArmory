class CfgWeapons {
    class acc_flashlight;
    class InventoryFlashLightItem_Base_F;

    class CLASS(acc_flashlight): acc_flashlight {
        author = "TyroneMF";
        scope = 2;
        scopeArsenal = 2;
        displayName = CSTRING(acc_flashlight_display);
        descriptionShort = CSTRING(acc_flashlight_description);
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 4;
            class Flashlight {
                color[] = {185, 190, 199};
                ambient[] = {6, 9, 9};
                intensity = 100;
                size = 1;
                innerAngle = 18;
                outerAngle = 150;
                coneFadeCoef = 8;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.5;
                flareMaxDistance = 300;
                dayLight = 0;
                class Attenuation {
                    start = 0;
                    constant = 1;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 200;
                    hardLimitEnd = 300;
                };
                scale [] = {0};
            };
        };
        inertia = 0.1;
    };
};
