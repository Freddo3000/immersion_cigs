#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "Immersion Cigs: Main";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
			"A3_Data_F_Enoch_Loadorder",
			"A3_Data_F_Mod_Loadorder",
			"A3_Data_F_Warlords_Loadorder"
        };
        author = ECSTRING(cigs,author);
        authors[] = {
            "rebelvg",
            "Luigium",
            "dfr1238",
            "classicarma",
            "Freddo3000"
        };
        url = "https://github.com/rebelvg/immersion_cigs";
        VERSION_CONFIG;
    };
};
