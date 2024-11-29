#include "gt_ui.h"


static const gt_scr_list_st gt_scr_list[] = {
	{GT_ID_BUTTONLABEL_CHECKBOX_TITLE, gt_init_buttonlabel_checkbox_title},
	{GT_ID_IMAGE, gt_init_image},
	{GT_ID_LABEL, gt_init_label},
	{GT_ID_TXT, gt_init_txt},
	{GT_ID_INPUT, gt_init_input},
	{GT_ID_IMGBTN, gt_init_imgbtn},
	{GT_ID_KEYBOARD, gt_init_keyboard},
	{GT_ID_SWITCH10, gt_init_switch10},
	{GT_ID_PLAYER, gt_init_player},
	{GT_ID_IBPUTNUM, gt_init_ibputNum},
};

void gt_ui_init(void) {


	gt_scr_stack_register_id_list(gt_scr_list, sizeof(gt_scr_list) / sizeof(gt_scr_list[0]), 20);
	gt_scr_stack_set_home_scr_id(GT_ID_BUTTONLABEL_CHECKBOX_TITLE, false);
	gt_disp_stack_load_scr(GT_ID_BUTTONLABEL_CHECKBOX_TITLE);
}

