
/* include --------------------------------------------------------------*/
#include "gt_port_vf.h"
#include "../gt.h"
#include "../src/others/gt_log.h"


/* private define -------------------------------------------------------*/
#define IMG_016_136X98_PNG		0x0
#define IMG_017_136X98_PNG		0x9c30
#define IMG_018_136X98_PNG		0x13860
#define IMG_019_136X98_PNG		0x1d490
#define IMG_020_136X98_PNG		0x270c0
#define IMG_021_136X98_PNG		0x30cf0
#define IMG_022_136X98_PNG		0x3a920
#define IMG_023_136X98_PNG		0x44550
#define IMG_024_136X98_PNG		0x4e180
#define IMG_025_136X98_PNG		0x57db0
#define IMG_026_136X98_PNG		0x619e0
#define IMG_027_136X98_PNG		0x6b610
#define IMG_028_136X98_PNG		0x75240
#define IMG_029_136X98_PNG		0x7ee70
#define IMG_030_136X98_PNG		0x88aa0
#define IMG_031_136X98_PNG		0x926d0
#define IMG_032_136X98_PNG		0x9c300
#define IMG_033_253X49_PNG		0xa5f30
#define IMG_034_253X49_PNG		0xaf077
#define IMG_035_253X49_PNG		0xb81be
#define IMG_036_253X49_PNG		0xc1305
#define IMG_037_253X49_PNG		0xca44c
#define IMG_038_253X49_PNG		0xd3593
#define IMG_039_253X49_PNG		0xdc6da
#define IMG_040_253X49_PNG		0xe5821
#define IMG_041_253X49_PNG		0xee968
#define IMG_042_253X49_PNG		0xf7aaf
#define IMG_043_253X49_PNG		0x100bf6
#define IMG_044_253X49_PNG		0x109d3d
#define IMG_045_253X49_PNG		0x112e84
#define IMG_046_253X49_PNG		0x11bfcb
#define IMG_047_253X49_PNG		0x125112
#define IMG_048_253X49_PNG		0x12e259
#define IMG_049_253X49_PNG		0x1373a0
#define IMG_2366_30X47_PNG		0x1404e7
#define IMG_2367_29X47_PNG		0x14156d
#define IMG_2949_44X44_PNG		0x142566
#define IMG_2951_44X44_PNG		0x143c16
#define IMG_2_31X26_PNG		0x1452c6
#define IMG_3126_44X44_PNG		0x145c38
#define IMG_3127_44X44_PNG		0x1472e8
#define IMG_3128_44X44_PNG		0x148998
#define IMG_3133_26X19_PNG		0x14a048
#define IMG_3134_26X19_PNG		0x14a612
#define IMG_3_31X26_PNG		0x14abdc
#define IMG_4_31X26_PNG		0x14b54e
#define IMG_5_31X26_PNG		0x14bec0
#define IMG_6_31X26_PNG		0x14c832
#define IMG_7_31X26_PNG		0x14d1a4
#define IMG_8_31X26_PNG		0x14db16
#define IMG_9_31X26_PNG		0x14e488
#define IMG_PREVIOUS1_42X42_PNG		0x14edfa
#define IMG_PREVIOUS_42X42_PNG		0x1502a6
#define IMG__IMAGES_KEYBOARD_TICK_DISABLED_39X30_PNG		0x151752
#define IMG_BJ1_441X324_PNG		0x152508
#define IMG_BJ_400X290_PNG		0x1baf74
#define IMG_COLLECT1_42X42_PNG		0x20fed4
#define IMG_COLLECT2_42X42_PNG		0x211380
#define IMG_CONCEPT_SHARING_0_57_30X30_PNG		0x21282c
#define IMG_CYCLE_42X42_PNG		0x2132b8
#define IMG_DOWN_30X30_PNG		0x214764
#define IMG_GLOBE_REGULAR_30X30_PNG		0x2151f0
#define IMG_GUIDE_54X54_PNG		0x215c7c
#define IMG_HUXIAOBONANSHENTI_60_FF8000_GAO_TONG_120X72_PNG		0x217ea8
#define IMG_JIA1_40X40_PNG		0x21e3e8
#define IMG_JIA2_40X40_PNG		0x21f6a8
#define IMG_JIAN1_40X40_PNG		0x220a5b
#define IMG_JIAN2_40X40_PNG		0x221d1b
#define IMG_JSQ_509X364_JPG		0x223053
#define IMG_MIMA_41X41_PNG		0x27d7cb
#define IMG_MUSIC14_40X40_PNG		0x27eb7e
#define IMG_MUSIC14_60X60_PNG		0x27fe3e
#define IMG_MUSIC14_80X80_PNG		0x28286e
#define IMG_NEXT1_42X42_PNG		0x28736e
#define IMG_NEXT_42X42_PNG		0x28881a
#define IMG_OFF1_80X48_PNG		0x289cc6
#define IMG_OFF2_120X41_PNG		0x28c9c6
#define IMG_OFF3_118X64_PNG		0x29036e
#define IMG_ON1_80X48_PNG		0x293e6e
#define IMG_ON2_120X41_PNG		0x296b6e
#define IMG_ON3_118X64_PNG		0x29a516
#define IMG_ORDER_42X42_PNG		0x29e016
#define IMG_PANGMENZHENGDAOBIAOTITI_32_8080FF_GAO_TONG_66X36_PNG		0x29f4c2
#define IMG_PAUSE_50X50_PNG		0x2a109a
#define IMG_PLAY_50X50_PNG		0x2a2de6
#define IMG_RANDOM_42X42_PNG		0x2a4b32
#define IMG_TELEGRAM_0_56_30X30_PNG		0x2a5fde
#define IMG_TURN_ON_0_52_40X40_PNG		0x2a6a6a
#define IMG_UP_30X30_PNG		0x2a7d2a
#define IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_GAO_9AD8_50X50_PNG		0x2a87b6
#define IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_TONG_901A_50X50_PNG		0x2aa502
#define IMG_ZHANGHAOGUANLI_38X38_PNG		0x2ac24e


