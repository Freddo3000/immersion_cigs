#include "..\script_component.hpp"

params ["_player"];

if !([_player, _player] call FUNC(useItem)) exitWith {};

[_player] spawn FUNC(start_cig);
