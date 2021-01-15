#include "..\script_component.hpp"

params ["_unit", "_player"];

if !([_unit, _player] call FUNC(useItem)) exitWith {};

_player playActionNow "PutDown";

[_unit] remoteExec [QFUNC(start_cig), _unit];
