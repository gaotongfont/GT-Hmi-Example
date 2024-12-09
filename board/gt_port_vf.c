
/* include --------------------------------------------------------------*/
#include "gt_port_vf.h"
#include "../gt.h"
#include "../src/others/gt_log.h"


/* private define -------------------------------------------------------*/
#define IMG_1_31X26_PNG		0x0
#define IMG_2_31X26_PNG		0x972
#define IMG_3_31X26_PNG		0x12e4
#define IMG_4_31X26_PNG		0x1c56
#define IMG_5_31X26_PNG		0x25c8
#define IMG_6_31X26_PNG		0x2f3a
#define IMG_7_31X26_PNG		0x38ac
#define IMG_8_31X26_PNG		0x421e
#define IMG_9_31X26_PNG		0x4b90
#define IMG_CONCEPT_SHARING_0_57_30X30_PNG		0x5502
#define IMG_GLOBE_REGULAR_30X30_PNG		0x5f8e
#define IMG_GUIDE_54X54_PNG		0x6a1a
#define IMG_HUXIAOBONANSHENTI_60_FF8000_GAO_TONG_120X72_PNG		0x8c46
#define IMG_LANGUAGE_54X54_PNG		0xf186
#define IMG_MUSIC14_40X40_PNG		0x113b2
#define IMG_MUSIC14_60X60_PNG		0x12672
#define IMG_MUSIC14_78X78_PNG		0x150a2
#define IMG_MUSIC14_80X80_PNG		0x197ee
#define IMG_OUTDOOR_WALK_54X54_PNG		0x1e2ee
#define IMG_PANGMENZHENGDAOBIAOTITI_32_8080FF_GAO_TONG_66X36_PNG		0x2051a
#define IMG_SLEEP5_70X70_PNG		0x220f2
#define IMG_SLEEP5_78X78_PNG		0x25a5e
#define IMG_SPORTS14_78X78_PNG		0x2a1aa
#define IMG_SUNNY_70X70_PNG		0x2e8f6
#define IMG_SYSTEM_54X54_PNG		0x32262
#define IMG_TELEGRAM_0_56_30X30_PNG		0x3448e
#define IMG_TURN_ON_0_52_40X40_PNG		0x34f1a
#define IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_GAO_9AD8_50X50_PNG		0x361da
#define IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_TONG_901A_50X50_PNG		0x37f26


/* private typedef ------------------------------------------------------*/



/* static variables -----------------------------------------------------*/
static const gt_vfs_st virt_file_sys[] ={
	/* name, w, h, addr, size, is_alpha */
    {"f:img_1_31x26.png", 31, 26, IMG_1_31X26_PNG, 2418, 1},
	{"f:img_2_31x26.png", 31, 26, IMG_2_31X26_PNG, 2418, 1},
	{"f:img_3_31x26.png", 31, 26, IMG_3_31X26_PNG, 2418, 1},
	{"f:img_4_31x26.png", 31, 26, IMG_4_31X26_PNG, 2418, 1},
	{"f:img_5_31x26.png", 31, 26, IMG_5_31X26_PNG, 2418, 1},
	{"f:img_6_31x26.png", 31, 26, IMG_6_31X26_PNG, 2418, 1},
	{"f:img_7_31x26.png", 31, 26, IMG_7_31X26_PNG, 2418, 1},
	{"f:img_8_31x26.png", 31, 26, IMG_8_31X26_PNG, 2418, 1},
	{"f:img_9_31x26.png", 31, 26, IMG_9_31X26_PNG, 2418, 1},
	{"f:img_concept_sharing_0_57_30x30.png", 30, 30, IMG_CONCEPT_SHARING_0_57_30X30_PNG, 2700, 1},
	{"f:img_globe_regular_30x30.png", 30, 30, IMG_GLOBE_REGULAR_30X30_PNG, 2700, 1},
	{"f:img_guide_54x54.png", 54, 54, IMG_GUIDE_54X54_PNG, 8748, 1},
	{"f:img_huxiaobonanshenti_60_ff8000_gao_tong_120x72.png", 120, 72, IMG_HUXIAOBONANSHENTI_60_FF8000_GAO_TONG_120X72_PNG, 25920, 1},
	{"f:img_language_54x54.png", 54, 54, IMG_LANGUAGE_54X54_PNG, 8748, 1},
	{"f:img_music14_40x40.png", 40, 40, IMG_MUSIC14_40X40_PNG, 4800, 1},
	{"f:img_music14_60x60.png", 60, 60, IMG_MUSIC14_60X60_PNG, 10800, 1},
	{"f:img_music14_78x78.png", 78, 78, IMG_MUSIC14_78X78_PNG, 18252, 1},
	{"f:img_music14_80x80.png", 80, 80, IMG_MUSIC14_80X80_PNG, 19200, 1},
	{"f:img_outdoor_walk_54x54.png", 54, 54, IMG_OUTDOOR_WALK_54X54_PNG, 8748, 1},
	{"f:img_pangmenzhengdaobiaotiti_32_8080ff_gao_tong_66x36.png", 66, 36, IMG_PANGMENZHENGDAOBIAOTITI_32_8080FF_GAO_TONG_66X36_PNG, 7128, 1},
	{"f:img_sleep5_70x70.png", 70, 70, IMG_SLEEP5_70X70_PNG, 14700, 1},
	{"f:img_sleep5_78x78.png", 78, 78, IMG_SLEEP5_78X78_PNG, 18252, 1},
	{"f:img_sports14_78x78.png", 78, 78, IMG_SPORTS14_78X78_PNG, 18252, 1},
	{"f:img_sunny_70x70.png", 70, 70, IMG_SUNNY_70X70_PNG, 14700, 1},
	{"f:img_system_54x54.png", 54, 54, IMG_SYSTEM_54X54_PNG, 8748, 1},
	{"f:img_telegram_0_56_30x30.png", 30, 30, IMG_TELEGRAM_0_56_30X30_PNG, 2700, 1},
	{"f:img_turn_on_0_52_40x40.png", 40, 40, IMG_TURN_ON_0_52_40X40_PNG, 4800, 1},
	{"f:img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50.png", 50, 50, IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_GAO_9AD8_50X50_PNG, 7500, 1},
	{"f:img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50.png", 50, 50, IMG_YEZIGONGCHANGXIAOXIONGMAO_48_FF00FF_TONG_901A_50X50_PNG, 7500, 1},
    {NULL,0,0,0,0},
    /* totalSize: 236658 => 231.11KB */
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

