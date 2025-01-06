#include "gt_ui.h"
#include "gt_font_config.h"


/** input_keyboard */
gt_obj_st * input_keyboard = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_button_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_image_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_label_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_txt_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_input_keyboard_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_imgbtn_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_switch10_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_player_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_inputNum_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_clock_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_barcode_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_qrcode_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_viewPager_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_diglog_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_gif_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_layout_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_mediaplayer_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_group_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_slider_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_bar_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_radio_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_checkbox_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_listv_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_roller_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_graph_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_rect_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_statusbartitle = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_screen_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_input_keyboard_category = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * btn_LoginorRegister = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * input_username_blueborder = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * keyboard_default = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_user = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * input_password_switchbetweenplaintextandciphertext_blueborder = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * keyboard_default1 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_password = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_wireframe2 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect4_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * input_Bolditalicbluebackgroundwithoutborders = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * keyboard_5x4 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_wireframe3 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * input_Deletelineborderless = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * keyboard_11x3 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_OK = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_delete = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_case = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_number = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_space = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img10 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_CapsLock = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Numberswitching = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * imgbtn_HideShowIcons = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_Italicizedtext4x5keyboard_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_Deletelinetext11x3keyboard_title = NULL;

static GT_ATTRIBUTE_RAM_TEXT void lab1_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_BUTTON, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab2_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMAGE, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void label_label_title_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_LABEL, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab4_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_TXT, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab6_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMGBTN, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab8_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_SWITCH10, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void label_player_title_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_PLAYER, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void input_0_cb(gt_event_st * e) {
	bool status = gt_obj_get_visible(keyboard_default);
	gt_obj_set_visible(keyboard_default, !status);

}

static GT_ATTRIBUTE_RAM_TEXT void input1_0_cb(gt_event_st * e) {
	bool status = gt_obj_get_visible(keyboard_default1);
	gt_obj_set_visible(keyboard_default1, !status);

}

static GT_ATTRIBUTE_RAM_TEXT void input__0_cb(gt_event_st * e) {
	
}

static GT_ATTRIBUTE_RAM_TEXT void keyboard__0_cb(gt_event_st * e) {
	
}

static GT_ATTRIBUTE_RAM_TEXT void img3_0_cb(gt_event_st * e) {
	gt_keypad_set_type(keyboard_5x4, GT_KEYPAD_TYPE_UPPER);
}

static GT_ATTRIBUTE_RAM_TEXT void img4_0_cb(gt_event_st * e) {
	gt_keypad_set_type(keyboard_5x4, GT_KEYPAD_TYPE_NUMBER);
}

static GT_ATTRIBUTE_RAM_TEXT void img5_0_cb(gt_event_st * e) {
	gt_keypad_set_type(keyboard_11x3, GT_KEYPAD_TYPE_UPPER);
}

static GT_ATTRIBUTE_RAM_TEXT void img6_0_cb(gt_event_st * e) {
	gt_keypad_set_type(keyboard_11x3, GT_KEYPAD_TYPE_NUMBER);
}

static GT_ATTRIBUTE_RAM_TEXT void imgbtn__0_cb(gt_event_st * e) {
	gt_input_hide_value(input_password_switchbetweenplaintextandciphertext_blueborder, !gt_input_is_hide_value(input_password_switchbetweenplaintextandciphertext_blueborder));
}

