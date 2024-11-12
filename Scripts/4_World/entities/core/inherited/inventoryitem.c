class bicycle_wheel extends CarWheel {};
class MMT_wheel extends CarWheel {};
class ItemBicycle : ItemBicycle_Base
{
	override string GetBicycleClassName()
	{
		return "BBC_Bicycle";
	}

};
class ItemMMTArma : ItemBicycle_Base
{
	override string GetBicycleClassName()
	{
		return "MMT";
	}

};