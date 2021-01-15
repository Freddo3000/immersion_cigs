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
                    condition = QUOTE(((goggles _player) in GVAR(cigsArray)) && (_player getVariable [ARR_2(QQGVAR(cigLitUp), false)]));
                    statement = QUOTE([_player] spawn FUNC(stop_cig));
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(UI\light_cig.paa);
                };
                class GVAR(take_cig_from_pack) {
                    displayName = CSTRING(take_cig_from_pack);
                    condition = QUOTE(QQGVAR(poppack) in (magazines _player));
                    statement = QUOTE([_player] spawn FUNC(take_cig_from_pack));
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = QPATHTOF(UI\take_cig.paa);
                };
            };
        };
    };

    class WeaponHolder_Single_limited_item_F;
    class GVAR(poppackItem): WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(poppack);
        author = CSTRING(author);
        vehicleClass = "Magazines";

        class TransportMagazines {
            class GVAR(poppack) {
                magazine = QGVAR(poppack);
                count = 1;
            };
        };
    };
    BWC_CLASS(immersion_pops_poppackItem,GVAR(poppackItem));
};
