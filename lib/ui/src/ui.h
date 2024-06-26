// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

//#include "lv_i18n.h"
#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
void ui_event_Button4( lv_event_t * e);
extern lv_obj_t *ui_Button4;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_Panel1;
void ui_event_TextArea1( lv_event_t * e);
extern lv_obj_t *ui_TextArea1;
void ui_event_Button1( lv_event_t * e);
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Label6;
void ui_event_Button6( lv_event_t * e);
extern lv_obj_t *ui_Button6;
extern lv_obj_t *ui_Label7;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Keyboard1;
extern lv_obj_t *ui_Button5;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t *ui_Screen2;
void ui_event_Button3( lv_event_t * e);
extern lv_obj_t *ui_Button3;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_Arc1;
void ui_event_Button2( lv_event_t * e);
extern lv_obj_t *ui_Button2;
extern lv_obj_t *ui_Label5;
extern lv_obj_t *ui_Bar1;
extern lv_obj_t *ui_Spinner1;
extern lv_obj_t *ui_Label8;
extern lv_obj_t *ui____initial_actions0;





void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
