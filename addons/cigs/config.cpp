#include "script_component.hpp"
class CfgPatches {
	class ADDON {
        author = CSTRING(author);
		units[] = {
            QGVAR(matches),
            QGVAR(lighter),
            QGVAR(cigpack),
            QGVAR(matchesItem),
            QGVAR(lighterItem),
            QGVAR(cigpackItem)
        };
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {
			"murshun_main"
		};
	};
};

#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"
#include "CfgSounds.hpp"
#include "CfgMagazines.hpp"
#include "CfgEventHandlers.hpp"