gt_obj_st * gt_init_input_keyboard(void)
{
	input_keyboard = gt_obj_create(NULL);

	gt_screen_set_bgcolor(input_keyboard, gt_color_hex(0xFFFFFF));


	

	/** label_button_title */
	/** 用于显示“button按钮”的标题 Label */
	label_button_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_button_title, 15, 14);
	gt_obj_set_size(label_button_title, 139, 34);
	gt_label_set_font_color(label_button_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_button_title, gray_black_16);
	gt_label_set_font_cjk(label_button_title, 0);
	gt_label_set_font_align(label_button_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_button_title, "button 按钮");
	gt_label_set_space(label_button_title, 0, 0);
	gt_obj_add_event_cb(label_button_title, lab1_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_image_title */
	/** 用于显示“image图片”的标题 Label */
	label_image_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_image_title, 15, 51);
	gt_obj_set_size(label_image_title, 139, 40);
	gt_label_set_font_color(label_image_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_image_title, gray_black_16);
	gt_label_set_font_cjk(label_image_title, 0);
	gt_label_set_font_align(label_image_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_image_title, "image 图片");
	gt_label_set_space(label_image_title, 0, 0);
	gt_obj_add_event_cb(label_image_title, lab2_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_label_title */
	/** 用于显示“label标签”的标题 Label */
	label_label_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_label_title, 15, 96);
	gt_obj_set_size(label_label_title, 139, 40);
	gt_label_set_font_color(label_label_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_label_title, gray_black_16);
	gt_label_set_font_cjk(label_label_title, 0);
	gt_label_set_font_align(label_label_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_label_title, "label 标签");
	gt_label_set_space(label_label_title, 0, 0);
	gt_obj_add_event_cb(label_label_title, label_label_title_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_txt_title */
	/** 用于显示“txt文本区”的标题 Label */
	label_txt_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_txt_title, 15, 143);
	gt_obj_set_size(label_txt_title, 139, 40);
	gt_label_set_font_color(label_txt_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_txt_title, gray_black_16);
	gt_label_set_font_cjk(label_txt_title, 0);
	gt_label_set_font_align(label_txt_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_txt_title, "txt 文本区");
	gt_label_set_space(label_txt_title, 0, 0);
	gt_obj_add_event_cb(label_txt_title, lab4_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_input_keyboard_title */
	/** 用于显示“input&keyboard输入框与键盘”的标题 Label */
	label_input_keyboard_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_input_keyboard_title, 15, 192);
	gt_obj_set_size(label_input_keyboard_title, 132, 49);
	gt_label_set_font_color(label_input_keyboard_title, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_input_keyboard_title, gray_black_16);
	gt_label_set_font_cjk(label_input_keyboard_title, 0);
	gt_label_set_font_align(label_input_keyboard_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_input_keyboard_title, "input &keyboard  输入框与键盘");
	gt_label_set_space(label_input_keyboard_title, 0, 0);

	

	/** label_imgbtn_title */
	/** 用于显示“imgbtn图片按钮”的标题 Label */
	label_imgbtn_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_imgbtn_title, 15, 252);
	gt_obj_set_size(label_imgbtn_title, 159, 40);
	gt_label_set_font_color(label_imgbtn_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_imgbtn_title, gray_black_16);
	gt_label_set_font_cjk(label_imgbtn_title, 0);
	gt_label_set_font_align(label_imgbtn_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_imgbtn_title, "imgbtn 图片按钮");
	gt_label_set_space(label_imgbtn_title, 0, 0);
	gt_obj_add_event_cb(label_imgbtn_title, lab6_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_switch10_title */
	/** 用于显示“switch开关”的标题 Label */
	label_switch10_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_switch10_title, 15, 301);
	gt_obj_set_size(label_switch10_title, 159, 40);
	gt_label_set_font_color(label_switch10_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_switch10_title, gray_black_16);
	gt_label_set_font_cjk(label_switch10_title, 0);
	gt_label_set_font_align(label_switch10_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_switch10_title, "switch 开关");
	gt_label_set_space(label_switch10_title, 0, 0);
	gt_obj_add_event_cb(label_switch10_title, lab8_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_player_title */
	/** 用于显示“player幻灯片”的标题 Label */
	label_player_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_player_title, 15, 350);
	gt_obj_set_size(label_player_title, 159, 40);
	gt_label_set_font_color(label_player_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_player_title, gray_black_16);
	gt_label_set_font_cjk(label_player_title, 0);
	gt_label_set_font_align(label_player_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_player_title, "player 幻灯片");
	gt_label_set_space(label_player_title, 0, 0);
	gt_obj_add_event_cb(label_player_title, label_player_title_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_inputNum_title */
	/** 用于显示“inputNum计数器”的标题 Label */
	label_inputNum_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_inputNum_title, 15, 393);
	gt_obj_set_size(label_inputNum_title, 159, 40);
	gt_label_set_font_color(label_inputNum_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_inputNum_title, gray_black_16);
	gt_label_set_font_cjk(label_inputNum_title, 0);
	gt_label_set_font_align(label_inputNum_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_inputNum_title, "inputNum 计数器");
	gt_label_set_space(label_inputNum_title, 0, 0);

	

	/** label_clock_title */
	/** 用于显示“clock时钟”的标题 Label */
	label_clock_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_clock_title, 15, 436);
	gt_obj_set_size(label_clock_title, 159, 40);
	gt_label_set_font_color(label_clock_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_clock_title, gray_black_16);
	gt_label_set_font_cjk(label_clock_title, 0);
	gt_label_set_font_align(label_clock_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_clock_title, "clock 时钟");
	gt_label_set_space(label_clock_title, 0, 0);

	

	/** label_barcode_title */
	/** 用于显示“barcode一维码”的标题 Label */
	label_barcode_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_barcode_title, 15, 479);
	gt_obj_set_size(label_barcode_title, 159, 40);
	gt_label_set_font_color(label_barcode_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_barcode_title, gray_black_16);
	gt_label_set_font_cjk(label_barcode_title, 0);
	gt_label_set_font_align(label_barcode_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_barcode_title, "barcode 一维码");
	gt_label_set_space(label_barcode_title, 0, 0);

	

	/** label_qrcode_title */
	/** 用于显示“qrcode二维码”的标题 Label */
	label_qrcode_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_qrcode_title, 15, 522);
	gt_obj_set_size(label_qrcode_title, 159, 40);
	gt_label_set_font_color(label_qrcode_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_qrcode_title, gray_black_16);
	gt_label_set_font_cjk(label_qrcode_title, 0);
	gt_label_set_font_align(label_qrcode_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_qrcode_title, "qrcode 二维码");
	gt_label_set_space(label_qrcode_title, 0, 0);

	

	/** label_viewPager_title */
	/** 用于显示“viewPager滑窗”的标题 Label */
	label_viewPager_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_viewPager_title, 15, 565);
	gt_obj_set_size(label_viewPager_title, 159, 40);
	gt_label_set_font_color(label_viewPager_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_viewPager_title, gray_black_16);
	gt_label_set_font_cjk(label_viewPager_title, 0);
	gt_label_set_font_align(label_viewPager_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_viewPager_title, "viewPager 滑窗");
	gt_label_set_space(label_viewPager_title, 0, 0);

	

	/** label_diglog_title */
	/** 用于显示“diglog对话框”的标题 Label */
	label_diglog_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_diglog_title, 15, 608);
	gt_obj_set_size(label_diglog_title, 159, 40);
	gt_label_set_font_color(label_diglog_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_diglog_title, gray_black_16);
	gt_label_set_font_cjk(label_diglog_title, 0);
	gt_label_set_font_align(label_diglog_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_diglog_title, "dialog 对话框");
	gt_label_set_space(label_diglog_title, 0, 0);

	

	/** label_gif_title */
	/** 用于显示“gifGIF图片”的标题 Label */
	label_gif_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_gif_title, 15, 652);
	gt_obj_set_size(label_gif_title, 159, 40);
	gt_label_set_font_color(label_gif_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_gif_title, gray_black_16);
	gt_label_set_font_cjk(label_gif_title, 0);
	gt_label_set_font_align(label_gif_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_gif_title, "gif GIF图片");
	gt_label_set_space(label_gif_title, 0, 0);

	

	/** label_layout_title */
	/** 用于显示“layout布局”的标题 Label */
	label_layout_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_layout_title, 15, 693);
	gt_obj_set_size(label_layout_title, 159, 40);
	gt_label_set_font_color(label_layout_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_layout_title, gray_black_16);
	gt_label_set_font_cjk(label_layout_title, 0);
	gt_label_set_font_align(label_layout_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_layout_title, "layout 布局");
	gt_label_set_space(label_layout_title, 0, 0);

	

	/** label_mediaplayer_title */
	/** 用于显示“mediaplayer播放器”的标题 Label */
	label_mediaplayer_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_mediaplayer_title, 15, 735);
	gt_obj_set_size(label_mediaplayer_title, 167, 40);
	gt_label_set_font_color(label_mediaplayer_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_mediaplayer_title, gray_black_16);
	gt_label_set_font_cjk(label_mediaplayer_title, 0);
	gt_label_set_font_align(label_mediaplayer_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_mediaplayer_title, "media_player 播放器");
	gt_label_set_space(label_mediaplayer_title, 0, 0);

	

	/** label_group_title */
	/** 用于显示“group分组”的标题 Label */
	label_group_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_group_title, 15, 773);
	gt_obj_set_size(label_group_title, 159, 40);
	gt_label_set_font_color(label_group_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_group_title, gray_black_16);
	gt_label_set_font_cjk(label_group_title, 0);
	gt_label_set_font_align(label_group_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_group_title, "group 分组");
	gt_label_set_space(label_group_title, 0, 0);

	

	/** label_slider_title */
	/** 用于显示“slider滑动条”的标题 Label */
	label_slider_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_slider_title, 15, 814);
	gt_obj_set_size(label_slider_title, 159, 40);
	gt_label_set_font_color(label_slider_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_slider_title, gray_black_16);
	gt_label_set_font_cjk(label_slider_title, 0);
	gt_label_set_font_align(label_slider_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_slider_title, "slider 滑动条");
	gt_label_set_space(label_slider_title, 0, 0);

	

	/** label_bar_title */
	/** 用于显示“bar进度条”的标题 Label */
	label_bar_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_bar_title, 14, 854);
	gt_obj_set_size(label_bar_title, 159, 40);
	gt_label_set_font_color(label_bar_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_bar_title, gray_black_16);
	gt_label_set_font_cjk(label_bar_title, 0);
	gt_label_set_font_align(label_bar_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_bar_title, "bar 进度条");
	gt_label_set_space(label_bar_title, 0, 0);

	

	/** label_radio_title */
	/** 用于显示“radio单选框”的标题 Label */
	label_radio_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_radio_title, 14, 895);
	gt_obj_set_size(label_radio_title, 159, 40);
	gt_label_set_font_color(label_radio_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_radio_title, gray_black_16);
	gt_label_set_font_cjk(label_radio_title, 0);
	gt_label_set_font_align(label_radio_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_radio_title, "radio 单选框");
	gt_label_set_space(label_radio_title, 0, 0);

	

	/** label_checkbox_title */
	/** 用于显示“checkbox复选框”的标题 Label */
	label_checkbox_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_checkbox_title, 15, 936);
	gt_obj_set_size(label_checkbox_title, 159, 40);
	gt_label_set_font_color(label_checkbox_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_checkbox_title, gray_black_16);
	gt_label_set_font_cjk(label_checkbox_title, 0);
	gt_label_set_font_align(label_checkbox_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_checkbox_title, "checkbox 复选框");
	gt_label_set_space(label_checkbox_title, 0, 0);

	

	/** label_listv_title */
	/** 用于显示“listv列表”的标题 Label */
	label_listv_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_listv_title, 15, 976);
	gt_obj_set_size(label_listv_title, 159, 40);
	gt_label_set_font_color(label_listv_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_listv_title, gray_black_16);
	gt_label_set_font_cjk(label_listv_title, 0);
	gt_label_set_font_align(label_listv_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_listv_title, "listv 列表");
	gt_label_set_space(label_listv_title, 0, 0);

	

	/** label_roller_title */
	/** 用于显示“roller滚轮”的标题 Label */
	label_roller_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_roller_title, 15, 1018);
	gt_obj_set_size(label_roller_title, 159, 40);
	gt_label_set_font_color(label_roller_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_roller_title, gray_black_16);
	gt_label_set_font_cjk(label_roller_title, 0);
	gt_label_set_font_align(label_roller_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_roller_title, "roller 滚轮");
	gt_label_set_space(label_roller_title, 0, 0);

	

	/** label_graph_title */
	/** 用于显示“graph线图”的标题 Label */
	label_graph_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_graph_title, 15, 1060);
	gt_obj_set_size(label_graph_title, 159, 40);
	gt_label_set_font_color(label_graph_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_graph_title, gray_black_16);
	gt_label_set_font_cjk(label_graph_title, 0);
	gt_label_set_font_align(label_graph_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_graph_title, "graph 线图");
	gt_label_set_space(label_graph_title, 0, 0);

	

	/** label_rect_title */
	/** 用于显示“rect矩形”的标题 Label */
	label_rect_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_rect_title, 15, 1100);
	gt_obj_set_size(label_rect_title, 159, 40);
	gt_label_set_font_color(label_rect_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_rect_title, gray_black_16);
	gt_label_set_font_cjk(label_rect_title, 0);
	gt_label_set_font_align(label_rect_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_rect_title, "rect 矩形");
	gt_label_set_space(label_rect_title, 0, 0);

	

	/** label_statusbartitle */
	/** 用于显示“statusbar状态栏”的标题 Label */
	label_statusbartitle = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_statusbartitle, 15, 1182);
	gt_obj_set_size(label_statusbartitle, 159, 40);
	gt_label_set_font_color(label_statusbartitle, gt_color_hex(0x808080));
	gt_label_set_font_family(label_statusbartitle, gray_black_16);
	gt_label_set_font_cjk(label_statusbartitle, 0);
	gt_label_set_font_align(label_statusbartitle, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_statusbartitle, "status_bar 状态栏");
	gt_label_set_space(label_statusbartitle, 0, 0);

	

	/** label_screen_title */
	/** 用于显示“screen屏幕”的标题 Label */
	label_screen_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_screen_title, 15, 1140);
	gt_obj_set_size(label_screen_title, 159, 40);
	gt_label_set_font_color(label_screen_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_screen_title, gray_black_16);
	gt_label_set_font_cjk(label_screen_title, 0);
	gt_label_set_font_align(label_screen_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_screen_title, "screen 屏幕");
	gt_label_set_space(label_screen_title, 0, 0);

	

	/** rect3 */
	rect3 = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect3, 187, 1);
	gt_obj_set_size(rect3, 1, 1300);
	gt_rect_set_radius(rect3, 0);
	gt_rect_set_bg_color(rect3, gt_color_hex(0xc0c0c0));
	gt_rect_set_color_border(rect3, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3, 1);
	gt_rect_set_border(rect3, 0);

	

	/** label_input_keyboard_category */
	/** 输入框与键盘控件板块的标题Label */
	label_input_keyboard_category = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_input_keyboard_category, 240, 14);
	gt_obj_set_size(label_input_keyboard_category, 215, 34);
	gt_label_set_font_color(label_input_keyboard_category, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_input_keyboard_category, gray_black_24);
	gt_label_set_font_cjk(label_input_keyboard_category, 0);
	gt_label_set_font_align(label_input_keyboard_category, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_input_keyboard_category, "输入框与键盘控件");
	gt_label_set_space(label_input_keyboard_category, 0, 0);

	

	/** rect_wireframe */
	/** 矩形线框 */
	rect_wireframe = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect_wireframe, 237, 64);
	gt_obj_set_size(rect_wireframe, 509, 448);
	gt_rect_set_radius(rect_wireframe, 0);
	gt_rect_set_bg_color(rect_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect_wireframe, 1);
	gt_rect_set_border(rect_wireframe, 1);

	

	/** btn_LoginorRegister */
	/** 登录/注册按钮 */
	btn_LoginorRegister = gt_btn_create(input_keyboard);
	gt_obj_set_pos(btn_LoginorRegister, 417, 243);
	gt_obj_set_size(btn_LoginorRegister, 152, 42);
	gt_btn_set_font_color(btn_LoginorRegister, gt_color_hex(0xffffff));
	gt_btn_set_font_family(btn_LoginorRegister, gray_black_20);
	gt_btn_set_font_cjk(btn_LoginorRegister, 0);
	gt_btn_set_font_align(btn_LoginorRegister, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(btn_LoginorRegister, "登录/注册");
	gt_btn_set_color_background(btn_LoginorRegister, gt_color_hex(0x0097e6));
	gt_btn_set_color_pressed(btn_LoginorRegister, gt_color_hex(0x00a8ff));
	gt_btn_set_font_color_pressed(btn_LoginorRegister, gt_color_hex(0x000000));
	gt_btn_set_radius(btn_LoginorRegister, 50);

	

	/** input_username_blueborder */
	/** 显示用户名，边框蓝色 */
	input_username_blueborder = gt_input_create(input_keyboard);
	gt_obj_set_pos(input_username_blueborder, 335, 135);
	gt_obj_set_size(input_username_blueborder, 371, 38);
	gt_input_set_font_color(input_username_blueborder, gt_color_hex(0x000000));
	gt_input_set_font_family(input_username_blueborder, gray_black_16);
	gt_input_set_font_cjk(input_username_blueborder, 0);
	gt_input_set_font_style(input_username_blueborder, 0);
	gt_input_set_font_align(input_username_blueborder, GT_ALIGN_LEFT_MID);
	gt_input_set_placeholder(input_username_blueborder, "请输入用户名");
	gt_input_set_border_width(input_username_blueborder, 2);
	gt_input_set_bg_color(input_username_blueborder, gt_color_hex(0xffffff));
	gt_input_set_border_color(input_username_blueborder, gt_color_hex(0x0080ff));
	gt_input_hide_value(input_username_blueborder, false);
	gt_obj_add_event_cb(input_username_blueborder, input_0_cb, GT_EVENT_TYPE_INPUT_PRESSED, NULL);
	

	/** keyboard_default */
	/** 默认键盘 */
	keyboard_default = gt_keypad_create(input_keyboard);
	gt_obj_set_pos(keyboard_default, 285, 241);
	gt_obj_set_size(keyboard_default, 418, 246);
	gt_obj_set_visible(keyboard_default, GT_INVISIBLE);
	gt_keypad_set_font_color(keyboard_default, gt_color_hex(0x000000));
	gt_keypad_set_font_family(keyboard_default, gray_black_16);
	gt_keypad_set_font_cjk(keyboard_default, 0);
	gt_keypad_set_default_style(keyboard_default, GT_KEYPAD_STYLE_26_KEY);
	gt_keypad_set_color_background(keyboard_default, gt_color_hex(0xcfd2d6));
	gt_keypad_set_key_color_background(keyboard_default, gt_color_hex(0xfcfcfc));
	gt_keypad_set_ctrl_key_color_background(keyboard_default, gt_color_hex(0xbabac1));
	gt_keypad_set_radius(keyboard_default, 6);
	gt_py_input_method_st * keyboard_default_py = gt_py_input_method_create();
	gt_keypad_set_py_input_method(keyboard_default, keyboard_default_py);
	gt_keypad_set_target(keyboard_default, input_username_blueborder);
	gt_keypad_set_auto_hide(keyboard_default, true);
	gt_obj_set_size(keyboard_default, 418, 246);

	

	/** img_user */
	/** 用户图标 */
	img_user = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_user, 273, 133);
	gt_obj_set_size(img_user, 38, 38);
	gt_img_set_src(img_user, "f:img_zhanghaoguanli_38x38.png");

	

	/** input_password_switchbetweenplaintextandciphertext_blueborder */
	/** 显示密码，明码与暗码切换，边框蓝色 */
	input_password_switchbetweenplaintextandciphertext_blueborder = gt_input_create(input_keyboard);
	gt_obj_set_pos(input_password_switchbetweenplaintextandciphertext_blueborder, 335, 187);
	gt_obj_set_size(input_password_switchbetweenplaintextandciphertext_blueborder, 371, 38);
	gt_input_set_font_color(input_password_switchbetweenplaintextandciphertext_blueborder, gt_color_hex(0x0080ff));
	gt_input_set_font_family(input_password_switchbetweenplaintextandciphertext_blueborder, gray_black_16);
	gt_input_set_font_cjk(input_password_switchbetweenplaintextandciphertext_blueborder, 0);
	gt_input_set_font_style(input_password_switchbetweenplaintextandciphertext_blueborder, 0);
	gt_input_set_font_align(input_password_switchbetweenplaintextandciphertext_blueborder, GT_ALIGN_LEFT_MID);
	gt_input_set_placeholder(input_password_switchbetweenplaintextandciphertext_blueborder, "请输入用户密码");
	gt_input_set_border_width(input_password_switchbetweenplaintextandciphertext_blueborder, 2);
	gt_input_set_bg_color(input_password_switchbetweenplaintextandciphertext_blueborder, gt_color_hex(0xffffff));
	gt_input_set_border_color(input_password_switchbetweenplaintextandciphertext_blueborder, gt_color_hex(0x0080ff));
	gt_input_hide_value(input_password_switchbetweenplaintextandciphertext_blueborder, true);
	gt_obj_add_event_cb(input_password_switchbetweenplaintextandciphertext_blueborder, input1_0_cb, GT_EVENT_TYPE_INPUT_PRESSED, NULL);
	

	/** keyboard_default1 */
	/** 默认键盘1 */
	keyboard_default1 = gt_keypad_create(input_keyboard);
	gt_obj_set_pos(keyboard_default1, 285, 241);
	gt_obj_set_size(keyboard_default1, 418, 246);
	gt_obj_set_visible(keyboard_default1, GT_INVISIBLE);
	gt_keypad_set_font_color(keyboard_default1, gt_color_hex(0x000000));
	gt_keypad_set_font_family(keyboard_default1, gray_black_16);
	gt_keypad_set_font_cjk(keyboard_default1, 0);
	gt_keypad_set_default_style(keyboard_default1, GT_KEYPAD_STYLE_26_KEY);
	gt_keypad_set_color_background(keyboard_default1, gt_color_hex(0xcfd2d6));
	gt_keypad_set_key_color_background(keyboard_default1, gt_color_hex(0xfcfcfc));
	gt_keypad_set_ctrl_key_color_background(keyboard_default1, gt_color_hex(0xbabac1));
	gt_keypad_set_radius(keyboard_default1, 6);
	gt_py_input_method_st * keyboard_default1_py = gt_py_input_method_create();
	gt_keypad_set_py_input_method(keyboard_default1, keyboard_default1_py);
	gt_keypad_set_target(keyboard_default1, input_password_switchbetweenplaintextandciphertext_blueborder);
	gt_keypad_set_auto_hide(keyboard_default1, true);
	gt_obj_set_size(keyboard_default1, 418, 246);

	

	/** img_password */
	/** 密码图标 */
	img_password = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_password, 273, 185);
	gt_obj_set_size(img_password, 41, 41);
	gt_img_set_src(img_password, "f:img_mima_41x41.png");

	

	/** rect_wireframe2 */
	/** 矩形线框2 */
	rect_wireframe2 = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect_wireframe2, 237, 529);
	gt_obj_set_size(rect_wireframe2, 509, 431);
	gt_rect_set_radius(rect_wireframe2, 0);
	gt_rect_set_bg_color(rect_wireframe2, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_wireframe2, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect_wireframe2, 0);
	gt_rect_set_border(rect_wireframe2, 1);

	

	/** rect4_blue */
	/** 蓝色矩形 */
	rect4_blue = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect4_blue, 355, 609);
	gt_obj_set_size(rect4_blue, 258, 320);
	gt_rect_set_radius(rect4_blue, 0);
	gt_rect_set_bg_color(rect4_blue, gt_color_hex(0x25245e));
	gt_rect_set_color_border(rect4_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect4_blue, 1);
	gt_rect_set_border(rect4_blue, 0);

	

	/** input_Bolditalicbluebackgroundwithoutborders */
	/** 文字粗体/斜体，蓝底无边框 */
	input_Bolditalicbluebackgroundwithoutborders = gt_input_create(input_keyboard);
	gt_obj_set_pos(input_Bolditalicbluebackgroundwithoutborders, 368, 624);
	gt_obj_set_size(input_Bolditalicbluebackgroundwithoutborders, 233, 40);
	gt_input_set_font_color(input_Bolditalicbluebackgroundwithoutborders, gt_color_hex(0xffffff));
	gt_input_set_font_family(input_Bolditalicbluebackgroundwithoutborders, gray_black_20);
	gt_input_set_font_cjk(input_Bolditalicbluebackgroundwithoutborders, 0);
	gt_input_set_font_style(input_Bolditalicbluebackgroundwithoutborders, 4 | 8);
	gt_input_set_font_align(input_Bolditalicbluebackgroundwithoutborders, GT_ALIGN_LEFT_MID);
	gt_input_set_placeholder(input_Bolditalicbluebackgroundwithoutborders, "请输入单词");
	gt_input_set_border_width(input_Bolditalicbluebackgroundwithoutborders, 0);
	gt_input_set_bg_color(input_Bolditalicbluebackgroundwithoutborders, gt_color_hex(0x343f72));
	gt_input_set_border_color(input_Bolditalicbluebackgroundwithoutborders, gt_color_hex(0x000000));
	gt_input_hide_value(input_Bolditalicbluebackgroundwithoutborders, false);

	

	/** keyboard_5x4 */
	/** 5x4键盘 */
	keyboard_5x4 = gt_keypad_create(input_keyboard);
	gt_obj_set_pos(keyboard_5x4, 365, 671);
	gt_obj_set_size(keyboard_5x4, 192, 251);
	gt_keypad_set_font_color(keyboard_5x4, gt_color_hex(0xffffff));
	gt_keypad_set_font_family(keyboard_5x4, gray_black_16);
	gt_keypad_set_font_cjk(keyboard_5x4, 0);
	gt_keypad_set_default_style(keyboard_5x4, GT_KEYPAD_STYLE_OTHER_4x5);
	gt_keypad_set_color_background(keyboard_5x4, gt_color_hex(0x25245e));
	gt_keypad_set_key_color_background(keyboard_5x4, gt_color_hex(0x4958a0));
	gt_keypad_set_ctrl_key_color_background(keyboard_5x4, gt_color_hex(0x3E3E3E));
	gt_keypad_set_radius(keyboard_5x4, 6);
	gt_py_input_method_st * keyboard_5x4_py = gt_py_input_method_create();
	gt_keypad_set_py_input_method(keyboard_5x4, keyboard_5x4_py);
	gt_keypad_set_target(keyboard_5x4, input_Bolditalicbluebackgroundwithoutborders);
	gt_keypad_set_auto_hide(keyboard_5x4, false);
	gt_obj_set_size(keyboard_5x4, 192, 251);

	

	/** rect_wireframe3 */
	/** 矩形线框3 */
	rect_wireframe3 = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect_wireframe3, 237, 977);
	gt_obj_set_size(rect_wireframe3, 509, 308);
	gt_rect_set_radius(rect_wireframe3, 0);
	gt_rect_set_bg_color(rect_wireframe3, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_wireframe3, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect_wireframe3, 0);
	gt_rect_set_border(rect_wireframe3, 1);

	

	/** input_Deletelineborderless */
	/** 删除线，无边框 */
	input_Deletelineborderless = gt_input_create(input_keyboard);
	gt_obj_set_pos(input_Deletelineborderless, 246, 1066);
	gt_obj_set_size(input_Deletelineborderless, 448, 34);
	gt_input_set_font_color(input_Deletelineborderless, gt_color_hex(0x000000));
	gt_input_set_font_family(input_Deletelineborderless, gray_black_20);
	gt_input_set_font_cjk(input_Deletelineborderless, 0);
	gt_input_set_font_style(input_Deletelineborderless, 2);
	gt_input_set_font_align(input_Deletelineborderless, GT_ALIGN_LEFT_MID);
	gt_input_set_placeholder(input_Deletelineborderless, "输入wifi密码");
	gt_input_set_border_width(input_Deletelineborderless, 0);
	gt_input_set_bg_color(input_Deletelineborderless, gt_color_hex(0xffffff));
	gt_input_set_border_color(input_Deletelineborderless, gt_color_hex(0x636363));
	gt_input_hide_value(input_Deletelineborderless, false);

	

	/** keyboard_11x3 */
	/** 11x3键盘 */
	keyboard_11x3 = gt_keypad_create(input_keyboard);
	gt_obj_set_pos(keyboard_11x3, 271, 1107);
	gt_obj_set_size(keyboard_11x3, 468, 101);
	gt_keypad_set_font_color(keyboard_11x3, gt_color_hex(0xffffff));
	gt_keypad_set_font_family(keyboard_11x3, gray_black_16);
	gt_keypad_set_font_cjk(keyboard_11x3, 0);
	gt_keypad_set_default_style(keyboard_11x3, GT_KEYPAD_STYLE_OTHER_11x3);
	gt_keypad_set_color_background(keyboard_11x3, gt_color_hex(0xffffff));
	gt_keypad_set_key_color_background(keyboard_11x3, gt_color_hex(0x353535));
	gt_keypad_set_ctrl_key_color_background(keyboard_11x3, gt_color_hex(0x3E3E3E));
	gt_keypad_set_radius(keyboard_11x3, 6);
	gt_keypad_set_target(keyboard_11x3, input_Deletelineborderless);
	gt_keypad_set_auto_hide(keyboard_11x3, false);
	gt_obj_set_size(keyboard_11x3, 468, 101);

	

	/** img_OK */
	/** 确认图标 */
	img_OK = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_OK, 558, 674);
	gt_obj_set_size(img_OK, 44, 44);
	gt_img_set_src(img_OK, "f:img_2949_44x44.png");

	

	/** img_delete */
	/** 删除图标 */
	img_delete = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_delete, 558, 721);
	gt_obj_set_size(img_delete, 44, 44);
	gt_img_set_src(img_delete, "f:img_2951_44x44.png");

	

	/** img_case */
	/** 大小写切换图标 */
	img_case = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_case, 558, 768);
	gt_obj_set_size(img_case, 44, 44);
	gt_img_set_src(img_case, "f:img_3126_44x44.png");
	gt_obj_add_event_cb(img_case, img3_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_number */
	/** 数字切换图标 */
	img_number = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_number, 558, 815);
	gt_obj_set_size(img_number, 44, 44);
	gt_img_set_src(img_number, "f:img_3127_44x44.png");
	gt_obj_add_event_cb(img_number, img4_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_space */
	/** 空格图标 */
	img_space = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_space, 558, 862);
	gt_obj_set_size(img_space, 44, 44);
	gt_img_set_src(img_space, "f:img_3128_44x44.png");

	

	/** img10 */
	/** 蓝色确定图标 */
	img10 = gt_img_create(input_keyboard);
	gt_obj_set_pos(img10, 697, 1072);
	gt_obj_set_size(img10, 39, 30);
	gt_img_set_src(img10, "f:img__images_keyboard_tick_disabled_39x30.png");

	

	/** img_CapsLock */
	/** 大小写切换 */
	img_CapsLock = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_CapsLock, 243, 1110);
	gt_obj_set_size(img_CapsLock, 30, 47);
	gt_img_set_src(img_CapsLock, "f:img_2366_30x47.png");
	gt_obj_add_event_cb(img_CapsLock, img5_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Numberswitching */
	/** 数字切换 */
	img_Numberswitching = gt_img_create(input_keyboard);
	gt_obj_set_pos(img_Numberswitching, 243, 1159);
	gt_obj_set_size(img_Numberswitching, 29, 47);
	gt_img_set_src(img_Numberswitching, "f:img_2367_29x47.png");
	gt_obj_add_event_cb(img_Numberswitching, img6_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** imgbtn_HideShowIcons */
	/** 隐藏/显示图标 */
	imgbtn_HideShowIcons = gt_imgbtn_create(input_keyboard);
	gt_obj_set_pos(imgbtn_HideShowIcons, 668, 197);
	gt_obj_set_size(imgbtn_HideShowIcons, 26, 19);
	gt_imgbtn_set_src(imgbtn_HideShowIcons, "f:img_3134_26x19.png");
	gt_imgbtn_add_state_item(imgbtn_HideShowIcons, "f:img_3133_26x19.png");
	gt_obj_add_event_cb(imgbtn_HideShowIcons, imgbtn__0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** rect1_blue */
	/** 蓝色矩形背景 */
	rect1_blue = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect1_blue, 219, 75);
	gt_obj_set_size(rect1_blue, 308, 38);
	gt_rect_set_radius(rect1_blue, 0);
	gt_rect_set_bg_color(rect1_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect1_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect1_blue, 1);
	gt_rect_set_border(rect1_blue, 0);

	

	/** label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy */
	/** 用于显示“明码与暗码切换&默认键盘”的标题 Label */
	label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, 232, 77);
	gt_obj_set_size(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, 295, 34);
	gt_label_set_font_color(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, gt_color_hex(0x000000));
	gt_label_set_font_family(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, gray_black_20);
	gt_label_set_font_cjk(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, 0);
	gt_label_set_font_align(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, "明码与暗码切换&默认键盘");
	gt_label_set_space(label_Clearanddarkcodeswitchingdefaultkeyboard_titleCopy, 0, 0);

	

	/** rect2_blue */
	/** 蓝色矩形背景 */
	rect2_blue = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect2_blue, 219, 543);
	gt_obj_set_size(rect2_blue, 247, 38);
	gt_rect_set_radius(rect2_blue, 0);
	gt_rect_set_bg_color(rect2_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect2_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect2_blue, 1);
	gt_rect_set_border(rect2_blue, 0);

	

	/** label_Italicizedtext4x5keyboard_title */
	/** 用于显示“斜体文字&4x5键盘”的标题 Label */
	label_Italicizedtext4x5keyboard_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_Italicizedtext4x5keyboard_title, 239, 546);
	gt_obj_set_size(label_Italicizedtext4x5keyboard_title, 222, 34);
	gt_label_set_font_color(label_Italicizedtext4x5keyboard_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_Italicizedtext4x5keyboard_title, gray_black_20);
	gt_label_set_font_cjk(label_Italicizedtext4x5keyboard_title, 0);
	gt_label_set_font_align(label_Italicizedtext4x5keyboard_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_Italicizedtext4x5keyboard_title, "斜体文字 & 4x5键盘");
	gt_label_set_space(label_Italicizedtext4x5keyboard_title, 0, 0);

	

	/** rect3_blue */
	/** 蓝色矩形背景 */
	rect3_blue = gt_rect_create(input_keyboard);
	gt_obj_set_pos(rect3_blue, 212, 991);
	gt_obj_set_size(rect3_blue, 263, 38);
	gt_rect_set_radius(rect3_blue, 0);
	gt_rect_set_bg_color(rect3_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect3_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3_blue, 1);
	gt_rect_set_border(rect3_blue, 0);

	

	/** label_Deletelinetext11x3keyboard_title */
	/** 用于显示“删除线文字&11x3键盘”的标题 Label */
	label_Deletelinetext11x3keyboard_title = gt_label_create(input_keyboard);
	gt_obj_set_pos(label_Deletelinetext11x3keyboard_title, 218, 993);
	gt_obj_set_size(label_Deletelinetext11x3keyboard_title, 262, 34);
	gt_label_set_font_color(label_Deletelinetext11x3keyboard_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_Deletelinetext11x3keyboard_title, gray_black_20);
	gt_label_set_font_cjk(label_Deletelinetext11x3keyboard_title, 0);
	gt_label_set_font_align(label_Deletelinetext11x3keyboard_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_Deletelinetext11x3keyboard_title, "删除线文字 & 11x3键盘");
	gt_label_set_space(label_Deletelinetext11x3keyboard_title, 0, 0);



	return input_keyboard;
}

