
/* include --------------------------------------------------------------*/
#include "gt_port_vf.h"
#include "../gt.h"
#include "../src/others/gt_log.h"


/* private define -------------------------------------------------------*/
#define IMG_BGIMG32_313X174_PNG		0x0
#define IMG_BGIMG7_200X200_PNG		0x1a97c
#define IMG_CONCEPT_SHARING_0_57_30X30_PNG		0x37e3c
#define IMG_GLOBE_REGULAR_30X30_PNG		0x388c8
#define IMG_MUSIC14_78X78_PNG		0x39354
#define IMG_SLEEP5_100X100_PNG		0x3daa0
#define IMG_SLEEP5_78X78_PNG		0x44fd0
#define IMG_SPORTS14_78X78_PNG		0x4971c
#define IMG_SUNNY_100X100_PNG		0x4de68
#define IMG_SUNNY_80X80_PNG		0x55398
#define IMG_TELEGRAM_0_56_30X30_PNG		0x59e98
#define IMG_TURN_ON_0_52_40X40_PNG		0x5a924


/* private typedef ------------------------------------------------------*/



/* static variables -----------------------------------------------------*/
static const gt_vfs_st virt_file_sys[] ={
	/* name, w, h, addr, size, is_alpha */
    {"f:img_bgImg32_313x174.png", 313, 174, IMG_BGIMG32_313X174_PNG, 108924, 0},
	{"f:img_bgImg7_200x200.png", 200, 200, IMG_BGIMG7_200X200_PNG, 120000, 1},
	{"f:img_concept_sharing_0_57_30x30.png", 30, 30, IMG_CONCEPT_SHARING_0_57_30X30_PNG, 2700, 1},
	{"f:img_globe_regular_30x30.png", 30, 30, IMG_GLOBE_REGULAR_30X30_PNG, 2700, 1},
	{"f:img_music14_78x78.png", 78, 78, IMG_MUSIC14_78X78_PNG, 18252, 1},
	{"f:img_sleep5_100x100.png", 100, 100, IMG_SLEEP5_100X100_PNG, 30000, 1},
	{"f:img_sleep5_78x78.png", 78, 78, IMG_SLEEP5_78X78_PNG, 18252, 1},
	{"f:img_sports14_78x78.png", 78, 78, IMG_SPORTS14_78X78_PNG, 18252, 1},
	{"f:img_sunny_100x100.png", 100, 100, IMG_SUNNY_100X100_PNG, 30000, 1},
	{"f:img_sunny_80x80.png", 80, 80, IMG_SUNNY_80X80_PNG, 19200, 1},
	{"f:img_telegram_0_56_30x30.png", 30, 30, IMG_TELEGRAM_0_56_30X30_PNG, 2700, 1},
	{"f:img_turn_on_0_52_40x40.png", 40, 40, IMG_TURN_ON_0_52_40X40_PNG, 4800, 1},
    {NULL,0,0,0,0},
    /* totalSize: 375780 => 366.97KB */
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

