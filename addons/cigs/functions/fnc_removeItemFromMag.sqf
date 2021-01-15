#include "..\script_component.hpp"

params ["_player", "_mag"];

private _matchesMags = magazinesAmmo _player select {_x select 0 == _mag};

_player removeMagazineGlobal _mag;

private _oldMag = _matchesMags select 0;

if ((_oldMag select 1) > 1) then {
    _player addMagazine [_mag, (_oldMag select 1) - 1];
} else {
    [format ["%1 is now empty.", getText (configFile >> "CfgMagazines" >> _mag >> "displayName")], 2.5, _player] spawn ace_common_fnc_displayTextStructured;
};
