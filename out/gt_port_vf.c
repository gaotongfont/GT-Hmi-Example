
/* include --------------------------------------------------------------*/
#include "gt_port_vf.h"
#include "../gt.h"
#include "../src/others/gt_log.h"


/* private define -------------------------------------------------------*/
#define IMG_2366_30X47_PNG		0x0
#define IMG_2367_29X47_PNG		0x1086
#define IMG_2949_44X44_PNG		0x207f
#define IMG_2951_44X44_PNG		0x372f
#define IMG_2_31X26_PNG		0x4ddf
#define IMG_3126_44X44_PNG		0x5751
#define IMG_3127_44X44_PNG		0x6e01
#define IMG_3128_44X44_PNG		0x84b1
#define IMG_3133_26X19_PNG		0x9b61
#define IMG_3134_26X19_PNG		0xa12b
#define IMG_3_31X26_PNG		0xa6f5
#define IMG_4_31X26_PNG		0xb067
#define IMG_5_31X26_PNG		0xb9d9
#define IMG_6_31X26_PNG		0xc34b
#define IMG_7_31X26_PNG		0xccbd
#define IMG_8_31X26_PNG		0xd62f
#define IMG_9_31X26_PNG		0xdfa1
#define IMG_PREVIOUS1_42X42_PNG		0xe913
#define IMG_PREVIOUS_42X42_PNG		0xfdbf
#define IMG__IMAGES_KEYBOARD_TICK_DISABLED_39X30_PNG		0x1126b
#define IMG_BJ_400X290_PNG		0x12021
#define IMG_BJ_441X309_PNG		0x548bb
#define IMG_COLLECT1_42X42_PNG		0x97155
#define IMG_COLLECT2_42X42_PNG		0x98601
#define IMG_CONCEPT_SHARING_0_57_30X30_PNG		0x99aad
#define IMG_CYCLE_42X42_PNG		0x9a539
#define IMG_GLOBE_REGULAR_30X30_PNG		0x9b9e5
#define IMG_GUIDE_54X54_PNG		0x9c471
#define IMG_HUXIAOBONANSHENTI_60_FF8000_GAO_TONG_120X72_PNG		0x9e69d
#define IMG_MIMA_41X41_PNG		0xa4bdd
#define IMG_MUSIC14_40X40_PNG		0xa5f90
#define IMG_MUSIC14_60X60_PNG		0xa7250
#define IMG_MUSIC14_80X80_PNG		0xa9c80
#define IMG_NEXT1_42X42_PNG		0xae780
#define IMG_NEXT_42X42_PNG		0xafc2c
#define IMG_OFF1_80X48_PNG		0xb10d8
#define IMG_OFF2_120X41_PNG		0xb3dd8
#define IMG_OFF3_118X64_PNG		0xb7780
#define IMG_ON1_80X48_PNG		0xbb280
#define IMG_ON2_120X41_PNG		0xbdf80
#define IMG_ON3_118X64_PNG		0xc1928
#define IMG_ORDER_42X42_PNG		0xc5428
#define IMG_PANGMENZHENGDAOBIAOTITI_32_8080FF_GAO_TONG_66X36_PNG		0xc68d4
#define IMG_PAUSE_50X50_PNG		0xc84ac
#define IMG_PLAY_50X50_PNG		0xca1f8
#define IMG_RANDOM_42X42_PNG		0xcbf44
#define IMG_TELEGRAM_0_56_30X30_PNG		0xcd3f0
#define IMG_TURN_ON_0_52_40X40_PNG		0xcde7c
#define IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_GAO_9AD8_50X50_PNG		0xcf13c
#define IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_TONG_901A_50X50_PNG		0xd0e88
#define IMG_ZHANGHAOGUANLI_38X38_PNG		0xd2bd4


/* private typedef ------------------------------------------------------*/



/* static variables -----------------------------------------------------*/
static const gt_vfs_st virt_file_sys[] ={
	/* name, w, h, addr, size, is_alpha */
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
	{"f:img_bj_400x290.png", 441, 309, IMG_BJ_400X290_PNG, 272538, 0},
	{"f:img_bj_441x309.png", 441, 309, IMG_BJ_441X309_PNG, 272538, 0},
	{"f:img_collect1_42x42.png", 42, 42, IMG_COLLECT1_42X42_PNG, 5292, 1},
	{"f:img_collect2_42x42.png", 42, 42, IMG_COLLECT2_42X42_PNG, 5292, 1},
	{"f:img_concept_sharing_0_57_30x30.png", 30, 30, IMG_CONCEPT_SHARING_0_57_30X30_PNG, 2700, 1},
	{"f:img_cycle_42x42.png", 42, 42, IMG_CYCLE_42X42_PNG, 5292, 1},
	{"f:img_globe_regular_30x30.png", 30, 30, IMG_GLOBE_REGULAR_30X30_PNG, 2700, 1},
	{"f:img_guide_54x54.png", 54, 54, IMG_GUIDE_54X54_PNG, 8748, 1},
	{"f:img_huxiaobonanshenti_60_ff8000_gao_tong_120x72.png", 120, 72, IMG_HUXIAOBONANSHENTI_60_FF8000_GAO_TONG_120X72_PNG, 25920, 1},
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
	{"f:img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50.png", 50, 50, IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_GAO_9AD8_50X50_PNG, 7500, 1},
	{"f:img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50.png", 50, 50, IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_TONG_901A_50X50_PNG, 7500, 1},
	{"f:img_zhanghaoguanli_38x38.png", 38, 38, IMG_ZHANGHAOGUANLI_38X38_PNG, 4332, 1},
    {NULL,0,0,0,0},
    /* totalSize: 867520 => 847.19KB */
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

