#include "gt_ui.h"


static GT_ATTRIBUTE_RAM_DATA const gt_scr_list_st gt_scr_list[] = {
	{GT_ID_BUTTON, gt_init_button},
	{GT_ID_IMAGE, gt_init_image},
	{GT_ID_LABEL, gt_init_label},
	{GT_ID_TXT, gt_init_txt},
	{GT_ID_INPUT, gt_init_input},
	{GT_ID_IMGBTN, gt_init_imgbtn},
	{GT_ID_KEYBOARD, gt_init_keyboard},
	{GT_ID_SWITCH10, gt_init_switch10},
	{GT_ID_PLAYER, gt_init_player},
};

void gt_ui_init(void) {


#if GT_USE_SERIAL
	gt_serial_show_init();
	#else

	gt_scr_stack_register_id_list(gt_scr_list, sizeof(gt_scr_list) / sizeof(gt_scr_list[0]), 20);
	gt_scr_stack_set_home_scr_id(GT_ID_BUTTON, false);
	gt_disp_stack_load_scr(GT_ID_BUTTON);
#endif

}

