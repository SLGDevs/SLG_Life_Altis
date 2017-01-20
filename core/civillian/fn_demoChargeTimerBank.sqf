#include "..\..\script_macros.hpp"
/*
    File: fn_demoChargeTimer.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the "Demo" timer for the police.
*/
private ["_uiDisp","_time","_timer"];
disableSerialization;
"lifeTimer" cutRsc ["life_timer","PLAIN"];
_uiDisp = uiNamespace getVariable "life_timer";
_timer = _uiDisp displayCtrl 38301;
_time = time + (3 * 60);

for "_i" from 0 to 1 step 0 do {
    if (isNull _uiDisp) then {
        "lifeTimer" cutRsc ["life_timer","PLAIN"];
        _uiDisp = uiNamespace getVariable "life_timer";
        _timer = _uiDisp displayCtrl 38301;
    };
    if (round(_time - time) < 1) exitWith {};
    if (!(fed_bank_1 getVariable ["chargeplaced",false])) exitWith {};
    _timer ctrlSetText format ["Altis Bank Timer: %1",[(_time - time),"MM:SS.MS"] call BIS_fnc_secondsToString];
    sleep 0.08;
};
"lifeTimer" cutText["","PLAIN"];