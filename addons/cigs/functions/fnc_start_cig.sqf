#include "..\script_component.hpp"

params ["_unit"];

if (!(local _unit)) exitWith {};

private _cigTime = 0;
private _goggles = goggles _unit;

if !(_goggles in GVAR(cigsArray)) exitWith {};

private _gogglesCurrent = _goggles;

_cigTime = getNumber (configFile >> "CfgGlasses" >> _goggles >> QGVAR(initStateTime));

if (_unit getVariable [QGVAR(cigLitUp), false]) exitWith {};
_unit setVariable [QGVAR(cigLitUp), true, true];

[_unit] spawn FUNC(anim);

private _cigType = getText (configFile >> "CfgGlasses" >> _goggles >> QGVAR(type);

sleep (3.5 + random 2);
[_unit, _cigType] remoteExec [QFUNC(smoke)];
sleep (1 + random 1);
[_unit, _cigType] remoteExec [QFUNC(smoke)];

private _maxTime = getNumber (configFile >> "CfgGlasses" >> _goggles >> QGVAR(maxTime));

if (_maxTime == 0) then {
    _maxTime = 330;
};

while ({alive _unit && _gogglesCurrent in GVAR(cigsArray) && (_unit getVariable [QGVAR(cigLitUp), false]) && _cigTime <= _maxTime}) do {
    _gogglesCurrent = goggles _unit;
    private _gogglesNew = "";

    _nextCigState = getText (configFile >> "CfgGlasses" >> _gogglesCurrent >> QGVAR(nextState));

    _nextCigStateTime = getNumber (configFile >> "CfgGlasses" >> _nextCigState >> QGVAR(initStateTime));

    if (_cigTime >= _nextCigStateTime) then {
        _gogglesNew = _nextCigState;
    };

    if (_gogglesNew != "") then {
        removeGoggles _unit;
        _unit addGoggles _gogglesNew;
        _gogglesCurrent = _gogglesNew;
    };

    private _time = (5.5 + random 2);

    _cigTime = _cigTime + _time;

    [_unit, _cigType] remoteExec [QFUNC(smoke)];
    _unit setFatigue (getFatigue _unit + 0.01);

    sleep _time;

    if (_gogglesCurrent != goggles _unit) exitWith {};
};

_unit setVariable [QGVAR(cigLitUp), false, true];
if (_cigTime >= _maxTime) then {
    removeGoggles _unit;
};
