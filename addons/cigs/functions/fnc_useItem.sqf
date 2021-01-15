#include "..\script_component.hpp"

params ["_unit", "_player"];

if (!(QGVAR(matches) in (magazines _player)) && !(QGVAR(lighter) in (magazines _player))) exitWith {
    [LLSTRING(no_matches_or_lighter), 2.5, _player] spawn ace_common_fnc_displayTextStructured;
    false
};

switch (true) do {
case (QGVAR(lighter) in (magazines _player)): {
        [_player, QGVAR(lighter)] call FUNC(removeItemFromMag);

        [_unit, QGVAR(lighter_01)] call FUNC(playSound);
    };
case (QGVAR(matches) in (magazines _player)): {
        [_player, QGVAR(matches)] call FUNC(removeItemFromMag);

        [_unit, QGVAR(matches_01)] call FUNC(playSound);
    };
};

true
