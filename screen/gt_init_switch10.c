#include "gt_ui.h"
#include "gt_font_config.h"


/** switch10 */
gt_obj_st * switch10 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_button_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_image_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_label_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_txt_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_input_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_imgbtn_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_keyboard_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_switch_title = NULL;
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
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_switch_category = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch1_Greenroundedcorner = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_style_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Greenroundedsmall = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Greenrectangle = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Graywithroundedlines = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Graystripedrectangle = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_colour_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Pinkroundedcorners = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Orangerectangle = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Smallblueroundedcorner = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_size_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Greenroundedcornerwithlineswitch = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Greenrectanglewithlines = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch_Greenroundedcornersmallsize = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect4_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect4_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_picture_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * imgbtn_redswitch = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * imgbtn_Blueswitch = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * imgbtn_Whiteswitch = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * switch1 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * imgbtn1 = NULL;

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

static GT_ATTRIBUTE_RAM_TEXT void lab5_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_INPUT, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab6_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMGBTN, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab7_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_KEYBOARD, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab9_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_PLAYER, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab10_0_cb(gt_event_st * e) {
	
}

static GT_ATTRIBUTE_RAM_TEXT void switch_Greenroundedsmall_0_cb(gt_event_st * e) {
	
}

static GT_ATTRIBUTE_RAM_TEXT void switch_Greenrectanglewithlines_0_cb(gt_event_st * e) {
	
}

