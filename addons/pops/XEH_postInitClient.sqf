#include "script_component.hpp"

if (!(isClass (configFile >> "CfgPatches" >> "ace_interact_menu"))) then {
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
        }, nil, 0, false, true, "", QUOTE(if (_target != player) exitWith {false}; QQGVAR(poppack) in (magazineCargo uniformContainer player)), 5, false];
    };

    call _addVanillaActions;

    player addEventHandler ["Respawn", _addVanillaActions];
};

player addEventHandler ["Respawn", {
    player setVariable [QGVAR(cigLitUp), false];
}];

if (!isMultiplayer && GVAR(giveItemsInSP)) then {
    player addItem QGVAR(poppack);
    player addItem QGVAR(poppack);
    player addItem QGVAR(poppack);
};
