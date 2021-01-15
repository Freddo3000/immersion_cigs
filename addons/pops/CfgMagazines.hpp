class CfgMagazines {
    class CA_Magazine;
    class GVAR(poppack): CA_Magazine {
        author = CSTRING(author);
        scope = 2;

        displayName = CSTRING(poppack);
        descriptionShort = CSTRING(poppack_descr);
        model = QPATHTOF(cigpack.p3d);
        picture = QPATHTOF(UI\gear_cigpack_x_ca);

        ammo = "";
        count = 1;
        initSpeed = 0;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        mass = 0.2;
    };
    BWC_CLASS(immersion_pops_poppack,GVAR(poppack));
};
