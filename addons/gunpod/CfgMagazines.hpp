class CfgMagazines {
    class 300Rnd_20mm_shells;
    class 250Rnd_20mm_GunPod_AP_shells:  300Rnd_20mm_shells {
        author = "Salbei";
        scope = 2;
        displayName = "250Rnd 20mm AP-T Shells";
        displayNameShort = "AP-T";
        ammo = "B_20mm_AP";
        count = 250;
        initSpeed = 1005;
        maxLeadSpeed = 300;
        tracersEvery = 1;
        nameSound = "cannon";
        type = 0;
        reloadAction = "";
        weaponPoolAvailable = 0;
        value = 1;
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "";
        modelSpecial = "";
        useAction = 0;
        useActionTitle = "";
        selectionFireAnim = "zasleh";
        mass = 8;
        simulation = "ProxyMagazines";
        weight = 0;
        descriptionShort = "";
        maxThrowHoldTime = 2;
        minThrowIntensityCoef = 0.3;
        maxThrowIntensityCoef = 1.4;
        quickReload = 0;
    };

    class  250Rnd_20mm_GunPod_HE_shells: 250Rnd_20mm_GunPod_AP_shells {
        displayName = "250Rnd 20mm HE-T Shells";
        displayNameShort = "HE-T";
        ammo = "B_20mm_HE";
        count = 250;
        initSpeed = 985;
        tracersEvery = 5;
    };
};
