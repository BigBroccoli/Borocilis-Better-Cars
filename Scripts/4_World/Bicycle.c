class Bicycle_Base : CarScript
{
    void Bicycle_Base()
    {
        m_dmgContactCoef = 0.015;

        // m_CarHornShortSoundName = "ADD HORN SOUND";
        // m_CarHornLongSoundName = "ADD HORN SOUND";
    }

    
    override bool IsVitalTruckBattery()
	{
		return false;
	}

    override bool IsVitalCarBattery()
    {
        return false;
    }

	override bool IsVitalSparkPlug()
	{
		return false;
	}
    
    override bool IsVitalGlowPlug()
    {
        return false;
    }

	override bool IsVitalRadiator()
	{
		return false;
	}
    
    override int GetAnimInstance()
    {
        return VehicleAnimInstance.BICYCLE;
    }

    override float GetTransportCameraDistance()
    {
        return 4.0;
    }

    override vector GetTransportCameraOffset()
    {
        return "0 1.0 0";
    }

    override int GetSeatAnimationType(int posIdx)
    {
        switch (posIdx)
        {
            case 0:
                return DayZPlayerConstants.VEHICLESEAT_DRIVER;
        }
        return 0;
    }

    override bool CanDisplayAttachmentCategory(string category_name)
    {
        if (!super.CanDisplayAttachmentCategory(category_name))
        {
            return false;
        }

        category_name.ToLower();

        if (category_name.Contains("engine"))
        {
            return false;
        }

        return true;
    }

    override bool CanReleaseAttachment(EntityAI attachment)
    {
        if (!super.CanReleaseAttachment(attachment))
        {
            return false;
        }

        string attType = attachment.GetType();

        if (attType == "Bicycle_Wheel" || attType == "Bicycle_Wheel_Ruined")
        {
            return true;
        }

        return true;
    }

    override void OnDebugSpawn()
    {
        EntityAI entity;

        if (Class.CastTo(entity, this))
        {
            entity.GetInventory().CreateInInventory("Bicycle_Wheel");
            entity.GetInventory().CreateInInventory("Bicycle_Wheel");
        }
    }

    override float OnSound(CarSoundCtrl ctrl, float oldValue)
    {
        // Can add sound here. For ref look at offroad_02.c or hatchback_02.c
        return 0;
    }
};

class Bicycle : Bicycle_Base {};