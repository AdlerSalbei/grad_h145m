class CfgMagazines {
    class PylonWeapon_300Rnd_20mm_shells;
    class 250Rnd_20mm_GunPod_AP_shells:  PylonWeapon_300Rnd_20mm_shells {
        author = "Salbei";
        displayName = "250Rnd 20mm AP-T Shells";
        displayNameShort = "AP-T";
        ammo = "B_20mm_AP";
        count = 250;
        pylonWeapon = "20mm_GunPod";
        initSpeed = 1005;
        tracersEvery = 1;
        hardpoints[] = {"20MM_TWIN_CANNON", "20mm_GunPod"};
        model = QPATHTOF(data\models\20mm_GunPod.p3d);
    };

    class  250Rnd_20mm_GunPod_HE_shells: 250Rnd_20mm_GunPod_AP_shells {
        displayName = "250Rnd 20mm HE-T Shells";
        displayNameShort = "HE-T";
        ammo = "B_20mm_HE";
        initSpeed = 985;
        tracersEvery = 5;
    };
};
