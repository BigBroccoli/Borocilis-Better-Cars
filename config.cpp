class CfgPatches
{
    class BBC_Bicycle
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
            "DZ_Data",
            "DZ_Vehicles_Wheels",
            "DZ_Vehicles_Parts"
        };
    };
};

class CfgMods
{
    class BBC_Bicycle
    {
        dir = "BBC_Bicycle";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "Bicycle";
        credits = "Borocili, Mass";
        author = "Borocili";
        authorID = "0";
        version = "0.1";
        extra = 0;
        type = "mod";
        dependencies[] = 
        {
            "Game",
            "World",
            "Mission"
        };
        
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] =
                {
                    "BBC_Bicycle/scripts/3_Game"
                };
            };

            class wordlScriptModule
            {
                
            }
        }
    }
}