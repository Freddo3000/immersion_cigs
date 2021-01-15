class CfgGlasses {
    class None;

    class GVAR(cig0): None {
        author = CSTRING(author);
        mass = 0.02;
        displayName = CSTRING(cigarette0);
        model = QPATHTOF(cig0.p3d);
        picture = QPATHTOF(UI\gear_cig0_x_ca);
        identityTypes[] = {};
        GVAR(type) = "cigarette";
        GVAR(maxTime) = 330;
        GVAR(initStateTime) = 0;
        GVAR(nextState) = QGVAR(cig1);
    };

    class GVAR(cig1): GVAR(cig0) {
        author = CSTRING(author);
        displayName = "Cigarette (Stage 1)";
        model = QPATHTOF(cig1.p3d);
        picture = QPATHTOF(UI\gear_cig1_x_ca);
        GVAR(initStateTime) = 6;
        GVAR(nextState) = QGVAR(cig2);
    };

    class GVAR(cig2): GVAR(cig0) {
        author = CSTRING(author);
        displayName = "Cigarette (Stage 2)";
        model = QPATHTOF(cig2.p3d);
        picture = QPATHTOF(UI\gear_cig2_x_ca);
        GVAR(initStateTime) = 66;
        GVAR(nextState) = QGVAR(cig3);
    };

    class GVAR(cig3): GVAR(cig0) {
        author = CSTRING(author);
        displayName = "Cigarette (Stage 3)";
        model = QPATHTOF(cig3.p3d);
        picture = QPATHTOF(UI\gear_cig3_x_ca);
        GVAR(initStateTime) = 126;
        GVAR(nextState) = QGVAR(cig4);
    };

    class GVAR(cig4): GVAR(cig0) {
        author = CSTRING(author);
        displayName = "Cigarette (Stage 4)";
        model = QPATHTOF(cig4.p3d);
        picture = QPATHTOF(UI\gear_cig4_x_ca);
        GVAR(initStateTime) = 306;
        GVAR(nextState) = "";
    };

    class GVAR(cigar0): None {
        author = CSTRING(author);
        mass = 0.1;
        displayName = "Cigar";
        model = QPATHTOF(cigars\cigar0.p3d);
        picture = QPATHTOF(UI\gear_cigar0_x_ca);
        identityTypes[] = {};
        GVAR(type) = "cigar";
        GVAR(maxTime) = 660;
        GVAR(initStateTime) = 0;
        GVAR(nextState) = QGVAR(cigar1);
    };
    BWC_CLASS(immersion_cigs_cigar0,GVAR(cigar0));

    class GVAR(cigar1): GVAR(cigar0) {
        author = CSTRING(author);
        displayName = "Cigar (Stage 1)";
        model = QPATHTOF(cigars\cigar1.p3d);
        picture = QPATHTOF(UI\gear_cigar1_x_ca);
        GVAR(initStateTime) = 12;
        GVAR(nextState) = QGVAR(cigar2);
    };
    BWC_CLASS(immersion_cigs_cigar1,GVAR(cigar1));

    class GVAR(cigar2): GVAR(cigar0) {
        author = CSTRING(author);
        displayName = "Cigar (Stage 2)";
        model = QPATHTOF(cigars\cigar2.p3d);
        picture = QPATHTOF(UI\gear_cigar2_x_ca);
        GVAR(initStateTime) = 132;
        GVAR(nextState) = QGVAR(cigar3);
    };
    BWC_CLASS(immersion_cigs_cigar2,GVAR(cigar2));

    class GVAR(cigar3): GVAR(cigar0) {
        author = CSTRING(author);
        displayName = "Cigar (Stage 3)";
        model = QPATHTOF(cigars\cigar3.p3d);
        picture = QPATHTOF(UI\gear_cigar3_x_ca);
        GVAR(initStateTime) = 252;
        GVAR(nextState) = QGVAR(cigar4);
    };
    BWC_CLASS(immersion_cigs_cigar3,GVAR(cigar3));

    class GVAR(cigar4): GVAR(cigar0) {
        author = CSTRING(author);
        displayName = "Cigar (Stage 4)";
        model = QPATHTOF(cigars\cigar4.p3d);
        picture = QPATHTOF(UI\gear_cigar4_x_ca);
        GVAR(initStateTime) = 612;
        GVAR(nextState) = "";
    };
    BWC_CLASS(immersion_cigs_cigar4,GVAR(cigar4));
};
