#include "gt_ui.h"
#include "gt_font_config.h"


/** txt */
gt_obj_st * txt = NULL;
static gt_obj_st * lab1 = NULL;
static gt_obj_st * lab2 = NULL;
static gt_obj_st * lab3 = NULL;
static gt_obj_st * lab4 = NULL;
static gt_obj_st * lab5 = NULL;
static gt_obj_st * lab6 = NULL;
static gt_obj_st * lab7 = NULL;
static gt_obj_st * lab8 = NULL;
static gt_obj_st * lab9 = NULL;
static gt_obj_st * lab10 = NULL;
static gt_obj_st * lab11 = NULL;
static gt_obj_st * lab12 = NULL;
static gt_obj_st * lab13 = NULL;
static gt_obj_st * lab14 = NULL;
static gt_obj_st * lab15 = NULL;
static gt_obj_st * lab16 = NULL;
static gt_obj_st * lab17 = NULL;
static gt_obj_st * lab18 = NULL;
static gt_obj_st * lab19 = NULL;
static gt_obj_st * lab20 = NULL;
static gt_obj_st * lab21 = NULL;
static gt_obj_st * lab22 = NULL;
static gt_obj_st * lab23 = NULL;
static gt_obj_st * lab24 = NULL;
static gt_obj_st * lab25 = NULL;
static gt_obj_st * lab26 = NULL;
static gt_obj_st * lab27 = NULL;
static gt_obj_st * lab29 = NULL;
static gt_obj_st * lab28 = NULL;
static gt_obj_st * rect3 = NULL;
static gt_obj_st * lab31 = NULL;
static gt_obj_st * rect4 = NULL;
static gt_obj_st * txt1 = NULL;
static gt_obj_st * txt1Copy = NULL;
static gt_obj_st * txt1CopyCopy = NULL;

static void txt_0_cb(gt_event_st * e) {
	
}

static void lab1_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_BUTTONLABEL_CHECKBOX_TITLE, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab2_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_IMAGE, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

