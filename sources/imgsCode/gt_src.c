#include "gt_src.h"


const gt_src_st user_src_list[] = {
	{".:img_sports14_78x78.png", 78, 78, src_img_sports14_78x78, 18252, 1},
	{".:img_sunny_70x70.png", 70, 70, src_img_sunny_70x70, 14700, 1},
	{".:img_sunny_80x80.png", 80, 80, src_img_sunny_80x80, 19200, 1},
	{".:img_system_54x54.png", 54, 54, src_img_system_54x54, 8748, 1},
	{".:img_telegram_0_56_30x30.png", 30, 30, src_img_telegram_0_56_30x30, 2700, 1},
	{".:img_turn_on_0_52_40x40.png", 40, 40, src_img_turn_on_0_52_40x40, 4800, 1},
	{".:img_bgImg32_354x198.png", 354, 198, src_img_bgImg32_354x198, 140184, 0},
	{".:img_bgImg7_200x200.png", 200, 200, src_img_bgImg7_200x200, 120000, 1},
	{".:img_concept_sharing_0_57_30x30.png", 30, 30, src_img_concept_sharing_0_57_30x30, 2700, 1},
	{".:img_globe_regular_30x30.png", 30, 30, src_img_globe_regular_30x30, 2700, 1},
	{".:img_guide_54x54.png", 54, 54, src_img_guide_54x54, 8748, 1},
	{".:img_language_54x54.png", 54, 54, src_img_language_54x54, 8748, 1},
	{".:img_music14_78x78.png", 78, 78, src_img_music14_78x78, 18252, 1},
	{".:img_outdoor_walk_54x54.png", 54, 54, src_img_outdoor_walk_54x54, 8748, 1},
	{".:img_sleep5_70x70.png", 70, 70, src_img_sleep5_70x70, 14700, 1},
	{".:img_sleep5_78x78.png", 78, 78, src_img_sleep5_78x78, 18252, 1},
	{NULL, 0, 0, NULL, 0, 0},
};


void gt_user_src_init(void)
{
	gt_src_init(user_src_list, sizeof(user_src_list)/sizeof(gt_src_st));
}

