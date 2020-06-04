class CfgPatches
{
	class SchanaModNoVehicleDamageExpansion
	{
		requiredAddons[] = {
			"DayZExpansion_Scripts"
		};
	};
};

class CfgMods
{
	class SchanaModNoVehicleDamageExpansion
	{
	    type = "mod";
		
	    class defs
	    {
			class worldScriptModule		
            {
                value = "";
                files[] = {"SchanaModNoVehicleDamageExpansion/World"};
            };
        };
    };
};
