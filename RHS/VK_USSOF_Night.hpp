// Loadout for USSOF night infiltration/sabotage team and Blackhawk helicopter and crew

#define MEDICBAGCONTENTS {\
        {"ACE_fieldDressing",10},\
        {"ACE_packingBandage",20},\
        {"ACE_elasticBandage",5},\
        {"ACE_quikclot",10},\
        {"ACE_morphine",10},\
        {"ACE_adenosine",5},\
        {"ACE_epinephrine",5},\
        {"ACE_tourniquet",5},\
        {"ACE_salineIV_500",4},\
        {"ACE_personalAidKit",1},\
        {"rhs_mag_an_m8hc",1},\
        {"rhs_mag_m18_green",2},\
        {"rhs_mag_m18_purple",2}\
    }

// class TB3_Gear {
    class USSOF_Night {
        class SOF_HeliPilot {
            headgearRandom = 1;
            ace_medic = 1;
            ace_engineer = 1;
            
            weapons[] = {"rhs_weap_hk416d10","rhsusf_weap_m9"};
            priKit[] = {"rhsusf_acc_T1_low","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
            pisKit[] = {"rhsusf_mag_15Rnd_9x19_FMJ"};

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

            headgear[] = {
                "rhsusf_hgu56p",
                "rhsusf_hgu56p_black",
                "rhsusf_hgu56p_green",
                "rhsusf_hgu56p_tan",
            };

            uniform[] = {"rhs_uniform_cu_ocp"};
            uniformContents[] = {
                {"ACE_fieldDressing",2},
                {"ACE_quikclot",2},
                {"ACE_packingBandage",2},
                {"ACE_elasticBandage",1},
                {"ACE_morphine",1},
                {"ACE_tourniquet",1},
                {"ACE_microDAGR",1},
                {"ACE_Flashlight_XL50",1},
                {"ACRE_PRC152",1},
                {"ACE_IR_Strobe_Item",1},
                {"rhs_mag_m18_green",1},
                {"ACE_Chemlight_HiGreen",1},
                {"ACE_HandFlare_Green",1}
            };
            
            vest[] = {"rhsusf_spcs_ocp_crewman"};
            vestContents[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_PMAG",4},
                {"ACE_Chemlight_HiGreen",2},
                {"ACE_Chemlight_UltraHiOrange",2},
                {"ACE_HandFlare_Green",2},
                {"ACE_HandFlare_Yellow",2},
                {"rhs_mag_m18_green",2},
                {"rhsusf_mag_15Rnd_9x19_FMJ",2}
            };
        };
        class SOF_HeliPilot_MP7: SOF_HeliPilot {
            weapons[] = {"rhsusf_weap_MP7A2","rhsusf_weap_m9"};
            priKit[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_acc_mrds","rhsusf_acc_rvg_blk"};
            pisKit[] = {"rhsusf_mag_15Rnd_9x19_FMJ"};

            vestContents[] = {
                {"rhsusf_mag_40Rnd_46x30_FMJ",4},
                {"ACE_Chemlight_HiGreen",2},
                {"ACE_Chemlight_UltraHiOrange",2},
                {"ACE_HandFlare_Green",2},
                {"ACE_HandFlare_Yellow",2},
                {"rhs_mag_m18_green",2},
                {"rhsusf_mag_15Rnd_9x19_FMJ",2}
            };
        };
        class Operator_Base {
            headgearRandom = 1;
            backpackRandom = 1;
            ace_medic = 1;
            ace_engineer = 1;

            weapons[] = {};
            priKit[] = {};
            secKit[] = {};
            pisKit[] = {};

            assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};

            headgear[] = {
                "rhsusf_mich_bare_alt",
                "rhsusf_mich_bare_norotos_alt",
                "rhsusf_mich_bare_norotos_arc_alt",
                "rhsusf_mich_bare_alt_semi",
                "rhsusf_mich_bare_norotos_alt_semi",
                "rhsusf_mich_bare_norotos_arc_alt_semi",
                "rhsusf_mich_bare_alt_tan",
                "rhsusf_mich_bare_norotos_alt_tan",
                "rhsusf_mich_bare_norotos_arc_alt_tan"
            };
            goggles[] = {};

            uniform[] = {"rhs_uniform_g3_mc"};
            uniformContents[] = {
                {"ACE_fieldDressing",2},
                {"ACE_elasticBandage",2},
                {"ACE_quikclot",2},
                {"ACE_packingBandage",4},
                {"ACE_morphine",2},
                {"ACE_tourniquet",2},
                {"ACE_salineIV_500",1},
                {"ACE_CableTie",2},
                {"ACE_Flashlight_XL50",1},
                {"ACE_MapTools",1},
                {"ACE_microDAGR",1},
                {"ACE_IR_Strobe_Item",2},
                {"Chemlight_green",2}
            };

            vest[] = {"rhsusf_plateframe_teamleader"};
            vestContents[] = {};
            
            backpack[] = {"rhsusf_falconii_coy","rhsusf_falconii","rhsusf_falconii_mc"};
            backpackContents[] = {};
        };
        class Operator_TL: Operator_Base {
            weapons[] = {"rhs_weap_m4a1_blockII_KAC_d","ACE_Vector"};
            priKit[] = {"rhsusf_acc_anpeq16a_top","rhsusf_acc_su230_c","rhsusf_acc_grip2_tan","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull"};

            vest[] = {"rhsusf_plateframe_teamleader"};
            vestContents[] = {
                {"ACRE_PRC152",1},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m67",2},
                {"ACE_HandFlare_Green",1},
                {"ACE_HandFlare_White",1},
                {"rhs_mag_m18_yellow",1},
                {"rhs_mag_m18_green",1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",7},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2}
            };

            backpackContents[] = {
                {"ACE_M26_Clacker",1},
                {"rhs_mag_m67",1},
                {"ACE_HandFlare_Red",2},
                {"ACE_HandFlare_Green",2},
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_m18_green",1},
                {"rhs_mag_m18_red",1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",4},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",1},
                {"Chemlight_green",4},
                {"DemoCharge_Remote_Mag",2}
            };
        };
        class Operator_ATL: Operator_Base {
            weapons[] = {"rhs_weap_m4a1_blockII_M203_d","ACE_Vector"};
            priKit[] = {"rhsusf_acc_anpeq16a","rhsusf_acc_su230_c","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull"};

            vest[] = {"rhsusf_plateframe_teamleader"};
            vestContents[] = {
                {"ACRE_PRC152",1},
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_m67",1},
                {"ACE_HandFlare_Green",1},
                {"ACE_HandFlare_White",1},
                {"rhs_mag_m18_green",1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",5},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
                {"ACE_40mm_Flare_ir",6},
                {"ACE_40mm_Flare_white",4}
            };

            backpackContents[] = {
                {"ACE_wirecutter",1},
                {"ACE_HandFlare_Red",1},
                {"ACE_HandFlare_Green",2},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m18_red",1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",3},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",1},
                {"Chemlight_green",2},
                {"rhs_mag_m67",1},
                {"rhs_mag_m661_green",2},
                {"rhs_mag_m662_red",2},
                {"ACE_40mm_Flare_ir",3},
                {"ACE_40mm_Flare_white",2}
            };
        };
        class Operator_CLS: Operator_Base {
            ace_medic = 2;
            weapons[] = {"rhs_weap_m4a1_d","rhsusf_weap_m1911a1","ACE_Vector"};
            priKit[] = {"rhsusf_acc_anpeq16a_light_top","rhsusf_acc_su230_c","rhsusf_acc_rvg_de","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
            pisKit[] = {"rhsusf_mag_7x45acp_MHP"};

            vest[] = {"rhsusf_plateframe_medic"};
            vestContents[] = {
                {"ACRE_PRC152",1},
                {"rhs_mag_an_m8hc",2},
                {"ACE_HandFlare_Green",2},
                {"rhs_mag_m67",2},
                {"rhs_mag_m18_green",1},
                {"rhs_mag_m18_purple",1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag",7},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1},
                {"rhsusf_mag_7x45acp_MHP",1}
            };

            backpackContents[] = MEDICBAGCONTENTS;
        };
        class Operator_GL: Operator_Base {
            weapons[] = {"rhs_weap_mk18_m320","ACE_Vector"};
            priKit[] = {"rhsusf_acc_anpeq16a","rhsusf_acc_su230_c","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

            vest[] = {"rhsusf_plateframe_grenadier"};
            vestContents[] = {
                {"ACRE_PRC152",1},
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_m67",2},
                {"ACE_HandFlare_Green",1},
                {"ACE_HandFlare_White",1},
                {"rhs_mag_M433_HEDP",6},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag",7},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2}
            };

            backpackContents[] = {
                {"rhs_mag_m67",1},
                {"rhs_mag_m18_green",1},
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_M433_HEDP",10},
                {"ACE_40mm_Flare_ir",4},
                {"rhs_mag_m713_Red",2},
                {"rhs_mag_m716_yellow",2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag",3},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",1}
            };
        };
        class Operator_LMG: Operator_Base {
            weapons[] = {"rhs_weap_m249_light_L","ACE_Vector"};
            priKit[] = {"rhsusf_acc_anpeq16a_light","rhsusf_acc_su230_c","rhsusf_acc_grip4_bipod","rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote"};

            vest[] = {"rhsusf_plateframe_machinegunner"};
            vestContents[] = {
                {"ACRE_PRC152",1},
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_m67",2},
                {"rhs_mag_m18_green",1},
                {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag",2}
            };

            backpackContents[] = {
                {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",3},
                {"rhs_mag_an_m8hc",1}
            };
        };
        class Operator_LAT: Operator_Base {
            weapons[] = {"rhs_weap_m4a1_d_mstock","rhs_weap_m72a7","ACE_Vector"};
            priKit[] = {"rhsusf_acc_anpeq16a_top","rhsusf_acc_su230_c","rhsusf_acc_grip2_tan","rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger"};
            secKit[] = {"rhsusf_acc_anpeq15side"};

            vest[] = {"rhsusf_plateframe_rifleman"};
            vestContents[] = {
                {"ACRE_PRC152",1},
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_m67",2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",10},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",2},
                {"ACE_HandFlare_Green",1},
                {"ACE_HandFlare_White",1}
            };

            backpackContents[] = {
                {"rhs_mag_m67",2},
                {"rhs_mag_m18_green",1},
                {"rhs_mag_an_m8hc",1},
                {"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",1},
                {"rhs_weap_m72a7",1}
            };
        };
        class Operator_JTAC: Operator_Base {
            weapons[] = {"rhs_weap_mk18_m320","ACE_Vector"};
            priKit[] = {"rhsusf_acc_anpeq16a","rhsusf_acc_su230_c","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_m713_Red"};

            vest[] = {"rhsusf_plateframe_teamleader"};
            vestContents[] = {
                {"ACRE_PRC152",1},
                {"ACRE_PRC152",1},
                {"rhs_mag_an_m8hc",2},
                {"rhs_mag_m67",1},
                {"rhs_mag_m716_yellow",1},
                {"rhs_mag_m715_Green",1},
                {"rhs_mag_m18_green",1},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",5},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",2},
                {"rhs_mag_m662_red",2},
                {"rhs_mag_m661_green",2},
                {"ACE_40mm_Flare_white",2}
            };

            backpackContents[] = {
                {"rhs_mag_an_m8hc",1},
                {"rhs_mag_m18_green",1},
                {"Laserbatteries",1},
                {"rhs_mag_m716_yellow",2},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",5},
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",3},
                {"ACE_40mm_Flare_ir",3},
                {"ACE_40mm_Flare_white",3},
                {"Laserdesignator",1}
            };
        };
        class Blackhawk {
            vehCargoWeapons[] = {
                {"rhs_weap_m4_carryhandle",2},{"rhs_weap_M320",1}
            };
            vehCargoMagazines[] = {
                {"rhs_mag_30Rnd_556x45_M855A1_Stanag",16},
                {"rhs_mag_m67",4},
                {"rhs_mag_m18_green",2},
                {"rhs_mag_m18_red",2},
                {"rhs_mag_an_m8hc",8},
                {"ACE_40mm_Flare_white",8},
                {"ACE_40mm_Flare_ir",8},
                {"ACE_HandFlare_Green",16},
                {"ACE_Chemlight_HiWhite",16},
                {"ACE_Chemlight_HiGreen",16}
            };
            vehCargoItems[] = {
                {"FirstAidKit",4},
                {"ToolKit",1},
                {"ACE_bodyBag",6},
            };
            vehCargoRucks[] = {
                {"rhsusf_falconii_coy",1,MEDICBAGCONTENTS},
                {"rhsusf_falconii",2,{
                    {"rhs_mag_30Rnd_556x45_M855A1_Stanag",6},
                    {"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",2},
                    {"rhs_mag_an_m8hc",1}
                }},
                {"rhsusf_falconii_mc",1,{
                    {"rhs_mag_30Rnd_556x45_M855A1_Stanag",16},
                    {"rhs_mag_an_m8hc",1}
                }},
                {"rhsusf_falconii_coy",1,{
                    {"DemoCharge_Remote_Mag",3},
                    {"SatchelCharge_Remote_Mag",1},
                    {"ACE_M26_Clacker",1},
                    {"rhs_mag_an_m8hc",1}
                }}
            };
        };
    };
// };