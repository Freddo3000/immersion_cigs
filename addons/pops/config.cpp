#include "script_component.hpp"
class CfgPatches
{
	class ADDON {
		units[] = {QGVAR(poppack), QGVAR(poppackItem)};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"murshun_main"};
	};

    BWC_CONFIG(immersion_pops);
};

#include "CfgVehicles.hpp"
#include "CfgMagazines.hpp"
#include "CfgSounds.hpp"
#include "CfgGlasses.hpp"
#include "CfgEventHandlers.hpp"
