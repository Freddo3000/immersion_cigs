#include "script_component.hpp"
#include "XEH_PREP.sqf"
#include "initSettings.sqf"

if !(isClass (configFile >> "CfgPatches" >> "ace_common")) then {
    ace_common_fnc_displayTextStructured = {
        params ["_string"];

        hintSilent _string;
    };
};

if (isNil QGVAR(giveItemsInSP)) then {
    GVAR(giveItemsInSP) = true;
};

GVAR(cigsArray) = [QGVAR(pop0)];
GVAR(eatSounds) = [QGVAR(eat_01), QGVAR(eat_02), QGVAR(eat_03), QGVAR(eat_04), QGVAR(eat_05), QGVAR(eat_06), QGVAR(eat_07)];
GVAR(flavours) = ["banana", "cherry", "strawberry", "raspberry", "bacon", "nicotine", "tomato", "chocolate", "lemon", "cola"];
