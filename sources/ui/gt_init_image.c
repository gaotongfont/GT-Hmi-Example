#include "gt_ui.h"
#include "gt_font_config.h"


/** image */
gt_obj_st * image = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_button_title = NULL;
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
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_image_category = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect1_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_transparency_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Transparency20 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Transparency60 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Transparency100 = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect2_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_size_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Small = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Medium = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Large = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_wireframe = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * rect3_blue = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_wordart_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_Pangmenfont = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img1_Pandafont = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img2_Pandafont = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * img_HuXiaobofont = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_image_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_label_title = NULL;
static GT_ATTRIBUTE_RAM_DATA gt_obj_st * label_input_titleCopyCopyCopy = NULL;

static GT_ATTRIBUTE_RAM_TEXT void lab1_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_BUTTON, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
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
	gt_disp_stack_load_scr_anim(GT_ID_INPUTNUM, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void label_label_titleCopy_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_LABEL, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static GT_ATTRIBUTE_RAM_TEXT void label_input_titleCopyCopyCopy_input_titleCopyCopy_input_titleCopy_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_INPUT_KEYBOARD, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

gt_obj_st * gt_init_image(void)
{
	image = gt_obj_create(NULL);

	gt_screen_set_bgcolor(image, gt_color_hex(0xFFFFFF));


	

	/** label_button_title */
	/** 用于显示“button按钮”的标题 Label */
	label_button_title = gt_label_create(image);
	gt_obj_set_pos(label_button_title, 15, 14);
	gt_obj_set_size(label_button_title, 139, 34);
	gt_label_set_font_color(label_button_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_button_title, gray_black_16);
	gt_label_set_font_cjk(label_button_title, 0);
	gt_label_set_font_align(label_button_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_button_title, "button 按钮");
	gt_label_set_space(label_button_title, 0, 0);
	gt_obj_add_event_cb(label_button_title, lab1_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_txt_title */
	/** 用于显示“txt文本区”的标题 Label */
	label_txt_title = gt_label_create(image);
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
	label_imgbtn_title = gt_label_create(image);
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
	label_switch10_title = gt_label_create(image);
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
	label_player_title = gt_label_create(image);
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
	label_inputNum_title = gt_label_create(image);
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
	label_clock_title = gt_label_create(image);
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
	label_barcode_title = gt_label_create(image);
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
	label_qrcode_title = gt_label_create(image);
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
	label_viewPager_title = gt_label_create(image);
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
	label_diglog_title = gt_label_create(image);
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
	label_gif_title = gt_label_create(image);
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
	label_layout_title = gt_label_create(image);
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
	label_mediaplayer_title = gt_label_create(image);
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
	label_group_title = gt_label_create(image);
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
	label_slider_title = gt_label_create(image);
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
	label_bar_title = gt_label_create(image);
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
	label_radio_title = gt_label_create(image);
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
	label_checkbox_title = gt_label_create(image);
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
	label_listv_title = gt_label_create(image);
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
	label_roller_title = gt_label_create(image);
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
	label_graph_title = gt_label_create(image);
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
	label_rect_title = gt_label_create(image);
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
	label_statusbartitle = gt_label_create(image);
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
	label_screen_title = gt_label_create(image);
	gt_obj_set_pos(label_screen_title, 15, 1140);
	gt_obj_set_size(label_screen_title, 159, 40);
	gt_label_set_font_color(label_screen_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_screen_title, gray_black_16);
	gt_label_set_font_cjk(label_screen_title, 0);
	gt_label_set_font_align(label_screen_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_screen_title, "screen 屏幕");
	gt_label_set_space(label_screen_title, 0, 0);

	

	/** rect3 */
	rect3 = gt_rect_create(image);
	gt_obj_set_pos(rect3, 187, 1);
	gt_obj_set_size(rect3, 1, 1300);
	gt_rect_set_radius(rect3, 0);
	gt_rect_set_bg_color(rect3, gt_color_hex(0xc0c0c0));
	gt_rect_set_color_border(rect3, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3, 1);
	gt_rect_set_border(rect3, 0);

	

	/** label_image_category */
	/** 图片控件板块的标题Label */
	label_image_category = gt_label_create(image);
	gt_obj_set_pos(label_image_category, 240, 14);
	gt_obj_set_size(label_image_category, 238, 34);
	gt_label_set_font_color(label_image_category, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_image_category, gray_black_24);
	gt_label_set_font_cjk(label_image_category, 0);
	gt_label_set_font_align(label_image_category, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_image_category, "图片控件");
	gt_label_set_space(label_image_category, 0, 0);

	

	/** rect1_wireframe */
	/** 矩形线框 */
	rect1_wireframe = gt_rect_create(image);
	gt_obj_set_pos(rect1_wireframe, 239, 60);
	gt_obj_set_size(rect1_wireframe, 509, 180);
	gt_rect_set_radius(rect1_wireframe, 0);
	gt_rect_set_bg_color(rect1_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect1_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect1_wireframe, 1);
	gt_rect_set_border(rect1_wireframe, 1);

	

	/** rect1_blue */
	/** 蓝色矩形背景 */
	rect1_blue = gt_rect_create(image);
	gt_obj_set_pos(rect1_blue, 219, 71);
	gt_obj_set_size(rect1_blue, 140, 38);
	gt_rect_set_radius(rect1_blue, 0);
	gt_rect_set_bg_color(rect1_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect1_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect1_blue, 1);
	gt_rect_set_border(rect1_blue, 0);

	

	/** label_transparency_title */
	/** 用于显示“透明度”的标题 Label */
	label_transparency_title = gt_label_create(image);
	gt_obj_set_pos(label_transparency_title, 236, 73);
	gt_obj_set_size(label_transparency_title, 119, 34);
	gt_label_set_font_color(label_transparency_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_transparency_title, gray_black_20);
	gt_label_set_font_cjk(label_transparency_title, 0);
	gt_label_set_font_align(label_transparency_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_transparency_title, "透明度");
	gt_label_set_space(label_transparency_title, 0, 0);

	

	/** img_Transparency20 */
	/** 透明度20图片 */
	img_Transparency20 = gt_img_create(image);
	gt_obj_set_pos(img_Transparency20, 309, 138);
	gt_obj_set_size(img_Transparency20, 54, 54);
	gt_obj_set_opa(img_Transparency20, GT_OPA_20);
	gt_img_set_src(img_Transparency20, ".:img_guide_54x54.png");

	

	/** img_Transparency60 */
	/** 透明度60图片 */
	img_Transparency60 = gt_img_create(image);
	gt_obj_set_pos(img_Transparency60, 465, 138);
	gt_obj_set_size(img_Transparency60, 54, 54);
	gt_obj_set_opa(img_Transparency60, GT_OPA_60);
	gt_img_set_src(img_Transparency60, ".:img_guide_54x54.png");

	

	/** img_Transparency100 */
	/** 透明度100图片 */
	img_Transparency100 = gt_img_create(image);
	gt_obj_set_pos(img_Transparency100, 613, 138);
	gt_obj_set_size(img_Transparency100, 54, 54);
	gt_img_set_src(img_Transparency100, ".:img_guide_54x54.png");

	

	/** rect2_wireframe */
	/** 矩形线框 */
	rect2_wireframe = gt_rect_create(image);
	gt_obj_set_pos(rect2_wireframe, 239, 253);
	gt_obj_set_size(rect2_wireframe, 509, 220);
	gt_rect_set_radius(rect2_wireframe, 0);
	gt_rect_set_bg_color(rect2_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect2_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect2_wireframe, 1);
	gt_rect_set_border(rect2_wireframe, 1);

	

	/** rect2_blue */
	/** 蓝色矩形背景 */
	rect2_blue = gt_rect_create(image);
	gt_obj_set_pos(rect2_blue, 219, 266);
	gt_obj_set_size(rect2_blue, 137, 38);
	gt_rect_set_radius(rect2_blue, 0);
	gt_rect_set_bg_color(rect2_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect2_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect2_blue, 1);
	gt_rect_set_border(rect2_blue, 0);

	

	/** label_size_title */
	/** 用于显示“大小”的标题 Label */
	label_size_title = gt_label_create(image);
	gt_obj_set_pos(label_size_title, 245, 269);
	gt_obj_set_size(label_size_title, 106, 34);
	gt_label_set_font_color(label_size_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_size_title, gray_black_20);
	gt_label_set_font_cjk(label_size_title, 0);
	gt_label_set_font_align(label_size_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_size_title, "大小");
	gt_label_set_space(label_size_title, 0, 0);

	

	/** img_Small */
	/** 小号图片 */
	img_Small = gt_img_create(image);
	gt_obj_set_pos(img_Small, 315, 358);
	gt_obj_set_size(img_Small, 40, 40);
	gt_img_set_src(img_Small, ".:img_music14_40x40.png");

	

	/** img_Medium */
	/** 中号图片 */
	img_Medium = gt_img_create(image);
	gt_obj_set_pos(img_Medium, 461, 348);
	gt_obj_set_size(img_Medium, 60, 60);
	gt_img_set_src(img_Medium, ".:img_music14_60x60.png");

	

	/** img_Large */
	/** 大号图片 */
	img_Large = gt_img_create(image);
	gt_obj_set_pos(img_Large, 601, 336);
	gt_obj_set_size(img_Large, 80, 80);
	gt_img_set_src(img_Large, ".:img_music14_80x80.png");

	

	/** rect3_wireframe */
	/** 矩形线框 */
	rect3_wireframe = gt_rect_create(image);
	gt_obj_set_pos(rect3_wireframe, 239, 488);
	gt_obj_set_size(rect3_wireframe, 509, 220);
	gt_rect_set_radius(rect3_wireframe, 0);
	gt_rect_set_bg_color(rect3_wireframe, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect3_wireframe, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect3_wireframe, 1);
	gt_rect_set_border(rect3_wireframe, 1);

	

	/** rect3_blue */
	/** 蓝色矩形背景 */
	rect3_blue = gt_rect_create(image);
	gt_obj_set_pos(rect3_blue, 219, 499);
	gt_obj_set_size(rect3_blue, 142, 38);
	gt_rect_set_radius(rect3_blue, 0);
	gt_rect_set_bg_color(rect3_blue, gt_color_hex(0xe3f1ff));
	gt_rect_set_color_border(rect3_blue, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3_blue, 1);
	gt_rect_set_border(rect3_blue, 0);

	

	/** label_wordart_title */
	/** 用于显示“艺术字”的标题 Label */
	label_wordart_title = gt_label_create(image);
	gt_obj_set_pos(label_wordart_title, 239, 501);
	gt_obj_set_size(label_wordart_title, 118, 34);
	gt_label_set_font_color(label_wordart_title, gt_color_hex(0x000000));
	gt_label_set_font_family(label_wordart_title, gray_black_20);
	gt_label_set_font_cjk(label_wordart_title, 0);
	gt_label_set_font_align(label_wordart_title, GT_ALIGN_CENTER_MID);
	gt_label_set_text(label_wordart_title, "艺术字");
	gt_label_set_space(label_wordart_title, 0, 0);

	

	/** img_Pangmenfont */
	/** 庞门字体艺术字图片 */
	img_Pangmenfont = gt_img_create(image);
	gt_obj_set_pos(img_Pangmenfont, 303, 584);
	gt_obj_set_size(img_Pangmenfont, 66, 36);
	gt_img_set_src(img_Pangmenfont, ".:img_pangmenzhengdaobiaotiti_32_8080ff_gao_tong_66x36.png");

	

	/** img1_Pandafont */
	/** 熊猫字体图片 */
	img1_Pandafont = gt_img_create(image);
	gt_obj_set_pos(img1_Pandafont, 437, 575);
	gt_obj_set_size(img1_Pandafont, 50, 50);
	gt_img_set_src(img1_Pandafont, ".:img_yezigongchangxiaoxiongmao_48_ff00ff_gao_9ad8_50x50.png");

	

	/** img2_Pandafont */
	/** 熊猫字体图片 */
	img2_Pandafont = gt_img_create(image);
	gt_obj_set_pos(img2_Pandafont, 480, 575);
	gt_obj_set_size(img2_Pandafont, 50, 50);
	gt_img_set_src(img2_Pandafont, ".:img_yezigongchangxiaoxiongmao_48_ff00ff_tong_901a_50x50.png");

	

	/** img_HuXiaobofont */
	/** 胡晓波字体图片 */
	img_HuXiaobofont = gt_img_create(image);
	gt_obj_set_pos(img_HuXiaobofont, 577, 562);
	gt_obj_set_size(img_HuXiaobofont, 120, 72);
	gt_img_set_src(img_HuXiaobofont, ".:img_huxiaobonanshenti_60_ff8000_gao_tong_120x72.png");

	

	/** label_image_title */
	/** 用于显示“image图片”的标题 Label */
	label_image_title = gt_label_create(image);
	gt_obj_set_pos(label_image_title, 15, 51);
	gt_obj_set_size(label_image_title, 139, 40);
	gt_label_set_font_color(label_image_title, gt_color_hex(0x0080ff));
	gt_label_set_font_family(label_image_title, gray_black_16);
	gt_label_set_font_cjk(label_image_title, 0);
	gt_label_set_font_align(label_image_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_image_title, "image 图片");
	gt_label_set_space(label_image_title, 0, 0);

	

	/** label_label_title */
	/** 用于显示“label标签”的标题 Label */
	label_label_title = gt_label_create(image);
	gt_obj_set_pos(label_label_title, 15, 96);
	gt_obj_set_size(label_label_title, 139, 40);
	gt_label_set_font_color(label_label_title, gt_color_hex(0x808080));
	gt_label_set_font_family(label_label_title, gray_black_16);
	gt_label_set_font_cjk(label_label_title, 0);
	gt_label_set_font_align(label_label_title, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_label_title, "label 标签");
	gt_label_set_space(label_label_title, 0, 0);
	gt_obj_add_event_cb(label_label_title, label_label_titleCopy_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** label_input_titleCopyCopyCopy */
	/** 用于显示“input输入框”的标题 Label */
	label_input_titleCopyCopyCopy = gt_label_create(image);
	gt_obj_set_pos(label_input_titleCopyCopyCopy, 15, 192);
	gt_obj_set_size(label_input_titleCopyCopyCopy, 132, 49);
	gt_label_set_font_color(label_input_titleCopyCopyCopy, gt_color_hex(0x808080));
	gt_label_set_font_family(label_input_titleCopyCopyCopy, gray_black_16);
	gt_label_set_font_cjk(label_input_titleCopyCopyCopy, 0);
	gt_label_set_font_align(label_input_titleCopyCopyCopy, GT_ALIGN_LEFT_MID);
	gt_label_set_text(label_input_titleCopyCopyCopy, "input &keyboard  输入框与键盘");
	gt_label_set_space(label_input_titleCopyCopyCopy, 0, 0);
	gt_obj_add_event_cb(label_input_titleCopyCopyCopy, label_input_titleCopyCopyCopy_input_titleCopyCopy_input_titleCopy_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);


	return image;
}

