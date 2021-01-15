#include "script_component.hpp"

if !(isClass (configFile >> "CfgPatches" >> "ace_interact_menu")) then {
    private _addVanillaActions = {
        player addAction [LLSTRING(start_cig), {
            params ["_target", "_caller"];
            [_caller] spawn FUNC(start_cig_your);
        }, nil, 0, false, true, "", QUOTE(if (_target != player) exitWith {false}; ((goggles _this) in GVAR(cigsArray)) && !(_this getVariable [ARR_2(QQGVAR(cigLitUp), false)])), 5, false];

        player addAction [LLSTRING(stop_cig), {
            params ["_target", "_caller"];
            [_caller] spawn FUNC(stop_cig);
        }, nil, 0, false, true, "", QUOTE(if (_target != player) exitWith {false}; ((goggles _this) in GVAR(cigsArray)) && (_this getVariable [ARR_2(QQGVAR(cigLitUp), false)])), 5, false];

        player addAction [LLSTRING(take_cig_from_pack), {
            params ["_target", "_caller"];
            [_caller] spawn FUNC(take_cig_from_pack);
        }, nil, 0, false, true, "", QUOTE(if (_target != player) exitWith {false}; QQGVAR(cigpack) in (magazineCargo uniformContainer player)), 5, false];

        player addAction [LLSTRING(start_someones_cig), {
            params ["_target", "_caller"];
            [cursorObject, _caller] spawn FUNC(start_cig_his);
        }, nil, 0, false, true, "", QUOTE(if !(cursorObject isKindOf 'Man') exitWith {false}; ((goggles cursorObject) in GVAR(cigsArray)) && !(cursorObject getVariable [ARR_2(QQGVAR(cigLitUp), false)]) && (alive cursorObject)), 5, false];
    };

    call _addVanillaActions;

    player addEventHandler ["Respawn", _addVanillaActions];
} else {
    private _action = [QGVAR(start_someones_cig), LLSTRING(start_someones_cig), QPATHTOF(UI\light_cig.paa), {
        params ["_target", "_player"];
        [_target, _player] spawn FUNC(start_cig_his);
    }, {
        params ["_target", "_player"];
        ((goggles _target) in GVAR(cigsArray)) && !(_target getVariable [QGVAR(cigLitUp), false]) && (alive _target)
    }] call ace_interact_menu_fnc_createAction;
    ["CAManBase", 0, ["ACE_Head"], _action, true] call ace_interact_menu_fnc_addActionToClass;
};

player addEventHandler ["Respawn", {
    player setVariable [QGVAR(cigLitUp), false];
}];

if (!isMultiplayer && GVAR(giveItemsInSP)) then {
    player addItem QGVAR(cigpack);
    player addItem QGVAR(lighter);
};
