class CfgGlasses {
    class None;

    class GVAR(pop0): None {
        author = CSTRING(author);
        mass = 0.2;
        displayName = CSTRING(cigarette0);
        model = QPATHTOF(cig0.p3d);
        picture = QPATHTOF(UI\gear_cig0_x_ca);
        identityTypes[] = {};
    };
    BWC_CLASS(immersion_pops_pop0,GVAR(pop0));
};
