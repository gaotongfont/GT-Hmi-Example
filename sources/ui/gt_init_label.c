#include "gt_ui.h"
#include "gt_font_config.h"


/** label */
gt_obj_st * label = NULL;
static gt_obj_st * label_button_title = NULL;
static gt_obj_st * label_image_title = NULL;
static gt_obj_st * label_label_title = NULL;
static gt_obj_st * label_txt_title = NULL;
static gt_obj_st * label_input_title = NULL;
static gt_obj_st * label_imgbtn_title = NULL;
static gt_obj_st * label_keyboard_title = NULL;
static gt_obj_st * label_switch10_title = NULL;
static gt_obj_st * label_player_title = NULL;
static gt_obj_st * label_inputNum_title = NULL;
static gt_obj_st * label_clock_title = NULL;
static gt_obj_st * label_barcode_title = NULL;
static gt_obj_st * label_qrcode_title = NULL;
static gt_obj_st * label_viewPager_title = NULL;
static gt_obj_st * label_diglog_title = NULL;
static gt_obj_st * label_gif_title = NULL;
static gt_obj_st * label_layout_title = NULL;
static gt_obj_st * label_mediaplayer_title = NULL;
static gt_obj_st * label_group_title = NULL;
static gt_obj_st * label_slider_title = NULL;
static gt_obj_st * label_bar_title = NULL;
static gt_obj_st * label_radio_title = NULL;
static gt_obj_st * label_checkbox_title = NULL;
static gt_obj_st * label_listv_title = NULL;
static gt_obj_st * label_roller_title = NULL;
static gt_obj_st * label_graph_title = NULL;
static gt_obj_st * label_rect_title = NULL;
static gt_obj_st * label_statusbartitle = NULL;
static gt_obj_st * label_screen_title = NULL;
static gt_obj_st * rect3 = NULL;
static gt_obj_st * label_label_category = NULL;
static gt_obj_st * rect_wireframe = NULL;
static gt_obj_st * label_black = NULL;
static gt_obj_st * label_purple = NULL;
static gt_obj_st * label_pink = NULL;
static gt_obj_st * rect1_blue = NULL;
static gt_obj_st * label_spacing_title = NULL;
static gt_obj_st * rect2_wireframe = NULL;
static gt_obj_st * rect2_blue = NULL;
static gt_obj_st * label_justification_title = NULL;
static gt_obj_st * label_Topleftalignment = NULL;
static gt_obj_st * label_purple_Centerleftalignment = NULL;
static gt_obj_st * label_orange_Topcenteredalignment = NULL;
static gt_obj_st * label_pink_centeraligned = NULL;
static gt_obj_st * label_purple_Toprightalignment = NULL;
static gt_obj_st * label_orange_Centerrightalignment = NULL;
static gt_obj_st * label_pink_Bottomleftalignment = NULL;
static gt_obj_st * label_black_Bottomcentered = NULL;
static gt_obj_st * label_orange_Bottomrightalignment = NULL;

static void label_0_cb(gt_event_st * e) {
	
}

static void lab1_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_BUTTON, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab2_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMAGE, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab4_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_TXT, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab5_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_INPUT, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab6_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMGBTN, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab7_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_KEYBOARD, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab8_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_SWITCH10, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab9_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_PLAYER, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab10_0_cb(gt_event_st * e) {
	
}

