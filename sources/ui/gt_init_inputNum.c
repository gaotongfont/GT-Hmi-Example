#include "gt_ui.h"
#include "gt_font_config.h"


/** inputNum */
gt_obj_st * inputNum = NULL;
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
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_screen_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_inputNum = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_input_titleCopy = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Counterbackground = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * inputNum_Currenttemperature = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Temperaturereduction = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Temperatureincrease = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Celsius = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Humiditypercentage = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Reducedhumidity = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Increasedhumidity = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_Watervalvepercentage = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * inputNum_exhaustfan = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_ExhaustfanHertz = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * inputNum_airblower = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * lab_SupplyfanHertz = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Watervalvereduction = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Watervalveincrease = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * inputNum_Valve = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * inputNum_Currenthumidity = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Reduceexhaustfan = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Increaseinexhaustfan = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Reducedsupplyfan = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Increasethesupplyfan = NULL;

static GT_ATTRIBUTE_RAM_TEXT void txt_0_cb(gt_event_st * e) {
	
}

static GT_ATTRIBUTE_RAM_TEXT void label_button_title_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_BUTTON, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void lab2_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMAGE, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void label_label_title_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_LABEL, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void label_txt_title_0_cb(gt_event_st * e) {
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
	
}

static GT_ATTRIBUTE_RAM_TEXT void label_input_titleCopy_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_INPUT_KEYBOARD, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void img__0_cb(gt_event_st * e) {
	gt_input_number_decrease(inputNum_Currenttemperature);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Temperatureincrease_0_cb(gt_event_st * e) {
	gt_input_number_increase(inputNum_Currenttemperature);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Reducedhumidity_0_cb(gt_event_st * e) {
	gt_input_number_decrease(inputNum_Currenthumidity);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Increasedhumidity_0_cb(gt_event_st * e) {
	gt_input_number_increase(inputNum_Currenthumidity);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Watervalvereduction_0_cb(gt_event_st * e) {
	gt_input_number_decrease(inputNum_Valve);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Watervalveincrease_0_cb(gt_event_st * e) {
	gt_input_number_increase(inputNum_Valve);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Reduceexhaustfan_0_cb(gt_event_st * e) {
	gt_input_number_decrease(inputNum_exhaustfan);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Increaseinexhaustfan_0_cb(gt_event_st * e) {
	gt_input_number_increase(inputNum_exhaustfan);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Reducedsupplyfan_0_cb(gt_event_st * e) {
	gt_input_number_decrease(inputNum_airblower);
}

static GT_ATTRIBUTE_RAM_TEXT void img_Increasethesupplyfan_0_cb(gt_event_st * e) {
	gt_input_number_increase(inputNum_airblower);
}

gt_obj_st * gt_init_inputNum(void)
{
	inputNum = gt_obj_create(NULL);

	gt_screen_set_bgcolor(inputNum, gt_color_hex(0xFFFFFF));


	

	/** label_button_title */
	/** 用于显示“button按钮”的标题 Label */
	label_button_title = gt_label_create(inputNum);
	gt_obj_set_pos(label_button_title, 15, 14);
	gt_obj_set_size(label_button_title, 139, 34);
	gt_label_set_font_color(label_button_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_button_title, gray_black_16);
	gt_label_set_font_cjk(label_button_title, 0);
	gt_label_set_font_align(label_button_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_button_title, "button 按钮");
	gt_label_set_space(label_button_title, 0, 0);
	gt_obj_add_event_cb(label_button_title, label_button_title_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_image_title */
	/** 用于显示“image图片”的标题 Label */
	label_image_title = gt_label_create(inputNum);
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
	label_label_title = gt_label_create(inputNum);
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
	label_txt_title = gt_label_create(inputNum);
	gt_obj_set_pos(label_txt_title, 15, 143);
	gt_obj_set_size(label_txt_title, 139, 40);
	gt_label_set_font_color(label_txt_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_txt_title, gray_black_16);
	gt_label_set_font_cjk(label_txt_title, 0);
	gt_label_set_font_align(label_txt_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_txt_title, "txt 文本区");
	gt_label_set_space(label_txt_title, 0, 0);
	gt_obj_add_event_cb(label_txt_title, label_txt_title_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_imgbtn_title */
	/** 用于显示“imgbtn图片按钮”的标题 Label */
	label_imgbtn_title = gt_label_create(inputNum);
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
	label_switch10_title = gt_label_create(inputNum);
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
	label_player_title = gt_label_create(inputNum);
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
	label_inputNum_title = gt_label_create(inputNum);
	gt_obj_set_pos(label_inputNum_title, 15, 393);
	gt_obj_set_size(label_inputNum_title, 159, 40);
	gt_label_set_font_color(label_inputNum_title, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_inputNum_title, gray_black_16);
	gt_label_set_font_cjk(label_inputNum_title, 0);
	gt_label_set_font_align(label_inputNum_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_inputNum_title, "inputNum 计数器");
	gt_label_set_space(label_inputNum_title, 0, 0);

	

	/** label_clock_title */
	/** 用于显示“clock时钟”的标题 Label */
	label_clock_title = gt_label_create(inputNum);
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
	label_barcode_title = gt_label_create(inputNum);
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
	label_qrcode_title = gt_label_create(inputNum);
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
	label_viewPager_title = gt_label_create(inputNum);
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
	label_diglog_title = gt_label_create(inputNum);
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
	label_gif_title = gt_label_create(inputNum);
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
	label_layout_title = gt_label_create(inputNum);
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
	label_mediaplayer_title = gt_label_create(inputNum);
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
	label_group_title = gt_label_create(inputNum);
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
	label_slider_title = gt_label_create(inputNum);
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
	label_bar_title = gt_label_create(inputNum);
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
	label_radio_title = gt_label_create(inputNum);
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
	label_checkbox_title = gt_label_create(inputNum);
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
	label_listv_title = gt_label_create(inputNum);
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
	label_roller_title = gt_label_create(inputNum);
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
	label_graph_title = gt_label_create(inputNum);
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
	label_rect_title = gt_label_create(inputNum);
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
	label_statusbartitle = gt_label_create(inputNum);
	gt_obj_set_pos(label_statusbartitle, 15, 1182);
	gt_obj_set_size(label_statusbartitle, 159, 40);
	gt_label_set_font_color(label_statusbartitle, gt_color_hex(0x808080));
	gt_label_set_font_family(label_statusbartitle, gray_black_16);
	gt_label_set_font_cjk(label_statusbartitle, 0);
	gt_label_set_font_align(label_statusbartitle, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_statusbartitle, "status_bar 状态栏");
	gt_label_set_space(label_statusbartitle, 0, 0);

	

	/** rect_wireframe */
	/** 矩形线框 */
	rect_wireframe = gt_rect_create(inputNum);
	gt_obj_set_pos(rect_wireframe, 227, 58);
	gt_obj_set_size(rect_wireframe, 531, 388);
	gt_rect_set_radius(rect_wireframe, 0);
	gt_rect_set_bg_color(rect_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect_wireframe, 0);
	gt_rect_set_border(rect_wireframe, 1);

	

	/** label_screen_title */
	/** 用于显示“screen屏幕”的标题 Label */
	label_screen_title = gt_label_create(inputNum);
	gt_obj_set_pos(label_screen_title, 15, 1140);
	gt_obj_set_size(label_screen_title, 159, 40);
	gt_label_set_font_color(label_screen_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_screen_title, gray_black_16);
	gt_label_set_font_cjk(label_screen_title, 0);
	gt_label_set_font_align(label_screen_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_screen_title, "screen 屏幕");
	gt_label_set_space(label_screen_title, 0, 0);

	

	/** rect3 */
	rect3 = gt_rect_create(inputNum);
	gt_obj_set_pos(rect3, 187, 1);
	gt_obj_set_size(rect3, 1, 1300);
	gt_rect_set_radius(rect3, 0);
	gt_rect_set_bg_color(rect3, gt_color_hex(0xc0c0c0));
	gt_rect_set_color_border(rect3, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3, 1);
	gt_rect_set_border(rect3, 0);

	

	/** label_inputNum */
	/** 计数器控件板块的标题Label */
	label_inputNum = gt_label_create(inputNum);
	gt_obj_set_pos(label_inputNum, 240, 14);
	gt_obj_set_size(label_inputNum, 162, 34);
	gt_label_set_font_color(label_inputNum, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_inputNum, gray_black_24);
	gt_label_set_font_cjk(label_inputNum, 0);
	gt_label_set_font_align(label_inputNum, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_inputNum, "计数器控件");
	gt_label_set_space(label_inputNum, 0, 0);

	

	/** label_input_titleCopy */
	/** 用于显示“input输入框”的标题 Label */
	label_input_titleCopy = gt_label_create(inputNum);
	gt_obj_set_pos(label_input_titleCopy, 15, 192);
	gt_obj_set_size(label_input_titleCopy, 132, 49);
	gt_label_set_font_color(label_input_titleCopy, gt_color_hex(0x808080));
	gt_label_set_font_family(label_input_titleCopy, gray_black_16);
	gt_label_set_font_cjk(label_input_titleCopy, 0);
	gt_label_set_font_align(label_input_titleCopy, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_input_titleCopy, "input &keyboard  输入框与键盘");
	gt_label_set_space(label_input_titleCopy, 0, 0);
	gt_obj_add_event_cb(label_input_titleCopy, label_input_titleCopy_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Counterbackground */
	/** 计数器控件背景 */
	img_Counterbackground = gt_img_create(inputNum);
	gt_obj_set_pos(img_Counterbackground, 238, 70);
	gt_obj_set_size(img_Counterbackground, 509, 364);
	gt_img_set_src(img_Counterbackground, ".:img_jsq_509x364.jpg");

	

	/** inputNum_Currenttemperature */
	/** 当前温度数值 */
	inputNum_Currenttemperature = gt_input_number_create(inputNum);
	gt_obj_set_pos(inputNum_Currenttemperature, 381, 143);
	gt_obj_set_size(inputNum_Currenttemperature, 55, 41);
	gt_input_number_set_font_color(inputNum_Currenttemperature, gt_color_hex(0xffffff));
	gt_input_number_set_font_family(inputNum_Currenttemperature, vec_black_32);
	gt_input_number_set_font_cjk(inputNum_Currenttemperature, 0);
	gt_input_number_set_font_align(inputNum_Currenttemperature, GT_ALIGN_RIGHT_MID);
	gt_input_number_set_value(inputNum_Currenttemperature, 46);
	gt_input_number_set_step(inputNum_Currenttemperature, 1);
	gt_input_number_set_min(inputNum_Currenttemperature, 10);
	gt_input_number_set_max(inputNum_Currenttemperature, 50);
	gt_input_number_set_fill_zero_front(inputNum_Currenttemperature, false);
	gt_input_number_set_display_integer_length(inputNum_Currenttemperature, 2);
	gt_input_number_set_display_decimal_length(inputNum_Currenttemperature, 0);

	

	/** img_Temperaturereduction */
	/** 温度减少 */
	img_Temperaturereduction = gt_img_create(inputNum);
	gt_obj_set_pos(img_Temperaturereduction, 377, 222);
	gt_obj_set_size(img_Temperaturereduction, 30, 30);
	gt_img_set_src(img_Temperaturereduction, ".:img_down_30x30.png");
	gt_obj_add_event_cb(img_Temperaturereduction, img__0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Temperatureincrease */
	/** 温度增加 */
	img_Temperatureincrease = gt_img_create(inputNum);
	gt_obj_set_pos(img_Temperatureincrease, 437, 223);
	gt_obj_set_size(img_Temperatureincrease, 30, 30);
	gt_img_set_src(img_Temperatureincrease, ".:img_up_30x30.png");
	gt_obj_add_event_cb(img_Temperatureincrease, img_Temperatureincrease_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab_Celsius */
	/** 摄氏度 */
	lab_Celsius = gt_label_create(inputNum);
	gt_obj_set_pos(lab_Celsius, 432, 144);
	gt_obj_set_size(lab_Celsius, 34, 32);
	gt_label_set_font_color(lab_Celsius, gt_color_hex(0xffffff));
	gt_label_set_font_family(lab_Celsius, gray_black_20);
	gt_label_set_font_cjk(lab_Celsius, 0);
	gt_label_set_font_align(lab_Celsius, GT_ALIGN_CENTER_MID);
	gt_label_set_text(lab_Celsius, "℃");
	gt_label_set_space(lab_Celsius, 0, 0);

	

	/** lab_Humiditypercentage */
	/** 湿度百分比 */
	lab_Humiditypercentage = gt_label_create(inputNum);
	gt_obj_set_pos(lab_Humiditypercentage, 457, 320);
	gt_obj_set_size(lab_Humiditypercentage, 37, 23);
	gt_label_set_font_color(lab_Humiditypercentage, gt_color_hex(0xffffff));
	gt_label_set_font_family(lab_Humiditypercentage, gray_black_20);
	gt_label_set_font_cjk(lab_Humiditypercentage, 0);
	gt_label_set_font_align(lab_Humiditypercentage, GT_ALIGN_CENTER_MID);
	gt_label_set_text(lab_Humiditypercentage, "%%");
	gt_label_set_space(lab_Humiditypercentage, 0, 0);

	

	/** img_Reducedhumidity */
	/** 湿度减少 */
	img_Reducedhumidity = gt_img_create(inputNum);
	gt_obj_set_pos(img_Reducedhumidity, 377, 375);
	gt_obj_set_size(img_Reducedhumidity, 30, 30);
	gt_img_set_src(img_Reducedhumidity, ".:img_down_30x30.png");
	gt_obj_add_event_cb(img_Reducedhumidity, img_Reducedhumidity_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Increasedhumidity */
	/** 湿度增加 */
	img_Increasedhumidity = gt_img_create(inputNum);
	gt_obj_set_pos(img_Increasedhumidity, 437, 375);
	gt_obj_set_size(img_Increasedhumidity, 30, 30);
	gt_img_set_src(img_Increasedhumidity, ".:img_up_30x30.png");
	gt_obj_add_event_cb(img_Increasedhumidity, img_Increasedhumidity_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab_Watervalvepercentage */
	/** 水阀百分比 */
	lab_Watervalvepercentage = gt_label_create(inputNum);
	gt_obj_set_pos(lab_Watervalvepercentage, 686, 144);
	gt_obj_set_size(lab_Watervalvepercentage, 30, 23);
	gt_label_set_font_color(lab_Watervalvepercentage, gt_color_hex(0xffffff));
	gt_label_set_font_family(lab_Watervalvepercentage, gray_black_20);
	gt_label_set_font_cjk(lab_Watervalvepercentage, 0);
	gt_label_set_font_align(lab_Watervalvepercentage, GT_ALIGN_CENTER_MID);
	gt_label_set_text(lab_Watervalvepercentage, "%%");
	gt_label_set_space(lab_Watervalvepercentage, 0, 0);

	

	/** inputNum_exhaustfan */
	/** 排风机数值 */
	inputNum_exhaustfan = gt_input_number_create(inputNum);
	gt_obj_set_pos(inputNum_exhaustfan, 609, 233);
	gt_obj_set_size(inputNum_exhaustfan, 79, 42);
	gt_input_number_set_font_color(inputNum_exhaustfan, gt_color_hex(0xffffff));
	gt_input_number_set_font_family(inputNum_exhaustfan, vec_black_32);
	gt_input_number_set_font_cjk(inputNum_exhaustfan, 0);
	gt_input_number_set_font_align(inputNum_exhaustfan, GT_ALIGN_RIGHT_MID);
	gt_input_number_set_value(inputNum_exhaustfan, 50.5);
	gt_input_number_set_step(inputNum_exhaustfan, 0.5);
	gt_input_number_set_min(inputNum_exhaustfan, 0);
	gt_input_number_set_max(inputNum_exhaustfan, 100);
	gt_input_number_set_fill_zero_front(inputNum_exhaustfan, false);
	gt_input_number_set_display_integer_length(inputNum_exhaustfan, 2);
	gt_input_number_set_display_decimal_length(inputNum_exhaustfan, 1);

	

	/** lab_ExhaustfanHertz */
	/** 排风机赫兹 */
	lab_ExhaustfanHertz = gt_label_create(inputNum);
	gt_obj_set_pos(lab_ExhaustfanHertz, 686, 245);
	gt_obj_set_size(lab_ExhaustfanHertz, 38, 23);
	gt_label_set_font_color(lab_ExhaustfanHertz, gt_color_hex(0xffffff));
	gt_label_set_font_family(lab_ExhaustfanHertz, gray_black_20);
	gt_label_set_font_cjk(lab_ExhaustfanHertz, 0);
	gt_label_set_font_align(lab_ExhaustfanHertz, GT_ALIGN_CENTER_MID);
	gt_label_set_text(lab_ExhaustfanHertz, "Hz");
	gt_label_set_space(lab_ExhaustfanHertz, 0, 0);

	

	/** inputNum_airblower */
	/** 送风机数值 */
	inputNum_airblower = gt_input_number_create(inputNum);
	gt_obj_set_pos(inputNum_airblower, 635, 332);
	gt_obj_set_size(inputNum_airblower, 53, 43);
	gt_input_number_set_font_color(inputNum_airblower, gt_color_hex(0xffffff));
	gt_input_number_set_font_family(inputNum_airblower, vec_black_32);
	gt_input_number_set_font_cjk(inputNum_airblower, 0);
	gt_input_number_set_font_align(inputNum_airblower, GT_ALIGN_RIGHT_MID);
	gt_input_number_set_value(inputNum_airblower, 35);
	gt_input_number_set_step(inputNum_airblower, 5);
	gt_input_number_set_min(inputNum_airblower, 10);
	gt_input_number_set_max(inputNum_airblower, 100);
	gt_input_number_set_fill_zero_front(inputNum_airblower, false);
	gt_input_number_set_display_integer_length(inputNum_airblower, 2);
	gt_input_number_set_display_decimal_length(inputNum_airblower, 0);

	

	/** lab_SupplyfanHertz */
	/** 送风机赫兹 */
	lab_SupplyfanHertz = gt_label_create(inputNum);
	gt_obj_set_pos(lab_SupplyfanHertz, 686, 346);
	gt_obj_set_size(lab_SupplyfanHertz, 38, 24);
	gt_label_set_font_color(lab_SupplyfanHertz, gt_color_hex(0xffffff));
	gt_label_set_font_family(lab_SupplyfanHertz, gray_black_20);
	gt_label_set_font_cjk(lab_SupplyfanHertz, 0);
	gt_label_set_font_align(lab_SupplyfanHertz, GT_ALIGN_CENTER_MID);
	gt_label_set_text(lab_SupplyfanHertz, "Hz");
	gt_label_set_space(lab_SupplyfanHertz, 0, 0);

	

	/** img_Watervalvereduction */
	/** 水阀减少 */
	img_Watervalvereduction = gt_img_create(inputNum);
	gt_obj_set_pos(img_Watervalvereduction, 607, 178);
	gt_obj_set_size(img_Watervalvereduction, 30, 30);
	gt_img_set_src(img_Watervalvereduction, ".:img_down_30x30.png");
	gt_obj_add_event_cb(img_Watervalvereduction, img_Watervalvereduction_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Watervalveincrease */
	/** 水阀增加 */
	img_Watervalveincrease = gt_img_create(inputNum);
	gt_obj_set_pos(img_Watervalveincrease, 667, 178);
	gt_obj_set_size(img_Watervalveincrease, 30, 30);
	gt_img_set_src(img_Watervalveincrease, ".:img_up_30x30.png");
	gt_obj_add_event_cb(img_Watervalveincrease, img_Watervalveincrease_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** inputNum_Valve */
	/** 水阀数值 */
	inputNum_Valve = gt_input_number_create(inputNum);
	gt_obj_set_pos(inputNum_Valve, 609, 129);
	gt_obj_set_size(inputNum_Valve, 79, 42);
	gt_input_number_set_font_color(inputNum_Valve, gt_color_hex(0xffffff));
	gt_input_number_set_font_family(inputNum_Valve, vec_black_32);
	gt_input_number_set_font_cjk(inputNum_Valve, 0);
	gt_input_number_set_font_align(inputNum_Valve, GT_ALIGN_RIGHT_MID);
	gt_input_number_set_value(inputNum_Valve, 9.2);
	gt_input_number_set_step(inputNum_Valve, 0.1);
	gt_input_number_set_min(inputNum_Valve, 0.1);
	gt_input_number_set_max(inputNum_Valve, 10);
	gt_input_number_set_fill_zero_front(inputNum_Valve, false);
	gt_input_number_set_display_integer_length(inputNum_Valve, 2);
	gt_input_number_set_display_decimal_length(inputNum_Valve, 1);

	

	/** inputNum_Currenthumidity */
	/** 当前湿度数值 */
	inputNum_Currenthumidity = gt_input_number_create(inputNum);
	gt_obj_set_pos(inputNum_Currenthumidity, 347, 304);
	gt_obj_set_size(inputNum_Currenthumidity, 115, 47);
	gt_input_number_set_font_color(inputNum_Currenthumidity, gt_color_hex(0xffffff));
	gt_input_number_set_font_family(inputNum_Currenthumidity, vec_black_32);
	gt_input_number_set_font_cjk(inputNum_Currenthumidity, 0);
	gt_input_number_set_font_align(inputNum_Currenthumidity, GT_ALIGN_RIGHT_MID);
	gt_input_number_set_value(inputNum_Currenthumidity, 62.32);
	gt_input_number_set_step(inputNum_Currenthumidity, 0.01);
	gt_input_number_set_min(inputNum_Currenthumidity, 10);
	gt_input_number_set_max(inputNum_Currenthumidity, 100);
	gt_input_number_set_fill_zero_front(inputNum_Currenthumidity, false);
	gt_input_number_set_display_integer_length(inputNum_Currenthumidity, 2);
	gt_input_number_set_display_decimal_length(inputNum_Currenthumidity, 2);

	

	/** img_Reduceexhaustfan */
	/** 排风机减少 */
	img_Reduceexhaustfan = gt_img_create(inputNum);
	gt_obj_set_pos(img_Reduceexhaustfan, 607, 279);
	gt_obj_set_size(img_Reduceexhaustfan, 30, 30);
	gt_img_set_src(img_Reduceexhaustfan, ".:img_down_30x30.png");
	gt_obj_add_event_cb(img_Reduceexhaustfan, img_Reduceexhaustfan_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Increaseinexhaustfan */
	/** 排风机增加 */
	img_Increaseinexhaustfan = gt_img_create(inputNum);
	gt_obj_set_pos(img_Increaseinexhaustfan, 667, 280);
	gt_obj_set_size(img_Increaseinexhaustfan, 30, 30);
	gt_img_set_src(img_Increaseinexhaustfan, ".:img_up_30x30.png");
	gt_obj_add_event_cb(img_Increaseinexhaustfan, img_Increaseinexhaustfan_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Reducedsupplyfan */
	/** 送风机减少 */
	img_Reducedsupplyfan = gt_img_create(inputNum);
	gt_obj_set_pos(img_Reducedsupplyfan, 607, 380);
	gt_obj_set_size(img_Reducedsupplyfan, 30, 30);
	gt_img_set_src(img_Reducedsupplyfan, ".:img_down_30x30.png");
	gt_obj_add_event_cb(img_Reducedsupplyfan, img_Reducedsupplyfan_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** img_Increasethesupplyfan */
	/** 送风机增加 */
	img_Increasethesupplyfan = gt_img_create(inputNum);
	gt_obj_set_pos(img_Increasethesupplyfan, 667, 381);
	gt_obj_set_size(img_Increasethesupplyfan, 30, 30);
	gt_img_set_src(img_Increasethesupplyfan, ".:img_up_30x30.png");
	gt_obj_add_event_cb(img_Increasethesupplyfan, img_Increasethesupplyfan_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);


	return inputNum;
}

