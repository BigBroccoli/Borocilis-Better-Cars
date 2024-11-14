class CfgPatches
{
	class BBC_Bicycles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class BBC_Bicycles
	{
		dir="Borocilis-Better-Cars";
		author="Borocili";
		version="0.1";
		extra=0;
		type="mod";
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Borocilis-Better-Cars/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Borocilis-Better-Cars/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Borocilis-Better-Cars/Scripts/5_Mission"
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_bicycle_wheel_1_1
	{
		name="bicycle_wheel_1_1";
		displayName="Front Left Shoe";
		selection="wheel_1_1";
		ghostIcon="";
	};
	class Slot_bicycle_wheel_1_2
	{
		name="bicycle_wheel_1_2";
		displayName="Rear Left Shoe";
		selection="wheel_1_2";
		ghostIcon="";
	};
	class Slot_bicycle_wheel_2_1
	{
		name="bicycle_wheel_2_1";
		displayName="Front Right Shoe";
		selection="wheel_2_1";
		ghostIcon="";
	};
	class Slot_bicycle_wheel_2_2
	{
		name="bicycle_wheel_2_2";
		displayName="Rear Right Shoe";
		selection="wheel_2_2";
		ghostIcon="";
	};
	class Slot_mmt_wheel_1_1
	{
		name="mmt_wheel_1_1";
		displayName="Front Left Shoe";
		selection="wheel_1_1";
		ghostIcon="";
	};
	class Slot_mmt_wheel_1_2
	{
		name="mmt_wheel_1_2";
		displayName="Rear Left Shoe";
		selection="wheel_1_2";
		ghostIcon="";
	};
	class Slot_mmt_wheel_2_1
	{
		name="mmt_wheel_2_1";
		displayName="Front Right Shoe";
		selection="wheel_2_1";
		ghostIcon="";
	};
	class Slot_mmt_wheel_2_2
	{
		name="mmt_wheel_2_2";
		displayName="Rear Right Shoe";
		selection="wheel_2_2";
		ghostIcon="";
	};
};
class CfgVehicles
{
	class CarScript;
	class CarWheel;
	class Bicycle_wheel: CarWheel
	{
		scope=2;
		displayName="Bicycle Wheel";
		model="Borocilis-Better-Cars\model\Proxy\bicycle_wheel.p3d";
		weight=30000;
		itemSize[]={6,6};
		inventorySlot[]=
		{
			"bicycle_wheel_1_1",
			"bicycle_wheel_1_2",
			"bicycle_wheel_2_1",
			"bicycle_wheel_2_2"
		};
		rotationFlags=4;
		physLayer="item_large";
		repairableWithKits[]={6};
		repairCosts[]={30};
		radiusByDamage[]={0,0.36300001,0.40000001,0.35000002,0.99980003,0.25,0.99989998,0.2};
		radius=0.36300001;
		width=0.244;
		tyreRollResistance=0.016000001;
		tyreOffroadResistance=0.81999999;
		tyreGrip=0.81999999;
	};
	class MMT_wheel: CarWheel
	{
		scope=2;
		displayName="Mountain Bike Wheel";
		model="Borocilis-Better-Cars\model\Proxy\mmt_wheel.p3d";
		weight=30000;
		itemSize[]={6,6};
		inventorySlot[]=
		{
			"mmt_wheel_1_1",
			"mmt_wheel_1_2",
			"mmt_wheel_2_1",
			"mmt_wheel_2_2"
		};
		rotationFlags=4;
		physLayer="item_large";
		repairableWithKits[]={6};
		repairCosts[]={30};
		radiusByDamage[]={0,0.36300001,0.40000001,0.35000002,0.99980003,0.25,0.99989998,0.2};
		radius=0.36300001;
		width=0.244;
		tyreRollResistance=0.016000001;
		tyreOffroadResistance=0.81999999;
		tyreGrip=0.81999999;
	};
	class ItemBicycle_Base : CarScript{};
	class ItemBicycle : ItemBicycle_Base
	{
		model="Borocilis-Better-Cars\model\itembicycle.p3d";
		scope=2;
		attachments[]=
		{
			"bicycle_wheel_1_1",
			"bicycle_wheel_1_2"
		};
	};
	class ItemMMT : ItemBicycle_Base
	{
		model="Borocilis-Better-Cars\model\itemMMT.p3d";
		scope=2;
		attachments[]=
		{
			"mmt_wheel_1_1",
			"mmt_wheel_1_2"
		};
		class Cargo
		{
			itemsCargoSize[]={2,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class Bicycle_Base : CarScript{};
	class Bicycle : Bicycle_Base
	{
		scope=2;
		model="Borocilis-Better-Cars\model\bicycle.p3d";
		attachments[]=
		{
			"bicycle_wheel_1_1",
			"bicycle_wheel_1_2",
			"bicycle_wheel_2_1",
			"bicycle_wheel_2_2"
		};
		class AnimationSources
		{
			class Prevodnik
			{
				animPeriod=0.1;
				source="user";
				initPhase=0;
			};
			class Slapka_prava
			{
				animPeriod=0.1;
				source="user";
				initPhase=0;
			};
			class Slapka_leva
			{
				animPeriod=0.1;
				source="user";
				initPhase=0;
			};
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class HideDestroyed_1_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_1_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class AnimHitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCargo";
			};
			class SeatDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class SeatCoDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class damper_1_1
			{
				source="user";
				initPhase=0.48570001;
				animPeriod=1;
			};
			class damper_2_1: damper_1_1
			{
			};
			class damper_1_2
			{
				source="user";
				initPhase=0.40020001;
				animPeriod=1;
			};
			class damper_2_2: damper_1_2
			{
			};
			class DoorsCargo1
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCargo2
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
		};
		class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
				isDriver=1;
			};
			class CoDriver
			{
				actionSel="seat_coDriver";
				proxyPos="crewCoDriver";
				getInPos="pos_coDriver";
				getInDir="pos_coDriver_dir";
			};
		};
		class SimulationModule
		{
			drive="DRIVE_AWD";
			class Steering
			{
				maxSteeringAngle=35;
				increaseSpeed[]={0,25,50,15};
				decreaseSpeed[]={0,50,50,40};
				centeringSpeed[]={0,25,50,15};
			};
			class Throttle
			{
				reactionTime=0.25;
				defaultThrust=0.69999999;
				gentleThrust=0.60000002;
				turboCoef=3;
				gentleCoef=0.75;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.85000002,10,0.69999999,20,0.5,40,0.40000001,60,0.43000001,80,0.46000001,100,0.51999998,120,0.69999999};
				reactionTime=0.25;
				driverless=0.80000001;
			};
			class Aerodynamics
			{
				frontalArea=0.5;
				dragCoefficient=0.050000001;
				downforceCoefficient=3;
			};
			class Engine
			{
				torqueCurve[]={650,0,750,60,1000,100,2150,145,3900,125,7400,0};
				inertia=0.44999999;
				frictionTorque=165;
				rollingFriction=2;
				viscousFriction=1.25;
				rpmIdle=850;
				rpmMin=900;
				rpmClutch=1350;
				rpmRedline=7300;
			};
			class Clutch
			{
				maxTorqueTransfer=240;
				uncoupleTime=0.2;
				coupleTime=0.2;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=2.51;
				ratios[]={3.7};
			};
			class CentralDifferential
			{
				ratio=2.1500001;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles
			{
				class Front
				{
					maxBrakeTorque=3000;
					maxHandbrakeTorque=2500;
					wheelHubMass=20;
					wheelHubRadius=0.31;
					class Differential
					{
						ratio=4;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2200;
						damping=5400;
						travelMaxUp=0.15000001;
						travelMaxDown=0.1;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							animDamper="damper_1_1";
							wheelHub="wheel_1_1_damper_land";
							inventorySlot="bicycle_wheel_1_1";
						};
						class Right
						{
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							animDamper="damper_2_1";
							wheelHub="wheel_2_1_damper_land";
							inventorySlot="bicycle_wheel_2_1";
						};
					};
				};
				class Rear
				{
					maxBrakeTorque=1750;
					maxHandbrakeTorque=2000;
					wheelHubMass=20;
					wheelHubRadius=0.31;
					class Differential
					{
						ratio=4;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2200;
						damping=5400;
						travelMaxUp=0.15000001;
						travelMaxDown=0.1;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							animDamper="damper_1_2";
							wheelHub="wheel_1_2_damper_land";
							inventorySlot="bicycle_wheel_1_2";
						};
						class Right
						{
							animTurn="turnbacktright";
							animRotation="wheelbackright";
							animDamper="damper_2_2";
							wheelHub="wheel_2_2_damper_land";
							inventorySlot="bicycle_wheel_2_2";
						};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="set:bicycle_gui image:bicycle_icon";
				attachmentSlots[]=
				{
					"bicycle_wheel_1_1",
					"bicycle_wheel_1_2"
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,5};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat"
		};
	};
	class MMT : Bicycle
	{
		scope=2;
		model="Borocilis-Better-Cars\model\MMT.p3d";
		attachments[]=
		{
			"mmt_wheel_1_1",
			"mmt_wheel_1_2",
			"mmt_wheel_2_1",
			"mmt_wheel_2_2"
		};
		class Cargo
		{
			itemsCargoSize[]={2,4};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class SimulationModule
		{
			drive="DRIVE_AWD";
			class Steering
			{
				maxSteeringAngle=35;
				increaseSpeed[]={0,25,50,15};
				decreaseSpeed[]={0,50,50,40};
				centeringSpeed[]={0,25,50,15};
			};
			class Throttle
			{
				reactionTime=0.25;
				defaultThrust=0.69999999;
				gentleThrust=0.60000002;
				turboCoef=3;
				gentleCoef=0.75;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.85000002,10,0.69999999,20,0.5,40,0.40000001,60,0.43000001,80,0.46000001,100,0.51999998,120,0.69999999};
				reactionTime=0.25;
				driverless=0.80000001;
			};
			class Aerodynamics
			{
				frontalArea=0.5;
				dragCoefficient=0.050000001;
				downforceCoefficient=3;
			};
			class Engine
			{
				torqueCurve[]={650,0,750,60,1000,100,2150,145,3900,125,7400,0};
				inertia=0.44999999;
				frictionTorque=165;
				rollingFriction=2;
				viscousFriction=1.25;
				rpmIdle=850;
				rpmMin=900;
				rpmClutch=1350;
				rpmRedline=7300;
			};
			class Clutch
			{
				maxTorqueTransfer=240;
				uncoupleTime=0.2;
				coupleTime=0.2;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=2.51;
				ratios[]={3.7};
			};
			class CentralDifferential
			{
				ratio=2.1500001;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles
			{
				class Front
				{
					maxBrakeTorque=3000;
					maxHandbrakeTorque=2500;
					wheelHubMass=20;
					wheelHubRadius=0.31;
					class Differential
					{
						ratio=4;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2200;
						damping=5400;
						travelMaxUp=0.15000001;
						travelMaxDown=0.1;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							animDamper="damper_1_1";
							wheelHub="wheel_1_1_damper_land";
							inventorySlot="mmt_wheel_1_1";
						};
						class Right
						{
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							animDamper="damper_2_1";
							wheelHub="wheel_2_1_damper_land";
							inventorySlot="mmt_wheel_2_1";
						};
					};
				};
				class Rear
				{
					maxBrakeTorque=1750;
					maxHandbrakeTorque=2000;
					wheelHubMass=20;
					wheelHubRadius=0.31;
					class Differential
					{
						ratio=4;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2200;
						damping=5400;
						travelMaxUp=0.15000001;
						travelMaxDown=0.1;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							animDamper="damper_1_2";
							wheelHub="wheel_1_2_damper_land";
							inventorySlot="mmt_wheel_1_2";
						};
						class Right
						{
							animTurn="turnbacktright";
							animRotation="wheelbackright";
							animDamper="damper_2_2";
							wheelHub="wheel_2_2_damper_land";
							inventorySlot="mmt_wheel_2_2";
						};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="set:bicycle_gui image:bicycle_icon";
				attachmentSlots[]=
				{
					"mmt_wheel_1_1",
					"mmt_wheel_1_2"
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyVehiclePart;
	class ProxyBicycle_wheel: ProxyVehiclePart
	{
		model="Borocilis-Better-Cars\model\Proxy\bicycle_wheel.p3d";
		inventorySlot[]=
		{
			"bicycle_wheel_1_1",
			"bicycle_wheel_1_2",
			"bicycle_wheel_2_1",
			"bicycle_wheel_2_2"
		};
	};
	class ProxyBicycle_wheel_destroyed: ProxyVehiclePart
	{
		inventorySlot[]=
		{
			"bicycle_wheel_1_1",
			"bicycle_wheel_1_2",
			"bicycle_wheel_2_1",
			"bicycle_wheel_2_2"
		};
	};
	class Proxymmt_wheel: ProxyVehiclePart
	{
		model="Borocilis-Better-Cars\model\Proxy\mmt_wheel.p3d";
		inventorySlot[]=
		{
			"mmt_wheel_1_1",
			"mmt_wheel_1_2",
			"mmt_wheel_2_1",
			"mmt_wheel_2_2"
		};
	};
	class Proxymmt_wheel_destroyed: ProxyVehiclePart
	{
		inventorySlot[]=
		{
			"mmt_wheel_1_1",
			"mmt_wheel_1_2",
			"mmt_wheel_2_1",
			"mmt_wheel_2_2"
		};
	};
};
