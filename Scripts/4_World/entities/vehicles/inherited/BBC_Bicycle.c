class BBC_Bicycle : Bicycle_Base 
{
	override int GetAnimInstance()
	{
		return CustomVehicleAnimInstances.BICYCLE2;
	}
	
	override string GetBicycleItemClassName()
	{
		return "ItemBicycle";
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
		if ( GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			int slot;
			if (slot_name == "bicycle_wheel_1_1")
			{
				slot = InventorySlots.GetSlotIdFromString("bicycle_wheel_2_1");
				GetInventory().CreateAttachmentEx ("bicycle_wheel", slot);
			}
			else if(slot_name == "bicycle_wheel_1_2")
			{
				slot = InventorySlots.GetSlotIdFromString("bicycle_wheel_2_2");
				GetInventory().CreateAttachmentEx ("bicycle_wheel", slot);
			}
		}
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		if ( GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			int slot;
			EntityAI wheel;
			if (slot_name == "bicycle_wheel_1_1")
			{
				slot = InventorySlots.GetSlotIdFromString("bicycle_wheel_2_1");
				wheel = GetInventory().FindAttachment(slot);
				wheel.Delete();
			}
			else if(slot_name == "bicycle_wheel_1_2")
			{
				slot = InventorySlots.GetSlotIdFromString("bicycle_wheel_2_2");
				wheel = GetInventory().FindAttachment(slot);
				wheel.Delete();
			}
		}
	}
	
	override void OnDebugSpawn()
	{
		FillUpCarFluids();
		GetInventory().CreateInInventory( "bicycle_wheel" );
		GetInventory().CreateInInventory( "bicycle_wheel" );
	}
};
class MMT : Bicycle_Base
{
	override int GetAnimInstance()
	{
		return CustomVehicleAnimInstances.BICYCLE2;
	}
	
	override string GetBicycleItemClassName()
	{
		return "ItemMMT";
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
		if ( GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			int slot;
			if (slot_name == "mmt_wheel_1_1")
			{
				slot = InventorySlots.GetSlotIdFromString("mmt_wheel_2_1");
				GetInventory().CreateAttachmentEx ("mmt_wheel", slot);
			}
			else if(slot_name == "mmt_wheel_1_2")
			{
				slot = InventorySlots.GetSlotIdFromString("mmt_wheel_2_2");
				GetInventory().CreateAttachmentEx ("mmt_wheel", slot);
			}
		}
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		if ( GetGame().IsServer() || !GetGame().IsMultiplayer() )
		{
			int slot;
			EntityAI wheel;
			if (slot_name == "mmt_wheel_1_1")
			{
				slot = InventorySlots.GetSlotIdFromString("mmt_wheel_2_1");
				wheel = GetInventory().FindAttachment(slot);
				wheel.Delete();
			}
			else if(slot_name == "mmt_wheel_1_2")
			{
				slot = InventorySlots.GetSlotIdFromString("mmt_wheel_2_2");
				wheel = GetInventory().FindAttachment(slot);
				wheel.Delete();
			}
		}
	}
	
	override void OnDebugSpawn()
	{
		FillUpCarFluids();
		GetInventory().CreateInInventory( "mmt_wheel" );
		GetInventory().CreateInInventory( "mmt_wheel" );
	}
};