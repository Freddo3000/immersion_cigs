#include "..\script_component.hpp"

params ["_player"];

[_player, QGVAR(cigpack)] call FUNC(removeItemFromMag);

[_player, QGVAR(unwrap)] call FUNC(playSound);

_player addItem QGVAR(cig0);
