/*
 * Test of X11/cursorfont.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "X11/cursorfont.h"



#ifdef TET_TEST
void X11_cursorfont_h()
{
#else
int X11_cursorfont_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/cursorfont.h\n");
#endif

printf("Checking data structures in X11/cursorfont.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XC_num_glyphs
	CompareConstant(XC_num_glyphs,154,20111,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_num_glyphs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_X_cursor
	CompareConstant(XC_X_cursor,0,20112,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_X_cursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_arrow
	CompareConstant(XC_arrow,2,20113,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_based_arrow_down
	CompareConstant(XC_based_arrow_down,4,20114,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_based_arrow_down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_based_arrow_up
	CompareConstant(XC_based_arrow_up,6,20115,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_based_arrow_up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_boat
	CompareConstant(XC_boat,8,20116,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_boat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_bogosity
	CompareConstant(XC_bogosity,10,20117,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_bogosity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_bottom_left_corner
	CompareConstant(XC_bottom_left_corner,12,20118,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_bottom_left_corner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_bottom_right_corner
	CompareConstant(XC_bottom_right_corner,14,20119,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_bottom_right_corner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_bottom_side
	CompareConstant(XC_bottom_side,16,20120,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_bottom_side\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_bottom_tee
	CompareConstant(XC_bottom_tee,18,20121,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_bottom_tee\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_box_spiral
	CompareConstant(XC_box_spiral,20,20122,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_box_spiral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_center_ptr
	CompareConstant(XC_center_ptr,22,20123,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_center_ptr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_circle
	CompareConstant(XC_circle,24,20124,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_circle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_clock
	CompareConstant(XC_clock,26,20125,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_clock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_coffee_mug
	CompareConstant(XC_coffee_mug,28,20126,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_coffee_mug\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_cross
	CompareConstant(XC_cross,30,20127,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_cross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_cross_reverse
	CompareConstant(XC_cross_reverse,32,20128,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_cross_reverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_crosshair
	CompareConstant(XC_crosshair,34,20129,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_crosshair\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_diamond_cross
	CompareConstant(XC_diamond_cross,36,20130,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_diamond_cross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_dot
	CompareConstant(XC_dot,38,20131,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_dot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_dotbox
	CompareConstant(XC_dotbox,40,20132,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_dotbox\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_double_arrow
	CompareConstant(XC_double_arrow,42,20133,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_double_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_draft_large
	CompareConstant(XC_draft_large,44,20134,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_draft_large\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_draft_small
	CompareConstant(XC_draft_small,46,20135,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_draft_small\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_draped_box
	CompareConstant(XC_draped_box,48,20136,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_draped_box\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_exchange
	CompareConstant(XC_exchange,50,20137,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_exchange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_fleur
	CompareConstant(XC_fleur,52,20138,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_fleur\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_gobbler
	CompareConstant(XC_gobbler,54,20139,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_gobbler\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_gumby
	CompareConstant(XC_gumby,56,20140,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_gumby\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_hand1
	CompareConstant(XC_hand1,58,20141,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_hand1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_hand2
	CompareConstant(XC_hand2,60,20142,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_hand2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_heart
	CompareConstant(XC_heart,62,20143,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_heart\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_icon
	CompareConstant(XC_icon,64,20144,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_icon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_iron_cross
	CompareConstant(XC_iron_cross,66,20145,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_iron_cross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_left_ptr
	CompareConstant(XC_left_ptr,68,20146,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_left_ptr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_left_side
	CompareConstant(XC_left_side,70,20147,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_left_side\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_left_tee
	CompareConstant(XC_left_tee,72,20148,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_left_tee\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_leftbutton
	CompareConstant(XC_leftbutton,74,20149,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_leftbutton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_ll_angle
	CompareConstant(XC_ll_angle,76,20150,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_ll_angle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_lr_angle
	CompareConstant(XC_lr_angle,78,20151,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_lr_angle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_man
	CompareConstant(XC_man,80,20152,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_man\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_middlebutton
	CompareConstant(XC_middlebutton,82,20153,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_middlebutton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_mouse
	CompareConstant(XC_mouse,84,20154,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_mouse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_pencil
	CompareConstant(XC_pencil,86,20155,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_pencil\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_pirate
	CompareConstant(XC_pirate,88,20156,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_pirate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_plus
	CompareConstant(XC_plus,90,20157,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_plus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_question_arrow
	CompareConstant(XC_question_arrow,92,20158,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_question_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_right_ptr
	CompareConstant(XC_right_ptr,94,20159,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_right_ptr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_right_side
	CompareConstant(XC_right_side,96,20160,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_right_side\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_right_tee
	CompareConstant(XC_right_tee,98,20161,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_right_tee\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_rightbutton
	CompareConstant(XC_rightbutton,100,20162,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_rightbutton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_rtl_logo
	CompareConstant(XC_rtl_logo,102,20163,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_rtl_logo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sailboat
	CompareConstant(XC_sailboat,104,20164,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sailboat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sb_down_arrow
	CompareConstant(XC_sb_down_arrow,106,20165,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sb_down_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sb_h_double_arrow
	CompareConstant(XC_sb_h_double_arrow,108,20166,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sb_h_double_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sb_left_arrow
	CompareConstant(XC_sb_left_arrow,110,20167,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sb_left_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sb_right_arrow
	CompareConstant(XC_sb_right_arrow,112,20168,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sb_right_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sb_up_arrow
	CompareConstant(XC_sb_up_arrow,114,20169,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sb_up_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sb_v_double_arrow
	CompareConstant(XC_sb_v_double_arrow,116,20170,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sb_v_double_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_shuttle
	CompareConstant(XC_shuttle,118,20171,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_shuttle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_sizing
	CompareConstant(XC_sizing,120,20172,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_sizing\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_spider
	CompareConstant(XC_spider,122,20173,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_spider\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_spraycan
	CompareConstant(XC_spraycan,124,20174,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_spraycan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_star
	CompareConstant(XC_star,126,20175,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_star\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_target
	CompareConstant(XC_target,128,20176,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_target\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_tcross
	CompareConstant(XC_tcross,130,20177,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_tcross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_top_left_arrow
	CompareConstant(XC_top_left_arrow,132,20178,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_top_left_arrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_top_left_corner
	CompareConstant(XC_top_left_corner,134,20179,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_top_left_corner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_top_right_corner
	CompareConstant(XC_top_right_corner,136,20180,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_top_right_corner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_top_side
	CompareConstant(XC_top_side,138,20181,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_top_side\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_top_tee
	CompareConstant(XC_top_tee,140,20182,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_top_tee\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_trek
	CompareConstant(XC_trek,142,20183,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_trek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_ul_angle
	CompareConstant(XC_ul_angle,144,20184,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_ul_angle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_umbrella
	CompareConstant(XC_umbrella,146,20185,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_umbrella\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_ur_angle
	CompareConstant(XC_ur_angle,148,20186,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_ur_angle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_watch
	CompareConstant(XC_watch,150,20187,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_watch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XC_xterm
	CompareConstant(XC_xterm,152,20188,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XC_xterm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _cursorfont_h_
Msg( "Error: Constant not found: _cursorfont_h_\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/cursorfont.h\n\n",pcnt,cnt);
return cnt;
#endif

}
