class CfgPatches
{
	class Cannons_3as_ACEAX_compat_Helmets
	{
		addonRootClass="3as_ACEAX_compat"
        name="3as_ACEAX_compat_Helmets";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"aceax_gearinfo"
		};
		author="Chopper";
	};
};
class XtdGearModels
{
    class CfgWeapons 
    {
        class 3as_Phase_One_Armors
        {
            label="Phase 1 Armor";
            author="Chopper";
            options[]={"type","P1_Armor"};
            class type
            {
                labels="Type";
                values[]=
                {
                    "Clean",
                    "Dirty"
                };
            };
            class P1_Armor
            {
                labels="Helmets";
                values[]=
                {
                    "Base",
                    "Sergeant",
                    "Lieutenant",
                    "Captain",
                    "Commander"
                };
                class Base
                {
                    label="Base";
                };
                class Sergeant
                {
                    label="SGT";
                };
                class Lieutenant
                {
                    label="LT";
                };
                class Captain
                {
                    label="CPT";
                };
                class Commander
                {
                    label="CC";
                };
            };
        };
        class 3as_Commando_Armor
        {
            label="Katam Armor";
            author="Chopper";
            options[]={"Katam_Armor"};
            class Katam_Armor
            {
                labels="Armor";
                values[]=
                {
                    "Base",
                    "Boss",
                    "Fixer",
                    "Gregor",
                    "Omega",
                    "Scorch",
                    "Sev"
                };
                class Base
                {
                    label="Base";
                };
                class Boss
                {
                    label="Boss";
                };
                class Fixer
                {
                    label="Fixer";
                };
                class Gregor
                {
                    label="Gregor";
                };
                class Omega
                {
                    label="Omega";
                };
                class Scorch
                {
                    label="Scorch";
                };
                class Sev
                {
                    label="Sev";
                };
            };
        };
         class 3as_CIS_Armors
        {
            label="CIS Armor";
            author="Chopper";
            options[]={"CIS_Armor"};
            class CIS_Armor
            {
                labels="Armor";
                values[]=
                {
                    "Light",
                    "Heavy",
                    "Medic",
                    "Officer"
                };
                class Light
                {
                    label="Light";
                };
                class Heavy
                {
                    label="Heavy";
                };
                class Medic
                {
                    label="Medic";
                };
                class Officer
                {
                    label="Officer";
                };
            };
        };
        class 3as_T_Series_Armors
        {
            label="T-Series Armors";
            author="Chopper";
            options[]={"T_Series_Armor"};
            class T_Series_Armor
            {
                labels="Armors";
                values[]=
                {
                    "Base",
                    "Green",
                    "Red",
                    "TV24"
                };
                class Base
                {
                    label="Base";
                };
                class Green
                {
                    label="Green";
                };
                class Red
                {
                    label="Red";
                };
                class TV24
                {
                    label="TV24";
                };
            };
        };
    };
};
class CfgWeapons
{
	class 3as_JLTS_CloneArmor_Base;
    class 3AS_Clone_Phase1_Armor: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Clean";
            P1_Armor="Base";
        };
    };
	class 3AS_Clone_Phase1_Armor_Commander: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Clean";
            P1_Armor="Commander";
        };
    };
    class 3AS_Clone_Phase1_Armor_Captain: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Clean";
            P1_Armor="Captain";
        };
    };
    class 3AS_Clone_Phase1_Armor_Lieutenant: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Clean";
            P1_Armor="Lieutenant";
        };
    };
    class 3AS_Clone_Phase1_Armor_Sergeant: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Clean";
            P1_Armor="Sergeant";
        };
    };
        //dirty
    class 3AS_Clone_Phase1_Dirty_Armor: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Dirty";
            P1_Armor="Base";
        };
    };
	class 3AS_Clone_Phase1_Dirty_Armor_Commander: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Dirty";
            P1_Armor="Commander";
        };
    };
    class 3AS_Clone_Phase1_Dirty_Armor_Captain: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Dirty";
            P1_Armor="Captain";
        };
    };
    class 3AS_Clone_Phase1_Dirty_Armor_Lieutenant: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Dirty";
            P1_Armor="Lieutenant";
        };
    };
    class 3AS_Clone_Phase1_Dirty_Armor_Sergeant: 3as_JLTS_CloneArmor_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Armors";
            type="Dirty";
            P1_Armor="Sergeant";
        };
    };

    //Commando
    class Uniform_Base;
    class 3AS_U_Rep_Katarn_Armor: Uniform_Base
    {
        class XtdGearInfo
        {
            model="3as_Commando_Armor";
            Katam_Armor="Base";
        };
    };
    class 3AS_U_Rep_Katarn_Armor_Boss: 3AS_U_Rep_Katarn_Armor
    {
        class XtdGearInfo
        {
            model="3as_Commando_Armor";
            Katam_Armor="Boss";
        };
    };
    class 3AS_U_Rep_Katarn_Armor_Fixer: 3AS_U_Rep_Katarn_Armor
    {
        class XtdGearInfo
        {
            model="3as_Commando_Armor";
            Katam_Armor="Fixer";
        };
    };
    class 3AS_U_Rep_Katarn_Armor_Gregor: 3AS_U_Rep_Katarn_Armor
    {
        class XtdGearInfo
        {
            model="3as_Commando_Armor";
            Katam_Armor="Gregor";
        };
    };
    class 3AS_U_Rep_Katarn_Armor_Omega: 3AS_U_Rep_Katarn_Armor
    {
        class XtdGearInfo
        {
            model="3as_Commando_Armor";
            Katam_Armor="Omega";
        };
    };
    class 3AS_U_Rep_Katarn_Armor_Scorch: 3AS_U_Rep_Katarn_Armor
    {
        class XtdGearInfo
        {
            model="3as_Commando_Armor";
            Katam_Armor="Scorch";
        };
    };
    class 3AS_U_Rep_Katarn_Armor_Sev: 3AS_U_Rep_Katarn_Armor
    {
        class XtdGearInfo
        {
            model="3as_Commando_Armor";
            Katam_Armor="Sev";
        };
    };

    //CIS
    class 3AS_Uniform_CIS_Human_Base;
    class 3AS_Uniform_CIS_Heavy_Base;
	class 3AS_U_CIS_Light_Armor: 3AS_Uniform_CIS_Human_Base
    {
        class XtdGearInfo
        {
            model="3as_CIS_Armors";
            CIS_Armor="Light";
        };
    };
	class 3AS_U_CIS_Heavy_Armor: 3AS_Uniform_CIS_Heavy_Base
    {
        class XtdGearInfo
        {
            model="3as_CIS_Armors";
            CIS_Armor="Heavy";
        };
    };
	class 3AS_U_CIS_Medic_Armor: 3AS_U_CIS_Light_Armor
    {
        class XtdGearInfo
        {
            model="3as_CIS_Armors";
            CIS_Armor="Medic";
        };
    };
	class 3AS_U_CIS_Officer_Armor: 3AS_U_CIS_Light_Armor
    {
        class XtdGearInfo
        {
            model="3as_CIS_Armors";
            CIS_Armor="Officer";
        };
    };

    //tseries
	class 3AS_U_CIS_TS: Uniform_Base
    {
        class XtdGearInfo
        {
            model="3as_T_Series_Armors";
            T_Series_Armor="Base";
        };
    };
    class 3AS_U_CIS_TS_Green: 3AS_U_CIS_TS
    {
        class XtdGearInfo
        {
            model="3as_T_Series_Armors";
            T_Series_Armor="Green";
        };
    };
    class 3AS_U_CIS_TS_Red: 3AS_U_CIS_TS
    {
        class XtdGearInfo
        {
            model="3as_T_Series_Armors";
            T_Series_Armor="Red";
        };
    };
    class 3AS_U_CIS_TS_TV24: 3AS_U_CIS_TS
    {
        class XtdGearInfo
        {
            model="3as_T_Series_Armors";
            T_Series_Armor="TV24";
        };
    };
};