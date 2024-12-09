#include "gt_src.h"


const gt_src_st user_src_list[] = {
	{".:img_sleep5_70x70.png", 70, 70, src_img_sleep5_70x70, 14700, 1},
	{".:img_sleep5_78x78.png", 78, 78, src_img_sleep5_78x78, 18252, 1},
	{".:img_sports14_78x78.png", 78, 78, src_img_sports14_78x78, 18252, 1},
	{".:img_sunny_70x70.png", 70, 70, src_img_sunny_70x70, 14700, 1},
	{".:img_system_54x54.png", 54, 54, src_img_system_54x54, 8748, 1},
	{".:img_telegram_0_56_30x30.png", 30, 30, src_img_telegram_0_56_30x30, 2700, 1},
	{".:img_turn_on_0_52_40x40.png", 40, 40, src_img_turn_on_0_52_40x40, 4800, 1},
	{".:img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50.png", 50, 50, src_img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50, 7500, 1},
	{".:img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50.png", 50, 50, src_img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50, 7500, 1},
	{".:img_1_31x26.png", 31, 26, src_img_1_31x26, 2418, 1},
	{".:img_2_31x26.png", 31, 26, src_img_2_31x26, 2418, 1},
	{".:img_3_31x26.png", 31, 26, src_img_3_31x26, 2418, 1},
	{".:img_4_31x26.png", 31, 26, src_img_4_31x26, 2418, 1},
	{".:img_5_31x26.png", 31, 26, src_img_5_31x26, 2418, 1},
	{".:img_6_31x26.png", 31, 26, src_img_6_31x26, 2418, 1},
	{".:img_7_31x26.png", 31, 26, src_img_7_31x26, 2418, 1},
	{".:img_8_31x26.png", 31, 26, src_img_8_31x26, 2418, 1},
	{".:img_9_31x26.png", 31, 26, src_img_9_31x26, 2418, 1},
	{".:img_concept_sharing_0_57_30x30.png", 30, 30, src_img_concept_sharing_0_57_30x30, 2700, 1},
	{".:img_globe_regular_30x30.png", 30, 30, src_img_globe_regular_30x30, 2700, 1},
	{".:img_guide_54x54.png", 54, 54, src_img_guide_54x54, 8748, 1},
	{".:img_huxiaobonanshenti_60_ff8000_gao_tong_120x72.png", 120, 72, src_img_huxiaobonanshenti_60_ff8000_gao_tong_120x72, 25920, 1},
	{".:img_language_54x54.png", 54, 54, src_img_language_54x54, 8748, 1},
	{".:img_music14_40x40.png", 40, 40, src_img_music14_40x40, 4800, 1},
	{".:img_music14_60x60.png", 60, 60, src_img_music14_60x60, 10800, 1},
	{".:img_music14_78x78.png", 78, 78, src_img_music14_78x78, 18252, 1},
	{".:img_music14_80x80.png", 80, 80, src_img_music14_80x80, 19200, 1},
	{".:img_outdoor_walk_54x54.png", 54, 54, src_img_outdoor_walk_54x54, 8748, 1},
	{".:img_pangmenzhengdaobiaotiti_32_8080ff_gao_tong_66x36.png", 66, 36, src_img_pangmenzhengdaobiaotiti_32_8080ff_gao_tong_66x36, 7128, 1},
	{NULL, 0, 0, NULL, 0, 0},
};


void gt_user_src_init(void)
{
	gt_src_init(user_src_list, sizeof(user_src_list)/sizeof(gt_src_st));
}

