#ifndef __GT_UI_H__
#define __GT_UI_H__


#include "../../GT-HMI-Engine/gt.h"


extern gt_obj_st * button;
extern gt_obj_st * image;
extern gt_obj_st * label;
extern gt_obj_st * txt;
extern gt_obj_st * input_keyboard;
extern gt_obj_st * imgbtn;
extern gt_obj_st * switch10;
extern gt_obj_st * player;


void gt_ui_init(void);


gt_obj_st * gt_init_button(void);
gt_obj_st * gt_init_image(void);
gt_obj_st * gt_init_label(void);
gt_obj_st * gt_init_txt(void);
gt_obj_st * gt_init_input_keyboard(void);
gt_obj_st * gt_init_imgbtn(void);
gt_obj_st * gt_init_switch10(void);
gt_obj_st * gt_init_player(void);


typedef enum {
        GT_ID_BUTTON = 0,
        GT_ID_IMAGE = 1,
        GT_ID_LABEL = 2,
        GT_ID_TXT = 3,
        GT_ID_INPUT_KEYBOARD = 4,
        GT_ID_IMGBTN = 5,
        GT_ID_SWITCH10 = 6,
        GT_ID_PLAYER = 7,
} gt_scr_id_et;



#endif

