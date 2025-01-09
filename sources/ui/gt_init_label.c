#include "gt_ui.h"
#include "gt_font_config.h"


/** label */
gt_obj_st * label = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_button_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_image_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_label_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_txt_title = NULL;
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
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_label_category = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_Borderlessstylewithoutbackground = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_ColorandStyle_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_interval_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_pink = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_Borderlessstylewithbackground = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_Orangeborder = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_Borderedwithoutbackground = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * btn_horizontalspacing = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Orangeinterval10 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Blueinterval20 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Orangeverticalintervalof10 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Blueverticalintervalof15 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * btn_VerticalSpacing = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_wireframeCopy = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_alignment_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_black = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Topleftalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_black = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Topcenteredalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_black = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Toprightalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_blue1 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Centerleftalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_blue2 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_CenterAlignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_blue3 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Centerrightalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_orange = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Bottomleftalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_orange = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Bottomcenteredalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_orange = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Bottomrightalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Topleftalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Topcenteredalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Toprightalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Centerleftalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_CenterAlignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Centerrightalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Bottomleftalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Bottomcenteredalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Bottomrightalignment = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_input_titleCopyCopy = NULL;

static GT_ATTRIBUTE_RAM_TEXT void label_0_cb(gt_event_st * e) {
	
}

static GT_ATTRIBUTE_RAM_TEXT void lab1_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_BUTTON, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab2_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMAGE, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
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

