// 2010's era generic american PMC
// Lots of random stuff in weaponry

// class TB3_Gear {
    class BSO_2010s_PMC1 {

        // Base equipment 
        class Soldier_Base {
            ace_medic = 0;
            ace_engineer = 0;

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

            headgear[] = {
                "tacs_Cap_BlackLogo",
                "tacs_Cap_TanLogo",
                "tacs_Cap_Earpiece_BlackLogo",
                "tacs_Cap_Earpiece_TanLogo",
                "tacs_Cap_Headphones_BlackLogo",
                "H_Cap_blk",
                "H_Cap_blk_CMMG",
                "H_Cap_grn",
                "H_Cap_oli",
                "H_Cap_oli_hs",
                "H_Cap_tan",
                "H_Cap_khaki_specops_UK",
                "H_Cap_usblack",
                "H_Cap_headphones",
                "rhsusf_bowman_cap",
                "rhsgref_bcap_specter",
                "PO_H_cap_tub",
                "H_Cap_grn_BI"
            };

            goggles[] = {};

            uniform[] = {
                "tacs_Uniform_Garment_LS_BS_BP_BB",
                "tacs_Uniform_Garment_LS_BS_GP_BB",
                "tacs_Uniform_Garment_LS_OS_EP_TB",
                "tacs_Uniform_Garment_LS_OS_TP_TB",
                "tacs_Uniform_Garment_LS_GS_BP_BB",
                "tacs_Uniform_Garment_LS_GS_GP_BB",
                "tacs_Uniform_Garment_LS_GS_EP_TB",
                "tacs_Uniform_Garment_LS_GS_TP_TB",
                "tacs_Uniform_Garment_LS_ES_BP_BB",
                "tacs_Uniform_Garment_LS_ES_GP_BB",
                "tacs_Uniform_Garment_LS_ES_EP_TB",
                "tacs_Uniform_Garment_LS_TS_BP_BB",
                "tacs_Uniform_Garment_LS_TS_GP_BB",
                "tacs_Uniform_Garment_LS_TS_TP_TB",
                "tacs_Uniform_Garment_RS_BS_BP_BB",
                "tacs_Uniform_Garment_RS_BS_GP_BB",
                "tacs_Uniform_Garment_RS_OS_EP_TB",
                "tacs_Uniform_Garment_RS_OS_TP_TB",
                "tacs_Uniform_Garment_RS_GS_BP_BB",
                "tacs_Uniform_Garment_RS_GS_GP_BB",
                "tacs_Uniform_Garment_RS_GS_EP_TB",
                "tacs_Uniform_Garment_RS_GS_TP_TB",
                "tacs_Uniform_Garment_RS_ES_BP_BB",
                "tacs_Uniform_Garment_RS_ES_GP_BB",
                "tacs_Uniform_Garment_RS_ES_EP_TB",
                "tacs_Uniform_Garment_RS_TS_BP_BB",
                "tacs_Uniform_Garment_RS_TS_GP_BB",
                "tacs_Uniform_Garment_RS_TS_TP_TB",
                "tacs_Uniform_Combat_LS_BS_BP_BB",
                "tacs_Uniform_Combat_LS_BS_GP_TB",
                "tacs_Uniform_Combat_LS_BS_TP_BB",
                "tacs_Uniform_Combat_LS_BS_TP_TB",
                "tacs_Uniform_Combat_LS_GS_BP_BB",
                "tacs_Uniform_Combat_LS_GS_GP_BB",
                "tacs_Uniform_Combat_LS_GS_TP_BB",
                "tacs_Uniform_Combat_LS_TS_BP_BB",
                "tacs_Uniform_Combat_LS_TS_GP_BB",
                "tacs_Uniform_Combat_LS_TS_GP_TB",
                "tacs_Uniform_Combat_LS_TS_TP_TB",
                "tacs_Uniform_Combat_RS_BS_BP_BB",
                "tacs_Uniform_Combat_RS_BS_GP_BB",
                "tacs_Uniform_Combat_RS_BS_GP_TB",
                "tacs_Uniform_Combat_RS_BS_TP_BB",
                "tacs_Uniform_Combat_RS_BS_TP_TB",
                "tacs_Uniform_Combat_RS_GS_BP_BB",
                "tacs_Uniform_Combat_RS_GS_GP_BB",
                "tacs_Uniform_Combat_RS_GS_TP_BB",
                "tacs_Uniform_Combat_RS_TS_BP_BB",
                "tacs_Uniform_Combat_RS_TS_GP_BB",
                "tacs_Uniform_Combat_RS_TS_GP_TB",
                "tacs_Uniform_Combat_RS_TS_TP_TB"
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
                "tacs_Vest_PlateCarrier_Black",
                "tacs_Vest_PlateCarrier_Coyote",
                "tacs_Vest_PlateCarrier_Green",
                "tacs_Vest_PlateCarrier_Khaki",
                "tacs_Vest_PlateCarrier_MARPAT",
                "tacs_Vest_PlateCarrierFull_Black",
                "tacs_Vest_PlateCarrierFull_Green",
            };
            vestContents[] = {};
            
            backpack[] = {
                "B_AssaultPack_blk",
                "B_AssaultPack_cbr",
                "B_AssaultPack_rgr",
                "B_AssaultPack_khk",
                "B_AssaultPack_sgg",
                "rhsusf_falconii_coy",
                "rhsusf_falconii",
                "rhsusf_assault_eagleaiii_coy",
                "tacs_Backpack_AssaultExpanded_Black",
                "tacs_Backpack_AssaultExpanded_Green",
                "tacs_Backpack_AssaultExpanded_Tan"
            };
            backpackContents[] = {};
        };
        

        class CompanyMan: Soldier_Base {
            weapons[] = {
                {"hlc_pistol_P229R_357Stainless", {"hlc_10Rnd_357SIG_B_P229","hlc_optic228_stavenhagen"}}
            };

            goggles[] = {"G_Aviator"};

            uniform[] = {
                "tacs_Uniform_Polo_CP_BS_TP_BB",
                "tacs_Uniform_Polo_TP_BS_TP_TB",
                "tacs_Uniform_Polo_TP_LS_GP_BB",
                "tacs_Uniform_Polo_TP_LS_TP_TB",
                "tacs_Uniform_Polo_TP_OS_LP_BB",
                "tacs_Uniform_Polo_TP_OS_TP_BB",
                "tacs_Uniform_Polo_TP_GS_TP_TB",
                "tacs_Uniform_Polo_TP_TS_GP_BB",
                "tacs_Uniform_Polo_TP_WS_LP_BB",
                "tacs_Uniform_Polo_TP_WS_GP_BB",
                "tacs_Uniform_Polo_TP_WS_TP_TB"
            };
            uniformContents[] = {
                {"ACRE_PRC343",1},
                {"hlc_10Rnd_357SIG_B_P229",2},
                {"ACE_packingBandage",4},
                {"ACE_MapTools",1},
                {"ACE_fieldDressing",4},
                {"ACE_tourniquet",1},
                {"ACE_morphine",1}
            };

            vest[] = {
                "V_thor2",
                "V_thor_rgr2",
                "V_thor_wdl2"
            };
            vestContents[] = {};

            backpack[] = {};
            backpackContents[] = {};
        };


        class Marksman: Soldier_Base {
            weapons[] = {
                {"rhs_weap_SCARH_FDE_STD",{"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr","ptv_shortdot_dcc","rhsusf_acc_anpeq15side_bk","rhsusf_acc_grip1"}},
                {"RH_fnp45t",{"RH_15Rnd_45cal_fnp"}}
            };
            
            vestContents[] = {
                {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",4},
                {"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",1},
                {"RH_15Rnd_45cal_fnp",2},
                {"SmokeShell",2},
                {"rhs_mag_m67",1}
            };
            backpackContents[] = {
                {"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",6},
                {"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",2},
                {"rhs_mag_m67",2},
                {"SmokeShellGreen",2}
            };
        };

        #define RANDOM_MAGAZINE_STANAG {"rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",\
        "rhs_mag_100Rnd_556x45_M855A1_cmag","rhs_mag_30Rnd_556x45_M855A1_EPM_Pull","rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger","rhs_mag_30Rnd_556x45_M855A1_EPM",\
        "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger","rhs_mag_30Rnd_556x45_M855A1_Stanag"}
        #define RANDOM_SIGHT_1X {"rhsusf_acc_rx01","rhsusf_acc_rx01_tan","rhsusf_acc_rx01_nofilter","rhsusf_acc_rx01_nofilter_tan"}
        class Rifleman: Soldier_Base {
            weapons[] = {
                {
                    {"ptv_AGM", {RANDOM_MAGAZINE_STANAG, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15side_bk","hlc_muzzle_gunfighter_comp"}},
                    {"hlc_rifle_RU5562", {RANDOM_MAGAZINE_STANAG, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"}},
                    {"hlc_rifle_RU556", {RANDOM_MAGAZINE_STANAG, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"}},
                    {"hlc_rifle_bcmjack", {RANDOM_MAGAZINE_STANAG, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"}},
                    {"hlc_rifle_samr2", {RANDOM_MAGAZINE_STANAG, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15_bk_top","hlc_muzzle_gunfighter_comp"}}
                },
                {"RH_fnp45t", {"RH_15Rnd_45cal_fnp"}}
            };
            vestContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",6},
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
        };
        
        class RiflemanCLS: Rifleman {
            ace_medic = 1;
            backpackContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
                {"SmokeShell",1},
                {"SmokeShellGreen",2},
                {"SmokeShellPurple",2},
                {"ACE_packingBandage",15},
                {"ACE_fieldDressing",15},
                {"ACE_tourniquet",5},
                {"ACE_quikclot",10},
                {"ACE_morphine",10},
                {"ACE_salineIV_500",5},
                {"ACE_epinephrine",5},
                {"ACE_adenosine",5}
            };
        };

        #define RANDOM_MUZZLE_AKM {"rhs_acc_dtk","rhs_acc_dtk1","rhs_acc_dtk1l","rhs_acc_dtk3"}
        #define RANDOM_MAGAZINE_AKM {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm_bakelite","rhs_75Rnd_762x39mm"}
        class RiflemanR: Soldier_Base {
            weapons[] = {
                {
                    {"hlc_rifle_sg553RLB_TAC", {RANDOM_MAGAZINE_AKM, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15side_bk"}},
                    {"hlc_rifle_sg553RSB_TAC", {RANDOM_MAGAZINE_AKM, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15side_bk"}},
                    {"rhs_weap_ak103_npz", {RANDOM_MAGAZINE_AKM, RANDOM_SIGHT_1X, "rhs_acc_perst1ik",RANDOM_MUZZLE_AKM}},
                    {"rhs_weap_ak103_zenitco01_b33", {RANDOM_MAGAZINE_AKM, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15side_bk",RANDOM_MUZZLE_AKM}},
                    {"rhs_weap_ak104_npz", {RANDOM_MAGAZINE_AKM, RANDOM_SIGHT_1X, "rhs_acc_perst1ik",RANDOM_MUZZLE_AKM}},
                    {"rhs_weap_ak104_zenitco01_b33", {RANDOM_MAGAZINE_AKM, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15side_bk",RANDOM_MUZZLE_AKM}},
                    {"rhs_weap_akm_zenitco01_b33", {RANDOM_MAGAZINE_AKM, RANDOM_SIGHT_1X, "rhsusf_acc_anpeq15side_bk",{"rhs_acc_dtk","rhs_acc_dtk1"}}}
                },
                {"RH_fnp45t", {"RH_15Rnd_45cal_fnp"}}
            };

            vestContents[] = {
                {"rhs_30Rnd_762x39mm_polymer",5},
                {"rhs_30Rnd_762x39mm_polymer_tracer",1},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_30Rnd_762x39mm_polymer",5},
                {"rhs_30Rnd_762x39mm_polymer_tracer",1},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
        };

        class AR: Soldier_Base {
            weapons[] = {"hlc_rifle_M27IAR","RH_fnp45t"};
            priKit[] = {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed","rhsusf_acc_rx01_nofilter","hlc_muzzle_kx3_comp","rh_td_acb_b"};

            vestContents[] = {
                {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",2},
                {"RH_15Rnd_45cal_fnp",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",4},
                {"rhs_mag_m67",1},
                {"SmokeShell",1}
            };
        };

        class Shotgunner: Soldier_Base {
            weapons[] = {"rhs_weap_M590_8RD","RH_fnp45t"};
            priKit[] = {"rhsusf_8Rnd_00Buck"};

            vestContents[] = {
                {"rhsusf_8Rnd_00Buck",7},
                {"RH_15Rnd_45cal_fnp",3},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
            backpackContents[] = {
                {"rhsusf_8Rnd_00Buck",12},
                {"rhsusf_8Rnd_FRAG",1},
                {"rhs_mag_m67",2},
                {"SmokeShell",2},
                {"SmokeShellGreen",1}
            };
        };


        class Newdude: Soldier_Base {
            weapons[] = {
                {"RH_fnp45t", {"RH_15Rnd_45cal_fnp"}}
            };

            vestContents[] = {

            };
            backpackContents[] = {

            };
        };
    };
// };