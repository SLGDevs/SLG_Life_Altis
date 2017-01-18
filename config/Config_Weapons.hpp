/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" }, //Zubr .45
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "hgun_PDW2000_F", "", 20000, -1, "" },
			{ "hgun_Pistol_Signal_F", "", 1000, 500, ""}, //Starter Pistol
			{ "hgun_Pistol_01_F", "", 6000, -1, ""},
			{ "srifle_DMR_06_olive_F", "Hunting Rifle (Mk.14)", 22500, 11250, ""},
			{ "arifle_SPAR_01_blk_F", "", 30000, 15000, ""},
			{ "arifle_SPAR_03_blk_F", "", 35000, 17500, ""},
			{ "arifle_AKS_F", "", 35000, 17500, ""},
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 200, 150, "" },
			{ "10Rnd_9x21_Mag", "", 175, 125, ""},
			{ "30Rnd_556x45_Stanag", "", 225, 175, ""},
			{ "20Rnd_762x51_Mag", "", 250, 200, ""},
			{ "30Rnd_545x39_Mag_F", "", 250, 200, ""}
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" },
			{ "optic_Arco", "", 5000, 200, "" },
			{ "optic_Hamr", "", 5250, 225, "" },
			{ "optic_ACO_grn", "", 2500, 100, "" },
			{ "optic_Holosight", "", 2500, 100, "" },
			{ "optic_SOS", "", 7500, 425, "" },
			{ "optic_MRCO", "", 7250, 400, "" },
			{ "optic_DMS", "", 8000, 525, "" },
			{ "acc_flashlight", "", 1500, 75, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			{ "NVGoggles", "Goggles of the Night", 2000, 1000, ""},
			{ "Rangefinder", "", 5000, 2500, ""},
			{ "FirstAidKit", "", 5, 2, ""},
            { "arifle_AKM_F", "", 55000, 27500, "" },			
			{ "arifle_AK12_F", "", 60000, 30000, "" },			
			{ "arifle_AKS_F", "", 30000, 15000, "" },			
			{ "srifle_DMR_04_F", "", 65000, 32500, "" },			
			{ "arifle_CTAR_blk_F", "", 55000, 27500, "" },			
			{ "arifle_CTARS_blk_F", "", 75000, 37500, "" },			
			{ "srifle_DMR_05_blk_F", "", 120000, 60000, "" },			
			{ "srifle_GM6_F", "", 145000, 72500, "" },			
			{ "LMG_03_F", "", 75000, 375000, "" },			
			{ "srifle_DMR_02_F", "", 115000, 57500, "" },			
			{ "srifle_LRR_F", "", 140000, 70000, "" },			
			{ "srifle_DMR_06_olive_F", "", 0, 92625, "" },			
			{ "srifle_EBR_F", "", 40000, 20000, "" },			
			{ "LMG_Mk200_F", "", 75250, 37625, "" },			
			{ "arifle_MX_F", "", 45000, 22500, "" },			
			{ "arifle_MX_SW_F", "", 75250, 37625, "" },			
			{ "arifle_MXC_F", "", 36000, 18000, "" },			
			{ "arifle_MXM_F", "", 70000, 35000, "" },			
			{ "MMG_01_tan_F", "", 100000, 50000, "" },			
			{ "arifle_SPAR_01_blk_F", "", 27500, 13750, "" },			
			{ "arifle_SPAR_03_blk_F", "", 32500, 16250, "" },			
			{ "MMG_02_black_F", "", 120000, 60000, "" },			
			{ "LMG_Zafir_F", "", 100000, 50000, "" },			
			{ "hgun_Pistol_01_F", "", 4500, 2250, "" },			
			{ "hgun_P07_khk_F", "", 5000, 2500, "" },			
			{ "launch_RPG7_F", "", 500000, 250000, "" },
            { "arifle_SDAR_F", "", 20000, 7500, "" }
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "", 150, 75, "" },			
			{ "30Rnd_545x39_Mag_F", "", 150, 75, "" },			
			{ "10Rnd_127x54_Mag", "", 300, 150, "" },			
			{ "30Rnd_580x42_Mag_F", "", 165, 80, "" },			
			{ "100Rnd_580x42_Mag_F", "", 500, 250	, "" },			
			{ "10Rnd_93x64_DMR_05_Mag", "", 300, 150, "" },			
			{ "5Rnd_127x108_Mag", "", 350, 175, "" },			
			{ "200Rnd_556x45_Box_F", "", 675, 330, "" },			
			{ "10Rnd_338_Mag", "", 250, 125, "" },			
			{ "7Rnd_408_Mag", "", 300, 150, "" },			
			{ "20Rnd_762x51_Mag", "", 100, 50, "" },			
			{ "200Rnd_65x39_cased_Box", "", 250, 125, "" },			
			{ "30Rnd_65x39_caseless_mag", "", 150, 75, "" },			
			{ "100Rnd_65x39_caseless_mag", "", 200, 100, "" },			
			{ "150Rnd_93x64_Mag", "", 125, 65, "" },			
			{ "30Rnd_556x45_Stanag", "", 115, 55, "" },			
			{ "130Rnd_338_Mag", "", 200, 100, "" },			
			{ "150Rnd_762x54_Box", "", 225, 125, "" },			
			{ "10Rnd_9x21_Mag", "", 75, 35, "" },			
			{ "16Rnd_9x21_Mag", "", 80, 40, "" },			
			{ "RPG7_F", "", 100000, 45000, "" },		
            { "20Rnd_556x45_UW_mag", "", 125, 100, "" }
        };
        accs[] = {
			{ "bipod_01_F_blk", "", 50, 25, "" },			
			{ "muzzle_snds_338_black", "", 500, 250, "" },			
			{ "optic_ACO_grn", "", 500, 250, "" },			
			{ "optic_Aco", "", 500, 250, "" },			
			{ "optic_Arco", "", 500, 250, "" },			
			{ "optic_Hamr", "", 500, 250, "" },			
			{ "optic_Holosight", "", 100, 50, "" },			
			{ "optic_AMS", "", 0, 350, "" },			
			{ "optic_KHS_blk", "", 600, 300, "" },			
			{ "optic_SOS", "", 500, 250, "" },			
			{ "optic_MRCO", "", 500, 250, "" },			
			{ "optic_DMS", "", 600, 300, "" },			
			{ "optic_Nightstalker", "", 75000, 37500, "" },			
			{ "optic_NVS", "", 1000, 500, "" },			
			{ "optic_ERCO_blk_F", "", 500, 250, "" },			
			{ "optic_LRPS", "", 800, 400, "" },			
			{ "muzzle_snds_H", "", 500, 250, "" },			
			{ "muzzle_snds_L", "", 500, 250, "" },			
			{ "muzzle_snds_M", "", 500, 250, "" },			
			{ "muzzle_snds_B", "", 500, 250, "" },			
			{ "muzzle_snds_93mmg", "", 500, 250, "" },			
			{ "muzzle_snds_58_blk_F", "", 500, 250, "" },			
			{ "muzzle_snds_H_MG", "", 500, 250, "" },			
			{ "acc_pointer_IR", "", 50, 25, "" },			
			{ "acc_flashlight", "", 50, 25, "" },			
			{ "bipod_02_F_blk", "", 50, 25, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "HandGrenade_Stone", "Flashbang", 1700, -1, "" },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650, "" },
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500, "" },
            { "hgun_P07_F", "", 7500, 1500, "" },
            { "SMG_02_ACO_F", "", 30000, -1, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 7500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, -1, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 5000, "call life_coplevel >= 3" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 130, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 100, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 100, "" },
            { "acc_flashlight", "", 750, 100, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 100, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 100, "call life_coplevel >= 2" },
            { "optic_MRD", "", 2750, 100, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