gt_obj_st * gt_init_switch10(void)
{
	switch10 = gt_obj_create(NULL);

	gt_screen_set_bgcolor(switch10, gt_color_hex(0xFFFFFF));


	

	/** label_button_title */
	/** 用于显示“button按钮”的标题 Label */
	label_button_title = gt_label_create(switch10);
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
	label_image_title = gt_label_create(switch10);
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
	label_label_title = gt_label_create(switch10);
	gt_obj_set_pos(label_label_title, 15, 95);
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
	label_txt_title = gt_label_create(switch10);
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
	label_input_title = gt_label_create(switch10);
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
	label_imgbtn_title = gt_label_create(switch10);
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
	label_keyboard_title = gt_label_create(switch10);
	gt_obj_set_pos(label_keyboard_title, 15, 267);
	gt_obj_set_size(label_keyboard_title, 159, 40);
	gt_label_set_font_color(label_keyboard_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_keyboard_title, gray_black_16);
	gt_label_set_font_cjk(label_keyboard_title, 0);
	gt_label_set_font_align(label_keyboard_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_keyboard_title, "keyboard 键盘");
	gt_label_set_space(label_keyboard_title, 0, 0);
	gt_obj_add_event_cb(label_keyboard_title, lab7_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_switch_title */
	/** 用于显示“switch开关”的标题 Label */
	label_switch_title = gt_label_create(switch10);
	gt_obj_set_pos(label_switch_title, 15, 309);
	gt_obj_set_size(label_switch_title, 159, 40);
	gt_label_set_font_color(label_switch_title, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_switch_title, gray_black_16);
	gt_label_set_font_cjk(label_switch_title, 0);
	gt_label_set_font_align(label_switch_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_switch_title, "switch 开关");
	gt_label_set_space(label_switch_title, 0, 0);

	

	/** label_player_title */
	/** 用于显示“player幻灯片”的标题 Label */
	label_player_title = gt_label_create(switch10);
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
	label_inputNum_title = gt_label_create(switch10);
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
	label_clock_title = gt_label_create(switch10);
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
	label_barcode_title = gt_label_create(switch10);
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
	label_qrcode_title = gt_label_create(switch10);
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
	label_viewPager_title = gt_label_create(switch10);
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
	label_diglog_title = gt_label_create(switch10);
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
	label_gif_title = gt_label_create(switch10);
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
	label_layout_title = gt_label_create(switch10);
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
	label_mediaplayer_title = gt_label_create(switch10);
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
	label_group_title = gt_label_create(switch10);
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
	label_slider_title = gt_label_create(switch10);
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
	label_bar_title = gt_label_create(switch10);
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
	label_radio_title = gt_label_create(switch10);
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
	label_checkbox_title = gt_label_create(switch10);
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
	label_listv_title = gt_label_create(switch10);
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
	label_roller_title = gt_label_create(switch10);
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
	label_graph_title = gt_label_create(switch10);
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
	label_rect_title = gt_label_create(switch10);
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
	label_statusbartitle = gt_label_create(switch10);
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
	label_screen_title = gt_label_create(switch10);
	gt_obj_set_pos(label_screen_title, 15, 1140);
	gt_obj_set_size(label_screen_title, 159, 40);
	gt_label_set_font_color(label_screen_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_screen_title, gray_black_16);
	gt_label_set_font_cjk(label_screen_title, 0);
	gt_label_set_font_align(label_screen_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_screen_title, "screen 屏幕");
	gt_label_set_space(label_screen_title, 0, 0);

	

	/** rect3 */
	rect3 = gt_rect_create(switch10);
	gt_obj_set_pos(rect3, 187, 1);
	gt_obj_set_size(rect3, 1, 1300);
	gt_rect_set_radius(rect3, 0);
	gt_rect_set_bg_color(rect3, gt_color_hex(0xc0c0c0));
	gt_rect_set_color_border(rect3, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3, 1);
	gt_rect_set_border(rect3, 0);

	

	/** label_switch_category */
	/** 开关控件板块的标题Label */
	label_switch_category = gt_label_create(switch10);
	gt_obj_set_pos(label_switch_category, 240, 14);
	gt_obj_set_size(label_switch_category, 162, 34);
	gt_label_set_font_color(label_switch_category, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_switch_category, gray_black_24);
	gt_label_set_font_cjk(label_switch_category, 0);
	gt_label_set_font_align(label_switch_category, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_switch_category, "开关控件");
	gt_label_set_space(label_switch_category, 0, 0);

	

	/** rect1_wireframe */
	/** 矩形线框 */
	rect1_wireframe = gt_rect_create(switch10);
	gt_obj_set_pos(rect1_wireframe, 237, 64);
	gt_obj_set_size(rect1_wireframe, 509, 270);
	gt_rect_set_radius(rect1_wireframe, 0);
	gt_rect_set_bg_color(rect1_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect1_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect1_wireframe, 1);
	gt_rect_set_border(rect1_wireframe, 1);

	

	/** switch1_Greenroundedcorner */
	/** 绿色圆角开关 */
	switch1_Greenroundedcorner = gt_switch_create(switch10);
	gt_obj_set_pos(switch1_Greenroundedcorner, 282, 147);
	gt_obj_set_size(switch1_Greenroundedcorner, 80, 38);
	gt_switch_set_color_act(switch1_Greenroundedcorner, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch1_Greenroundedcorner, gt_color_hex(0xebeef5));
	gt_switch_set_color_point(switch1_Greenroundedcorner, gt_color_hex(0xFFFFFF));
	gt_obj_set_state(switch1_Greenroundedcorner, 1);
	gt_switch_set_style(switch1_Greenroundedcorner, GT_SWITCH_STYLE_DEFAULT);
	gt_switch_set_div_line(switch1_Greenroundedcorner, false);

	

	/** rect1_blue */
	/** 蓝色矩形背景 */
	rect1_blue = gt_rect_create(switch10);
	gt_obj_set_pos(rect1_blue, 216, 73);
	gt_obj_set_size(rect1_blue, 138, 38);
	gt_rect_set_radius(rect1_blue, 0);
	gt_rect_set_bg_color(rect1_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect1_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect1_blue, 1);
	gt_rect_set_border(rect1_blue, 0);

	

	/** label_style_title */
	/** 用于显示“风格”的标题 Label */
	label_style_title = gt_label_create(switch10);
	gt_obj_set_pos(label_style_title, 260, 75);
	gt_obj_set_size(label_style_title, 66, 34);
	gt_label_set_font_color(label_style_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_style_title, gray_black_20);
	gt_label_set_font_cjk(label_style_title, 0);
	gt_label_set_font_align(label_style_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_style_title, "风格");
	gt_label_set_space(label_style_title, 0, 0);

	

	/** switch_Greenroundedsmall */
	/** 绿色圆角小型开关 */
	switch_Greenroundedsmall = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Greenroundedsmall, 588, 140);
	gt_obj_set_size(switch_Greenroundedsmall, 101, 49);
	gt_switch_set_color_act(switch_Greenroundedsmall, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch_Greenroundedsmall, gt_color_hex(0xebeef5));
	gt_switch_set_color_point(switch_Greenroundedsmall, gt_color_hex(0xc0c0c0));
	gt_obj_set_state(switch_Greenroundedsmall, 1);
	gt_switch_set_style(switch_Greenroundedsmall, GT_SWITCH_STYLE_AXIS);
	gt_obj_add_event_cb(switch_Greenroundedsmall, switch_Greenroundedsmall_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** switch_Greenrectangle */
	/** 绿色矩形开关 */
	switch_Greenrectangle = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Greenrectangle, 453, 147);
	gt_obj_set_size(switch_Greenrectangle, 76, 39);
	gt_switch_set_color_act(switch_Greenrectangle, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch_Greenrectangle, gt_color_hex(0xebeef5));
	gt_switch_set_color_point(switch_Greenrectangle, gt_color_hex(0xFFFFFF));
	gt_obj_set_state(switch_Greenrectangle, 1);
	gt_switch_set_style(switch_Greenrectangle, GT_SWITCH_STYLE_RECT);
	gt_switch_set_div_line(switch_Greenrectangle, false);

	

	/** switch_Graywithroundedlines */
	/** 灰色带线条圆角开关 */
	switch_Graywithroundedlines = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Graywithroundedlines, 282, 235);
	gt_obj_set_size(switch_Graywithroundedlines, 80, 38);
	gt_switch_set_color_act(switch_Graywithroundedlines, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch_Graywithroundedlines, gt_color_hex(0xc0c0c0));
	gt_switch_set_color_point(switch_Graywithroundedlines, gt_color_hex(0xFFFFFF));
	gt_switch_set_style(switch_Graywithroundedlines, GT_SWITCH_STYLE_DEFAULT);
	gt_switch_set_div_line(switch_Graywithroundedlines, true);
	gt_switch_set_color_divider(switch_Graywithroundedlines, gt_color_hex(0xffffff));

	

	/** switch_Graystripedrectangle */
	/** 灰色带线条矩形开关 */
	switch_Graystripedrectangle = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Graystripedrectangle, 453, 235);
	gt_obj_set_size(switch_Graystripedrectangle, 76, 39);
	gt_switch_set_color_act(switch_Graystripedrectangle, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch_Graystripedrectangle, gt_color_hex(0xc0c0c0));
	gt_switch_set_color_point(switch_Graystripedrectangle, gt_color_hex(0xFFFFFF));
	gt_switch_set_style(switch_Graystripedrectangle, GT_SWITCH_STYLE_RECT);
	gt_switch_set_div_line(switch_Graystripedrectangle, true);
	gt_switch_set_color_divider(switch_Graystripedrectangle, gt_color_hex(0xffffff));

	

	/** rect2_wireframe */
	/** 矩形线框 */
	rect2_wireframe = gt_rect_create(switch10);
	gt_obj_set_pos(rect2_wireframe, 237, 348);
	gt_obj_set_size(rect2_wireframe, 509, 198);
	gt_rect_set_radius(rect2_wireframe, 0);
	gt_rect_set_bg_color(rect2_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect2_wireframe, 1);
	gt_rect_set_border(rect2_wireframe, 1);

	

	/** rect2_blue */
	/** 蓝色矩形背景 */
	rect2_blue = gt_rect_create(switch10);
	gt_obj_set_pos(rect2_blue, 216, 357);
	gt_obj_set_size(rect2_blue, 138, 38);
	gt_rect_set_radius(rect2_blue, 0);
	gt_rect_set_bg_color(rect2_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect2_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect2_blue, 1);
	gt_rect_set_border(rect2_blue, 0);

	

	/** label_colour_title */
	/** 用于显示“颜色”的标题 Label */
	label_colour_title = gt_label_create(switch10);
	gt_obj_set_pos(label_colour_title, 260, 359);
	gt_obj_set_size(label_colour_title, 66, 34);
	gt_label_set_font_color(label_colour_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_colour_title, gray_black_20);
	gt_label_set_font_cjk(label_colour_title, 0);
	gt_label_set_font_align(label_colour_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_colour_title, "颜色");
	gt_label_set_space(label_colour_title, 0, 0);

	

	/** switch_Pinkroundedcorners */
	/** 粉色圆角开关 */
	switch_Pinkroundedcorners = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Pinkroundedcorners, 282, 438);
	gt_obj_set_size(switch_Pinkroundedcorners, 80, 38);
	gt_switch_set_color_act(switch_Pinkroundedcorners, gt_color_hex(0x8080ff));
	gt_switch_set_color_ina(switch_Pinkroundedcorners, gt_color_hex(0x000000));
	gt_switch_set_color_point(switch_Pinkroundedcorners, gt_color_hex(0xffffff));
	gt_obj_set_state(switch_Pinkroundedcorners, 1);
	gt_switch_set_style(switch_Pinkroundedcorners, GT_SWITCH_STYLE_DEFAULT);
	gt_switch_set_div_line(switch_Pinkroundedcorners, false);

	

	/** switch_Orangerectangle */
	/** 橙色矩形开关 */
	switch_Orangerectangle = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Orangerectangle, 453, 438);
	gt_obj_set_size(switch_Orangerectangle, 76, 39);
	gt_switch_set_color_act(switch_Orangerectangle, gt_color_hex(0xfec000));
	gt_switch_set_color_ina(switch_Orangerectangle, gt_color_hex(0x808080));
	gt_switch_set_color_point(switch_Orangerectangle, gt_color_hex(0xffffff));
	gt_obj_set_state(switch_Orangerectangle, 1);
	gt_switch_set_style(switch_Orangerectangle, GT_SWITCH_STYLE_RECT);
	gt_switch_set_div_line(switch_Orangerectangle, false);

	

	/** switch_Smallblueroundedcorner */
	/** 蓝色圆角小型开关 */
	switch_Smallblueroundedcorner = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Smallblueroundedcorner, 588, 433);
	gt_obj_set_size(switch_Smallblueroundedcorner, 101, 49);
	gt_switch_set_color_act(switch_Smallblueroundedcorner, gt_color_hex(0x228ccc));
	gt_switch_set_color_ina(switch_Smallblueroundedcorner, gt_color_hex(0xc0c0c0));
	gt_switch_set_color_point(switch_Smallblueroundedcorner, gt_color_hex(0x555555));
	gt_obj_set_state(switch_Smallblueroundedcorner, 1);
	gt_switch_set_style(switch_Smallblueroundedcorner, GT_SWITCH_STYLE_AXIS);

	

	/** rect3_wireframe */
	/** 矩形线框 */
	rect3_wireframe = gt_rect_create(switch10);
	gt_obj_set_pos(rect3_wireframe, 237, 560);
	gt_obj_set_size(rect3_wireframe, 509, 210);
	gt_rect_set_radius(rect3_wireframe, 0);
	gt_rect_set_bg_color(rect3_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect3_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect3_wireframe, 1);
	gt_rect_set_border(rect3_wireframe, 1);

	

	/** rect3_blue */
	/** 蓝色矩形背景 */
	rect3_blue = gt_rect_create(switch10);
	gt_obj_set_pos(rect3_blue, 216, 569);
	gt_obj_set_size(rect3_blue, 138, 38);
	gt_rect_set_radius(rect3_blue, 0);
	gt_rect_set_bg_color(rect3_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect3_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3_blue, 1);
	gt_rect_set_border(rect3_blue, 0);

	

	/** label_size_title */
	/** 用于显示“大小”的标题 Label */
	label_size_title = gt_label_create(switch10);
	gt_obj_set_pos(label_size_title, 260, 571);
	gt_obj_set_size(label_size_title, 66, 34);
	gt_label_set_font_color(label_size_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_size_title, gray_black_20);
	gt_label_set_font_cjk(label_size_title, 0);
	gt_label_set_font_align(label_size_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_size_title, "大小");
	gt_label_set_space(label_size_title, 0, 0);

	

	/** switch_Greenroundedcornerwithlineswitch */
	/** 绿色圆角带线条开关 */
	switch_Greenroundedcornerwithlineswitch = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Greenroundedcornerwithlineswitch, 420, 658);
	gt_obj_set_size(switch_Greenroundedcornerwithlineswitch, 87, 37);
	gt_switch_set_color_act(switch_Greenroundedcornerwithlineswitch, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch_Greenroundedcornerwithlineswitch, gt_color_hex(0xebeef5));
	gt_switch_set_color_point(switch_Greenroundedcornerwithlineswitch, gt_color_hex(0xFFFFFF));
	gt_obj_set_state(switch_Greenroundedcornerwithlineswitch, 1);
	gt_switch_set_style(switch_Greenroundedcornerwithlineswitch, GT_SWITCH_STYLE_DEFAULT);
	gt_switch_set_div_line(switch_Greenroundedcornerwithlineswitch, true);
	gt_switch_set_color_divider(switch_Greenroundedcornerwithlineswitch, gt_color_hex(0xffffff));

	

	/** switch_Greenrectanglewithlines */
	/** 绿色带线条矩形开关 */
	switch_Greenrectanglewithlines = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Greenrectanglewithlines, 569, 646);
	gt_obj_set_size(switch_Greenrectanglewithlines, 154, 57);
	gt_switch_set_color_act(switch_Greenrectanglewithlines, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch_Greenrectanglewithlines, gt_color_hex(0xebeef5));
	gt_switch_set_color_point(switch_Greenrectanglewithlines, gt_color_hex(0xFFFFFF));
	gt_obj_set_state(switch_Greenrectanglewithlines, 1);
	gt_switch_set_style(switch_Greenrectanglewithlines, GT_SWITCH_STYLE_RECT);
	gt_switch_set_div_line(switch_Greenrectanglewithlines, true);
	gt_switch_set_color_divider(switch_Greenrectanglewithlines, gt_color_hex(0xffffff));

	

	/** switch_Greenroundedcornersmallsize */
	/** 绿色圆角小号开关 */
	switch_Greenroundedcornersmallsize = gt_switch_create(switch10);
	gt_obj_set_pos(switch_Greenroundedcornersmallsize, 288, 661);
	gt_obj_set_size(switch_Greenroundedcornersmallsize, 65, 30);
	gt_switch_set_color_act(switch_Greenroundedcornersmallsize, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch_Greenroundedcornersmallsize, gt_color_hex(0xebeef5));
	gt_switch_set_color_point(switch_Greenroundedcornersmallsize, gt_color_hex(0xc0c0c0));
	gt_obj_set_state(switch_Greenroundedcornersmallsize, 1);
	gt_switch_set_style(switch_Greenroundedcornersmallsize, GT_SWITCH_STYLE_AXIS);

	

	/** rect4_wireframe */
	/** 矩形线框 */
	rect4_wireframe = gt_rect_create(switch10);
	gt_obj_set_pos(rect4_wireframe, 237, 783);
	gt_obj_set_size(rect4_wireframe, 509, 236);
	gt_rect_set_radius(rect4_wireframe, 0);
	gt_rect_set_bg_color(rect4_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect4_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect4_wireframe, 1);
	gt_rect_set_border(rect4_wireframe, 1);

	

	/** rect4_blue */
	/** 蓝色矩形背景 */
	rect4_blue = gt_rect_create(switch10);
	gt_obj_set_pos(rect4_blue, 216, 795);
	gt_obj_set_size(rect4_blue, 138, 38);
	gt_rect_set_radius(rect4_blue, 0);
	gt_rect_set_bg_color(rect4_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect4_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect4_blue, 1);
	gt_rect_set_border(rect4_blue, 0);

	

	/** label_picture_title */
	/** 用于显示“图片”的标题 Label */
	label_picture_title = gt_label_create(switch10);
	gt_obj_set_pos(label_picture_title, 260, 797);
	gt_obj_set_size(label_picture_title, 66, 34);
	gt_label_set_font_color(label_picture_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_picture_title, gray_black_20);
	gt_label_set_font_cjk(label_picture_title, 0);
	gt_label_set_font_align(label_picture_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_picture_title, "图片");
	gt_label_set_space(label_picture_title, 0, 0);

	

	/** imgbtn_redswitch */
	/** 红色开关 */
	imgbtn_redswitch = gt_imgbtn_create(switch10);
	gt_obj_set_pos(imgbtn_redswitch, 617, 890);
	gt_obj_set_size(imgbtn_redswitch, 80, 48);
	gt_imgbtn_set_src(imgbtn_redswitch, "f:img_off1_80x48.png");
	gt_imgbtn_add_state_item(imgbtn_redswitch, "f:img_on1_80x48.png");

	

	/** imgbtn_Blueswitch */
	/** 蓝色开关 */
	imgbtn_Blueswitch = gt_imgbtn_create(switch10);
	gt_obj_set_pos(imgbtn_Blueswitch, 436, 894);
	gt_obj_set_size(imgbtn_Blueswitch, 120, 41);
	gt_imgbtn_set_src(imgbtn_Blueswitch, "f:img_on2_120x41.png");
	gt_imgbtn_add_state_item(imgbtn_Blueswitch, "f:img_off2_120x41.png");

	

	/** imgbtn_Whiteswitch */
	/** 白色开关 */
	imgbtn_Whiteswitch = gt_imgbtn_create(switch10);
	gt_obj_set_pos(imgbtn_Whiteswitch, 273, 884);
	gt_obj_set_size(imgbtn_Whiteswitch, 118, 64);
	gt_imgbtn_set_src(imgbtn_Whiteswitch, "f:img_on3_118x64.png");
	gt_imgbtn_add_state_item(imgbtn_Whiteswitch, "f:img_off3_118x64.png");

	

	/** switch1 */
	switch1 = gt_switch_create(switch10);
	gt_obj_set_pos(switch1, 409, 76);
	gt_obj_set_size(switch1, 118, 44);
	gt_switch_set_color_act(switch1, gt_color_hex(0x13ce66));
	gt_switch_set_color_ina(switch1, gt_color_hex(0xc0c0c0));
	gt_switch_set_color_point(switch1, gt_color_hex(0xFFFFFF));
	gt_switch_set_style(switch1, GT_SWITCH_STYLE_RECT);
	gt_switch_set_div_line(switch1, true);
	gt_switch_set_color_divider(switch1, gt_color_hex(0xffffff));

	

	/** imgbtn1 */
	imgbtn1 = gt_imgbtn_create(switch10);
	gt_obj_set_pos(imgbtn1, 280, 1040);
	gt_obj_set_size(imgbtn1, 118, 64);
	gt_imgbtn_set_src(imgbtn1, "f:img_off3_118x64.png");
	gt_imgbtn_add_state_item(imgbtn1, "f:img_on3_118x64.png");



	return switch10;
}

