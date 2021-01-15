#include "..\script_component.hpp"
params ["_unit"];

if (!(local _unit)) exitWith {};

private _cigTime = 0;
private _goggles = goggles _unit;

if !(_goggles in GVAR(cigsArray)) exitWith {};

private _gogglesCurrent = _goggles;

if (_unit getVariable [QGVAR(cigLitUp), false]) exitWith {};
_unit setVariable [QGVAR(cigLitUp), true, true];

[format ["It seems to have %1 flavour.", selectRandom GVAR(flavours)], 2.5, _unit] spawn ace_common_fnc_displayTextStructured;

[_unit] spawn FUNC(anim);

while ({alive _unit && _gogglesCurrent in GVAR(cigsArray) && (_unit getVariable [QGVAR(cigLitUp), false]) && _cigTime <= 330}) do {
    _gogglesCurrent = goggles _unit;
    private _gogglesNew = "";

    if (_gogglesNew != "") then {
        removeGoggles _unit;
        _unit addGoggles _gogglesNew;
        _gogglesCurrent = _gogglesNew;
    };

    private _time = (20 + random 10);

    _cigTime = _cigTime + _time;

    [_unit, selectRandom GVAR(eatSounds)] call FUNC(playSound);
    sleep (2 + random 2);
    [_unit, selectRandom GVAR(eatSounds)] call FUNC(playSound);

    sleep _time;

    if (_gogglesCurrent != goggles _unit) exitWith {};
};

_unit setVariable [QGVAR(cigLitUp), false, true];
if (_cigTime >= 330) then {
    removeGoggles _unit;
};
