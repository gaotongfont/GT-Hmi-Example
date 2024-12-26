#include "gt_ui.h"
#include "gt_font_config.h"


/** button */
gt_obj_st * button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_button_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_image_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_label_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_txt_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_input_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_imgbtn_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_keyboard_title = NULL;
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
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * blue_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * green_button_outlined = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * yellow_back_ok_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * fuchsia_outlined = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_shape_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rounded_brown_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rounded_orange_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * right_angle_blue_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * square_fuchsia_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * circle_cyan_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_button_category = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_color_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_icon_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * fuchsia_flat = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * outlined_orange_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * stacked_icon_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_click = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_left_globe_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_globe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_left_right_sun_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_right = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_sun = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_right_globe_button = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * icon_globe2 = NULL;

static GT_ATTRIBUTE_RAM_TEXT void lab2_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMAGE, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab3_0_cb(gt_event_st * e) {
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

static GT_ATTRIBUTE_RAM_TEXT void lab8_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_SWITCH10, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab9_0_cb(gt_event_st * e) {
	
}

static GT_ATTRIBUTE_RAM_TEXT void lab10_0_cb(gt_event_st * e) {
	
}

gt_obj_st * gt_init_button(void)
{
	button = gt_obj_create(NULL);

	gt_screen_set_bgcolor(button, gt_color_hex(0xFFFFFF));


	

	/** label_button_title */
	/** 用于显示“button按钮”的标题 Label */
	label_button_title = gt_label_create(button);
	gt_obj_set_pos(label_button_title, 15, 14);
	gt_obj_set_size(label_button_title, 139, 34);
	gt_label_set_font_color(label_button_title, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_button_title, gray_black_16);
	gt_label_set_font_cjk(label_button_title, 0);
	gt_label_set_font_align(label_button_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_button_title, "button 按钮");
	gt_label_set_space(label_button_title, 0, 0);

	

	/** label_image_title */
	/** 用于显示“image图片”的标题 Label */
	label_image_title = gt_label_create(button);
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
	label_label_title = gt_label_create(button);
	gt_obj_set_pos(label_label_title, 15, 95);
	gt_obj_set_size(label_label_title, 139, 40);
	gt_label_set_font_color(label_label_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_label_title, gray_black_16);
	gt_label_set_font_cjk(label_label_title, 0);
	gt_label_set_font_align(label_label_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_label_title, "label 标签");
	gt_label_set_space(label_label_title, 0, 0);
	gt_obj_add_event_cb(label_label_title, lab3_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_txt_title */
	/** 用于显示“txt文本区”的标题 Label */
	label_txt_title = gt_label_create(button);
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
	label_input_title = gt_label_create(button);
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
	label_imgbtn_title = gt_label_create(button);
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
	label_keyboard_title = gt_label_create(button);
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
	label_switch10_title = gt_label_create(button);
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
	label_player_title = gt_label_create(button);
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
	label_inputNum_title = gt_label_create(button);
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
	label_clock_title = gt_label_create(button);
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
	label_barcode_title = gt_label_create(button);
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
	label_qrcode_title = gt_label_create(button);
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
	label_viewPager_title = gt_label_create(button);
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
	label_diglog_title = gt_label_create(button);
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
	label_gif_title = gt_label_create(button);
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
	label_layout_title = gt_label_create(button);
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
	label_mediaplayer_title = gt_label_create(button);
	gt_obj_set_pos(label_mediaplayer_title, 15, 732);
	gt_obj_set_size(label_mediaplayer_title, 172, 40);
	gt_label_set_font_color(label_mediaplayer_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_mediaplayer_title, gray_black_16);
	gt_label_set_font_cjk(label_mediaplayer_title, 0);
	gt_label_set_font_align(label_mediaplayer_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_mediaplayer_title, "media_player 播放器");
	gt_label_set_space(label_mediaplayer_title, 0, 0);

	

	/** label_group_title */
	/** 用于显示“group分组”的标题 Label */
	label_group_title = gt_label_create(button);
	gt_obj_set_pos(label_group_title, 15, 772);
	gt_obj_set_size(label_group_title, 159, 40);
	gt_label_set_font_color(label_group_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_group_title, gray_black_16);
	gt_label_set_font_cjk(label_group_title, 0);
	gt_label_set_font_align(label_group_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_group_title, "group 分组");
	gt_label_set_space(label_group_title, 0, 0);

	

	/** label_slider_title */
	/** 用于显示“slider滑动条”的标题 Label */
	label_slider_title = gt_label_create(button);
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
	label_bar_title = gt_label_create(button);
	gt_obj_set_pos(label_bar_title, 14, 855);
	gt_obj_set_size(label_bar_title, 159, 40);
	gt_label_set_font_color(label_bar_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_bar_title, gray_black_16);
	gt_label_set_font_cjk(label_bar_title, 0);
	gt_label_set_font_align(label_bar_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_bar_title, "bar 进度条");
	gt_label_set_space(label_bar_title, 0, 0);

	

	/** label_radio_title */
	/** 用于显示“radio单选框”的标题 Label */
	label_radio_title = gt_label_create(button);
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
	label_checkbox_title = gt_label_create(button);
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
	label_listv_title = gt_label_create(button);
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
	label_roller_title = gt_label_create(button);
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
	label_graph_title = gt_label_create(button);
	gt_obj_set_pos(label_graph_title, 15, 1059);
	gt_obj_set_size(label_graph_title, 159, 40);
	gt_label_set_font_color(label_graph_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_graph_title, gray_black_16);
	gt_label_set_font_cjk(label_graph_title, 0);
	gt_label_set_font_align(label_graph_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_graph_title, "graph 线图");
	gt_label_set_space(label_graph_title, 0, 0);

	

	/** label_rect_title */
	/** 用于显示“rect矩形”的标题 Label */
	label_rect_title = gt_label_create(button);
	gt_obj_set_pos(label_rect_title, 15, 1099);
	gt_obj_set_size(label_rect_title, 159, 40);
	gt_label_set_font_color(label_rect_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_rect_title, gray_black_16);
	gt_label_set_font_cjk(label_rect_title, 0);
	gt_label_set_font_align(label_rect_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_rect_title, "rect 矩形");
	gt_label_set_space(label_rect_title, 0, 0);

	

	/** label_statusbartitle */
	/** 用于显示“statusbar状态栏”的标题 Label */
	label_statusbartitle = gt_label_create(button);
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
	label_screen_title = gt_label_create(button);
	gt_obj_set_pos(label_screen_title, 15, 1140);
	gt_obj_set_size(label_screen_title, 159, 40);
	gt_label_set_font_color(label_screen_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_screen_title, gray_black_16);
	gt_label_set_font_cjk(label_screen_title, 0);
	gt_label_set_font_align(label_screen_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_screen_title, "screen 屏幕");
	gt_label_set_space(label_screen_title, 0, 0);

	

	/** rect1_wireframe */
	/** 矩形线框 */
	rect1_wireframe = gt_rect_create(button);
	gt_obj_set_pos(rect1_wireframe, 237, 64);
	gt_obj_set_size(rect1_wireframe, 509, 270);
	gt_rect_set_radius(rect1_wireframe, 0);
	gt_rect_set_bg_color(rect1_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect1_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect1_wireframe, 1);
	gt_rect_set_border(rect1_wireframe, 1);

	

	/** rect1_blue */
	/** 蓝色矩形背景 */
	rect1_blue = gt_rect_create(button);
	gt_obj_set_pos(rect1_blue, 216, 73);
	gt_obj_set_size(rect1_blue, 138, 38);
	gt_rect_set_radius(rect1_blue, 0);
	gt_rect_set_bg_color(rect1_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect1_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect1_blue, 1);
	gt_rect_set_border(rect1_blue, 0);

	

	/** rect3 */
	rect3 = gt_rect_create(button);
	gt_obj_set_pos(rect3, 187, 1);
	gt_obj_set_size(rect3, 1, 1300);
	gt_rect_set_radius(rect3, 0);
	gt_rect_set_bg_color(rect3, gt_color_hex(0xc0c0c0));
	gt_rect_set_color_border(rect3, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3, 1);
	gt_rect_set_border(rect3, 0);

	

	/** blue_button */
	/**  蓝色实心按钮 */
	blue_button = gt_btn_create(button);
	gt_obj_set_pos(blue_button, 601, 137);
	gt_obj_set_size(blue_button, 120, 50);
	gt_btn_set_font_color(blue_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(blue_button, gray_black_20);
	gt_btn_set_font_cjk(blue_button, 0);
	gt_btn_set_font_align(blue_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(blue_button, "blue");
	gt_btn_set_color_background(blue_button, gt_color_hex(0x1976D2));
	gt_btn_set_color_pressed(blue_button, gt_color_hex(0xb7d7f7));
	gt_btn_set_font_color_pressed(blue_button, gt_color_hex(0xffffff));
	gt_btn_set_radius(blue_button, 0);

	

	/** green_button_outlined */
	/** 绿色实心带边框按钮 */
	green_button_outlined = gt_btn_create(button);
	gt_obj_set_pos(green_button_outlined, 265, 230);
	gt_obj_set_size(green_button_outlined, 120, 50);
	gt_btn_set_font_color(green_button_outlined, gt_color_hex(0xffffff));
	gt_btn_set_font_family(green_button_outlined, gray_black_20);
	gt_btn_set_font_cjk(green_button_outlined, 0);
	gt_btn_set_font_align(green_button_outlined, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(green_button_outlined, "green");
	gt_btn_set_color_background(green_button_outlined, gt_color_hex(0x26A69A));
	gt_btn_set_color_pressed(green_button_outlined, gt_color_hex(0x156058));
	gt_btn_set_font_color_pressed(green_button_outlined, gt_color_hex(0x000000));
	gt_btn_set_color_border(green_button_outlined, gt_color_hex(0x60ffff));
	gt_btn_set_border_width(green_button_outlined, 3);
	gt_btn_set_radius(green_button_outlined, 0);

	

	/** yellow_back_ok_button */
	/** 黄色“返回”"确定"按钮 */
	yellow_back_ok_button = gt_btn_create(button);
	gt_obj_set_pos(yellow_back_ok_button, 432, 230);
	gt_obj_set_size(yellow_back_ok_button, 120, 50);
	gt_btn_set_font_color(yellow_back_ok_button, gt_color_hex(0x000000));
	gt_btn_set_font_family(yellow_back_ok_button, gray_black_20);
	gt_btn_set_font_cjk(yellow_back_ok_button, 0);
	gt_btn_set_font_align(yellow_back_ok_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(yellow_back_ok_button, "goldenrod");
	gt_btn_set_color_background(yellow_back_ok_button, gt_color_hex(0xFECB31));
	gt_btn_set_color_pressed(yellow_back_ok_button, gt_color_hex(0xfff0c1));
	gt_btn_set_font_color_pressed(yellow_back_ok_button, gt_color_hex(0x000000));
	gt_btn_set_radius(yellow_back_ok_button, 0);
	gt_btn_add_state_content(yellow_back_ok_button, "OK");
	gt_btn_add_state_content(yellow_back_ok_button, "back");

	

	/** fuchsia_outlined */
	/** 粉红色按钮，带边框 */
	fuchsia_outlined = gt_btn_create(button);
	gt_obj_set_pos(fuchsia_outlined, 433, 141);
	gt_obj_set_size(fuchsia_outlined, 120, 50);
	gt_btn_set_font_color(fuchsia_outlined, gt_color_hex(0xff0080));
	gt_btn_set_font_family(fuchsia_outlined, gray_black_20);
	gt_btn_set_font_cjk(fuchsia_outlined, 0);
	gt_btn_set_font_align(fuchsia_outlined, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(fuchsia_outlined, "fuchsia ");
	gt_btn_set_color_background(fuchsia_outlined, gt_color_hex(0xffffff));
	gt_btn_set_color_pressed(fuchsia_outlined, gt_color_hex(0xffb9dc));
	gt_btn_set_font_color_pressed(fuchsia_outlined, gt_color_hex(0xff0080));
	gt_btn_set_color_border(fuchsia_outlined, gt_color_hex(0xff0080));
	gt_btn_set_border_width(fuchsia_outlined, 3);
	gt_btn_set_radius(fuchsia_outlined, 0);

	

	/** rect2_wireframe */
	/** 矩形线框 */
	rect2_wireframe = gt_rect_create(button);
	gt_obj_set_pos(rect2_wireframe, 237, 354);
	gt_obj_set_size(rect2_wireframe, 509, 328);
	gt_rect_set_radius(rect2_wireframe, 0);
	gt_rect_set_bg_color(rect2_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect2_wireframe, 1);
	gt_rect_set_border(rect2_wireframe, 1);

	

	/** rect2_blue */
	/** 蓝色矩形背景 */
	rect2_blue = gt_rect_create(button);
	gt_obj_set_pos(rect2_blue, 215, 363);
	gt_obj_set_size(rect2_blue, 138, 38);
	gt_rect_set_radius(rect2_blue, 0);
	gt_rect_set_bg_color(rect2_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect2_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect2_blue, 1);
	gt_rect_set_border(rect2_blue, 0);

	

	/** label_shape_title */
	/** 用于显示“形状”的标题 Label */
	label_shape_title = gt_label_create(button);
	gt_obj_set_pos(label_shape_title, 260, 365);
	gt_obj_set_size(label_shape_title, 66, 34);
	gt_label_set_font_color(label_shape_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_shape_title, gray_black_20);
	gt_label_set_font_cjk(label_shape_title, 0);
	gt_label_set_font_align(label_shape_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_shape_title, "形状");
	gt_label_set_space(label_shape_title, 0, 0);

	

	/** rounded_brown_button */
	/**  棕色圆角按钮 */
	rounded_brown_button = gt_btn_create(button);
	gt_obj_set_pos(rounded_brown_button, 268, 444);
	gt_obj_set_size(rounded_brown_button, 114, 51);
	gt_btn_set_font_color(rounded_brown_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(rounded_brown_button, gray_black_20);
	gt_btn_set_font_cjk(rounded_brown_button, 0);
	gt_btn_set_font_align(rounded_brown_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(rounded_brown_button, "rounded");
	gt_btn_set_color_background(rounded_brown_button, gt_color_hex(0x8D6E63));
	gt_btn_set_color_pressed(rounded_brown_button, gt_color_hex(0x685148));
	gt_btn_set_font_color_pressed(rounded_brown_button, gt_color_hex(0x000000));
	gt_btn_set_radius(rounded_brown_button, 8);

	

	/** rounded_orange_button */
	/** 橙色实心圆角按钮 */
	rounded_orange_button = gt_btn_create(button);
	gt_obj_set_pos(rounded_orange_button, 433, 444);
	gt_obj_set_size(rounded_orange_button, 119, 51);
	gt_btn_set_font_color(rounded_orange_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(rounded_orange_button, gray_black_20);
	gt_btn_set_font_cjk(rounded_orange_button, 0);
	gt_btn_set_font_align(rounded_orange_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(rounded_orange_button, "rounded");
	gt_btn_set_color_background(rounded_orange_button, gt_color_hex(0xFE7C53));
	gt_btn_set_color_pressed(rounded_orange_button, gt_color_hex(0xfeb198));
	gt_btn_set_font_color_pressed(rounded_orange_button, gt_color_hex(0xffffff));
	gt_btn_set_radius(rounded_orange_button, 50);

	

	/** right_angle_blue_button */
	/** 蓝色直角按钮 */
	right_angle_blue_button = gt_btn_create(button);
	gt_obj_set_pos(right_angle_blue_button, 268, 553);
	gt_obj_set_size(right_angle_blue_button, 116, 50);
	gt_btn_set_font_color(right_angle_blue_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(right_angle_blue_button, gray_black_20);
	gt_btn_set_font_cjk(right_angle_blue_button, 0);
	gt_btn_set_font_align(right_angle_blue_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(right_angle_blue_button, "right angle");
	gt_btn_set_color_background(right_angle_blue_button, gt_color_hex(0x1976D2));
	gt_btn_set_color_pressed(right_angle_blue_button, gt_color_hex(0x5ba4ec));
	gt_btn_set_font_color_pressed(right_angle_blue_button, gt_color_hex(0xffffff));
	gt_btn_set_radius(right_angle_blue_button, 0);

	

	/** square_fuchsia_button */
	/** 粉红色方形按钮 */
	square_fuchsia_button = gt_btn_create(button);
	gt_obj_set_pos(square_fuchsia_button, 458, 544);
	gt_obj_set_size(square_fuchsia_button, 70, 70);
	gt_btn_set_font_color(square_fuchsia_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(square_fuchsia_button, gray_black_20);
	gt_btn_set_font_cjk(square_fuchsia_button, 0);
	gt_btn_set_font_align(square_fuchsia_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(square_fuchsia_button, "square");
	gt_btn_set_color_background(square_fuchsia_button, gt_color_hex(0xff0080));
	gt_btn_set_color_pressed(square_fuchsia_button, gt_color_hex(0xff8cc6));
	gt_btn_set_font_color_pressed(square_fuchsia_button, gt_color_hex(0x000000));
	gt_btn_set_radius(square_fuchsia_button, 0);

	

	/** circle_cyan_button */
	/** 青绿色圆形按钮 */
	circle_cyan_button = gt_btn_create(button);
	gt_obj_set_pos(circle_cyan_button, 620, 544);
	gt_obj_set_size(circle_cyan_button, 70, 70);
	gt_btn_set_font_color(circle_cyan_button, gt_color_hex(0x000000));
	gt_btn_set_font_family(circle_cyan_button, gray_black_20);
	gt_btn_set_font_cjk(circle_cyan_button, 0);
	gt_btn_set_font_align(circle_cyan_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(circle_cyan_button, "circle");
	gt_btn_set_color_background(circle_cyan_button, gt_color_hex(0x68ddd1));
	gt_btn_set_color_pressed(circle_cyan_button, gt_color_hex(0xE4E4E4));
	gt_btn_set_font_color_pressed(circle_cyan_button, gt_color_hex(0x000000));
	gt_btn_set_radius(circle_cyan_button, 100);

	

	/** label_button_category */
	/** 按钮控件板块的标题Label */
	label_button_category = gt_label_create(button);
	gt_obj_set_pos(label_button_category, 240, 14);
	gt_obj_set_size(label_button_category, 162, 34);
	gt_label_set_font_color(label_button_category, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_button_category, gray_black_24);
	gt_label_set_font_cjk(label_button_category, 0);
	gt_label_set_font_align(label_button_category, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_button_category, "按钮控件");
	gt_label_set_space(label_button_category, 0, 0);

	

	/** label_color_title */
	/** 用于显示“颜色”的标题 Label */
	label_color_title = gt_label_create(button);
	gt_obj_set_pos(label_color_title, 260, 75);
	gt_obj_set_size(label_color_title, 66, 34);
	gt_label_set_font_color(label_color_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_color_title, gray_black_20);
	gt_label_set_font_cjk(label_color_title, 0);
	gt_label_set_font_align(label_color_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_color_title, "颜色");
	gt_label_set_space(label_color_title, 0, 0);

	

	/** rect3_wireframe */
	/** 矩形线框 */
	rect3_wireframe = gt_rect_create(button);
	gt_obj_set_pos(rect3_wireframe, 237, 703);
	gt_obj_set_size(rect3_wireframe, 509, 328);
	gt_rect_set_radius(rect3_wireframe, 0);
	gt_rect_set_bg_color(rect3_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect3_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect3_wireframe, 1);
	gt_rect_set_border(rect3_wireframe, 1);

	

	/** rect3_blue */
	/** 蓝色矩形背景 */
	rect3_blue = gt_rect_create(button);
	gt_obj_set_pos(rect3_blue, 215, 713);
	gt_obj_set_size(rect3_blue, 138, 38);
	gt_rect_set_radius(rect3_blue, 0);
	gt_rect_set_bg_color(rect3_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect3_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3_blue, 1);
	gt_rect_set_border(rect3_blue, 0);

	

	/** label_icon_title */
	/** 用于显示“带图标”的标题 Label */
	label_icon_title = gt_label_create(button);
	gt_obj_set_pos(label_icon_title, 259, 715);
	gt_obj_set_size(label_icon_title, 82, 34);
	gt_label_set_font_color(label_icon_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_icon_title, gray_black_20);
	gt_label_set_font_cjk(label_icon_title, 0);
	gt_label_set_font_align(label_icon_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_icon_title, "带图标");
	gt_label_set_space(label_icon_title, 0, 0);

	

	/** fuchsia_flat */
	/** 粉红色按钮，无边框 */
	fuchsia_flat = gt_btn_create(button);
	gt_obj_set_pos(fuchsia_flat, 265, 138);
	gt_obj_set_size(fuchsia_flat, 120, 50);
	gt_btn_set_font_color(fuchsia_flat, gt_color_hex(0xff0080));
	gt_btn_set_font_family(fuchsia_flat, gray_black_20);
	gt_btn_set_font_cjk(fuchsia_flat, 0);
	gt_btn_set_font_align(fuchsia_flat, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(fuchsia_flat, "fuchsia flat");
	gt_btn_set_color_background(fuchsia_flat, gt_color_hex(0xffffff));
	gt_btn_set_color_pressed(fuchsia_flat, gt_color_hex(0xffdbed));
	gt_btn_set_font_color_pressed(fuchsia_flat, gt_color_hex(0xff0080));
	gt_btn_set_radius(fuchsia_flat, 0);

	

	/** outlined_orange_button */
	/** 橙色圆角边框按钮 */
	outlined_orange_button = gt_btn_create(button);
	gt_obj_set_pos(outlined_orange_button, 595, 444);
	gt_obj_set_size(outlined_orange_button, 119, 51);
	gt_btn_set_font_color(outlined_orange_button, gt_color_hex(0xff8000));
	gt_btn_set_font_family(outlined_orange_button, gray_black_20);
	gt_btn_set_font_cjk(outlined_orange_button, 0);
	gt_btn_set_font_align(outlined_orange_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(outlined_orange_button, "rounded");
	gt_btn_set_color_background(outlined_orange_button, gt_color_hex(0xffffff));
	gt_btn_set_color_pressed(outlined_orange_button, gt_color_hex(0xfeb198));
	gt_btn_set_font_color_pressed(outlined_orange_button, gt_color_hex(0xffffff));
	gt_btn_set_color_border(outlined_orange_button, gt_color_hex(0xff8000));
	gt_btn_set_border_width(outlined_orange_button, 3);
	gt_btn_set_radius(outlined_orange_button, 50);

	

	/** stacked_icon_button */
	/** 图标与文字垂直堆叠的按钮 */
	stacked_icon_button = gt_btn_create(button);
	gt_obj_set_pos(stacked_icon_button, 484, 887);
	gt_obj_set_size(stacked_icon_button, 120, 70);
	gt_btn_set_font_color(stacked_icon_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(stacked_icon_button, gray_black_20);
	gt_btn_set_font_cjk(stacked_icon_button, 0);
	gt_btn_set_font_align(stacked_icon_button, GT_ALIGN_CENTER_BOTTOM);
	gt_btn_set_text(stacked_icon_button, "stacked");
	gt_btn_set_color_background(stacked_icon_button, gt_color_hex(0x1976D2));
	gt_btn_set_color_pressed(stacked_icon_button, gt_color_hex(0xb7d7f7));
	gt_btn_set_font_color_pressed(stacked_icon_button, gt_color_hex(0xffffff));
	gt_btn_set_radius(stacked_icon_button, 0);

	

	/** icon_click */
	/** 点击图标 */
	icon_click = gt_img_create(button);
	gt_obj_set_pos(icon_click, 526, 890);
	gt_obj_set_size(icon_click, 40, 40);
	gt_img_set_src(icon_click, ".:img_turn_on_0_52_40x40.png");

	

	/** icon_left_globe_button */
	/** 带地球图标，图标居左的按钮 */
	icon_left_globe_button = gt_btn_create(button);
	gt_obj_set_pos(icon_left_globe_button, 263, 787);
	gt_obj_set_size(icon_left_globe_button, 125, 43);
	gt_btn_set_font_color(icon_left_globe_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(icon_left_globe_button, gray_black_20);
	gt_btn_set_font_cjk(icon_left_globe_button, 0);
	gt_btn_set_font_align(icon_left_globe_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(icon_left_globe_button, "   left");
	gt_btn_set_color_background(icon_left_globe_button, gt_color_hex(0x1976D2));
	gt_btn_set_color_pressed(icon_left_globe_button, gt_color_hex(0xb7d7f7));
	gt_btn_set_font_color_pressed(icon_left_globe_button, gt_color_hex(0xffffff));
	gt_btn_set_radius(icon_left_globe_button, 50);

	

	/** icon_globe */
	/** 地球图标 */
	icon_globe = gt_img_create(button);
	gt_obj_set_pos(icon_globe, 279, 794);
	gt_obj_set_size(icon_globe, 30, 30);
	gt_img_set_src(icon_globe, ".:img_globe_regular_30x30.png");

	

	/** icon_left_right_sun_button */
	/**  左侧有太阳图标，右侧有箭头图标的按钮 */
	icon_left_right_sun_button = gt_btn_create(button);
	gt_obj_set_pos(icon_left_right_sun_button, 413, 786);
	gt_obj_set_size(icon_left_right_sun_button, 308, 43);
	gt_btn_set_font_color(icon_left_right_sun_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(icon_left_right_sun_button, gray_black_20);
	gt_btn_set_font_cjk(icon_left_right_sun_button, 0);
	gt_btn_set_font_align(icon_left_right_sun_button, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(icon_left_right_sun_button, "on left and right");
	gt_btn_set_color_background(icon_left_right_sun_button, gt_color_hex(0x1976D2));
	gt_btn_set_color_pressed(icon_left_right_sun_button, gt_color_hex(0xb7d7f7));
	gt_btn_set_font_color_pressed(icon_left_right_sun_button, gt_color_hex(0xffffff));
	gt_btn_set_radius(icon_left_right_sun_button, 50);

	

	/** icon_right */
	/** 箭头图标 */
	icon_right = gt_img_create(button);
	gt_obj_set_pos(icon_right, 665, 792);
	gt_obj_set_size(icon_right, 30, 30);
	gt_img_set_src(icon_right, ".:img_telegram_0_56_30x30.png");

	

	/** icon_sun */
	/** 太阳图标 */
	icon_sun = gt_img_create(button);
	gt_obj_set_pos(icon_sun, 439, 792);
	gt_obj_set_size(icon_sun, 30, 30);
	gt_img_set_src(icon_sun, ".:img_concept_sharing_0_57_30x30.png");

	

	/** icon_right_globe_button */
	/** 带地球图标，图标居y右的按钮 */
	icon_right_globe_button = gt_btn_create(button);
	gt_obj_set_pos(icon_right_globe_button, 263, 900);
	gt_obj_set_size(icon_right_globe_button, 125, 43);
	gt_btn_set_font_color(icon_right_globe_button, gt_color_hex(0xffffff));
	gt_btn_set_font_family(icon_right_globe_button, gray_black_20);
	gt_btn_set_font_cjk(icon_right_globe_button, 0);
	gt_btn_set_font_align(icon_right_globe_button, GT_ALIGN_LEFT_MID);
	gt_btn_set_text(icon_right_globe_button, "  Right");
	gt_btn_set_color_background(icon_right_globe_button, gt_color_hex(0x1976D2));
	gt_btn_set_color_pressed(icon_right_globe_button, gt_color_hex(0xb7d7f7));
	gt_btn_set_font_color_pressed(icon_right_globe_button, gt_color_hex(0xffffff));
	gt_btn_set_radius(icon_right_globe_button, 50);

	

	/** icon_globe2 */
	/** 地球图标 */
	icon_globe2 = gt_img_create(button);
	gt_obj_set_pos(icon_globe2, 344, 907);
	gt_obj_set_size(icon_globe2, 30, 30);
	gt_img_set_src(icon_globe2, ".:img_globe_regular_30x30.png");



	return button;
}

