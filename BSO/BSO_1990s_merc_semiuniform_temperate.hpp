// 1990s era mercenary company with a mish-mash of temperate/woodland camouflage patterns
// Mostly HK-based weaponry; no night equipment; light armour


#define COLD_UNIFORMS {\
        "usm_bdu_tgrstp",\
        "usm_bdu_ERDL",\
        "usm_bdu_portliz",\
        "usm_bdu_wdl",\
        "usm_bdu_wdl2",\
        "usm_bdu_bti_ERDL",\
        "usm_bdu_bti_portliz",\
        "usm_bdu_bti_tgrstp",\
        "usm_bdu_bti_wdl",\
        "usm_bdum65_ERDL",\
        "usm_bdum65_odg",\
        "usm_bdum65_portliz",\
        "usm_bdum65_tgrstp",\
        "usm_bdum65_wdl",\
        "usm_bdum65_wdl2",\
        "usm_bdum65_wdl3"\
    }

#define WARM_HATS {\
        "usm_bdu_boonie_blk",\
        "usm_bdu_boonie_erdl",\
        "usm_bdu_boonie_odg",\
        "usm_bdu_boonie_portliz",\
        "usm_bdu_boonie_tgrstp",\
        "usm_bdu_boonie_wdl",\
        "usm_bdu_cap_blk",\
        "usm_bdu_cap_erdl",\
        "usm_bdu_cap_gry",\
        "usm_bdu_cap_odg",\
        "usm_bdu_cap_portliz",\
        "usm_bdu_cap_tgrstp",\
        "usm_bdu_cap_wdl"\
    }

#define COLD_HATS {\
        "LOP_H_Beanie_dpmw",\
        "LOP_H_Beanie_m81",\
        "rhs_beanie_green",\
        "H_Watchcap_blk",\
        "H_Watchcap_cbr",\
        "H_Watchcap_camo",\
        "H_Watchcap_khk",\
        "usm_bdu_cap_blk",\
        "usm_bdu_cap_erdl",\
        "usm_bdu_cap_gry",\
        "usm_bdu_cap_odg",\
        "usm_bdu_cap_portliz",\
        "usm_bdu_cap_tgrstp",\
        "usm_bdu_cap_wdl"\
    }