gt_obj_st * gt_init_label(void)
{
	label = gt_obj_create(NULL);

	gt_screen_set_bgcolor(label, gt_color_hex(0xFFFFFF));


	

	/** label_button_title */
	/** 用于显示“button按钮”的标题 Label */
	label_button_title = gt_label_create(label);
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
	label_image_title = gt_label_create(label);
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
	label_label_title = gt_label_create(label);
	gt_obj_set_pos(label_label_title, 15, 95);
	gt_obj_set_size(label_label_title, 139, 40);
	gt_label_set_font_color(label_label_title, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_label_title, gray_black_16);
	gt_label_set_font_cjk(label_label_title, 0);
	gt_label_set_font_align(label_label_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_label_title, "label 标签");
	gt_label_set_space(label_label_title, 0, 0);

	

	/** label_txt_title */
	/** 用于显示“txt文本区”的标题 Label */
	label_txt_title = gt_label_create(label);
	gt_obj_set_pos(label_txt_title, 15, 138);
	gt_obj_set_size(label_txt_title, 139, 40);
	gt_label_set_font_color(label_txt_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_txt_title, gray_black_16);
	gt_label_set_font_cjk(label_txt_title, 0);
	gt_label_set_font_align(label_txt_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_txt_title, "txt 文本区");
	gt_label_set_space(label_txt_title, 0, 0);
	gt_obj_add_event_cb(label_txt_title, lab4_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_input_title */
	/** 用于显示“input输入框”的标题 Label */
	label_input_title = gt_label_create(label);
	gt_obj_set_pos(label_input_title, 15, 179);
	gt_obj_set_size(label_input_title, 139, 40);
	gt_label_set_font_color(label_input_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_input_title, gray_black_16);
	gt_label_set_font_cjk(label_input_title, 0);
	gt_label_set_font_align(label_input_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_input_title, "input 输入框");
	gt_label_set_space(label_input_title, 0, 0);
	gt_obj_add_event_cb(label_input_title, lab5_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_imgbtn_title */
	/** 用于显示“imgbtn图片按钮”的标题 Label */
	label_imgbtn_title = gt_label_create(label);
	gt_obj_set_pos(label_imgbtn_title, 15, 222);
	gt_obj_set_size(label_imgbtn_title, 159, 40);
	gt_label_set_font_color(label_imgbtn_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_imgbtn_title, gray_black_16);
	gt_label_set_font_cjk(label_imgbtn_title, 0);
	gt_label_set_font_align(label_imgbtn_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_imgbtn_title, "imgbtn 图片按钮");
	gt_label_set_space(label_imgbtn_title, 0, 0);
	gt_obj_add_event_cb(label_imgbtn_title, lab6_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_keyboard_title */
	/** 用于显示“keyboard键盘”的标题 Label */
	label_keyboard_title = gt_label_create(label);
	gt_obj_set_pos(label_keyboard_title, 15, 267);
	gt_obj_set_size(label_keyboard_title, 159, 40);
	gt_label_set_font_color(label_keyboard_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_keyboard_title, gray_black_16);
	gt_label_set_font_cjk(label_keyboard_title, 0);
	gt_label_set_font_align(label_keyboard_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_keyboard_title, "keyboard 键盘");
	gt_label_set_space(label_keyboard_title, 0, 0);
	gt_obj_add_event_cb(label_keyboard_title, lab7_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_switch10_title */
	/** 用于显示“switch开关”的标题 Label */
	label_switch10_title = gt_label_create(label);
	gt_obj_set_pos(label_switch10_title, 15, 309);
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
	label_player_title = gt_label_create(label);
	gt_obj_set_pos(label_player_title, 15, 351);
	gt_obj_set_size(label_player_title, 159, 40);
	gt_label_set_font_color(label_player_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_player_title, gray_black_16);
	gt_label_set_font_cjk(label_player_title, 0);
	gt_label_set_font_align(label_player_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_player_title, "player 幻灯片");
	gt_label_set_space(label_player_title, 0, 0);
	gt_obj_add_event_cb(label_player_title, lab9_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_inputNum_title */
	/** 用于显示“inputNum计数器”的标题 Label */
	label_inputNum_title = gt_label_create(label);
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
	label_clock_title = gt_label_create(label);
	gt_obj_set_pos(label_clock_title, 14, 436);
	gt_obj_set_size(label_clock_title, 159, 40);
	gt_label_set_font_color(label_clock_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_clock_title, gray_black_16);
	gt_label_set_font_cjk(label_clock_title, 0);
	gt_label_set_font_align(label_clock_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_clock_title, "clock 时钟");
	gt_label_set_space(label_clock_title, 0, 0);

	

	/** label_barcode_title */
	/** 用于显示“barcode一维码”的标题 Label */
	label_barcode_title = gt_label_create(label);
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
	label_qrcode_title = gt_label_create(label);
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
	label_viewPager_title = gt_label_create(label);
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
	label_diglog_title = gt_label_create(label);
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
	label_gif_title = gt_label_create(label);
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
	label_layout_title = gt_label_create(label);
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
	label_mediaplayer_title = gt_label_create(label);
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
	label_group_title = gt_label_create(label);
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
	label_slider_title = gt_label_create(label);
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
	label_bar_title = gt_label_create(label);
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
	label_radio_title = gt_label_create(label);
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
	label_checkbox_title = gt_label_create(label);
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
	label_listv_title = gt_label_create(label);
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
	label_roller_title = gt_label_create(label);
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
	label_graph_title = gt_label_create(label);
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
	label_rect_title = gt_label_create(label);
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
	label_statusbartitle = gt_label_create(label);
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
	label_screen_title = gt_label_create(label);
	gt_obj_set_pos(label_screen_title, 15, 1140);
	gt_obj_set_size(label_screen_title, 159, 40);
	gt_label_set_font_color(label_screen_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_screen_title, gray_black_16);
	gt_label_set_font_cjk(label_screen_title, 0);
	gt_label_set_font_align(label_screen_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_screen_title, "screen 屏幕");
	gt_label_set_space(label_screen_title, 0, 0);

	

	/** rect3 */
	rect3 = gt_rect_create(label);
	gt_obj_set_pos(rect3, 187, 1);
	gt_obj_set_size(rect3, 1, 1300);
	gt_rect_set_radius(rect3, 0);
	gt_rect_set_bg_color(rect3, gt_color_hex(0xc0c0c0));
	gt_rect_set_color_border(rect3, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3, 1);
	gt_rect_set_border(rect3, 0);

	

	/** label_label_category */
	/** 标签控件板块的标题Label */
	label_label_category = gt_label_create(label);
	gt_obj_set_pos(label_label_category, 240, 14);
	gt_obj_set_size(label_label_category, 162, 34);
	gt_label_set_font_color(label_label_category, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_label_category, gray_black_24);
	gt_label_set_font_cjk(label_label_category, 0);
	gt_label_set_font_align(label_label_category, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_label_category, "标签控件");
	gt_label_set_space(label_label_category, 0, 0);

	

	/** rect_wireframe */
	/** 矩形线框 */
	rect_wireframe = gt_rect_create(label);
	gt_obj_set_pos(rect_wireframe, 238, 64);
	gt_obj_set_size(rect_wireframe, 509, 254);
	gt_rect_set_radius(rect_wireframe, 0);
	gt_rect_set_bg_color(rect_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect_wireframe, 1);
	gt_rect_set_border(rect_wireframe, 1);

	

	/** label_black */
	/** 黑色label标签 */
	label_black = gt_label_create(label);
	gt_obj_set_pos(label_black, 261, 126);
	gt_obj_set_size(label_black, 223, 57);
	gt_label_set_font_color(label_black, gt_color_hex(0x000000));
	gt_label_set_font_family(label_black, gray_black_16);
	gt_label_set_font_cjk(label_black, 0);
	gt_label_set_font_align(label_black, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_black, "高通GT-HMI上位机软件");
	gt_label_set_space(label_black, 0, 20);

	

	/** label_purple */
	/** 紫色label标签，间隔5 */
	label_purple = gt_label_create(label);
	gt_obj_set_pos(label_purple, 262, 178);
	gt_obj_set_size(label_purple, 313, 57);
	gt_label_set_font_color(label_purple, gt_color_hex(0x8080ff));
	gt_label_set_font_family(label_purple, gray_black_16);
	gt_label_set_font_cjk(label_purple, 0);
	gt_label_set_font_align(label_purple, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_purple, "高通GT-HMI上位机软件");
	gt_label_set_space(label_purple, 5, 1);

	

	/** label_pink */
	/** 粉色label标签，间隔10 */
	label_pink = gt_label_create(label);
	gt_obj_set_pos(label_pink, 262, 240);
	gt_obj_set_size(label_pink, 409, 57);
	gt_label_set_font_color(label_pink, gt_color_hex(0xff00ff));
	gt_label_set_font_family(label_pink, gray_black_16);
	gt_label_set_font_cjk(label_pink, 0);
	gt_label_set_font_align(label_pink, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_pink, "高通GT-HMI上位机软件");
	gt_label_set_space(label_pink, 10, 1);

	

	/** rect1_blue */
	/** 蓝色矩形背景 */
	rect1_blue = gt_rect_create(label);
	gt_obj_set_pos(rect1_blue, 219, 75);
	gt_obj_set_size(rect1_blue, 140, 38);
	gt_rect_set_radius(rect1_blue, 0);
	gt_rect_set_bg_color(rect1_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect1_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect1_blue, 1);
	gt_rect_set_border(rect1_blue, 0);

	

	/** label_spacing_title */
	/** 用于显示“间距”的标题 Label */
	label_spacing_title = gt_label_create(label);
	gt_obj_set_pos(label_spacing_title, 244, 77);
	gt_obj_set_size(label_spacing_title, 106, 34);
	gt_label_set_font_color(label_spacing_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_spacing_title, gray_black_20);
	gt_label_set_font_cjk(label_spacing_title, 0);
	gt_label_set_font_align(label_spacing_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_spacing_title, "间距");
	gt_label_set_space(label_spacing_title, 0, 0);

	

	/** rect2_wireframe */
	/** 矩形线框 */
	rect2_wireframe = gt_rect_create(label);
	gt_obj_set_pos(rect2_wireframe, 238, 333);
	gt_obj_set_size(rect2_wireframe, 509, 480);
	gt_rect_set_radius(rect2_wireframe, 0);
	gt_rect_set_bg_color(rect2_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect2_wireframe, 1);
	gt_rect_set_border(rect2_wireframe, 1);

	

	/** rect2_blue */
	/** 蓝色矩形背景 */
	rect2_blue = gt_rect_create(label);
	gt_obj_set_pos(rect2_blue, 219, 345);
	gt_obj_set_size(rect2_blue, 140, 38);
	gt_rect_set_radius(rect2_blue, 0);
	gt_rect_set_bg_color(rect2_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect2_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect2_blue, 1);
	gt_rect_set_border(rect2_blue, 0);

	

	/** label_justification_title */
	/** 用于显示“对齐方式”的标题 Label */
	label_justification_title = gt_label_create(label);
	gt_obj_set_pos(label_justification_title, 243, 346);
	gt_obj_set_size(label_justification_title, 106, 34);
	gt_label_set_font_color(label_justification_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_justification_title, gray_black_20);
	gt_label_set_font_cjk(label_justification_title, 0);
	gt_label_set_font_align(label_justification_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_justification_title, "对齐方式");
	gt_label_set_space(label_justification_title, 0, 0);

	

	/** label_Topleftalignment */
	/** 黑色label标签，顶部左对齐 */
	label_Topleftalignment = gt_label_create(label);
	gt_obj_set_pos(label_Topleftalignment, 260, 412);
	gt_obj_set_size(label_Topleftalignment, 223, 57);
	gt_label_set_font_color(label_Topleftalignment, gt_color_hex(0x000000));
	gt_label_set_font_family(label_Topleftalignment, gray_black_16);
	gt_label_set_font_cjk(label_Topleftalignment, 0);
	gt_label_set_font_align(label_Topleftalignment, GT_ALIGN_LEFT);
	gt_label_set_text(label_Topleftalignment, "高通GT-HMI上位机软件");
	gt_label_set_space(label_Topleftalignment, 0, 20);

	

	/** label_purple_Centerleftalignment */
	/** 紫色label标签，居中左对齐 */
	label_purple_Centerleftalignment = gt_label_create(label);
	gt_obj_set_pos(label_purple_Centerleftalignment, 515, 412);
	gt_obj_set_size(label_purple_Centerleftalignment, 223, 57);
	gt_label_set_font_color(label_purple_Centerleftalignment, gt_color_hex(0x8080ff));
	gt_label_set_font_family(label_purple_Centerleftalignment, gray_black_16);
	gt_label_set_font_cjk(label_purple_Centerleftalignment, 0);
	gt_label_set_font_align(label_purple_Centerleftalignment, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_purple_Centerleftalignment, "高通GT-HMI上位机软件");
	gt_label_set_space(label_purple_Centerleftalignment, 0, 20);

	

	/** label_orange_Topcenteredalignment */
	/** 橙色label标签，顶部居中对齐 */
	label_orange_Topcenteredalignment = gt_label_create(label);
	gt_obj_set_pos(label_orange_Topcenteredalignment, 260, 482);
	gt_obj_set_size(label_orange_Topcenteredalignment, 223, 57);
	gt_label_set_font_color(label_orange_Topcenteredalignment, gt_color_hex(0xff8000));
	gt_label_set_font_family(label_orange_Topcenteredalignment, gray_black_16);
	gt_label_set_font_cjk(label_orange_Topcenteredalignment, 0);
	gt_label_set_font_align(label_orange_Topcenteredalignment, GT_ALIGN_CENTER);
	gt_label_set_text(label_orange_Topcenteredalignment, "高通GT-HMI上位机软件");
	gt_label_set_space(label_orange_Topcenteredalignment, 0, 20);

	

	/** label_pink_centeraligned */
	/** 粉色label标签，居中对齐 */
	label_pink_centeraligned = gt_label_create(label);
	gt_obj_set_pos(label_pink_centeraligned, 515, 482);
	gt_obj_set_size(label_pink_centeraligned, 223, 57);
	gt_label_set_font_color(label_pink_centeraligned, gt_color_hex(0xff00ff));
	gt_label_set_font_family(label_pink_centeraligned, gray_black_16);
	gt_label_set_font_cjk(label_pink_centeraligned, 0);
	gt_label_set_font_align(label_pink_centeraligned, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_pink_centeraligned, "高通GT-HMI上位机软件");
	gt_label_set_space(label_pink_centeraligned, 0, 20);

	

	/** label_purple_Toprightalignment */
	/** 紫色label标签，顶部右对齐 */
	label_purple_Toprightalignment = gt_label_create(label);
	gt_obj_set_pos(label_purple_Toprightalignment, 260, 555);
	gt_obj_set_size(label_purple_Toprightalignment, 223, 57);
	gt_label_set_font_color(label_purple_Toprightalignment, gt_color_hex(0x8080ff));
	gt_label_set_font_family(label_purple_Toprightalignment, gray_black_16);
	gt_label_set_font_cjk(label_purple_Toprightalignment, 0);
	gt_label_set_font_align(label_purple_Toprightalignment, GT_ALIGN_RIGHT);
	gt_label_set_text(label_purple_Toprightalignment, "高通GT-HMI上位机软件");
	gt_label_set_space(label_purple_Toprightalignment, 0, 20);

	

	/** label_orange_Centerrightalignment */
	/** 橙色label标签，居中右对齐 */
	label_orange_Centerrightalignment = gt_label_create(label);
	gt_obj_set_pos(label_orange_Centerrightalignment, 515, 555);
	gt_obj_set_size(label_orange_Centerrightalignment, 223, 57);
	gt_label_set_font_color(label_orange_Centerrightalignment, gt_color_hex(0xff8000));
	gt_label_set_font_family(label_orange_Centerrightalignment, gray_black_16);
	gt_label_set_font_cjk(label_orange_Centerrightalignment, 0);
	gt_label_set_font_align(label_orange_Centerrightalignment, GT_ALIGN_RIGHT_MID);
	gt_label_set_text(label_orange_Centerrightalignment, "高通GT-HMI上位机软件");
	gt_label_set_space(label_orange_Centerrightalignment, 0, 20);

	

	/** label_pink_Bottomleftalignment */
	/** 粉色label标签，底部左对齐 */
	label_pink_Bottomleftalignment = gt_label_create(label);
	gt_obj_set_pos(label_pink_Bottomleftalignment, 260, 618);
	gt_obj_set_size(label_pink_Bottomleftalignment, 223, 57);
	gt_label_set_font_color(label_pink_Bottomleftalignment, gt_color_hex(0xff00ff));
	gt_label_set_font_family(label_pink_Bottomleftalignment, gray_black_16);
	gt_label_set_font_cjk(label_pink_Bottomleftalignment, 0);
	gt_label_set_font_align(label_pink_Bottomleftalignment, GT_ALIGN_LEFT_BOTTOM);
	gt_label_set_text(label_pink_Bottomleftalignment, "高通GT-HMI上位机软件");
	gt_label_set_space(label_pink_Bottomleftalignment, 0, 20);

	

	/** label_black_Bottomcentered */
	/** 黑色label标签，底部居中 */
	label_black_Bottomcentered = gt_label_create(label);
	gt_obj_set_pos(label_black_Bottomcentered, 515, 618);
	gt_obj_set_size(label_black_Bottomcentered, 223, 57);
	gt_label_set_font_color(label_black_Bottomcentered, gt_color_hex(0x000000));
	gt_label_set_font_family(label_black_Bottomcentered, gray_black_16);
	gt_label_set_font_cjk(label_black_Bottomcentered, 0);
	gt_label_set_font_align(label_black_Bottomcentered, GT_ALIGN_CENTER_BOTTOM);
	gt_label_set_text(label_black_Bottomcentered, "高通GT-HMI上位机软件");
	gt_label_set_space(label_black_Bottomcentered, 0, 20);

	

	/** label_orange_Bottomrightalignment */
	/** 橙色label标签，底部右对齐 */
	label_orange_Bottomrightalignment = gt_label_create(label);
	gt_obj_set_pos(label_orange_Bottomrightalignment, 260, 697);
	gt_obj_set_size(label_orange_Bottomrightalignment, 223, 57);
	gt_label_set_font_color(label_orange_Bottomrightalignment, gt_color_hex(0xff8000));
	gt_label_set_font_family(label_orange_Bottomrightalignment, gray_black_16);
	gt_label_set_font_cjk(label_orange_Bottomrightalignment, 0);
	gt_label_set_font_align(label_orange_Bottomrightalignment, GT_ALIGN_RIGHT_BOTTOM);
	gt_label_set_text(label_orange_Bottomrightalignment, "高通GT-HMI上位机软件");
	gt_label_set_space(label_orange_Bottomrightalignment, 0, 20);



	return label;
}

