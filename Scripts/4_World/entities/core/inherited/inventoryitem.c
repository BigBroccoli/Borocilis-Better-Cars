class Bicycle_wheel extends CarWheel {};
class MMT_wheel extends CarWheel {};
class ItemBicycle : ItemBicycle_Base
{
	override string GetBicycleClassName()
	{
		return "ItemBicycle";
	}

};
class ItemMMT : ItemBicycle_Base
{
	override string GetBicycleClassName()
	{
		return "MMT";
	}

};