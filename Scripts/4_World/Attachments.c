class Bicycle_Wheel : CarWheel
{
    override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
    {
        super.EEHealthLevelChanged(oldLevel, newLevel, zone);

        if (newLevel == GameConstants.STATE_RUINED)
        {
            string newWheel = "";
            switch (GetType())
            {
                case "Bicycle_Wheel":
                    newWheel = "Bicycle_Wheel_Ruined";
                break;
            }

            if (newWheel != "")
            {
                if (IsLockedInSlot()){
                    UnlockFromParent();
                }
                
                IEntity child = GetChildren();
                while (child)
                {
                    RemoveChild(child, false);
                    vector matrix[4];
                    GetTransform(matrix);
                    GetInventroy().DropEntityWithTransform(InventoryMode.SERVER, this, EntityAI.Cast(child), matrix);
                    child = GetSibling();
                }

                ReplaceWheelLambda lambda = new ReplaceWheelLambda(this, newWheel, null);
                lambda.SetTransferParams(true, true, true);
            }
        }
    }

    override int GetMeleeTargetType()
    {
        return EMeleeTargetType.NONALIGNABLE;
    }

    override void SetACtions()
    {
        super.SetActions();

        AddAction(ActionDetach);
        AddAction(ActionAttachOnSelection);
    }
};

class Bicycle_Wheel_Ruined : CarWheel_Ruined {};
