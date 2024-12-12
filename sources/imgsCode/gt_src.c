#include "gt_src.h"


const gt_src_st user_src_list[] = {
	{".:img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50.png", 50, 50, src_img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50, 7500, 1},
	{".:img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_78x78.png", 50, 50, src_img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_78x78, 7500, 1},
	{".:img_1_31x26.png", 31, 26, src_img_1_31x26, 2418, 1},
	{".:img_2_31x26.png", 31, 26, src_img_2_31x26, 2418, 1},
	{".:img_3_31x26.png", 31, 26, src_img_3_31x26, 2418, 1},
	{".:img_4_31x26.png", 31, 26, src_img_4_31x26, 2418, 1},
	{".:img_5_31x26.png", 31, 26, src_img_5_31x26, 2418, 1},
	{".:img_6_31x26.png", 31, 26, src_img_6_31x26, 2418, 1},
	{".:img_7_31x26.png", 31, 26, src_img_7_31x26, 2418, 1},
	{".:img_8_31x26.png", 31, 26, src_img_8_31x26, 2418, 1},
	{".:img_9_31x26.png", 31, 26, src_img_9_31x26, 2418, 1},
	{".:img_back_0_16_31x26.png", 30, 30, src_img_back_0_16_31x26, 2700, 1},
	{".:img_bj_400x290.png", 400, 290, src_img_bj_400x290, 348000, 1},
	{".:img_collect1_42x42.png", 42, 42, src_img_collect1_42x42, 5292, 1},
	{".:img_collect2_42x42.png", 42, 42, src_img_collect2_42x42, 5292, 1},
	{".:img_concept_sharing_0_57_30x30.png", 30, 30, src_img_concept_sharing_0_57_30x30, 2700, 1},
	{".:img_cycle_42x42.png", 42, 42, src_img_cycle_42x42, 5292, 1},
	{".:img_globe_regular_30x30.png", 30, 30, src_img_globe_regular_30x30, 2700, 1},
	{".:img_guide_54x54.png", 54, 54, src_img_guide_54x54, 8748, 1},
	{".:img_huxiaobonanshenti_60_ff8000_gao_tong_120x72.png", 120, 72, src_img_huxiaobonanshenti_60_ff8000_gao_tong_120x72, 25920, 1},
	{".:img_music14_40x40.png", 40, 40, src_img_music14_40x40, 4800, 1},
	{".:img_music14_60x60.png", 60, 60, src_img_music14_60x60, 10800, 1},
	{".:img_music14_78x78.png", 78, 78, src_img_music14_78x78, 18252, 1},
	{".:img_music14_80x80.png", 80, 80, src_img_music14_80x80, 19200, 1},
	{".:img_next1_42x42.png", 42, 42, src_img_next1_42x42, 5292, 1},
	{".:img_next_42x42.png", 42, 42, src_img_next_42x42, 5292, 1},
	{".:img_off1_80x48.png", 80, 48, src_img_off1_80x48, 11520, 1},
	{".:img_off2_120x41.png", 120, 41, src_img_off2_120x41, 14760, 1},
	{".:img_off3_118x64.png", 118, 64, src_img_off3_118x64, 15104, 0},
	{".:img_on1_80x48.png", 80, 48, src_img_on1_80x48, 11520, 1},
	{".:img_on2_120x41.png", 120, 41, src_img_on2_120x41, 14760, 1},
	{".:img_on3_118x64.png", 118, 64, src_img_on3_118x64, 15104, 0},
	{".:img_order_42x42.png", 42, 42, src_img_order_42x42, 5292, 1},
	{".:img_pangmenzhengdaobiaotiti_32_8080ff_gao_tong_66x36.png", 66, 36, src_img_pangmenzhengdaobiaotiti_32_8080ff_gao_tong_66x36, 7128, 1},
	{".:img_pause_50x50.png", 50, 50, src_img_pause_50x50, 7500, 1},
	{".:img_play_50x50.png", 50, 50, src_img_play_50x50, 7500, 1},
	{".:img_Previous1_42x42.png", 42, 42, src_img_Previous1_42x42, 5292, 1},
	{".:img_Previous_42x42.png", 42, 42, src_img_Previous_42x42, 5292, 1},
	{".:img_random_42x42.png", 42, 42, src_img_random_42x42, 5292, 1},
	{".:img_telegram_0_56_30x30.png", 30, 30, src_img_telegram_0_56_30x30, 2700, 1},
	{".:img_turn_on_0_52_40x40.png", 40, 40, src_img_turn_on_0_52_40x40, 4800, 1},
	{".:img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50.png", 50, 50, src_img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50, 7500, 1},
	{NULL, 0, 0, NULL, 0, 0},
};


void gt_user_src_init(void)
{
	gt_src_init(user_src_list, sizeof(user_src_list)/sizeof(gt_src_st));
}