static void lab3_0_cb(gt_event_st * e) {
	gt_disp_stack_load_scr_anim(GT_ID_LABEL, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
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
	gt_disp_stack_load_scr_anim(GT_ID_IBPUTNUM, GT_SCR_ANIM_TYPE_NONE, 500, 0, true);
}

gt_obj_st * gt_init_txt(void)
{
	txt = gt_obj_create(NULL);

	gt_screen_set_bgcolor(txt, gt_color_hex(0xFFFFFF));


	

	/** lab1 */
	lab1 = gt_label_create(txt);
	gt_obj_set_pos(lab1, 15, 14);
	gt_obj_set_size(lab1, 139, 34);
	gt_label_set_font_color(lab1, gt_color_hex(0x808080));
	gt_label_set_font_family(lab1, gray_black_16);
	gt_label_set_font_cjk(lab1, 0);
	gt_label_set_font_align(lab1, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab1, "button 按钮");
	gt_label_set_space(lab1, 0, 0);
	gt_obj_add_event_cb(lab1, lab1_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab2 */
	lab2 = gt_label_create(txt);
	gt_obj_set_pos(lab2, 15, 51);
	gt_obj_set_size(lab2, 139, 40);
	gt_label_set_font_color(lab2, gt_color_hex(0x808080));
	gt_label_set_font_family(lab2, gray_black_16);
	gt_label_set_font_cjk(lab2, 0);
	gt_label_set_font_align(lab2, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab2, "image 图片");
	gt_label_set_space(lab2, 0, 0);
	gt_obj_add_event_cb(lab2, lab2_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab3 */
	lab3 = gt_label_create(txt);
	gt_obj_set_pos(lab3, 15, 95);
	gt_obj_set_size(lab3, 139, 40);
	gt_label_set_font_color(lab3, gt_color_hex(0x808080));
	gt_label_set_font_family(lab3, gray_black_16);
	gt_label_set_font_cjk(lab3, 0);
	gt_label_set_font_align(lab3, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab3, "label 标签");
	gt_label_set_space(lab3, 0, 0);
	gt_obj_add_event_cb(lab3, lab3_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab4 */
	lab4 = gt_label_create(txt);
	gt_obj_set_pos(lab4, 15, 138);
	gt_obj_set_size(lab4, 139, 40);
	gt_label_set_font_color(lab4, gt_color_hex(0x0080ff));
	gt_label_set_font_family(lab4, gray_black_16);
	gt_label_set_font_cjk(lab4, 0);
	gt_label_set_font_align(lab4, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab4, "txt 文本区");
	gt_label_set_space(lab4, 0, 0);

	

	/** lab5 */
	lab5 = gt_label_create(txt);
	gt_obj_set_pos(lab5, 15, 179);
	gt_obj_set_size(lab5, 139, 40);
	gt_label_set_font_color(lab5, gt_color_hex(0x808080));
	gt_label_set_font_family(lab5, gray_black_16);
	gt_label_set_font_cjk(lab5, 0);
	gt_label_set_font_align(lab5, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab5, "input 输入框");
	gt_label_set_space(lab5, 0, 0);
	gt_obj_add_event_cb(lab5, lab5_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab6 */
	lab6 = gt_label_create(txt);
	gt_obj_set_pos(lab6, 15, 222);
	gt_obj_set_size(lab6, 159, 40);
	gt_label_set_font_color(lab6, gt_color_hex(0x808080));
	gt_label_set_font_family(lab6, gray_black_16);
	gt_label_set_font_cjk(lab6, 0);
	gt_label_set_font_align(lab6, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab6, "imgbtn 图片按钮");
	gt_label_set_space(lab6, 0, 0);
	gt_obj_add_event_cb(lab6, lab6_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab7 */
	lab7 = gt_label_create(txt);
	gt_obj_set_pos(lab7, 15, 267);
	gt_obj_set_size(lab7, 159, 40);
	gt_label_set_font_color(lab7, gt_color_hex(0x808080));
	gt_label_set_font_family(lab7, gray_black_16);
	gt_label_set_font_cjk(lab7, 0);
	gt_label_set_font_align(lab7, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab7, "keyboard 键盘");
	gt_label_set_space(lab7, 0, 0);
	gt_obj_add_event_cb(lab7, lab7_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab8 */
	lab8 = gt_label_create(txt);
	gt_obj_set_pos(lab8, 15, 309);
	gt_obj_set_size(lab8, 159, 40);
	gt_label_set_font_color(lab8, gt_color_hex(0x808080));
	gt_label_set_font_family(lab8, gray_black_16);
	gt_label_set_font_cjk(lab8, 0);
	gt_label_set_font_align(lab8, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab8, "switch 开关");
	gt_label_set_space(lab8, 0, 0);
	gt_obj_add_event_cb(lab8, lab8_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab9 */
	lab9 = gt_label_create(txt);
	gt_obj_set_pos(lab9, 15, 351);
	gt_obj_set_size(lab9, 159, 40);
	gt_label_set_font_color(lab9, gt_color_hex(0x808080));
	gt_label_set_font_family(lab9, gray_black_16);
	gt_label_set_font_cjk(lab9, 0);
	gt_label_set_font_align(lab9, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab9, "player 幻灯片");
	gt_label_set_space(lab9, 0, 0);
	gt_obj_add_event_cb(lab9, lab9_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab10 */
	lab10 = gt_label_create(txt);
	gt_obj_set_pos(lab10, 15, 393);
	gt_obj_set_size(lab10, 159, 40);
	gt_label_set_font_color(lab10, gt_color_hex(0x808080));
	gt_label_set_font_family(lab10, gray_black_16);
	gt_label_set_font_cjk(lab10, 0);
	gt_label_set_font_align(lab10, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab10, "inputNum 计数器");
	gt_label_set_space(lab10, 0, 0);
	gt_obj_add_event_cb(lab10, lab10_0_cb, GT_EVENT_TYPE_INPUT_RELEASED, NULL);
	

	/** lab11 */
	lab11 = gt_label_create(txt);
	gt_obj_set_pos(lab11, 15, 436);
	gt_obj_set_size(lab11, 159, 40);
	gt_label_set_font_color(lab11, gt_color_hex(0x808080));
	gt_label_set_font_family(lab11, gray_black_16);
	gt_label_set_font_cjk(lab11, 0);
	gt_label_set_font_align(lab11, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab11, "clock 时钟");
	gt_label_set_space(lab11, 0, 0);

	

	/** lab12 */
	lab12 = gt_label_create(txt);
	gt_obj_set_pos(lab12, 15, 479);
	gt_obj_set_size(lab12, 159, 40);
	gt_label_set_font_color(lab12, gt_color_hex(0x808080));
	gt_label_set_font_family(lab12, gray_black_16);
	gt_label_set_font_cjk(lab12, 0);
	gt_label_set_font_align(lab12, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab12, "barcode 一维码");
	gt_label_set_space(lab12, 0, 0);

	

	/** lab13 */
	lab13 = gt_label_create(txt);
	gt_obj_set_pos(lab13, 15, 522);
	gt_obj_set_size(lab13, 159, 40);
	gt_label_set_font_color(lab13, gt_color_hex(0x808080));
	gt_label_set_font_family(lab13, gray_black_16);
	gt_label_set_font_cjk(lab13, 0);
	gt_label_set_font_align(lab13, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab13, "qrcode 二维码");
	gt_label_set_space(lab13, 0, 0);

	

	/** lab14 */
	lab14 = gt_label_create(txt);
	gt_obj_set_pos(lab14, 15, 565);
	gt_obj_set_size(lab14, 159, 40);
	gt_label_set_font_color(lab14, gt_color_hex(0x808080));
	gt_label_set_font_family(lab14, gray_black_16);
	gt_label_set_font_cjk(lab14, 0);
	gt_label_set_font_align(lab14, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab14, "viewPager 滑窗");
	gt_label_set_space(lab14, 0, 0);

	

	/** lab15 */
	lab15 = gt_label_create(txt);
	gt_obj_set_pos(lab15, 15, 608);
	gt_obj_set_size(lab15, 159, 40);
	gt_label_set_font_color(lab15, gt_color_hex(0x808080));
	gt_label_set_font_family(lab15, gray_black_16);
	gt_label_set_font_cjk(lab15, 0);
	gt_label_set_font_align(lab15, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab15, "dialog 对话框");
	gt_label_set_space(lab15, 0, 0);

	

	/** lab16 */
	lab16 = gt_label_create(txt);
	gt_obj_set_pos(lab16, 15, 652);
	gt_obj_set_size(lab16, 159, 40);
	gt_label_set_font_color(lab16, gt_color_hex(0x808080));
	gt_label_set_font_family(lab16, gray_black_16);
	gt_label_set_font_cjk(lab16, 0);
	gt_label_set_font_align(lab16, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab16, "gif GIF图片");
	gt_label_set_space(lab16, 0, 0);

	

	/** lab17 */
	lab17 = gt_label_create(txt);
	gt_obj_set_pos(lab17, 15, 693);
	gt_obj_set_size(lab17, 159, 40);
	gt_label_set_font_color(lab17, gt_color_hex(0x808080));
	gt_label_set_font_family(lab17, gray_black_16);
	gt_label_set_font_cjk(lab17, 0);
	gt_label_set_font_align(lab17, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab17, "layout 布局");
	gt_label_set_space(lab17, 0, 0);

	

	/** lab18 */
	lab18 = gt_label_create(txt);
	gt_obj_set_pos(lab18, 15, 735);
	gt_obj_set_size(lab18, 167, 40);
	gt_label_set_font_color(lab18, gt_color_hex(0x808080));
	gt_label_set_font_family(lab18, gray_black_16);
	gt_label_set_font_cjk(lab18, 0);
	gt_label_set_font_align(lab18, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab18, "media_player 播放器");
	gt_label_set_space(lab18, 0, 0);

	

	/** lab19 */
	lab19 = gt_label_create(txt);
	gt_obj_set_pos(lab19, 15, 773);
	gt_obj_set_size(lab19, 159, 40);
	gt_label_set_font_color(lab19, gt_color_hex(0x808080));
	gt_label_set_font_family(lab19, gray_black_16);
	gt_label_set_font_cjk(lab19, 0);
	gt_label_set_font_align(lab19, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab19, "group 分组");
	gt_label_set_space(lab19, 0, 0);

	

	/** lab20 */
	lab20 = gt_label_create(txt);
	gt_obj_set_pos(lab20, 15, 814);
	gt_obj_set_size(lab20, 159, 40);
	gt_label_set_font_color(lab20, gt_color_hex(0x808080));
	gt_label_set_font_family(lab20, gray_black_16);
	gt_label_set_font_cjk(lab20, 0);
	gt_label_set_font_align(lab20, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab20, "slider 滑动条");
	gt_label_set_space(lab20, 0, 0);

	

	/** lab21 */
	lab21 = gt_label_create(txt);
	gt_obj_set_pos(lab21, 14, 854);
	gt_obj_set_size(lab21, 159, 40);
	gt_label_set_font_color(lab21, gt_color_hex(0x808080));
	gt_label_set_font_family(lab21, gray_black_16);
	gt_label_set_font_cjk(lab21, 0);
	gt_label_set_font_align(lab21, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab21, "bar 进度条");
	gt_label_set_space(lab21, 0, 0);

	

	/** lab22 */
	lab22 = gt_label_create(txt);
	gt_obj_set_pos(lab22, 14, 895);
	gt_obj_set_size(lab22, 159, 40);
	gt_label_set_font_color(lab22, gt_color_hex(0x808080));
	gt_label_set_font_family(lab22, gray_black_16);
	gt_label_set_font_cjk(lab22, 0);
	gt_label_set_font_align(lab22, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab22, "radio 单选框");
	gt_label_set_space(lab22, 0, 0);

	

	/** lab23 */
	lab23 = gt_label_create(txt);
	gt_obj_set_pos(lab23, 15, 936);
	gt_obj_set_size(lab23, 159, 40);
	gt_label_set_font_color(lab23, gt_color_hex(0x808080));
	gt_label_set_font_family(lab23, gray_black_16);
	gt_label_set_font_cjk(lab23, 0);
	gt_label_set_font_align(lab23, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab23, "checkbox 复选框");
	gt_label_set_space(lab23, 0, 0);

	

	/** lab24 */
	lab24 = gt_label_create(txt);
	gt_obj_set_pos(lab24, 15, 976);
	gt_obj_set_size(lab24, 159, 40);
	gt_label_set_font_color(lab24, gt_color_hex(0x808080));
	gt_label_set_font_family(lab24, gray_black_16);
	gt_label_set_font_cjk(lab24, 0);
	gt_label_set_font_align(lab24, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab24, "listv 列表");
	gt_label_set_space(lab24, 0, 0);

	

	/** lab25 */
	lab25 = gt_label_create(txt);
	gt_obj_set_pos(lab25, 15, 1018);
	gt_obj_set_size(lab25, 159, 40);
	gt_label_set_font_color(lab25, gt_color_hex(0x808080));
	gt_label_set_font_family(lab25, gray_black_16);
	gt_label_set_font_cjk(lab25, 0);
	gt_label_set_font_align(lab25, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab25, "roller 滚轮");
	gt_label_set_space(lab25, 0, 0);

	

	/** lab26 */
	lab26 = gt_label_create(txt);
	gt_obj_set_pos(lab26, 15, 1060);
	gt_obj_set_size(lab26, 159, 40);
	gt_label_set_font_color(lab26, gt_color_hex(0x808080));
	gt_label_set_font_family(lab26, gray_black_16);
	gt_label_set_font_cjk(lab26, 0);
	gt_label_set_font_align(lab26, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab26, "graph 线图");
	gt_label_set_space(lab26, 0, 0);

	

	/** lab27 */
	lab27 = gt_label_create(txt);
	gt_obj_set_pos(lab27, 15, 1100);
	gt_obj_set_size(lab27, 159, 40);
	gt_label_set_font_color(lab27, gt_color_hex(0x808080));
	gt_label_set_font_family(lab27, gray_black_16);
	gt_label_set_font_cjk(lab27, 0);
	gt_label_set_font_align(lab27, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab27, "rect 矩形");
	gt_label_set_space(lab27, 0, 0);

	

	/** lab29 */
	lab29 = gt_label_create(txt);
	gt_obj_set_pos(lab29, 15, 1182);
	gt_obj_set_size(lab29, 159, 40);
	gt_label_set_font_color(lab29, gt_color_hex(0x808080));
	gt_label_set_font_family(lab29, gray_black_16);
	gt_label_set_font_cjk(lab29, 0);
	gt_label_set_font_align(lab29, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab29, "status_bar 状态栏");
	gt_label_set_space(lab29, 0, 0);

	

	/** lab28 */
	lab28 = gt_label_create(txt);
	gt_obj_set_pos(lab28, 15, 1140);
	gt_obj_set_size(lab28, 159, 40);
	gt_label_set_font_color(lab28, gt_color_hex(0x808080));
	gt_label_set_font_family(lab28, gray_black_16);
	gt_label_set_font_cjk(lab28, 0);
	gt_label_set_font_align(lab28, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab28, "screen 屏幕");
	gt_label_set_space(lab28, 0, 0);

	

	/** rect3 */
	rect3 = gt_rect_create(txt);
	gt_obj_set_pos(rect3, 187, 1);
	gt_obj_set_size(rect3, 1, 1300);
	gt_rect_set_radius(rect3, 0);
	gt_rect_set_bg_color(rect3, gt_color_hex(0xc0c0c0));
	gt_rect_set_color_border(rect3, gt_color_hex(0xffffff));
	gt_rect_set_fill(rect3, 1);
	gt_rect_set_border(rect3, 0);

	

	/** lab31 */
	lab31 = gt_label_create(txt);
	gt_obj_set_pos(lab31, 240, 14);
	gt_obj_set_size(lab31, 162, 34);
	gt_label_set_font_color(lab31, gt_color_hex(0x0080ff));
	gt_label_set_font_family(lab31, gray_black_24);
	gt_label_set_font_cjk(lab31, 0);
	gt_label_set_font_align(lab31, GT_ALIGN_LEFT_MID);
	gt_label_set_text(lab31, "文本区控件");
	gt_label_set_space(lab31, 0, 0);

	

	/** rect4 */
	rect4 = gt_rect_create(txt);
	gt_obj_set_pos(rect4, 237, 64);
	gt_obj_set_size(rect4, 509, 342);
	gt_rect_set_radius(rect4, 0);
	gt_rect_set_bg_color(rect4, gt_color_hex(0xffffff));
	gt_rect_set_color_border(rect4, gt_color_hex(0xc0c0c0));
	gt_rect_set_fill(rect4, 1);
	gt_rect_set_border(rect4, 1);

	

	/** txt1 */
	txt1 = gt_textarea_create(txt);
	gt_obj_set_pos(txt1, 271, 89);
	gt_obj_set_size(txt1, 200, 90);
	gt_textarea_set_font_color(txt1, gt_color_hex(0xffffff));
	gt_textarea_set_font_family(txt1, gray_black_16);
	gt_textarea_set_font_cjk(txt1, 0);
	gt_textarea_set_font_align(txt1, GT_ALIGN_LEFT);
	gt_textarea_add_str(txt1, "高通GT-HMI开源上位机软件文本区控件", 0, gt_color_hex(0xffffff));
	gt_textarea_set_bg_color(txt1, gt_color_hex(0x000000));

	

	/** txt1Copy */
	txt1Copy = gt_textarea_create(txt);
	gt_obj_set_pos(txt1Copy, 513, 89);
	gt_obj_set_size(txt1Copy, 200, 90);
	gt_textarea_set_font_color(txt1Copy, gt_color_hex(0xffffff));
	gt_textarea_set_font_family(txt1Copy, gray_black_20);
	gt_textarea_set_font_cjk(txt1Copy, 0);
	gt_textarea_set_font_align(txt1Copy, GT_ALIGN_LEFT);
	gt_textarea_add_str(txt1Copy, "高通GT-HMI开源上位机软件文本区控件", 2, gt_color_hex(0xffffff));
	gt_textarea_set_bg_color(txt1Copy, gt_color_hex(0x8080ff));

	

	/** txt1CopyCopy */
	txt1CopyCopy = gt_textarea_create(txt);
	gt_obj_set_pos(txt1CopyCopy, 271, 217);
	gt_obj_set_size(txt1CopyCopy, 158, 158);
	gt_textarea_set_font_color(txt1CopyCopy, gt_color_hex(0xffffff));
	gt_textarea_set_font_family(txt1CopyCopy, gray_black_24);
	gt_textarea_set_font_cjk(txt1CopyCopy, 0);
	gt_textarea_set_font_align(txt1CopyCopy, GT_ALIGN_LEFT);
	gt_textarea_add_str(txt1CopyCopy, "高通GT-HMI开源上位机软件文本区控件", 1, gt_color_hex(0xffffff));
	gt_textarea_add_str(txt1CopyCopy, "高通GT-HMI开源上位机软件", 0, gt_color_hex(0x000000));
	gt_textarea_set_bg_color(txt1CopyCopy, gt_color_hex(0xff0080));



	return txt;
}

