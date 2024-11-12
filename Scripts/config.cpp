class CfgPatches
{
    class BBC_Bicycle_Scripts
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = 
        {
            "BBC_Bicycle"
        };
    };
};

class CfgSlots
{
    class Slot_Bicycle_Wheel_1
    {
        name = "Bicycle_Wheel_1";
        displayName = "Bicycle Wheel";
        selection = "wheel_1";
        ghostIcon = "set:dayz_inventory image:wheel";
    };
    class Slot_Bicycle_Wheel_2
    {
        name = "Bicycle_Wheel_2";
        displayName = "Bicycle Wheel";
        selection = "wheel_2";
        ghostIcon = "set:dayz_inventory image:wheel";
    };
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyVehiclePart: ProxyAttachment
    {
        scope = 2;
        simulation = "ProxyInventory";
        autocenter = 0;
        animated = 0;
        shadow = 1;
        reversed = 0;
    };

    class ProxyBicycle_Wheel: ProxyVehiclePart
    {
        model = "ADD PATH";
        inventorySlot[] = 
        {
            "Bicycle_Wheel_1",
            "Bicycle_Wheel_2"
        };
    };
    
    class ProxyBicycle_Wheel_Ruined: ProxyVehiclePart
    {
        model = "ADD PATH";
        inventorySlot[] = 
        {
            "Bicycle_Wheel_1",
            "Bicycle_Wheel_2"
        };
    };
};
