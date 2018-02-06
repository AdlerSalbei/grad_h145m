#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        units[] = {"h145m"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { QMAINPATCH, "A3_Air_F"};
        authors[] = { "Salbei"};
        VERSION_CONFIG;
    };
};

#include <CfgVehicles.hpp>
