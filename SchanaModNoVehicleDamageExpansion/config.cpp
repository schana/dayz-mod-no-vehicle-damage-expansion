class CfgPatches
{
	class SchanaModNoVehicleDamageExpansion
	{
		requiredAddons[] = {};
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
