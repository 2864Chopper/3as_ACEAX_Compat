https://github.com/2864Chopper/3as_ACEAX_Compatclass 
CfgPatches
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
        class 3as_Phase_One_Helms
        {
            label="Phase 1 Helmets";
            author="Chopper";
            options[]={"P1_Helm"};
            class P1_Helm
            {
                labels="Helmets";
                values[]=
                {
                    "Base",
                    "SGT",
                    "LT",
                    "CPT",
                    "CC",
                    "EOD",
                    "91st",
                    "212th",
                    "327th",
                    "501st",
                    "501sta",
                    "Pilot"
                };
            };
        };
        class 3as_Tanker_Helms
        {
            label="Tanker Helmets";
            author="Chopper";
            options[]={"Tanker_Helm"};
            class Tanker_Helm
            {
                labels="Helmets";
                values[]=
                {
                    "Base",
                    "91st",
                    "212th",
                    "501st"
                };
                class Base
                {
                    label="Base";
                };
                class 91st
                {
                    label="91st";
                };
                class 212th
                {
                    label="212th";
                };
                class 501st
                {
                    label="501st";
                };
            };
        };
        class 3as_Pilot_Helms
        {
            label="P2 Pilot Helmets";
            author="Chopper";
            options[]={"Pilot_Helm"};
            class Pilot_Helm
            {
                labels="Helmets";
                values[]=
                {
                    "Base",
                    "Republic",
                    "91st",
                    "101st",
                    "212th",
                    "327th",
                    "Razor"
                };
                class Base
                {
                    label="Base";
                };
                class Republic
                {
                    label="Republic";
                };
                class 91st
                {
                    label="91st";
                };
                class 101st
                {
                    label="101st";
                };
                class 212th
                {
                    label="212th";
                };
                class 327th
                {
                    label="327th";
                };
                class Razor
                {
                    label="Razor";
                };
            };
        };
        class 3as_Commando_Helms
        {
            label="Katam Helmets";
            author="Chopper";
            options[]={"Katam_Helm"};
            class Katam_Helm
            {
                labels="Helmets";
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
    };
};
class CfgWeapons
{
    class H_HelmetO_ViperSP_hex_F;
    //Phase 1
    #define MACRO_P1_HELMETS(a) class 3as_P1_##a## : 3as_P1_Base {\
        class XtdGearInfo\
        {\
            model="3as_Phase_One_Helms";\
            P1_Helm=##a##;\
        };\
    };
    class 3as_P1_Base: H_HelmetO_ViperSP_hex_F
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Helms";
            P1_Helm="Base";
        };
    };

    MACRO_P1_HELMETS(Sgt);
    MACRO_P1_HELMETS(LT);
    MACRO_P1_HELMETS(CPT);
    MACRO_P1_HELMETS(CC);
    MACRO_P1_HELMETS(91st);
    MACRO_P1_HELMETS(212th);
    MACRO_P1_HELMETS(327th);
    MACRO_P1_HELMETS(501st);
    MACRO_P1_HELMETS(501stA);
    class 3as_P1_EOD_Helmet: 3as_P1_Base
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Helms";
            P1_Helm="EOD";
        };
    };


	class 3as_P1_Pilot_helmet: H_HelmetO_ViperSP_hex_F
    {
        class XtdGearInfo
        {
            model="3as_Phase_One_Helms";
            P1_Helm="Pilot";
        };
    };


    //Tanker
	class 3as_Tanker_Helmet: H_HelmetO_ViperSP_hex_F
    {
        class XtdGearInfo
        {
            model="3as_Tanker_Helms";
            Tanker_Helm="Base";
        };
    };
    class 3as_Tanker_Helmet_91: 3as_Tanker_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Tanker_Helms";
            Tanker_Helm="91st";
        };
    };
    class 3as_Tanker_Helmet_212: 3as_Tanker_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Tanker_Helms";
            Tanker_Helm="212th";
        };
    };
    class 3as_Tanker_Helmet_501: 3as_Tanker_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Tanker_Helms";
            Tanker_Helm="501st";
        };
    };

    //P2 Pilot
    class 3as_P2_Pilot_helmet: H_HelmetO_ViperSP_hex_F
    {
        class XtdGearInfo
        {
            model="3as_Pilot_Helms";
            Pilot_Helm="Base";
        };
    };
    class 3as_P2_Pilot_helmet_Republic: 3as_P2_Pilot_helmet
    {
        class XtdGearInfo
        {
            model="3as_Pilot_Helms";
            Pilot_Helm="Republic";
        };
    };
    class 3as_P2_Pilot_helmet_91st: 3as_P2_Pilot_helmet
    {
        class XtdGearInfo
        {
            model="3as_Pilot_Helms";
            Pilot_Helm="91st";
        };
    };
    class 3as_P2_Pilot_helmet_101st: 3as_P2_Pilot_helmet
    {
        class XtdGearInfo
        {
            model="3as_Pilot_Helms";
            Pilot_Helm="101st";
        };
    };
    class 3as_P2_Pilot_helmet_212th: 3as_P2_Pilot_helmet
    {
        class XtdGearInfo
        {
            model="3as_Pilot_Helms";
            Pilot_Helm="212th";
        };
    };
    class 3as_P2_Pilot_helmet_327th: 3as_P2_Pilot_helmet
    {
        class XtdGearInfo
        {
            model="3as_Pilot_Helms";
            Pilot_Helm="327th";
        };
    };
    class 3as_P2_Pilot_helmet_Razor: 3as_P2_Pilot_helmet
    {
        class XtdGearInfo
        {
            model="3as_Pilot_Helms";
            Pilot_Helm="Razor";
        };
    };
    


    //Commados
    class 3AS_Katarn_Helmet_Base;
    class 3AS_H_Katarn_Helmet: 3AS_Katarn_Helmet_Base
    {
        class XtdGearInfo
        {
            model="3as_Commando_Helms";
            Katam_Helm="Base";
        };
    };
    class 3AS_H_Katarn_Helmet_Boss: 3AS_H_Katarn_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Commando_Helms";
            Katam_Helm="Boss";
        };
    };
    class 3AS_H_Katarn_Helmet_Fixer: 3AS_H_Katarn_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Commando_Helms";
            Katam_Helm="Fixer";
        };
    };
    class 3AS_H_Katarn_Helmet_Gregor: 3AS_H_Katarn_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Commando_Helms";
            Katam_Helm="Gregor";
        };
    };
    class 3AS_H_Katarn_Helmet_Omega: 3AS_H_Katarn_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Commando_Helms";
            Katam_Helm="Omega";
        };
    };
    class 3AS_H_Katarn_Helmet_Scorch: 3AS_H_Katarn_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Commando_Helms";
            Katam_Helm="Scorch";
        };
    };
    class 3AS_H_Katarn_Helmet_Sev: 3AS_H_Katarn_Helmet
    {
        class XtdGearInfo
        {
            model="3as_Commando_Helms";
            Katam_Helm="Sev";
        };
    };

    //Cold Assault
    class 3AS_ColdAssault_Helmet_Base;
    #define MACRO_COLD_HELMETS(a) class 3as_P1_##a## : 3as_P1_Base {\
        class XtdGearInfo\
        {\
            model="3as_Phase_One_Helms";\
            P1_Helm=##a##;\
        };\
    };
};