/* private typedef ------------------------------------------------------*/



/* static variables -----------------------------------------------------*/
static const gt_vfs_st virt_file_sys[] ={
	/* name, w, h, addr, size, is_alpha */
    {"f:img_016_136x98.png", 136, 98, IMG_016_136X98_PNG, 39984, 1},
	{"f:img_017_136x98.png", 136, 98, IMG_017_136X98_PNG, 39984, 1},
	{"f:img_018_136x98.png", 136, 98, IMG_018_136X98_PNG, 39984, 1},
	{"f:img_019_136x98.png", 136, 98, IMG_019_136X98_PNG, 39984, 1},
	{"f:img_020_136x98.png", 136, 98, IMG_020_136X98_PNG, 39984, 1},
	{"f:img_021_136x98.png", 136, 98, IMG_021_136X98_PNG, 39984, 1},
	{"f:img_022_136x98.png", 136, 98, IMG_022_136X98_PNG, 39984, 1},
	{"f:img_023_136x98.png", 136, 98, IMG_023_136X98_PNG, 39984, 1},
	{"f:img_024_136x98.png", 136, 98, IMG_024_136X98_PNG, 39984, 1},
	{"f:img_025_136x98.png", 136, 98, IMG_025_136X98_PNG, 39984, 1},
	{"f:img_026_136x98.png", 136, 98, IMG_026_136X98_PNG, 39984, 1},
	{"f:img_027_136x98.png", 136, 98, IMG_027_136X98_PNG, 39984, 1},
	{"f:img_028_136x98.png", 136, 98, IMG_028_136X98_PNG, 39984, 1},
	{"f:img_029_136x98.png", 136, 98, IMG_029_136X98_PNG, 39984, 1},
	{"f:img_030_136x98.png", 136, 98, IMG_030_136X98_PNG, 39984, 1},
	{"f:img_031_136x98.png", 136, 98, IMG_031_136X98_PNG, 39984, 1},
	{"f:img_032_136x98.png", 136, 98, IMG_032_136X98_PNG, 39984, 1},
	{"f:img_033_253x49.png", 253, 49, IMG_033_253X49_PNG, 37191, 1},
	{"f:img_034_253x49.png", 253, 49, IMG_034_253X49_PNG, 37191, 1},
	{"f:img_035_253x49.png", 253, 49, IMG_035_253X49_PNG, 37191, 1},
	{"f:img_036_253x49.png", 253, 49, IMG_036_253X49_PNG, 37191, 1},
	{"f:img_037_253x49.png", 253, 49, IMG_037_253X49_PNG, 37191, 1},
	{"f:img_038_253x49.png", 253, 49, IMG_038_253X49_PNG, 37191, 1},
	{"f:img_039_253x49.png", 253, 49, IMG_039_253X49_PNG, 37191, 1},
	{"f:img_040_253x49.png", 253, 49, IMG_040_253X49_PNG, 37191, 1},
	{"f:img_041_253x49.png", 253, 49, IMG_041_253X49_PNG, 37191, 1},
	{"f:img_042_253x49.png", 253, 49, IMG_042_253X49_PNG, 37191, 1},
	{"f:img_043_253x49.png", 253, 49, IMG_043_253X49_PNG, 37191, 1},
	{"f:img_044_253x49.png", 253, 49, IMG_044_253X49_PNG, 37191, 1},
	{"f:img_045_253x49.png", 253, 49, IMG_045_253X49_PNG, 37191, 1},
	{"f:img_046_253x49.png", 253, 49, IMG_046_253X49_PNG, 37191, 1},
	{"f:img_047_253x49.png", 253, 49, IMG_047_253X49_PNG, 37191, 1},
	{"f:img_048_253x49.png", 253, 49, IMG_048_253X49_PNG, 37191, 1},
	{"f:img_049_253x49.png", 253, 49, IMG_049_253X49_PNG, 37191, 1},
	{"f:img_2366_30x47.png", 30, 47, IMG_2366_30X47_PNG, 4230, 1},
	{"f:img_2367_29x47.png", 29, 47, IMG_2367_29X47_PNG, 4089, 1},
	{"f:img_2949_44x44.png", 44, 44, IMG_2949_44X44_PNG, 5808, 1},
	{"f:img_2951_44x44.png", 44, 44, IMG_2951_44X44_PNG, 5808, 1},
	{"f:img_2_31x26.png", 31, 26, IMG_2_31X26_PNG, 2418, 1},
	{"f:img_3126_44x44.png", 44, 44, IMG_3126_44X44_PNG, 5808, 1},
	{"f:img_3127_44x44.png", 44, 44, IMG_3127_44X44_PNG, 5808, 1},
	{"f:img_3128_44x44.png", 44, 44, IMG_3128_44X44_PNG, 5808, 1},
	{"f:img_3133_26x19.png", 26, 19, IMG_3133_26X19_PNG, 1482, 1},
	{"f:img_3134_26x19.png", 26, 19, IMG_3134_26X19_PNG, 1482, 1},
	{"f:img_3_31x26.png", 31, 26, IMG_3_31X26_PNG, 2418, 1},
	{"f:img_4_31x26.png", 31, 26, IMG_4_31X26_PNG, 2418, 1},
	{"f:img_5_31x26.png", 31, 26, IMG_5_31X26_PNG, 2418, 1},
	{"f:img_6_31x26.png", 31, 26, IMG_6_31X26_PNG, 2418, 1},
	{"f:img_7_31x26.png", 31, 26, IMG_7_31X26_PNG, 2418, 1},
	{"f:img_8_31x26.png", 31, 26, IMG_8_31X26_PNG, 2418, 1},
	{"f:img_9_31x26.png", 31, 26, IMG_9_31X26_PNG, 2418, 1},
	{"f:img_Previous1_42x42.png", 42, 42, IMG_PREVIOUS1_42X42_PNG, 5292, 1},
	{"f:img_Previous_42x42.png", 42, 42, IMG_PREVIOUS_42X42_PNG, 5292, 1},
	{"f:img__images_keyboard_tick_disabled_39x30.png", 39, 30, IMG__IMAGES_KEYBOARD_TICK_DISABLED_39X30_PNG, 3510, 1},
	{"f:img_bj1_441x324.png", 441, 324, IMG_BJ1_441X324_PNG, 428652, 1},
	{"f:img_bj_400x290.png", 400, 290, IMG_BJ_400X290_PNG, 348000, 1},
	{"f:img_collect1_42x42.png", 42, 42, IMG_COLLECT1_42X42_PNG, 5292, 1},
	{"f:img_collect2_42x42.png", 42, 42, IMG_COLLECT2_42X42_PNG, 5292, 1},
	{"f:img_concept_sharing_0_57_30x30.png", 30, 30, IMG_CONCEPT_SHARING_0_57_30X30_PNG, 2700, 1},
	{"f:img_cycle_42x42.png", 42, 42, IMG_CYCLE_42X42_PNG, 5292, 1},
	{"f:img_down_30x30.png", 30, 30, IMG_DOWN_30X30_PNG, 2700, 1},
	{"f:img_globe_regular_30x30.png", 30, 30, IMG_GLOBE_REGULAR_30X30_PNG, 2700, 1},
	{"f:img_guide_54x54.png", 54, 54, IMG_GUIDE_54X54_PNG, 8748, 1},
	{"f:img_huxiaobonanshenti_60_ff8000_gao_tong_120x72.png", 120, 72, IMG_HUXIAOBONANSHENTI_60_FF8000_GAO_TONG_120X72_PNG, 25920, 1},
	{"f:img_jia1_40x40.png", 40, 40, IMG_JIA1_40X40_PNG, 4800, 1},
	{"f:img_jia2_40x40.png", 41, 41, IMG_JIA2_40X40_PNG, 5043, 1},
	{"f:img_jian1_40x40.png", 40, 40, IMG_JIAN1_40X40_PNG, 4800, 1},
	{"f:img_jian2_40x40.png", 41, 40, IMG_JIAN2_40X40_PNG, 4920, 1},
	{"f:img_jsq_509x364.jpg", 509, 364, IMG_JSQ_509X364_JPG, 370552, 0},
	{"f:img_mima_41x41.png", 41, 41, IMG_MIMA_41X41_PNG, 5043, 1},
	{"f:img_music14_40x40.png", 40, 40, IMG_MUSIC14_40X40_PNG, 4800, 1},
	{"f:img_music14_60x60.png", 60, 60, IMG_MUSIC14_60X60_PNG, 10800, 1},
	{"f:img_music14_80x80.png", 80, 80, IMG_MUSIC14_80X80_PNG, 19200, 1},
	{"f:img_next1_42x42.png", 42, 42, IMG_NEXT1_42X42_PNG, 5292, 1},
	{"f:img_next_42x42.png", 42, 42, IMG_NEXT_42X42_PNG, 5292, 1},
	{"f:img_off1_80x48.png", 80, 48, IMG_OFF1_80X48_PNG, 11520, 1},
	{"f:img_off2_120x41.png", 120, 41, IMG_OFF2_120X41_PNG, 14760, 1},
	{"f:img_off3_118x64.png", 118, 64, IMG_OFF3_118X64_PNG, 15104, 0},
	{"f:img_on1_80x48.png", 80, 48, IMG_ON1_80X48_PNG, 11520, 1},
	{"f:img_on2_120x41.png", 120, 41, IMG_ON2_120X41_PNG, 14760, 1},
	{"f:img_on3_118x64.png", 118, 64, IMG_ON3_118X64_PNG, 15104, 0},
	{"f:img_order_42x42.png", 42, 42, IMG_ORDER_42X42_PNG, 5292, 1},
	{"f:img_pangmenzhengdaobiaotiti_32_8080ff_gao_tong_66x36.png", 66, 36, IMG_PANGMENZHENGDAOBIAOTITI_32_8080FF_GAO_TONG_66X36_PNG, 7128, 1},
	{"f:img_pause_50x50.png", 50, 50, IMG_PAUSE_50X50_PNG, 7500, 1},
	{"f:img_play_50x50.png", 50, 50, IMG_PLAY_50X50_PNG, 7500, 1},
	{"f:img_random_42x42.png", 42, 42, IMG_RANDOM_42X42_PNG, 5292, 1},
	{"f:img_telegram_0_56_30x30.png", 30, 30, IMG_TELEGRAM_0_56_30X30_PNG, 2700, 1},
	{"f:img_turn_on_0_52_40x40.png", 40, 40, IMG_TURN_ON_0_52_40X40_PNG, 4800, 1},
	{"f:img_up_30x30.png", 30, 30, IMG_UP_30X30_PNG, 2700, 1},
	{"f:img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50.png", 50, 50, IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_GAO_9AD8_50X50_PNG, 7500, 1},
	{"f:img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50.png", 50, 50, IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_TONG_901A_50X50_PNG, 7500, 1},
	{"f:img_zhanghaoguanli_38x38.png", 38, 38, IMG_ZHANGHAOGUANLI_38X38_PNG, 4332, 1},
    {NULL,0,0,0,0},
    /* totalSize: 2806586 => 2740.81KB */
};

/* macros ---------------------------------------------------------------*/



/* static functions -----------------------------------------------------*/


/* global functions / API interface -------------------------------------*/

#if GT_USE_MODE_FLASH
/**
 * @brief [flash] write or read data from flash
 *
 * @param data_write the data to be written
 * @param len_write the length of the data to be written
 * @param data_read the data to be read from flash
 * @param len_read the length need to read from flash
 *
 * @return uint32_t The number of bytes data read back preferentially,
 *      otherwise the number of bytes written successfully.
 */
extern uint32_t spi_wr(uint8_t * data_write, uint32_t len_write, uint8_t * data_read, uint32_t len_read);

#endif

void gt_port_vf_init(void)
{
    gt_vf_init(virt_file_sys);

#if GT_USE_MODE_FLASH
	gt_vf_drv_register(spi_wr);
#endif
}

/* end ------------------------------------------------------------------*/

