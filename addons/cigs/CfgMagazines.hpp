class CfgMagazines {
    class CA_Magazine;
    class GVAR(matches): CA_Magazine {
        author = CSTRING(author);
        scope = 2;

        displayName = CSTRING(matches);
        descriptionShort = CSTRING(matches_descr);
        model = QPATHTOF(matches.p3d);
        picture = QPATHTOF(UI\gear_matches_x_ca);

        ammo = "";
        count = 10;
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        mass = 1;
    };

    class GVAR(lighter): CA_Magazine {
        author = CSTRING(author);
        scope = 2;

        displayName = CSTRING(lighter);
        descriptionShort = CSTRING(lighter_descr);
        model = QPATHTOF(lighter.p3d);
        picture = QPATHTOF(UI\gear_lighter_x_ca);

        ammo = "";
        count = 100;
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        mass = 2;
    };

    class GVAR(cigpack): CA_Magazine {
        author = CSTRING(author);
        scope = 2;

        displayName = CSTRING(cigpack);
        descriptionShort = CSTRING(cigpack_descr);
        model = QPATHTOF(cigpack.p3d);
        picture = QPATHTOF(UI\gear_cigpack_x_ca);

        ammo = "";
        count = 20;
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        mass = 2;
    };
};