// class TB3_Gear {
    class BSO_1990s_merc_semiuniform_temperate_warm {
        // Warm-weather (light jackets, rolled-up sleeves, etc)

        // Base equipment
        class Soldier_Base {
            uniformRandom = 1;
            vestRandom = 1;
            headgearRandom = 1;
            backpackRandom = 1;
            ace_medic = 0;
            ace_engineer = 0;

            allowPlayerGoggles = 1;

            weapons[] = {};
            priKit[] = {};
            secKit[] = {};
            pisKit[] = {};

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

            headgear[] = {
                "usm_helmet_pasgt_g_w",
                "usm_helmet_pasgt_ce_gry",
                "usm_helmet_pasgt_ceswd_gry",
                "usm_helmet_pasgt_ce_odg",
                "usm_helmet_pasgt_ceswd_odg",
                "usm_helmet_pasgt_w",
                "usm_helmet_pasgt_ce_wdl",
                "usm_helmet_pasgt_ceswd_wdl",
                "usm_helmet_pasgt_ce_blk",
                "usm_helmet_pasgt_ceswd_blk"
            };

            goggles[] = {};

            uniform[] = {
                "usm_bdu_btisrl_ERDL",
                "usm_bdu_btisrl_odg",
                "usm_bdu_btisrl_portliz",
                "usm_bdu_btisrl_tgrstp",
                "usm_bdu_btisrl_wdl",
                "usm_bdu_btisrl_wdl2",
                "usm_bdu_srl_odg",
                "usm_bdu_srl_ERDL",
                "usm_bdu_srl_portliz",
                "usm_bdu_srl_tgrstp",
                "usm_bdu_srl_wdl",
                "usm_bdu_srl_wdl2",
                "usm_bdu_srh_ERDL",
                "usm_bdu_srh_odg",
                "usm_bdu_srh_portliz",
                "usm_bdu_srh_tgrstp",
                "usm_bdu_srh_wdl",
                "usm_bdu_srh_wdl2"
            };
            uniformContents[] = {
                {"ACE_packingBandage",4},
                {"ACE_fieldDressing",4},
                {"ACE_tourniquet",2},
                {"ACE_morphine",2},
                {"ACE_quikclot",2},
                {"ACE_elasticBandage",2},
                {"ACE_salineIV_500",1},
                {"ACE_MapTools",1},
                {"ACE_Flashlight_MX991",1},
                {"ACRE_PRC343",1}
            };

            vest[] = {
                "V_TacVest_blk",
                "V_TacVest_camo",
                "rhsgref_TacVest_ERDL",
                "V_TacVest_khk",
                "V_TacVest_oli",
                "UK3CB_TKA_B_V_TacVest_Tan"
            };
            vestContents[] = {};
            
            backpack[] = {
                "UK3CB_B_Alice_Bedroll_K",
                "UK3CB_B_Alice_K",
                "UK3CB_CHC_C_B_HIKER",
                "tacs_Backpack_Carryall_DarkBlack",
                "B_Carryall_khk",
                "B_Carryall_oli",
                "B_Kitbag_cbr",
                "tacs_Backpack_Kitbag_DarkBlack",
                "B_Kitbag_rgr",
                "B_Kitbag_sgg",
                "UK3CB_CW_US_B_LATE_B_RIF_03",
                "rhssaf_kitbag_smb"
            };
            backpackContents[] = {};
        };

        // Platoon HQ group
        class PL: Soldier_Base {
            weapons[] = {"hlc_smg_mp5a3","RH_cz75","ACE_Yardage450"};
            priKit[] = {"hlc_30Rnd_9x19_B_MP5","hlc_acc_surefiregrip"};
            pisKit[] = {"RH_16Rnd_9x19_CZ"};

            vestContents[] = {
                {"ACE_DAGR",1},
                {"ACRE_SEM52SL",1},
                {"hlc_30Rnd_9x19_B_MP5",5},
                {"rhssaf_mag_br_m75",1},
                {"rhs_mag_an_m8hc",1},
                {"RH_16Rnd_9x19_CZ",1}
            };
            backpackContents[] = {
                {"hlc_30Rnd_9x19_B_MP5",5},
                {"RH_16Rnd_9x19_CZ",2},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_m18_yellow",2},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_purple",2},
                {"Binocular",1}
            };
        };

        class Radioman: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",6},
                {"rhssaf_mag_br_m75",1},
                {"rhs_mag_an_m8hc",2}
            };
            
            backpack[] = {
                "usm_pack_st138_prc77"
            };
            backpackContents[] = {
                {"ACRE_SEM70",1},
                {"ACRE_SEM52SL",1}
            };
        };

        class Medic: Soldier_Base {
            ace_medic = 1;
            weapons[] = {"hlc_smg_mp5a3","RH_cz75"};
            priKit[] = {"hlc_30Rnd_9x19_B_MP5","hlc_acc_surefiregrip"};
            pisKit[] = {"RH_16Rnd_9x19_CZ"};

            vestContents[] = {
                {"hlc_30Rnd_9x19_B_MP5",5},
                {"RH_16Rnd_9x19_CZ",1},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_purple",2}
            };
            backpack[] = {
                "tacs_Backpack_Kitbag_Medic_Black",
                "tacs_Backpack_Kitbag_Medic_Coyote",
                "tacs_Backpack_Kitbag_Medic_Green",
                "tacs_Backpack_Kitbag_Medic_RGR",
                "tacs_Backpack_Kitbag_Medic_Sage"
            };
            backpackContents[] = {
                {"hlc_30Rnd_9x19_B_MP5",3},
                {"ACE_fieldDressing",30},
                {"ACE_packingBandage",20},
                {"ACE_elasticBandage",5},
                {"ACE_quikclot",10},
                {"ACE_morphine",15},
                {"ACE_adenosine",10},
                {"ACE_epinephrine",10},
                {"ACE_tourniquet",10},
                {"ACE_salineIV_500",8},
                {"ACE_personalAidKit",1},
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_m18_purple",2}
            };
        };

        class Marksman: Soldier_Base {
            weapons[] = {"hlc_rifle_FN3011","RH_cz75","Binocular"};
            priKit[] = {"hlc_10Rnd_762x51_B_fal","hlc_optic_fnstanag2d"};
            pisKit[] = {"RH_16Rnd_9x19_CZ"};

            vestContents[] = {
                {"ACRE_SEM52SL",1},
                {"hlc_10Rnd_762x51_B_fal",5},
                {"RH_16Rnd_9x19_CZ",2},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_green",1},
                {"ACE_RangeCard",1}
            };
            backpackContents[] = {
                {"hlc_10Rnd_762x51_B_fal",8},
                {"hlc_10Rnd_762x51_T_fal",3},
                {"RH_16Rnd_9x19_CZ",3},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_green",1}
            };
        };

        class Runner: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"ACE_DAGR",1},
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhs_mag_an_m8hc",2},
                {"rhssaf_mag_br_m75",2}
            };
        };

        class Driver: Soldier_Base {
            weapons[] = {"hlc_smg_mp5a3"};
            priKit[] = {"hlc_30Rnd_9x19_B_MP5","hlc_acc_slimlinegrip"};

            headgear[] = WARM_HATS;

            vestContents[] = {
                {"hlc_30Rnd_9x19_B_MP5",5},
                {"rhssaf_mag_br_m75",1},
                {"rhs_mag_an_m8hc",1}
            };

            backpack[] = {};
            
        };


        // Infantry squad
        class SL: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","RH_cz75","ACE_Yardage450"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};
            pisKit[] = {"RH_16Rnd_9x19_CZ"};

            vestContents[] = {
                {"ACE_DAGR",1},
                {"ACRE_SEM52SL",1},
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhssaf_mag_br_m75",2}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",3},
                {"hlc_200rnd_556x45_M_SAW",1},
                {"RH_16Rnd_9x19_CZ",2},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_m18_yellow",2},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_purple",1},
                {"Binocular",1}
            };
        };

        class TL: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33a2","Binocular"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",2},
                {"rhssaf_mag_br_m75",1},
                {"rhs_mag_an_m8hc",1}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",5},
                {"hlc_30rnd_556x45_t_HK33",2},
                {"hlc_200rnd_556x45_M_SAW",1},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_m18_yellow",2},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_an_m8hc",2}
            };
        };

        class AR: Soldier_Base {
            weapons[] = {"rhs_weap_m249","RH_cz75"};
            priKit[] = {"hlc_200rnd_556x45_M_SAW","rhsusf_acc_saw_bipod"};
            pisKit[] = {"RH_16Rnd_9x19_CZ"};

            vestContents[] = {
                {"hlc_200rnd_556x45_M_SAW",1},
                {"RH_16Rnd_9x19_CZ",1},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",1}
            };
            backpackContents[] = {
                {"hlc_200rnd_556x45_M_SAW",2},
                {"RH_16Rnd_9x19_CZ",1},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",2}
            };
        };

        class Grenadier: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","ptv_hk69"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};
            pisKit[] = {"rhs_mag_M433_HEDP"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhs_mag_M433_HEDP",5},
                {"rhs_mag_an_m8hc",1}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",4},
                {"rhs_mag_M433_HEDP",15},
                {"1Rnd_SmokeRed_Grenade_shell",4},
                {"ACE_40mm_Flare_white",4},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",1}
            };
        };

        class Rifleman: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33a2"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",6},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhssaf_mag_br_m75",2}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"hlc_200rnd_556x45_M_SAW",1},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",2}
            };
        };

        class RiflemanLAT: Rifleman {
            weapons[] = {"hlc_rifle_hk33ka3","rhs_weap_m72a7"};
        };

        class RiflemanCLS: Rifleman {
            ace_medic = 1;
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"hlc_200rnd_556x45_M_SAW",1},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",2},
                {"ACE_packingBandage",20},
                {"ACE_fieldDressing",20},
                {"ACE_tourniquet",6},
                {"ACE_salineIV_500",4}
            };
        };


        // MG section
        class MGSL: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","ACE_Yardage450"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"ACE_DAGR",1},
                {"ACRE_SEM52SL",1},
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhssaf_mag_br_m75",2}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",2},
                {"hlc_30rnd_556x45_t_HK33",4},
                {"rhsusf_100Rnd_762x51",2},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_m18_yellow",2},
                {"Binocular",1}
            };
        };

        class MG: Soldier_Base {
            weapons[] = {"hlc_lmg_m60","RH_cz75"};
            priKit[] = {"rhsusf_100Rnd_762x51"};
            pisKit[] = {"RH_16Rnd_9x19_CZ"};

            vestContents[] = {
                {"rhsusf_100Rnd_762x51",2},
                {"RH_16Rnd_9x19_CZ",2},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",2}
            };
            backpackContents[] = {
                {"rhsusf_100Rnd_762x51",2},
                {"RH_16Rnd_9x19_CZ",2},
                {"rhs_mag_an_m8hc",2}
            };
        };

        class MGAsst: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33a2"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",5},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",1}
            };
            backpackContents[] = {
                {"rhsusf_100Rnd_762x51",4},
                {"hlc_30rnd_556x45_b_HK33",3},
                {"ACE_SpareBarrel",1},
                {"rhs_mag_an_m8hc",2}

            };
        };


        // Medium AT section
        class MATSL: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","ACE_Yardage450"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"ACE_DAGR",1},
                {"ACRE_SEM52SL",1},
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhssaf_mag_br_m75",2}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",2},
                {"hlc_30rnd_556x45_t_HK33",4},
                {"rhs_mag_maaws_HEAT",1},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_m18_yellow",2},
                {"Binocular",1}
            };
        };

        class MAT: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","rhs_weap_maaws"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};
            secKit[] = {"rhs_mag_maaws_HEAT","rhs_optic_maaws"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",5},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",2}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",3},
                {"rhs_mag_maaws_HEDP",1},
                {"rhs_mag_an_m8hc",2}
            };
        };

        class MATAsst: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33a2"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",5},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhssaf_mag_br_m75",2},
                {"rhs_mag_an_m8hc",1}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",2},
                {"rhs_mag_maaws_HEAT",2},
                {"rhs_mag_maaws_HE",1}
            };
        };


        // ATGM team
        class ATGMGunner: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","ace_dragon_super","ace_dragon_sight"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",5},
                {"ACRE_SEM52SL",1},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhs_mag_an_m8hc",1}
            };

            backpack[] = {};
        };

        class ATGMAsst: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","ace_dragon_super"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",5},
                {"rhs_mag_an_m8hc",1},
                {"hlc_30rnd_556x45_t_HK33",1}
            };

            backpack[] = {};
        };


        // Mortar section
        class MortarSL: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","ACE_Yardage450"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"ACE_DAGR",1},
                {"ACRE_SEM52SL",1},
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhssaf_mag_br_m75",2}
            };
            backpackContents[] = {
                {"hlc_30rnd_556x45_b_HK33",4},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_m18_yellow",2},
                {"UK3CB_BAF_1Rnd_60mm_Mo_Shells",4},
                {"Binocular",1}
            };
        };

        class MortarGunner: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3","UK3CB_BAF_M6"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};
            secKit[] = {};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",6},
                {"rhs_mag_an_m8hc",2}
            };
            backpackContents[] = {
                {"UK3CB_BAF_1Rnd_60mm_Mo_Shells",7},
                {"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",2}
            };
        };

        class MortarAsst: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33ka3"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            vestContents[] = {
                {"hlc_30rnd_556x45_b_HK33",6},
                {"rhs_mag_an_m8hc",2}
            };
            backpackContents[] = {
                {"UK3CB_BAF_1Rnd_60mm_Mo_Shells",7},
                {"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",2}
            };
        };

        // Sniper team
        class Spotter: Soldier_Base {
            weapons[] = {"hlc_rifle_hk33a2","ACE_Yardage450"};
            priKit[] = {"hlc_30rnd_556x45_b_HK33"};

            headgear[] = WARM_HATS;

            vestContents[] = {
                {"ACRE_SEM52SL",1},
                {"ACE_DAGR",1},
                {"ACE_RangeCard",1},
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"rhs_mag_an_m8hc",1}
            };
            backpackContents[] = {
                {"rhsusf_5Rnd_762x51_m118_special_Mag",15},
                {"hlc_30rnd_556x45_b_HK33",4},
                {"hlc_30rnd_556x45_t_HK33",1},
                {"ACE_SpottingScope",1},
                {"Binocular",1},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_green",1}
            };
        };

        class Sniper: Soldier_Base {
            weapons[] = {"rhs_weap_m24sws","RH_cz75","Binocular"};
            priKit[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_acc_m8541_low","rhsusf_acc_m24_muzzlehider_black","rhsusf_acc_harris_swivel"};
            pisKit[] = {"RH_16Rnd_9x19_CZ"};

            headgear[] = WARM_HATS;

            vestContents[] = {
                {"rhsusf_5Rnd_762x51_m118_special_Mag",15},
                {"ACE_RangeCard",1},
                {"RH_16Rnd_9x19_CZ",2},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_green",1}
            };

            backpack[] = {};
        };

        class Newdude: Soldier_Base {
            weapons[] = {};
            priKit[] = {};
            secKit[] = {};
            pisKit[] = {};

            vestContents[] = {

            };
            backpackContents[] = {

            };
        };
    };

    class BSO_1990s_merc_semiuniform_temperate_cold: BSO_1990s_merc_semiuniform_temperate_warm {
        // Cold-weather (heavy jackets)

        class Soldier_Base: Soldier_Base {
            uniform[] = COLD_UNIFORMS;
        };

        class PL: PL {
            uniform[] = COLD_UNIFORMS;
        };

        class Radioman: Radioman {
            uniform[] = COLD_UNIFORMS;
        };

        class Medic: Medic {
            uniform[] = COLD_UNIFORMS;
        };

        class Marksman: Marksman {
            uniform[] = COLD_UNIFORMS;
        };

        class Runner: Runner {
            uniform[] = COLD_UNIFORMS;
        };

        class Driver: Driver {
            uniform[] = COLD_UNIFORMS;
            headgear[] = COLD_HATS;
        };

        class SL: SL {
            uniform[] = COLD_UNIFORMS;
        };

        class TL: TL {
            uniform[] = COLD_UNIFORMS;
        };

        class AR: AR {
            uniform[] = COLD_UNIFORMS;
        };

        class Grenadier: Grenadier {
            uniform[] = COLD_UNIFORMS;
        };

        class Rifleman: Rifleman {
            uniform[] = COLD_UNIFORMS;
        };

        class RiflemanLAT: RiflemanLAT {
            uniform[] = COLD_UNIFORMS;
        };

        class MGSL: MGSL {
            uniform[] = COLD_UNIFORMS;
        };

        class MG: MG {
            uniform[] = COLD_UNIFORMS;
        };

        class MGAsst: MGAsst {
            uniform[] = COLD_UNIFORMS;
        };

        class MATSL: MATSL {
            uniform[] = COLD_UNIFORMS;
        };

        class MAT: MAT {
            uniform[] = COLD_UNIFORMS;
        };

        class MATAsst: MATAsst {
            uniform[] = COLD_UNIFORMS;
        };

        class ATGMGunner: ATGMGunner {
            uniform[] = COLD_UNIFORMS;
        };

        class ATGMAsst: ATGMAsst {
            uniform[] = COLD_UNIFORMS;
        };

        class MortarSL: MortarSL {
            uniform[] = COLD_UNIFORMS;
        };

        class MortarGunner: MortarGunner {
            uniform[] = COLD_UNIFORMS;
        };

        class MortarAsst: MortarAsst {
            uniform[] = COLD_UNIFORMS;
        };

        class Sniper: Sniper {
            uniform[] = COLD_UNIFORMS;
            headgear[] = COLD_HATS;
        };

        class Spotter: Spotter {
            uniform[] = COLD_UNIFORMS;
            headgear[] = COLD_HATS;
        };


    };
// };