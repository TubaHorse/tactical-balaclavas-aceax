class CfgPatches
{
    class TacticalBalaclavas_ACEAX
    {
        author="TubaHorse";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"ace_main","aceax_gearinfo","Deg_TacticalBalaclava"};
    };
};

class XtdGearModels
{
    class CamoBase
    {
        class CRPT
        {
            label = "CROPAT";
            image = "\tactical-balaclavas-aceax\img\cropat.paa";
        };
    };
    class CfgGlasses
    {
        class TB_Balaclava
        {
            label="Tactical Balaclava";
            options[]={"camo","pos","glasses","skull"};
            class camo {
                values[]={"BLK","CRPT","FLCK","GRN","MTP","MC","TAN","WHT","M81"};
            };
            class pos {
                label="Nose Position";
                values[]={"Above","Under"};
                alwaysSelectable=1;
                changeInGame=1;
            };
            class glasses {
                label="Glasses";
                values[]={"None","Combat","ESS ICE","RollBar","Gatorz"};
                alwaysSelectable=1;
                changeInGame=0;
            };
            class skull {
                label="Skull Decal";
                values[]={"None","1","2"};
                alwaysSelectable=0;
                changeInGame=0;
            };
        };
    };
};

class XtdGearInfos
{
    class CfgGlasses
    {
        // Base Balaclavas
        class Deg_TB_Black {
            model="TB_Balaclava";
            camo="BLK";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_CROPAT_W {
            model="TB_Balaclava";
            camo="CRPT";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_Flecktarn {
            model="TB_Balaclava";
            camo="FLCK";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_Green {
            model="TB_Balaclava";
            camo="GRN";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_MC {
            model="TB_Balaclava";
            camo="MC";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_MTP {
            model="TB_Balaclava";
            camo="MTP";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_Tan {
            model="TB_Balaclava";
            camo="TAN";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_Wdl01 {
            model="TB_Balaclava";
            camo="M81";
            pos="Above";
            glasses="None";
            skull="None";
        };
        class Deg_TB_White {
            model="TB_Balaclava";
            camo="WHT";
            pos="Above";
            glasses="None";
            skull="None";
        };

        // Skull 1, Nose Up
        class Deg_TB_Black_Skull01: Deg_TB_Black {
            skull="1";
        };
        class Deg_TB_White_Skull01: Deg_TB_White {
            skull="1";
        };

        // Skull 2, Nose Up
        class Deg_TB_Black_Skull02: Deg_TB_Black {
            skull="2";
        };
        class Deg_TB_White_Skull02: Deg_TB_White {
            skull="2";
        };

        // Combat Goggles
        class Deg_TB_G_Combat_Black: Deg_TB_Black {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_Black_Skull01: Deg_TB_G_Combat_Black {
            skull="1";
        };
        class Deg_TB_G_Combat_Black_Skull02: Deg_TB_G_Combat_Black {
            skull="2";
        };
        class Deg_TB_G_Combat_White: Deg_TB_White {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_White_Skull01: Deg_TB_G_Combat_White {
            skull="1";
        };
        class Deg_TB_G_Combat_White_Skull02: Deg_TB_G_Combat_White {
            skull="2";
        };
        class Deg_TB_G_Combat_CROPAT_W: Deg_TB_CROPAT_W {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_Flecktarn: Deg_TB_Flecktarn {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_Green: Deg_TB_Green {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_MC: Deg_TB_MC {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_MTP: Deg_TB_MTP {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_Tan: Deg_TB_Tan {
            glasses="Combat";
        };
        class Deg_TB_G_Combat_Wdl01: Deg_TB_Wdl01 {
            glasses="Combat";
        };

        // EP Gatorz
        class Deg_TB_G_Gatorz_Black: Deg_TB_Black {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_Black_Skull01: Deg_TB_G_Gatorz_Black {
            skull="1";
        };
        class Deg_TB_G_Gatorz_Black_Skull02: Deg_TB_G_Gatorz_Black {
            skull="2";
        };
        class Deg_TB_G_Gatorz_White: Deg_TB_White {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_White_Skull01: Deg_TB_G_Gatorz_White {
            skull="1";
        };
        class Deg_TB_G_Gatorz_White_Skull02: Deg_TB_G_Gatorz_White {
            skull="2";
        };
        class Deg_TB_G_Gatorz_CROPAT_W: Deg_TB_CROPAT_W {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_Flecktarn: Deg_TB_Flecktarn {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_Green: Deg_TB_Green {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_MC: Deg_TB_MC {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_MTP: Deg_TB_MTP {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_Tan: Deg_TB_Tan {
            glasses="Gatorz";
        };
        class Deg_TB_G_Gatorz_Wdl01: Deg_TB_Wdl01 {
            glasses="Gatorz";
        };

        // ESS ICE
        class Deg_TB_G_ICE_Black: Deg_TB_Black {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_Black_Skull01: Deg_TB_G_ICE_Black {
            skull="1";
        };
        class Deg_TB_G_ICE_Black_Skull02: Deg_TB_G_ICE_Black {
            skull="2";
        };
        class Deg_TB_G_ICE_White: Deg_TB_White {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_White_Skull01: Deg_TB_G_ICE_White {
            skull="1";
        };
        class Deg_TB_G_ICE_White_Skull02: Deg_TB_G_ICE_White {
            skull="2";
        };
        class Deg_TB_G_ICE_CROPAT_W: Deg_TB_CROPAT_W {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_Flecktarn: Deg_TB_Flecktarn {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_Green: Deg_TB_Green {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_MC: Deg_TB_MC {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_MTP: Deg_TB_MTP {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_Tan: Deg_TB_Tan {
            glasses="ESS ICE";
        };
        class Deg_TB_G_ICE_Wdl01: Deg_TB_Wdl01 {
            glasses="ESS ICE";
        };

        // ESS RollBar
        class Deg_TB_G_RollBar_Black: Deg_TB_Black {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_Black_Skull01: Deg_TB_G_RollBar_Black {
            skull="1";
        };
        class Deg_TB_G_RollBar_Black_Skull02: Deg_TB_G_RollBar_Black {
            skull="2";
        };
        class Deg_TB_G_RollBar_White: Deg_TB_White {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_White_Skull01: Deg_TB_G_RollBar_White {
            skull="1";
        };
        class Deg_TB_G_RollBar_White_Skull02: Deg_TB_G_RollBar_White {
            skull="2";
        };
        class Deg_TB_G_RollBar_CROPAT_W: Deg_TB_CROPAT_W {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_Flecktarn: Deg_TB_Flecktarn {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_Green: Deg_TB_Green {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_MC: Deg_TB_MC {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_MTP: Deg_TB_MTP {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_Tan: Deg_TB_Tan {
            glasses="RollBar";
        };
        class Deg_TB_G_RollBar_Wdl01: Deg_TB_Wdl01 {
            glasses="RollBar";
        };

        // Under Nose
        class Deg_TB_UN_Black: Deg_TB_Black {
            pos="Under";
        };
        class Deg_TB_UN_Black_Skull01: Deg_TB_Black_Skull01 {
            pos="Under";
        };
        class Deg_TB_UN_Black_Skull02: Deg_TB_Black_Skull02 {
            pos="Under";
        };
        class Deg_TB_UN_CROPAT_W: Deg_TB_CROPAT_W {
            pos="Under";
        };
        class Deg_TB_UN_Flecktarn: Deg_TB_Flecktarn {
            pos="Under";
        };
        class Deg_TB_UN_Green: Deg_TB_Green {
            pos="Under";
        };
        class Deg_TB_UN_MC: Deg_TB_MC {
            pos="Under";
        };
        class Deg_TB_UN_MTP: Deg_TB_MTP {
            pos="Under";
        };
        class Deg_TB_UN_Tan: Deg_TB_Tan {
            pos="Under";
        };
        class Deg_TB_UN_Wdl01: Deg_TB_Wdl01 {
            pos="Under";
        };
        class Deg_TB_UN_White: Deg_TB_White {
            pos="Under";
        };
        class Deg_TB_UN_White_Skull01: Deg_TB_White_Skull01 {
            pos="Under";
        };
        class Deg_TB_UN_White_Skull02: Deg_TB_White_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_Black: Deg_TB_G_Combat_Black {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_Black_Skull01: Deg_TB_G_Combat_Black_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_Black_Skull02: Deg_TB_G_Combat_Black_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_White: Deg_TB_G_Combat_White {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_White_Skull01: Deg_TB_G_Combat_White_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_White_Skull02: Deg_TB_G_Combat_White_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_CROPAT_W: Deg_TB_G_Combat_CROPAT_W {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_Flecktarn: Deg_TB_G_Combat_Flecktarn {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_Green: Deg_TB_G_Combat_Green {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_MC: Deg_TB_G_Combat_MC {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_MTP: Deg_TB_G_Combat_MTP {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_Tan: Deg_TB_G_Combat_Tan {
            pos="Under";
        };
        class Deg_TB_G_Combat_UN_Wdl01: Deg_TB_G_Combat_Wdl01 {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_Black: Deg_TB_G_Gatorz_Black {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_Black_Skull01: Deg_TB_G_Gatorz_Black_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_Black_Skull02: Deg_TB_G_Gatorz_Black_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_White: Deg_TB_G_Gatorz_White {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_White_Skull01: Deg_TB_G_Gatorz_White_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_White_Skull02: Deg_TB_G_Gatorz_White_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_CROPAT_W: Deg_TB_G_Gatorz_CROPAT_W {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_Flecktarn: Deg_TB_G_Gatorz_Flecktarn {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_Green: Deg_TB_G_Gatorz_Green {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_MC: Deg_TB_G_Gatorz_MC {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_MTP: Deg_TB_G_Gatorz_MTP {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_Tan: Deg_TB_G_Gatorz_Tan {
            pos="Under";
        };
        class Deg_TB_G_Gatorz_UN_Wdl01: Deg_TB_G_Gatorz_Wdl01 {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_Black: Deg_TB_G_ICE_Black {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_Black_Skull01: Deg_TB_G_ICE_Black_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_Black_Skull02: Deg_TB_G_ICE_Black_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_White: Deg_TB_G_ICE_White {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_White_Skull01: Deg_TB_G_ICE_White_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_White_Skull02: Deg_TB_G_ICE_White_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_CROPAT_W: Deg_TB_G_ICE_CROPAT_W {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_Flecktarn: Deg_TB_G_ICE_Flecktarn {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_Green: Deg_TB_G_ICE_Green {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_MC: Deg_TB_G_ICE_MC {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_MTP: Deg_TB_G_ICE_MTP {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_Tan: Deg_TB_G_ICE_Tan {
            pos="Under";
        };
        class Deg_TB_G_ICE_UN_Wdl01: Deg_TB_G_ICE_Wdl01 {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_Black: Deg_TB_G_RollBar_Black {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_Black_Skull01: Deg_TB_G_RollBar_Black_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_Black_Skull02: Deg_TB_G_RollBar_Black_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_White: Deg_TB_G_RollBar_White {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_White_Skull01: Deg_TB_G_RollBar_White_Skull01 {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_White_Skull02: Deg_TB_G_RollBar_White_Skull02 {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_CROPAT_W: Deg_TB_G_RollBar_CROPAT_W {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_Flecktarn: Deg_TB_G_RollBar_Flecktarn {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_Green: Deg_TB_G_RollBar_Green {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_MC: Deg_TB_G_RollBar_MC {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_MTP: Deg_TB_G_RollBar_MTP {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_Tan: Deg_TB_G_RollBar_Tan {
            pos="Under";
        };
        class Deg_TB_G_RollBar_UN_Wdl01: Deg_TB_G_RollBar_Wdl01 {
            pos="Under";
        };
    };
};