static GT_ATTRIBUTE_RAM_TEXT void lab9_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_PLAYER, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab10_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_INPUTNUM, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void label_input_titleCopyCopy_input_titleCopy_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_INPUT_KEYBOARD, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
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
	gt_obj_set_pos(label_label_title, 15, 96);
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
	gt_obj_set_pos(label_txt_title, 15, 143);
	gt_obj_set_size(label_txt_title, 139, 40);
	gt_label_set_font_color(label_txt_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_txt_title, gray_black_16);
	gt_label_set_font_cjk(label_txt_title, 0);
	gt_label_set_font_align(label_txt_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_txt_title, "txt 文本区");
	gt_label_set_space(label_txt_title, 0, 0);
	gt_obj_add_event_cb(label_txt_title, lab4_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_imgbtn_title */
	/** 用于显示“imgbtn图片按钮”的标题 Label */
	label_imgbtn_title = gt_label_create(label);
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
	label_switch10_title = gt_label_create(label);
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
	label_player_title = gt_label_create(label);
	gt_obj_set_pos(label_player_title, 15, 350);
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
	gt_obj_add_event_cb(label_inputNum_title, lab10_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_clock_title */
	/** 用于显示“clock时钟”的标题 Label */
	label_clock_title = gt_label_create(label);
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
	gt_obj_set_size(rect_wireframe, 509, 196);
	gt_rect_set_radius(rect_wireframe, 0);
	gt_rect_set_bg_color(rect_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect_wireframe, 1);
	gt_rect_set_border(rect_wireframe, 1);

	

	/** label_Borderlessstylewithoutbackground */
	/** 无边款无背景label标签 */
	label_Borderlessstylewithoutbackground = gt_label_create(label);
	gt_obj_set_pos(label_Borderlessstylewithoutbackground, 284, 166);
	gt_obj_set_size(label_Borderlessstylewithoutbackground, 114, 20);
	gt_label_set_font_color(label_Borderlessstylewithoutbackground, gt_color_hex(0x000000));
	gt_label_set_font_family(label_Borderlessstylewithoutbackground, gray_black_16);
	gt_label_set_font_cjk(label_Borderlessstylewithoutbackground, 0);
	gt_label_set_font_align(label_Borderlessstylewithoutbackground, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_Borderlessstylewithoutbackground, "无边框无背景");
	gt_label_set_space(label_Borderlessstylewithoutbackground, 0, 20);

	

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

	

	/** label_ColorandStyle_title */
	/** 用于显示“颜色与样式”的标题 Label */
	label_ColorandStyle_title = gt_label_create(label);
	gt_obj_set_pos(label_ColorandStyle_title, 224, 77);
	gt_obj_set_size(label_ColorandStyle_title, 143, 34);
	gt_label_set_font_color(label_ColorandStyle_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_ColorandStyle_title, gray_black_20);
	gt_label_set_font_cjk(label_ColorandStyle_title, 0);
	gt_label_set_font_align(label_ColorandStyle_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_ColorandStyle_title, "颜色与样式");
	gt_label_set_space(label_ColorandStyle_title, 0, 0);

	

	/** rect2_wireframe */
	/** 矩形线框 */
	rect2_wireframe = gt_rect_create(label);
	gt_obj_set_pos(rect2_wireframe, 239, 273);
	gt_obj_set_size(rect2_wireframe, 509, 300);
	gt_rect_set_radius(rect2_wireframe, 0);
	gt_rect_set_bg_color(rect2_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect2_wireframe, 1);
	gt_rect_set_border(rect2_wireframe, 1);

	

	/** rect2_blue */
	/** 蓝色矩形背景 */
	rect2_blue = gt_rect_create(label);
	gt_obj_set_pos(rect2_blue, 219, 286);
	gt_obj_set_size(rect2_blue, 140, 38);
	gt_rect_set_radius(rect2_blue, 0);
	gt_rect_set_bg_color(rect2_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect2_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect2_blue, 1);
	gt_rect_set_border(rect2_blue, 0);

	

	/** label_interval_title */
	/** 用于显示“间隔”的标题 Label */
	label_interval_title = gt_label_create(label);
	gt_obj_set_pos(label_interval_title, 243, 287);
	gt_obj_set_size(label_interval_title, 106, 34);
	gt_label_set_font_color(label_interval_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_interval_title, gray_black_20);
	gt_label_set_font_cjk(label_interval_title, 0);
	gt_label_set_font_align(label_interval_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_interval_title, "间隔");
	gt_label_set_space(label_interval_title, 0, 0);

	

	/** rect_pink */
	/** 粉色背景rect矩形 */
	rect_pink = gt_rect_create(label);
	gt_obj_set_pos(rect_pink, 426, 154);
	gt_obj_set_size(rect_pink, 121, 46);
	gt_rect_set_radius(rect_pink, 0);
	gt_rect_set_bg_color(rect_pink, gt_color_hex(0xffcce6));
	gt_rect_set_color_border(rect_pink, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect_pink, 1);
	gt_rect_set_border(rect_pink, 0);

	

	/** label_Borderlessstylewithbackground */
	/** 无边框有背景label标签 */
	label_Borderlessstylewithbackground = gt_label_create(label);
	gt_obj_set_pos(label_Borderlessstylewithbackground, 439, 165);
	gt_obj_set_size(label_Borderlessstylewithbackground, 109, 20);
	gt_label_set_font_color(label_Borderlessstylewithbackground, gt_color_hex(0xff0080));
	gt_label_set_font_family(label_Borderlessstylewithbackground, gray_black_16);
	gt_label_set_font_cjk(label_Borderlessstylewithbackground, 0);
	gt_label_set_font_align(label_Borderlessstylewithbackground, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_Borderlessstylewithbackground, "无边框有背景");
	gt_label_set_space(label_Borderlessstylewithbackground, 0, 20);

	

	/** rect_Orangeborder */
	/** 橙色边框rect矩形 */
	rect_Orangeborder = gt_rect_create(label);
	gt_obj_set_pos(rect_Orangeborder, 596, 154);
	gt_obj_set_size(rect_Orangeborder, 121, 46);
	gt_rect_set_radius(rect_Orangeborder, 0);
	gt_rect_set_bg_color(rect_Orangeborder, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_Orangeborder, gt_color_hex(0xff8040));
	gt_rect_set_fill(rect_Orangeborder, 0);
	gt_rect_set_border(rect_Orangeborder, 3);

	

	/** label_Borderedwithoutbackground */
	/** 有边框无背景label标签 */
	label_Borderedwithoutbackground = gt_label_create(label);
	gt_obj_set_pos(label_Borderedwithoutbackground, 608, 166);
	gt_obj_set_size(label_Borderedwithoutbackground, 109, 20);
	gt_label_set_font_color(label_Borderedwithoutbackground, gt_color_hex(0xff8000));
	gt_label_set_font_family(label_Borderedwithoutbackground, gray_black_16);
	gt_label_set_font_cjk(label_Borderedwithoutbackground, 0);
	gt_label_set_font_align(label_Borderedwithoutbackground, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_Borderedwithoutbackground, "有边框无背景");
	gt_label_set_space(label_Borderedwithoutbackground, 0, 20);

	

	/** btn_horizontalspacing */
	/** 水平间隔蓝色实心按钮 */
	btn_horizontalspacing = gt_btn_create(label);
	gt_obj_set_pos(btn_horizontalspacing, 310, 350);
	gt_obj_set_size(btn_horizontalspacing, 118, 42);
	gt_btn_set_font_color(btn_horizontalspacing, gt_color_hex(0xffffff));
	gt_btn_set_font_family(btn_horizontalspacing, gray_black_16);
	gt_btn_set_font_cjk(btn_horizontalspacing, 0);
	gt_btn_set_font_align(btn_horizontalspacing, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(btn_horizontalspacing, "水平间隔");
	gt_btn_set_color_background(btn_horizontalspacing, gt_color_hex(0x0097e6));
	gt_btn_set_color_pressed(btn_horizontalspacing, gt_color_hex(0x00a8ff));
	gt_btn_set_font_color_pressed(btn_horizontalspacing, gt_color_hex(0x000000));
	gt_btn_set_radius(btn_horizontalspacing, 4);

	

	/** lab_Orangeinterval10 */
	/** 橙色间隔10label标签 */
	lab_Orangeinterval10 = gt_label_create(label);
	gt_obj_set_pos(lab_Orangeinterval10, 290, 430);
	gt_obj_set_size(lab_Orangeinterval10, 216, 37);
	gt_label_set_font_color(lab_Orangeinterval10, gt_color_hex(0xff8000));
	gt_label_set_font_family(lab_Orangeinterval10, gray_black_16);
	gt_label_set_font_cjk(lab_Orangeinterval10, 0);
	gt_label_set_font_align(lab_Orangeinterval10, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab_Orangeinterval10, "橙色间隔10");
	gt_label_set_space(lab_Orangeinterval10, 10, 0);

	

	/** lab_Blueinterval20 */
	/** 蓝色间隔20label标签 */
	lab_Blueinterval20 = gt_label_create(label);
	gt_obj_set_pos(lab_Blueinterval20, 290, 480);
	gt_obj_set_size(lab_Blueinterval20, 281, 37);
	gt_label_set_font_color(lab_Blueinterval20, gt_color_hex(0x0000ff));
	gt_label_set_font_family(lab_Blueinterval20, gray_black_16);
	gt_label_set_font_cjk(lab_Blueinterval20, 0);
	gt_label_set_font_align(lab_Blueinterval20, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab_Blueinterval20, "蓝色间隔20");
	gt_label_set_space(lab_Blueinterval20, 20, 0);

	

	/** lab_Orangeverticalintervalof10 */
	/** 橙色垂直间隔10label标签 */
	lab_Orangeverticalintervalof10 = gt_label_create(label);
	gt_obj_set_pos(lab_Orangeverticalintervalof10, 552, 430);
	gt_obj_set_size(lab_Orangeverticalintervalof10, 49, 110);
	gt_label_set_font_color(lab_Orangeverticalintervalof10, gt_color_hex(0xff8000));
	gt_label_set_font_family(lab_Orangeverticalintervalof10, gray_black_16);
	gt_label_set_font_cjk(lab_Orangeverticalintervalof10, 0);
	gt_label_set_font_align(lab_Orangeverticalintervalof10, GT_ALIGN_CENTER);
	gt_label_set_text(lab_Orangeverticalintervalof10, "橙色标签间隔10");
	gt_label_set_space(lab_Orangeverticalintervalof10, 1, 10);

	

	/** lab_Blueverticalintervalof15 */
	/** 蓝色垂直间隔15label标签 */
	lab_Blueverticalintervalof15 = gt_label_create(label);
	gt_obj_set_pos(lab_Blueverticalintervalof15, 649, 430);
	gt_obj_set_size(lab_Blueverticalintervalof15, 41, 121);
	gt_label_set_font_color(lab_Blueverticalintervalof15, gt_color_hex(0x0000ff));
	gt_label_set_font_family(lab_Blueverticalintervalof15, gray_black_16);
	gt_label_set_font_cjk(lab_Blueverticalintervalof15, 0);
	gt_label_set_font_align(lab_Blueverticalintervalof15, GT_ALIGN_CENTER);
	gt_label_set_text(lab_Blueverticalintervalof15, "蓝色标签间隔15");
	gt_label_set_space(lab_Blueverticalintervalof15, 1, 15);

	

	/** btn_VerticalSpacing */
	/** 垂直间隔蓝色实心按钮 */
	btn_VerticalSpacing = gt_btn_create(label);
	gt_obj_set_pos(btn_VerticalSpacing, 563, 348);
	gt_obj_set_size(btn_VerticalSpacing, 118, 42);
	gt_btn_set_font_color(btn_VerticalSpacing, gt_color_hex(0xffffff));
	gt_btn_set_font_family(btn_VerticalSpacing, gray_black_16);
	gt_btn_set_font_cjk(btn_VerticalSpacing, 0);
	gt_btn_set_font_align(btn_VerticalSpacing, GT_ALIGN_CENTER_MID);
	gt_btn_set_text(btn_VerticalSpacing, "垂直间隔");
	gt_btn_set_color_background(btn_VerticalSpacing, gt_color_hex(0x0097e6));
	gt_btn_set_color_pressed(btn_VerticalSpacing, gt_color_hex(0x00a8ff));
	gt_btn_set_font_color_pressed(btn_VerticalSpacing, gt_color_hex(0x000000));
	gt_btn_set_radius(btn_VerticalSpacing, 4);

	

	/** rect2_wireframeCopy */
	/** 矩形线框 */
	rect2_wireframeCopy = gt_rect_create(label);
	gt_obj_set_pos(rect2_wireframeCopy, 239, 586);
	gt_obj_set_size(rect2_wireframeCopy, 509, 429);
	gt_rect_set_radius(rect2_wireframeCopy, 0);
	gt_rect_set_bg_color(rect2_wireframeCopy, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_wireframeCopy, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect2_wireframeCopy, 1);
	gt_rect_set_border(rect2_wireframeCopy, 1);

	

	/** rect3_blue */
	/** 蓝色矩形背景 */
	rect3_blue = gt_rect_create(label);
	gt_obj_set_pos(rect3_blue, 219, 598);
	gt_obj_set_size(rect3_blue, 140, 38);
	gt_rect_set_radius(rect3_blue, 0);
	gt_rect_set_bg_color(rect3_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect3_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3_blue, 1);
	gt_rect_set_border(rect3_blue, 0);

	

	/** label_alignment_title */
	/** 用于显示“对齐”的标题 Label */
	label_alignment_title = gt_label_create(label);
	gt_obj_set_pos(label_alignment_title, 243, 600);
	gt_obj_set_size(label_alignment_title, 106, 34);
	gt_label_set_font_color(label_alignment_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_alignment_title, gray_black_20);
	gt_label_set_font_cjk(label_alignment_title, 0);
	gt_label_set_font_align(label_alignment_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_alignment_title, "对齐");
	gt_label_set_space(label_alignment_title, 0, 0);

	

	/** rect1_black */
	/** 黑色矩形线框1 */
	rect1_black = gt_rect_create(label);
	gt_obj_set_pos(rect1_black, 283, 695);
	gt_obj_set_size(rect1_black, 123, 46);
	gt_rect_set_radius(rect1_black, 0);
	gt_rect_set_bg_color(rect1_black, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect1_black, gt_color_hex(0x000000));
	gt_rect_set_fill(rect1_black, 1);
	gt_rect_set_border(rect1_black, 1);

	

	/** lab_Topleftalignment */
	/** 顶部左对齐label标签 */
	lab_Topleftalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Topleftalignment, 286, 697);
	gt_obj_set_size(lab_Topleftalignment, 119, 43);
	gt_label_set_font_color(lab_Topleftalignment, gt_color_hex(0x000000));
	gt_label_set_font_family(lab_Topleftalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Topleftalignment, 0);
	gt_label_set_font_align(lab_Topleftalignment, GT_ALIGN_LEFT);
	gt_label_set_text(lab_Topleftalignment, "顶部左对齐");
	gt_label_set_space(lab_Topleftalignment, 0, 0);

	

	/** rect2_black */
	/** 黑色矩形线框2 */
	rect2_black = gt_rect_create(label);
	gt_obj_set_pos(rect2_black, 435, 695);
	gt_obj_set_size(rect2_black, 123, 46);
	gt_rect_set_radius(rect2_black, 0);
	gt_rect_set_bg_color(rect2_black, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_black, gt_color_hex(0x000000));
	gt_rect_set_fill(rect2_black, 1);
	gt_rect_set_border(rect2_black, 1);

	

	/** lab_Topcenteredalignment */
	/** 顶部居中label标签 */
	lab_Topcenteredalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Topcenteredalignment, 416, 697);
	gt_obj_set_size(lab_Topcenteredalignment, 158, 33);
	gt_label_set_font_color(lab_Topcenteredalignment, gt_color_hex(0x000000));
	gt_label_set_font_family(lab_Topcenteredalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Topcenteredalignment, 0);
	gt_label_set_font_align(lab_Topcenteredalignment, GT_ALIGN_CENTER);
	gt_label_set_text(lab_Topcenteredalignment, "顶部居中对齐");
	gt_label_set_space(lab_Topcenteredalignment, 0, 0);

	

	/** rect3_black */
	/** 黑色矩形线框3 */
	rect3_black = gt_rect_create(label);
	gt_obj_set_pos(rect3_black, 588, 695);
	gt_obj_set_size(rect3_black, 123, 46);
	gt_rect_set_radius(rect3_black, 0);
	gt_rect_set_bg_color(rect3_black, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect3_black, gt_color_hex(0x000000));
	gt_rect_set_fill(rect3_black, 1);
	gt_rect_set_border(rect3_black, 1);

	

	/** lab_Toprightalignment */
	/** 顶部右对齐label标签 */
	lab_Toprightalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Toprightalignment, 604, 697);
	gt_obj_set_size(lab_Toprightalignment, 105, 33);
	gt_label_set_font_color(lab_Toprightalignment, gt_color_hex(0x000000));
	gt_label_set_font_family(lab_Toprightalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Toprightalignment, 0);
	gt_label_set_font_align(lab_Toprightalignment, GT_ALIGN_RIGHT);
	gt_label_set_text(lab_Toprightalignment, "顶部右对齐");
	gt_label_set_space(lab_Toprightalignment, 0, 0);

	

	/** rect_blue1 */
	/** 蓝色矩形线框1 */
	rect_blue1 = gt_rect_create(label);
	gt_obj_set_pos(rect_blue1, 283, 823);
	gt_obj_set_size(rect_blue1, 123, 46);
	gt_rect_set_radius(rect_blue1, 0);
	gt_rect_set_bg_color(rect_blue1, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_blue1, gt_color_hex(0x0080ff));
	gt_rect_set_fill(rect_blue1, 1);
	gt_rect_set_border(rect_blue1, 1);

	

	/** lab_Centerleftalignment */
	/** 居中左对齐label标签 */
	lab_Centerleftalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Centerleftalignment, 285, 834);
	gt_obj_set_size(lab_Centerleftalignment, 236, 25);
	gt_label_set_font_color(lab_Centerleftalignment, gt_color_hex(0x0080ff));
	gt_label_set_font_family(lab_Centerleftalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Centerleftalignment, 0);
	gt_label_set_font_align(lab_Centerleftalignment, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab_Centerleftalignment, "居中左对齐");
	gt_label_set_space(lab_Centerleftalignment, 0, 0);

	

	/** rect_blue2 */
	/** 蓝色矩形线框2 */
	rect_blue2 = gt_rect_create(label);
	gt_obj_set_pos(rect_blue2, 435, 823);
	gt_obj_set_size(rect_blue2, 123, 46);
	gt_rect_set_radius(rect_blue2, 0);
	gt_rect_set_bg_color(rect_blue2, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_blue2, gt_color_hex(0x0080ff));
	gt_rect_set_fill(rect_blue2, 1);
	gt_rect_set_border(rect_blue2, 1);

	

	/** lab_CenterAlignment */
	/** 居中对齐label标签 */
	lab_CenterAlignment = gt_label_create(label);
	gt_obj_set_pos(lab_CenterAlignment, 408, 833);
	gt_obj_set_size(lab_CenterAlignment, 178, 25);
	gt_label_set_font_color(lab_CenterAlignment, gt_color_hex(0x0080ff));
	gt_label_set_font_family(lab_CenterAlignment, gray_black_16);
	gt_label_set_font_cjk(lab_CenterAlignment, 0);
	gt_label_set_font_align(lab_CenterAlignment, GT_ALIGN_CENTER_MID);
	gt_label_set_text(lab_CenterAlignment, "居中对齐");
	gt_label_set_space(lab_CenterAlignment, 0, 0);

	

	/** rect_blue3 */
	/** 蓝色矩形线框3 */
	rect_blue3 = gt_rect_create(label);
	gt_obj_set_pos(rect_blue3, 588, 823);
	gt_obj_set_size(rect_blue3, 123, 46);
	gt_rect_set_radius(rect_blue3, 0);
	gt_rect_set_bg_color(rect_blue3, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_blue3, gt_color_hex(0x0080ff));
	gt_rect_set_fill(rect_blue3, 1);
	gt_rect_set_border(rect_blue3, 1);

	

	/** lab_Centerrightalignment */
	/** 居中右对齐label标签 */
	lab_Centerrightalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Centerrightalignment, 554, 834);
	gt_obj_set_size(lab_Centerrightalignment, 155, 25);
	gt_label_set_font_color(lab_Centerrightalignment, gt_color_hex(0x0080ff));
	gt_label_set_font_family(lab_Centerrightalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Centerrightalignment, 0);
	gt_label_set_font_align(lab_Centerrightalignment, GT_ALIGN_RIGHT_MID);
	gt_label_set_text(lab_Centerrightalignment, "居中右对齐");
	gt_label_set_space(lab_Centerrightalignment, 0, 0);

	

	/** rect1_orange */
	/** 橙色矩形线框1 */
	rect1_orange = gt_rect_create(label);
	gt_obj_set_pos(rect1_orange, 283, 953);
	gt_obj_set_size(rect1_orange, 123, 46);
	gt_rect_set_radius(rect1_orange, 0);
	gt_rect_set_bg_color(rect1_orange, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect1_orange, gt_color_hex(0xff8000));
	gt_rect_set_fill(rect1_orange, 1);
	gt_rect_set_border(rect1_orange, 1);

	

	/** lab_Bottomleftalignment */
	/** 底部左对齐label标签 */
	lab_Bottomleftalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Bottomleftalignment, 285, 972);
	gt_obj_set_size(lab_Bottomleftalignment, 151, 25);
	gt_label_set_font_color(lab_Bottomleftalignment, gt_color_hex(0xff8000));
	gt_label_set_font_family(lab_Bottomleftalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Bottomleftalignment, 0);
	gt_label_set_font_align(lab_Bottomleftalignment, GT_ALIGN_LEFT_BOTTOM);
	gt_label_set_text(lab_Bottomleftalignment, "底部左对齐");
	gt_label_set_space(lab_Bottomleftalignment, 0, 0);

	

	/** rect2_orange */
	/** 橙色矩形线框2 */
	rect2_orange = gt_rect_create(label);
	gt_obj_set_pos(rect2_orange, 434, 953);
	gt_obj_set_size(rect2_orange, 123, 46);
	gt_rect_set_radius(rect2_orange, 0);
	gt_rect_set_bg_color(rect2_orange, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_orange, gt_color_hex(0xff8000));
	gt_rect_set_fill(rect2_orange, 1);
	gt_rect_set_border(rect2_orange, 1);

	

	/** lab_Bottomcenteredalignment */
	/** 底部居中对齐label标签 */
	lab_Bottomcenteredalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Bottomcenteredalignment, 414, 972);
	gt_obj_set_size(lab_Bottomcenteredalignment, 162, 25);
	gt_label_set_font_color(lab_Bottomcenteredalignment, gt_color_hex(0xff8000));
	gt_label_set_font_family(lab_Bottomcenteredalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Bottomcenteredalignment, 0);
	gt_label_set_font_align(lab_Bottomcenteredalignment, GT_ALIGN_CENTER_BOTTOM);
	gt_label_set_text(lab_Bottomcenteredalignment, "底部居中对齐");
	gt_label_set_space(lab_Bottomcenteredalignment, 0, 0);

	

	/** rect3_orange */
	/** 橙色矩形线框3 */
	rect3_orange = gt_rect_create(label);
	gt_obj_set_pos(rect3_orange, 588, 953);
	gt_obj_set_size(rect3_orange, 123, 46);
	gt_rect_set_radius(rect3_orange, 0);
	gt_rect_set_bg_color(rect3_orange, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect3_orange, gt_color_hex(0xff8000));
	gt_rect_set_fill(rect3_orange, 1);
	gt_rect_set_border(rect3_orange, 1);

	

	/** lab_Bottomrightalignment */
	/** 底部右对齐label标签 */
	lab_Bottomrightalignment = gt_label_create(label);
	gt_obj_set_pos(lab_Bottomrightalignment, 553, 972);
	gt_obj_set_size(lab_Bottomrightalignment, 156, 25);
	gt_label_set_font_color(lab_Bottomrightalignment, gt_color_hex(0xff8000));
	gt_label_set_font_family(lab_Bottomrightalignment, gray_black_16);
	gt_label_set_font_cjk(lab_Bottomrightalignment, 0);
	gt_label_set_font_align(lab_Bottomrightalignment, GT_ALIGN_RIGHT_BOTTOM);
	gt_label_set_text(lab_Bottomrightalignment, "底部右对齐");
	gt_label_set_space(lab_Bottomrightalignment, 0, 0);

	

	/** img_Topleftalignment */
	/** 顶部左对齐图片 */
	img_Topleftalignment = gt_img_create(label);
	gt_obj_set_pos(img_Topleftalignment, 326, 658);
	gt_obj_set_size(img_Topleftalignment, 31, 26);
	gt_img_set_src(img_Topleftalignment, ".:img_7_31x26.png");

	

	/** img_Topcenteredalignment */
	/** 顶部居中对齐图片 */
	img_Topcenteredalignment = gt_img_create(label);
	gt_obj_set_pos(img_Topcenteredalignment, 479, 658);
	gt_obj_set_size(img_Topcenteredalignment, 31, 26);
	gt_img_set_src(img_Topcenteredalignment, ".:img_6_31x26.png");

	

	/** img_Toprightalignment */
	/** 顶部右对齐图片 */
	img_Toprightalignment = gt_img_create(label);
	gt_obj_set_pos(img_Toprightalignment, 637, 658);
	gt_obj_set_size(img_Toprightalignment, 31, 26);
	gt_img_set_src(img_Toprightalignment, ".:img_4_31x26.png");

	

	/** img_Centerleftalignment */
	/** 居中左对齐图片 */
	img_Centerleftalignment = gt_img_create(label);
	gt_obj_set_pos(img_Centerleftalignment, 326, 787);
	gt_obj_set_size(img_Centerleftalignment, 31, 26);
	gt_img_set_src(img_Centerleftalignment, ".:img_2_31x26.png");

	

	/** img_CenterAlignment */
	/** 居中对齐图片 */
	img_CenterAlignment = gt_img_create(label);
	gt_obj_set_pos(img_CenterAlignment, 479, 787);
	gt_obj_set_size(img_CenterAlignment, 31, 26);
	gt_img_set_src(img_CenterAlignment, ".:img_8_31x26.png");

	

	/** img_Centerrightalignment */
	/** 居中右对齐图片 */
	img_Centerrightalignment = gt_img_create(label);
	gt_obj_set_pos(img_Centerrightalignment, 637, 787);
	gt_obj_set_size(img_Centerrightalignment, 31, 26);
	gt_img_set_src(img_Centerrightalignment, ".:img_3_31x26.png");

	

	/** img_Bottomleftalignment */
	/** 底部左对齐图片 */
	img_Bottomleftalignment = gt_img_create(label);
	gt_obj_set_pos(img_Bottomleftalignment, 326, 917);
	gt_obj_set_size(img_Bottomleftalignment, 31, 26);
	gt_img_set_src(img_Bottomleftalignment, ".:img_1_31x26.png");

	

	/** img_Bottomcenteredalignment */
	/** 底部居中对齐图片 */
	img_Bottomcenteredalignment = gt_img_create(label);
	gt_obj_set_pos(img_Bottomcenteredalignment, 479, 917);
	gt_obj_set_size(img_Bottomcenteredalignment, 31, 26);
	gt_img_set_src(img_Bottomcenteredalignment, ".:img_9_31x26.png");

	

	/** img_Bottomrightalignment */
	/** 底部右对齐图片 */
	img_Bottomrightalignment = gt_img_create(label);
	gt_obj_set_pos(img_Bottomrightalignment, 637, 917);
	gt_obj_set_size(img_Bottomrightalignment, 31, 26);
	gt_img_set_src(img_Bottomrightalignment, ".:img_5_31x26.png");

	

	/** label_input_titleCopyCopy */
	/** 用于显示“input输入框”的标题 Label */
	label_input_titleCopyCopy = gt_label_create(label);
	gt_obj_set_pos(label_input_titleCopyCopy, 15, 192);
	gt_obj_set_size(label_input_titleCopyCopy, 132, 49);
	gt_label_set_font_color(label_input_titleCopyCopy, gt_color_hex(0x808080));
	gt_label_set_font_family(label_input_titleCopyCopy, gray_black_16);
	gt_label_set_font_cjk(label_input_titleCopyCopy, 0);
	gt_label_set_font_align(label_input_titleCopyCopy, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_input_titleCopyCopy, "input &keyboard  输入框与键盘");
	gt_label_set_space(label_input_titleCopyCopy, 0, 0);
	gt_obj_add_event_cb(label_input_titleCopyCopy, label_input_titleCopyCopy_input_titleCopy_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);


	return label;
}

