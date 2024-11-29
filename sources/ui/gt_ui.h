#ifndef __GT_UI_H__
#define __GT_UI_H__


#include "../../GT-HMI-Engine/gt.h"


extern gt_obj_st * buttonlabel_checkbox_title;
extern gt_obj_st * image;
extern gt_obj_st * label;
extern gt_obj_st * txt;
extern gt_obj_st * input;
extern gt_obj_st * imgbtn;
extern gt_obj_st * keyboard;
extern gt_obj_st * switch10;
extern gt_obj_st * player;
extern gt_obj_st * ibputNum;


void gt_ui_init(void);


gt_obj_st * gt_init_buttonlabel_checkbox_title(void);
gt_obj_st * gt_init_image(void);
gt_obj_st * gt_init_label(void);
gt_obj_st * gt_init_txt(void);
gt_obj_st * gt_init_input(void);
gt_obj_st * gt_init_imgbtn(void);
gt_obj_st * gt_init_keyboard(void);
gt_obj_st * gt_init_switch10(void);
gt_obj_st * gt_init_player(void);
gt_obj_st * gt_init_ibputNum(void);


typedef enum {
        GT_ID_BUTTONLABEL_CHECKBOX_TITLE = 0,
        GT_ID_IMAGE = 1,
        GT_ID_LABEL = 2,
        GT_ID_TXT = 3,
        GT_ID_INPUT = 4,
        GT_ID_IMGBTN = 5,
        GT_ID_KEYBOARD = 6,
        GT_ID_SWITCH10 = 7,
        GT_ID_PLAYER = 8,
        GT_ID_IBPUTNUM = 9,
} gt_scr_id_et;



#endif

