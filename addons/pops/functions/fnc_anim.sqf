#include "..\script_component.hpp"
params ["_unit"];

if (!alive _unit || vehicle _unit != _unit) exitWith {};

if (_unit getVariable ["ACE_isUnconscious", false]) exitWith {};

private _animation = animationState _unit;

private _time = time;
while {time < _time + 3} do {
    _unit playActionNow "Gear";
    sleep (1/60);
};

if (alive _unit && !(_unit getVariable ["ACE_isUnconscious", false])) then {
    [_unit, _animation] remoteExec ["switchMove"];
};
