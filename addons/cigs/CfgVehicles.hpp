class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(start_cig) {
                    displayName = CSTRING(start_cig);
                    condition = QUOTE(((goggles _player) in GVAR(cigsArray)) && !(_player getVariable [ARR_2(QQGVAR(cigLitUp), false)]));
                    statement = QUOTE([_player] spawn FUNC(start_cig_your));
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(UI\light_cig.paa);
                };
                class GVAR(stop_cig) {
                    displayName = CSTRING(stop_cig);
                    condition = QUOTE(((goggles _player) in GVAR(cigsArray)) && (_player getVariable [QQGVAR(cigLitUp), false]));
                    statement = QUOTE([_player] spawn FUNC(stop_cig));
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(UI\light_cig.paa);
                };
                class GVAR(take_cig_from_pack) {
                    displayName = CSTRING(take_cig_from_pack);
                    condition = QUOTE(QQGVAR(cigpack) in (magazines _player));
                    statement = QUOTE([_player] spawn FUNC(take_cig_from_pack));
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(UI\take_cig.paa);
                };
            };
        };
    };

    class WeaponHolder_Single_limited_item_F;
    class GVAR(matchesItem): WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(matches);
        author = CSTRING(author);
        vehicleClass = "Magazines";

        class TransportMagazines {
            class GVAR(matches) {
                magazine = QGVAR(matches);
                count = 1;
            };
        };
    };

    class GVAR(lighterItem): WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(lighter);
        author = CSTRING(author);
        vehicleClass = "Magazines";

        class TransportMagazines {
            class GVAR(lighter) {
                magazine = QGVAR(lighter);
                count = 1;
            };
        };
    };

    class GVAR(cigpackItem): WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(cigpack);
        author = CSTRING(author);
        vehicleClass = "Magazines";

        class TransportMagazines {
            class GVAR(cigpack) {
                magazine = QGVAR(cigpack);
                count = 1;
            };
        };
    };
};
