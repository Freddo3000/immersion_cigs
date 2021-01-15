#include "script_component.hpp"

#include "XEH_PREP.sqf"

#include "initSettings.sqf"

if !(isClass (configFile >> "CfgPatches" >> "ace_common")) then {
    ace_common_fnc_displayTextStructured = {
        params ["_string"];

        hintSilent _string;
    };
};

if (isNil QGVAR(giveItemsInSP)) then {
    GVAR(giveItemsInSP) = true;
};

GVAR(cigsArray) = ["EWK_Cigar1", "EWK_Cigar2", "EWK_Cig1", "EWK_Cig2", "EWK_Cig3", "EWK_Cig4", "EWK_Glasses_Cig1", "EWK_Glasses_Cig2", "EWK_Glasses_Cig3", "EWK_Glasses_Cig4", "EWK_Glasses_Shemag_GRE_Cig6", "EWK_Glasses_Shemag_NB_Cig6", "EWK_Glasses_Shemag_tan_Cig6", "EWK_Cig5", "EWK_Glasses_Cig5", "EWK_Cig6", "EWK_Glasses_Cig6", "EWK_Shemag_GRE_Cig6", "EWK_Shemag_NB_Cig6", "EWK_Shemag_tan_Cig6", QGVAR(cig0), QGVAR(cig1), QGVAR(cig2), QGVAR(cig3), QGVAR(cig4), QGVAR(cigar0), QGVAR(cigar1), QGVAR(cigar2), QGVAR(cigar3), QGVAR(cigar4)];
