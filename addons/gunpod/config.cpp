#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        units[] = {};
        weapons[] = {"20mm_GunPod"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { QMAINPATCH, "A3_Air_F"};
        authors[] = { "Salbei"};
        VERSION_CONFIG;
    };
};

#include <CfgAmmo.hpp>
#include <CfgNonAiVehicles.hpp>
#include <CfgMagazines.hpp>
#include <CfgWeapons.hpp>
