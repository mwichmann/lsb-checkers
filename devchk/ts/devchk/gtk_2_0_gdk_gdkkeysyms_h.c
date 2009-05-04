/*
 * Test of gtk-2.0/gdk/gdkkeysyms.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "gtk-2.0/gdk/gdkkeysyms.h"



#ifdef TET_TEST
void gtk_2_0_gdk_gdkkeysyms_h()
{
#else
int gtk_2_0_gdk_gdkkeysyms_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in gtk-2.0/gdk/gdkkeysyms.h\n");
#endif

printf("Checking data structures in gtk-2.0/gdk/gdkkeysyms.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef GDK_VoidSymbol
	CompareConstant(GDK_VoidSymbol,0xFFFFFF,6806,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_VoidSymbol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_BackSpace
	CompareConstant(GDK_BackSpace,0xFF08,6807,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_BackSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Tab
	CompareConstant(GDK_Tab,0xFF09,6808,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Tab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Linefeed
	CompareConstant(GDK_Linefeed,0xFF0A,6809,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Linefeed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Clear
	CompareConstant(GDK_Clear,0xFF0B,6810,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Clear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Return
	CompareConstant(GDK_Return,0xFF0D,6811,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Return\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pause
	CompareConstant(GDK_Pause,0xFF13,6812,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pause\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Scroll_Lock
	CompareConstant(GDK_Scroll_Lock,0xFF14,6813,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Scroll_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Sys_Req
	CompareConstant(GDK_Sys_Req,0xFF15,6814,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Sys_Req\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Escape
	CompareConstant(GDK_Escape,0xFF1B,6815,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Escape\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Delete
	CompareConstant(GDK_Delete,0xFFFF,6816,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Delete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Multi_key
	CompareConstant(GDK_Multi_key,0xFF20,6817,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Multi_key\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Codeinput
	CompareConstant(GDK_Codeinput,0xFF37,6818,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Codeinput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_SingleCandidate
	CompareConstant(GDK_SingleCandidate,0xFF3C,6819,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_SingleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_MultipleCandidate
	CompareConstant(GDK_MultipleCandidate,0xFF3D,6820,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_MultipleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_PreviousCandidate
	CompareConstant(GDK_PreviousCandidate,0xFF3E,6821,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_PreviousCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Kanji
	CompareConstant(GDK_Kanji,0xFF21,6822,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Kanji\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Muhenkan
	CompareConstant(GDK_Muhenkan,0xFF22,6823,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Muhenkan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Henkan_Mode
	CompareConstant(GDK_Henkan_Mode,0xFF23,6824,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Henkan_Mode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Henkan
	CompareConstant(GDK_Henkan,0xFF23,6825,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Henkan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Romaji
	CompareConstant(GDK_Romaji,0xFF24,6826,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Romaji\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hiragana
	CompareConstant(GDK_Hiragana,0xFF25,6827,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hiragana\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Katakana
	CompareConstant(GDK_Katakana,0xFF26,6828,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Katakana\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hiragana_Katakana
	CompareConstant(GDK_Hiragana_Katakana,0xFF27,6829,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hiragana_Katakana\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Zenkaku
	CompareConstant(GDK_Zenkaku,0xFF28,6830,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Zenkaku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hankaku
	CompareConstant(GDK_Hankaku,0xFF29,6831,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hankaku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Zenkaku_Hankaku
	CompareConstant(GDK_Zenkaku_Hankaku,0xFF2A,6832,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Zenkaku_Hankaku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Touroku
	CompareConstant(GDK_Touroku,0xFF2B,6833,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Touroku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Massyo
	CompareConstant(GDK_Massyo,0xFF2C,6834,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Massyo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Kana_Lock
	CompareConstant(GDK_Kana_Lock,0xFF2D,6835,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Kana_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Kana_Shift
	CompareConstant(GDK_Kana_Shift,0xFF2E,6836,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Kana_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Eisu_Shift
	CompareConstant(GDK_Eisu_Shift,0xFF2F,6837,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Eisu_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Eisu_toggle
	CompareConstant(GDK_Eisu_toggle,0xFF30,6838,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Eisu_toggle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Kanji_Bangou
	CompareConstant(GDK_Kanji_Bangou,0xFF37,6839,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Kanji_Bangou\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Zen_Koho
	CompareConstant(GDK_Zen_Koho,0xFF3D,6840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Zen_Koho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Mae_Koho
	CompareConstant(GDK_Mae_Koho,0xFF3E,6841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Mae_Koho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Home
	CompareConstant(GDK_Home,0xFF50,6842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Home\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Left
	CompareConstant(GDK_Left,0xFF51,6843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Up
	CompareConstant(GDK_Up,0xFF52,6844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Right
	CompareConstant(GDK_Right,0xFF53,6845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Down
	CompareConstant(GDK_Down,0xFF54,6846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Prior
	CompareConstant(GDK_Prior,0xFF55,6847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Prior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Page_Up
	CompareConstant(GDK_Page_Up,0xFF55,6848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Page_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Next
	CompareConstant(GDK_Next,0xFF56,6849,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Next\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Page_Down
	CompareConstant(GDK_Page_Down,0xFF56,6850,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Page_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_End
	CompareConstant(GDK_End,0xFF57,6851,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Begin
	CompareConstant(GDK_Begin,0xFF58,6852,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Begin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Select
	CompareConstant(GDK_Select,0xFF60,6853,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Select\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Print
	CompareConstant(GDK_Print,0xFF61,6854,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Print\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Execute
	CompareConstant(GDK_Execute,0xFF62,6855,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Execute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Insert
	CompareConstant(GDK_Insert,0xFF63,6856,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Insert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Undo
	CompareConstant(GDK_Undo,0xFF65,6857,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Undo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Redo
	CompareConstant(GDK_Redo,0xFF66,6858,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Redo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Menu
	CompareConstant(GDK_Menu,0xFF67,6859,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Menu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Find
	CompareConstant(GDK_Find,0xFF68,6860,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Find\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cancel
	CompareConstant(GDK_Cancel,0xFF69,6861,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cancel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Help
	CompareConstant(GDK_Help,0xFF6A,6862,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Help\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Break
	CompareConstant(GDK_Break,0xFF6B,6863,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Break\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Mode_switch
	CompareConstant(GDK_Mode_switch,0xFF7E,6864,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Mode_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_script_switch
	CompareConstant(GDK_script_switch,0xFF7E,6865,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_script_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Num_Lock
	CompareConstant(GDK_Num_Lock,0xFF7F,6866,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Num_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Space
	CompareConstant(GDK_KP_Space,0xFF80,6867,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Tab
	CompareConstant(GDK_KP_Tab,0xFF89,6868,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Tab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Enter
	CompareConstant(GDK_KP_Enter,0xFF8D,6869,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Enter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_F1
	CompareConstant(GDK_KP_F1,0xFF91,6870,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_F1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_F2
	CompareConstant(GDK_KP_F2,0xFF92,6871,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_F2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_F3
	CompareConstant(GDK_KP_F3,0xFF93,6872,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_F3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_F4
	CompareConstant(GDK_KP_F4,0xFF94,6873,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_F4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Home
	CompareConstant(GDK_KP_Home,0xFF95,6874,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Home\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Left
	CompareConstant(GDK_KP_Left,0xFF96,6875,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Up
	CompareConstant(GDK_KP_Up,0xFF97,6876,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Right
	CompareConstant(GDK_KP_Right,0xFF98,6877,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Down
	CompareConstant(GDK_KP_Down,0xFF99,6878,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Prior
	CompareConstant(GDK_KP_Prior,0xFF9A,6879,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Prior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Page_Up
	CompareConstant(GDK_KP_Page_Up,0xFF9A,6880,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Page_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Next
	CompareConstant(GDK_KP_Next,0xFF9B,6881,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Next\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Page_Down
	CompareConstant(GDK_KP_Page_Down,0xFF9B,6882,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Page_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_End
	CompareConstant(GDK_KP_End,0xFF9C,6883,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Begin
	CompareConstant(GDK_KP_Begin,0xFF9D,6884,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Begin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Insert
	CompareConstant(GDK_KP_Insert,0xFF9E,6885,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Insert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Delete
	CompareConstant(GDK_KP_Delete,0xFF9F,6886,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Delete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Equal
	CompareConstant(GDK_KP_Equal,0xFFBD,6887,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Equal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Multiply
	CompareConstant(GDK_KP_Multiply,0xFFAA,6888,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Multiply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Add
	CompareConstant(GDK_KP_Add,0xFFAB,6889,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Add\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Separator
	CompareConstant(GDK_KP_Separator,0xFFAC,6890,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Separator\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Subtract
	CompareConstant(GDK_KP_Subtract,0xFFAD,6891,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Subtract\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Decimal
	CompareConstant(GDK_KP_Decimal,0xFFAE,6892,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Decimal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_Divide
	CompareConstant(GDK_KP_Divide,0xFFAF,6893,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_Divide\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_0
	CompareConstant(GDK_KP_0,0xFFB0,6894,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_1
	CompareConstant(GDK_KP_1,0xFFB1,6895,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_2
	CompareConstant(GDK_KP_2,0xFFB2,6896,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_3
	CompareConstant(GDK_KP_3,0xFFB3,6897,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_4
	CompareConstant(GDK_KP_4,0xFFB4,6898,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_5
	CompareConstant(GDK_KP_5,0xFFB5,6899,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_6
	CompareConstant(GDK_KP_6,0xFFB6,6900,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_7
	CompareConstant(GDK_KP_7,0xFFB7,6901,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_8
	CompareConstant(GDK_KP_8,0xFFB8,6902,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_KP_9
	CompareConstant(GDK_KP_9,0xFFB9,6903,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_KP_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F1
	CompareConstant(GDK_F1,0xFFBE,6904,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F2
	CompareConstant(GDK_F2,0xFFBF,6905,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F3
	CompareConstant(GDK_F3,0xFFC0,6906,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F4
	CompareConstant(GDK_F4,0xFFC1,6907,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F5
	CompareConstant(GDK_F5,0xFFC2,6908,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F6
	CompareConstant(GDK_F6,0xFFC3,6909,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F7
	CompareConstant(GDK_F7,0xFFC4,6910,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F8
	CompareConstant(GDK_F8,0xFFC5,6911,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F9
	CompareConstant(GDK_F9,0xFFC6,6912,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F10
	CompareConstant(GDK_F10,0xFFC7,6913,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F11
	CompareConstant(GDK_F11,0xFFC8,6914,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L1
	CompareConstant(GDK_L1,0xFFC8,6915,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F12
	CompareConstant(GDK_F12,0xFFC9,6916,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L2
	CompareConstant(GDK_L2,0xFFC9,6917,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F13
	CompareConstant(GDK_F13,0xFFCA,6918,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L3
	CompareConstant(GDK_L3,0xFFCA,6919,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F14
	CompareConstant(GDK_F14,0xFFCB,6920,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L4
	CompareConstant(GDK_L4,0xFFCB,6921,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F15
	CompareConstant(GDK_F15,0xFFCC,6922,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L5
	CompareConstant(GDK_L5,0xFFCC,6923,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F16
	CompareConstant(GDK_F16,0xFFCD,6924,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L6
	CompareConstant(GDK_L6,0xFFCD,6925,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F17
	CompareConstant(GDK_F17,0xFFCE,6926,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F17\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L7
	CompareConstant(GDK_L7,0xFFCE,6927,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F18
	CompareConstant(GDK_F18,0xFFCF,6928,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F18\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L8
	CompareConstant(GDK_L8,0xFFCF,6929,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F19
	CompareConstant(GDK_F19,0xFFD0,6930,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F19\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L9
	CompareConstant(GDK_L9,0xFFD0,6931,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F20
	CompareConstant(GDK_F20,0xFFD1,6932,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F20\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L10
	CompareConstant(GDK_L10,0xFFD1,6933,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F21
	CompareConstant(GDK_F21,0xFFD2,6934,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F21\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R1
	CompareConstant(GDK_R1,0xFFD2,6935,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F22
	CompareConstant(GDK_F22,0xFFD3,6936,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F22\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R2
	CompareConstant(GDK_R2,0xFFD3,6937,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F23
	CompareConstant(GDK_F23,0xFFD4,6938,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F23\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R3
	CompareConstant(GDK_R3,0xFFD4,6939,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F24
	CompareConstant(GDK_F24,0xFFD5,6940,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R4
	CompareConstant(GDK_R4,0xFFD5,6941,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F25
	CompareConstant(GDK_F25,0xFFD6,6942,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F25\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R5
	CompareConstant(GDK_R5,0xFFD6,6943,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F26
	CompareConstant(GDK_F26,0xFFD7,6944,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F26\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R6
	CompareConstant(GDK_R6,0xFFD7,6945,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F27
	CompareConstant(GDK_F27,0xFFD8,6946,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F27\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R7
	CompareConstant(GDK_R7,0xFFD8,6947,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F28
	CompareConstant(GDK_F28,0xFFD9,6948,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F28\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R8
	CompareConstant(GDK_R8,0xFFD9,6949,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F29
	CompareConstant(GDK_F29,0xFFDA,6950,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F29\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R9
	CompareConstant(GDK_R9,0xFFDA,6951,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F30
	CompareConstant(GDK_F30,0xFFDB,6952,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F30\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R10
	CompareConstant(GDK_R10,0xFFDB,6953,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F31
	CompareConstant(GDK_F31,0xFFDC,6954,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F31\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R11
	CompareConstant(GDK_R11,0xFFDC,6955,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F32
	CompareConstant(GDK_F32,0xFFDD,6956,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R12
	CompareConstant(GDK_R12,0xFFDD,6957,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F33
	CompareConstant(GDK_F33,0xFFDE,6958,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F33\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R13
	CompareConstant(GDK_R13,0xFFDE,6959,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F34
	CompareConstant(GDK_F34,0xFFDF,6960,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F34\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R14
	CompareConstant(GDK_R14,0xFFDF,6961,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F35
	CompareConstant(GDK_F35,0xFFE0,6962,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F35\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R15
	CompareConstant(GDK_R15,0xFFE0,6963,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Shift_L
	CompareConstant(GDK_Shift_L,0xFFE1,6964,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Shift_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Shift_R
	CompareConstant(GDK_Shift_R,0xFFE2,6965,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Shift_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Control_L
	CompareConstant(GDK_Control_L,0xFFE3,6966,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Control_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Control_R
	CompareConstant(GDK_Control_R,0xFFE4,6967,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Control_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Caps_Lock
	CompareConstant(GDK_Caps_Lock,0xFFE5,6968,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Caps_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Shift_Lock
	CompareConstant(GDK_Shift_Lock,0xFFE6,6969,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Shift_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Meta_L
	CompareConstant(GDK_Meta_L,0xFFE7,6970,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Meta_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Meta_R
	CompareConstant(GDK_Meta_R,0xFFE8,6971,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Meta_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Alt_L
	CompareConstant(GDK_Alt_L,0xFFE9,6972,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Alt_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Alt_R
	CompareConstant(GDK_Alt_R,0xFFEA,6973,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Alt_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Super_L
	CompareConstant(GDK_Super_L,0xFFEB,6974,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Super_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Super_R
	CompareConstant(GDK_Super_R,0xFFEC,6975,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Super_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hyper_L
	CompareConstant(GDK_Hyper_L,0xFFED,6976,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hyper_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hyper_R
	CompareConstant(GDK_Hyper_R,0xFFEE,6977,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hyper_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Lock
	CompareConstant(GDK_ISO_Lock,0xFE01,6978,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Level2_Latch
	CompareConstant(GDK_ISO_Level2_Latch,0xFE02,6979,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Level2_Latch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Level3_Shift
	CompareConstant(GDK_ISO_Level3_Shift,0xFE03,6980,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Level3_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Level3_Latch
	CompareConstant(GDK_ISO_Level3_Latch,0xFE04,6981,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Level3_Latch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Level3_Lock
	CompareConstant(GDK_ISO_Level3_Lock,0xFE05,6982,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Level3_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Group_Shift
	CompareConstant(GDK_ISO_Group_Shift,0xFF7E,6983,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Group_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Group_Latch
	CompareConstant(GDK_ISO_Group_Latch,0xFE06,6984,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Group_Latch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Group_Lock
	CompareConstant(GDK_ISO_Group_Lock,0xFE07,6985,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Next_Group
	CompareConstant(GDK_ISO_Next_Group,0xFE08,6986,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Next_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Next_Group_Lock
	CompareConstant(GDK_ISO_Next_Group_Lock,0xFE09,6987,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Next_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Prev_Group
	CompareConstant(GDK_ISO_Prev_Group,0xFE0A,6988,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Prev_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Prev_Group_Lock
	CompareConstant(GDK_ISO_Prev_Group_Lock,0xFE0B,6989,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Prev_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_First_Group
	CompareConstant(GDK_ISO_First_Group,0xFE0C,6990,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_First_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_First_Group_Lock
	CompareConstant(GDK_ISO_First_Group_Lock,0xFE0D,6991,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_First_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Last_Group
	CompareConstant(GDK_ISO_Last_Group,0xFE0E,6992,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Last_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Last_Group_Lock
	CompareConstant(GDK_ISO_Last_Group_Lock,0xFE0F,6993,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Last_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Left_Tab
	CompareConstant(GDK_ISO_Left_Tab,0xFE20,6994,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Left_Tab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Move_Line_Up
	CompareConstant(GDK_ISO_Move_Line_Up,0xFE21,6995,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Move_Line_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Move_Line_Down
	CompareConstant(GDK_ISO_Move_Line_Down,0xFE22,6996,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Move_Line_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Partial_Line_Up
	CompareConstant(GDK_ISO_Partial_Line_Up,0xFE23,6997,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Partial_Line_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Partial_Line_Down
	CompareConstant(GDK_ISO_Partial_Line_Down,0xFE24,6998,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Partial_Line_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Partial_Space_Left
	CompareConstant(GDK_ISO_Partial_Space_Left,0xFE25,6999,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Partial_Space_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Partial_Space_Right
	CompareConstant(GDK_ISO_Partial_Space_Right,0xFE26,7000,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Partial_Space_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Set_Margin_Left
	CompareConstant(GDK_ISO_Set_Margin_Left,0xFE27,7001,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Set_Margin_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Set_Margin_Right
	CompareConstant(GDK_ISO_Set_Margin_Right,0xFE28,7002,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Set_Margin_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Release_Margin_Left
	CompareConstant(GDK_ISO_Release_Margin_Left,0xFE29,7003,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Release_Margin_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Release_Margin_Right
	CompareConstant(GDK_ISO_Release_Margin_Right,0xFE2A,7004,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Release_Margin_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Release_Both_Margins
	CompareConstant(GDK_ISO_Release_Both_Margins,0xFE2B,7005,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Release_Both_Margins\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Fast_Cursor_Left
	CompareConstant(GDK_ISO_Fast_Cursor_Left,0xFE2C,7006,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Fast_Cursor_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Fast_Cursor_Right
	CompareConstant(GDK_ISO_Fast_Cursor_Right,0xFE2D,7007,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Fast_Cursor_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Fast_Cursor_Up
	CompareConstant(GDK_ISO_Fast_Cursor_Up,0xFE2E,7008,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Fast_Cursor_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Fast_Cursor_Down
	CompareConstant(GDK_ISO_Fast_Cursor_Down,0xFE2F,7009,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Fast_Cursor_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Continuous_Underline
	CompareConstant(GDK_ISO_Continuous_Underline,0xFE30,7010,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Continuous_Underline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Discontinuous_Underline
	CompareConstant(GDK_ISO_Discontinuous_Underline,0xFE31,7011,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Discontinuous_Underline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Emphasize
	CompareConstant(GDK_ISO_Emphasize,0xFE32,7012,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Emphasize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Center_Object
	CompareConstant(GDK_ISO_Center_Object,0xFE33,7013,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Center_Object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ISO_Enter
	CompareConstant(GDK_ISO_Enter,0xFE34,7014,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ISO_Enter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_grave
	CompareConstant(GDK_dead_grave,0xFE50,7015,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_grave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_acute
	CompareConstant(GDK_dead_acute,0xFE51,7016,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_acute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_circumflex
	CompareConstant(GDK_dead_circumflex,0xFE52,7017,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_circumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_tilde
	CompareConstant(GDK_dead_tilde,0xFE53,7018,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_tilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_macron
	CompareConstant(GDK_dead_macron,0xFE54,7019,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_breve
	CompareConstant(GDK_dead_breve,0xFE55,7020,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_breve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_abovedot
	CompareConstant(GDK_dead_abovedot,0xFE56,7021,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_abovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_diaeresis
	CompareConstant(GDK_dead_diaeresis,0xFE57,7022,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_diaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_abovering
	CompareConstant(GDK_dead_abovering,0xFE58,7023,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_abovering\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_doubleacute
	CompareConstant(GDK_dead_doubleacute,0xFE59,7024,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_doubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_caron
	CompareConstant(GDK_dead_caron,0xFE5A,7025,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_caron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_cedilla
	CompareConstant(GDK_dead_cedilla,0xFE5B,7026,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_cedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_ogonek
	CompareConstant(GDK_dead_ogonek,0xFE5C,7027,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_ogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_iota
	CompareConstant(GDK_dead_iota,0xFE5D,7028,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_iota\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_voiced_sound
	CompareConstant(GDK_dead_voiced_sound,0xFE5E,7029,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_voiced_sound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_semivoiced_sound
	CompareConstant(GDK_dead_semivoiced_sound,0xFE5F,7030,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_semivoiced_sound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_belowdot
	CompareConstant(GDK_dead_belowdot,0xFE60,7031,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_belowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_hook
	CompareConstant(GDK_dead_hook,0xFE61,7032,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_hook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dead_horn
	CompareConstant(GDK_dead_horn,0xFE62,7033,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dead_horn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_First_Virtual_Screen
	CompareConstant(GDK_First_Virtual_Screen,0xFED0,7034,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_First_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Prev_Virtual_Screen
	CompareConstant(GDK_Prev_Virtual_Screen,0xFED1,7035,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Prev_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Next_Virtual_Screen
	CompareConstant(GDK_Next_Virtual_Screen,0xFED2,7036,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Next_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Last_Virtual_Screen
	CompareConstant(GDK_Last_Virtual_Screen,0xFED4,7037,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Last_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Terminate_Server
	CompareConstant(GDK_Terminate_Server,0xFED5,7038,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Terminate_Server\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_AccessX_Enable
	CompareConstant(GDK_AccessX_Enable,0xFE70,7039,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_AccessX_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_AccessX_Feedback_Enable
	CompareConstant(GDK_AccessX_Feedback_Enable,0xFE71,7040,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_AccessX_Feedback_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_RepeatKeys_Enable
	CompareConstant(GDK_RepeatKeys_Enable,0xFE72,7041,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_RepeatKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_SlowKeys_Enable
	CompareConstant(GDK_SlowKeys_Enable,0xFE73,7042,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_SlowKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_BounceKeys_Enable
	CompareConstant(GDK_BounceKeys_Enable,0xFE74,7043,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_BounceKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_StickyKeys_Enable
	CompareConstant(GDK_StickyKeys_Enable,0xFE75,7044,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_StickyKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_MouseKeys_Enable
	CompareConstant(GDK_MouseKeys_Enable,0xFE76,7045,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_MouseKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_MouseKeys_Accel_Enable
	CompareConstant(GDK_MouseKeys_Accel_Enable,0xFE77,7046,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_MouseKeys_Accel_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Overlay1_Enable
	CompareConstant(GDK_Overlay1_Enable,0xFE78,7047,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Overlay1_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Overlay2_Enable
	CompareConstant(GDK_Overlay2_Enable,0xFE79,7048,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Overlay2_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_AudibleBell_Enable
	CompareConstant(GDK_AudibleBell_Enable,0xFE7A,7049,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_AudibleBell_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Left
	CompareConstant(GDK_Pointer_Left,0xFEE0,7050,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Right
	CompareConstant(GDK_Pointer_Right,0xFEE1,7051,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Up
	CompareConstant(GDK_Pointer_Up,0xFEE2,7052,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Down
	CompareConstant(GDK_Pointer_Down,0xFEE3,7053,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_UpLeft
	CompareConstant(GDK_Pointer_UpLeft,0xFEE4,7054,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_UpLeft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_UpRight
	CompareConstant(GDK_Pointer_UpRight,0xFEE5,7055,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_UpRight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DownLeft
	CompareConstant(GDK_Pointer_DownLeft,0xFEE6,7056,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DownLeft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DownRight
	CompareConstant(GDK_Pointer_DownRight,0xFEE7,7057,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DownRight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Button_Dflt
	CompareConstant(GDK_Pointer_Button_Dflt,0xFEE8,7058,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Button_Dflt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Button1
	CompareConstant(GDK_Pointer_Button1,0xFEE9,7059,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Button1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Button2
	CompareConstant(GDK_Pointer_Button2,0xFEEA,7060,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Button2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Button3
	CompareConstant(GDK_Pointer_Button3,0xFEEB,7061,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Button3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Button4
	CompareConstant(GDK_Pointer_Button4,0xFEEC,7062,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Button4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Button5
	CompareConstant(GDK_Pointer_Button5,0xFEED,7063,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Button5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DblClick_Dflt
	CompareConstant(GDK_Pointer_DblClick_Dflt,0xFEEE,7064,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DblClick_Dflt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DblClick1
	CompareConstant(GDK_Pointer_DblClick1,0xFEEF,7065,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DblClick1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DblClick2
	CompareConstant(GDK_Pointer_DblClick2,0xFEF0,7066,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DblClick2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DblClick3
	CompareConstant(GDK_Pointer_DblClick3,0xFEF1,7067,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DblClick3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DblClick4
	CompareConstant(GDK_Pointer_DblClick4,0xFEF2,7068,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DblClick4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DblClick5
	CompareConstant(GDK_Pointer_DblClick5,0xFEF3,7069,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DblClick5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Drag_Dflt
	CompareConstant(GDK_Pointer_Drag_Dflt,0xFEF4,7070,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Drag_Dflt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Drag1
	CompareConstant(GDK_Pointer_Drag1,0xFEF5,7071,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Drag1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Drag2
	CompareConstant(GDK_Pointer_Drag2,0xFEF6,7072,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Drag2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Drag3
	CompareConstant(GDK_Pointer_Drag3,0xFEF7,7073,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Drag3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Drag4
	CompareConstant(GDK_Pointer_Drag4,0xFEF8,7074,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Drag4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Drag5
	CompareConstant(GDK_Pointer_Drag5,0xFEFD,7075,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Drag5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_EnableKeys
	CompareConstant(GDK_Pointer_EnableKeys,0xFEF9,7076,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_EnableKeys\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_Accelerate
	CompareConstant(GDK_Pointer_Accelerate,0xFEFA,7077,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_Accelerate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DfltBtnNext
	CompareConstant(GDK_Pointer_DfltBtnNext,0xFEFB,7078,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DfltBtnNext\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Pointer_DfltBtnPrev
	CompareConstant(GDK_Pointer_DfltBtnPrev,0xFEFC,7079,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Pointer_DfltBtnPrev\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Duplicate
	CompareConstant(GDK_3270_Duplicate,0xFD01,7080,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Duplicate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_FieldMark
	CompareConstant(GDK_3270_FieldMark,0xFD02,7081,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_FieldMark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Right2
	CompareConstant(GDK_3270_Right2,0xFD03,7082,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Right2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Left2
	CompareConstant(GDK_3270_Left2,0xFD04,7083,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Left2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_BackTab
	CompareConstant(GDK_3270_BackTab,0xFD05,7084,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_BackTab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_EraseEOF
	CompareConstant(GDK_3270_EraseEOF,0xFD06,7085,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_EraseEOF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_EraseInput
	CompareConstant(GDK_3270_EraseInput,0xFD07,7086,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_EraseInput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Reset
	CompareConstant(GDK_3270_Reset,0xFD08,7087,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Reset\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Quit
	CompareConstant(GDK_3270_Quit,0xFD09,7088,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Quit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_PA1
	CompareConstant(GDK_3270_PA1,0xFD0A,7089,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_PA1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_PA2
	CompareConstant(GDK_3270_PA2,0xFD0B,7090,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_PA2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_PA3
	CompareConstant(GDK_3270_PA3,0xFD0C,7091,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_PA3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Test
	CompareConstant(GDK_3270_Test,0xFD0D,7092,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Test\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Attn
	CompareConstant(GDK_3270_Attn,0xFD0E,7093,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Attn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_CursorBlink
	CompareConstant(GDK_3270_CursorBlink,0xFD0F,7094,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_CursorBlink\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_AltCursor
	CompareConstant(GDK_3270_AltCursor,0xFD10,7095,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_AltCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_KeyClick
	CompareConstant(GDK_3270_KeyClick,0xFD11,7096,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_KeyClick\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Jump
	CompareConstant(GDK_3270_Jump,0xFD12,7097,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Jump\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Ident
	CompareConstant(GDK_3270_Ident,0xFD13,7098,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Ident\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Rule
	CompareConstant(GDK_3270_Rule,0xFD14,7099,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Rule\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Copy
	CompareConstant(GDK_3270_Copy,0xFD15,7100,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Copy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Play
	CompareConstant(GDK_3270_Play,0xFD16,7101,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Play\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Setup
	CompareConstant(GDK_3270_Setup,0xFD17,7102,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Setup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Record
	CompareConstant(GDK_3270_Record,0xFD18,7103,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Record\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_ChangeScreen
	CompareConstant(GDK_3270_ChangeScreen,0xFD19,7104,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_ChangeScreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_DeleteWord
	CompareConstant(GDK_3270_DeleteWord,0xFD1A,7105,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_DeleteWord\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_ExSelect
	CompareConstant(GDK_3270_ExSelect,0xFD1B,7106,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_ExSelect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_CursorSelect
	CompareConstant(GDK_3270_CursorSelect,0xFD1C,7107,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_CursorSelect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_PrintScreen
	CompareConstant(GDK_3270_PrintScreen,0xFD1D,7108,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_PrintScreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3270_Enter
	CompareConstant(GDK_3270_Enter,0xFD1E,7109,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3270_Enter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_space
	CompareConstant(GDK_space,0x020,7110,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_exclam
	CompareConstant(GDK_exclam,0x021,7111,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_exclam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_quotedbl
	CompareConstant(GDK_quotedbl,0x022,7112,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_quotedbl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_numbersign
	CompareConstant(GDK_numbersign,0x023,7113,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_numbersign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dollar
	CompareConstant(GDK_dollar,0x024,7114,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dollar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_percent
	CompareConstant(GDK_percent,0x025,7115,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_percent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ampersand
	CompareConstant(GDK_ampersand,0x026,7116,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ampersand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_apostrophe
	CompareConstant(GDK_apostrophe,0x027,7117,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_apostrophe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_quoteright
	CompareConstant(GDK_quoteright,0x027,7118,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_quoteright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_parenleft
	CompareConstant(GDK_parenleft,0x028,7119,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_parenleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_parenright
	CompareConstant(GDK_parenright,0x029,7120,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_parenright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_asterisk
	CompareConstant(GDK_asterisk,0x02a,7121,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_asterisk\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_plus
	CompareConstant(GDK_plus,0x02b,7122,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_plus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_comma
	CompareConstant(GDK_comma,0x02c,7123,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_comma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_minus
	CompareConstant(GDK_minus,0x02d,7124,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_minus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_period
	CompareConstant(GDK_period,0x02e,7125,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_period\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_slash
	CompareConstant(GDK_slash,0x02f,7126,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_slash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_0
	CompareConstant(GDK_0,0x030,7127,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_1
	CompareConstant(GDK_1,0x031,7128,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_2
	CompareConstant(GDK_2,0x032,7129,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_3
	CompareConstant(GDK_3,0x033,7130,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_4
	CompareConstant(GDK_4,0x034,7131,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_5
	CompareConstant(GDK_5,0x035,7132,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_6
	CompareConstant(GDK_6,0x036,7133,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_7
	CompareConstant(GDK_7,0x037,7134,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_8
	CompareConstant(GDK_8,0x038,7135,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_9
	CompareConstant(GDK_9,0x039,7136,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_colon
	CompareConstant(GDK_colon,0x03a,7137,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_colon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_semicolon
	CompareConstant(GDK_semicolon,0x03b,7138,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_semicolon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_less
	CompareConstant(GDK_less,0x03c,7139,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_less\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_equal
	CompareConstant(GDK_equal,0x03d,7140,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_equal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_greater
	CompareConstant(GDK_greater,0x03e,7141,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_greater\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_question
	CompareConstant(GDK_question,0x03f,7142,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_question\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_at
	CompareConstant(GDK_at,0x040,7143,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_at\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_A
	CompareConstant(GDK_A,0x041,7144,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_B
	CompareConstant(GDK_B,0x042,7145,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_C
	CompareConstant(GDK_C,0x043,7146,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_C\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_D
	CompareConstant(GDK_D,0x044,7147,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_E
	CompareConstant(GDK_E,0x045,7148,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_F
	CompareConstant(GDK_F,0x046,7149,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_G
	CompareConstant(GDK_G,0x047,7150,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_H
	CompareConstant(GDK_H,0x048,7151,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_H\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_I
	CompareConstant(GDK_I,0x049,7152,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_J
	CompareConstant(GDK_J,0x04a,7153,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_J\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_K
	CompareConstant(GDK_K,0x04b,7154,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_K\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_L
	CompareConstant(GDK_L,0x04c,7155,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_M
	CompareConstant(GDK_M,0x04d,7156,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_M\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_N
	CompareConstant(GDK_N,0x04e,7157,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_N\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_O
	CompareConstant(GDK_O,0x04f,7158,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_P
	CompareConstant(GDK_P,0x050,7159,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_P\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Q
	CompareConstant(GDK_Q,0x051,7160,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Q\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_R
	CompareConstant(GDK_R,0x052,7161,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_S
	CompareConstant(GDK_S,0x053,7162,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_T
	CompareConstant(GDK_T,0x054,7163,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_T\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_U
	CompareConstant(GDK_U,0x055,7164,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_V
	CompareConstant(GDK_V,0x056,7165,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_V\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_W
	CompareConstant(GDK_W,0x057,7166,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_W\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_X
	CompareConstant(GDK_X,0x058,7167,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Y
	CompareConstant(GDK_Y,0x059,7168,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Z
	CompareConstant(GDK_Z,0x05a,7169,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_bracketleft
	CompareConstant(GDK_bracketleft,0x05b,7170,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_bracketleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_backslash
	CompareConstant(GDK_backslash,0x05c,7171,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_backslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_bracketright
	CompareConstant(GDK_bracketright,0x05d,7172,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_bracketright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_asciicircum
	CompareConstant(GDK_asciicircum,0x05e,7173,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_asciicircum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_underscore
	CompareConstant(GDK_underscore,0x05f,7174,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_underscore\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_grave
	CompareConstant(GDK_grave,0x060,7175,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_grave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_quoteleft
	CompareConstant(GDK_quoteleft,0x060,7176,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_quoteleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_a
	CompareConstant(GDK_a,0x061,7177,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_a\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_b
	CompareConstant(GDK_b,0x062,7178,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_b\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_c
	CompareConstant(GDK_c,0x063,7179,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_c\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_d
	CompareConstant(GDK_d,0x064,7180,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_d\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_e
	CompareConstant(GDK_e,0x065,7181,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_e\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_f
	CompareConstant(GDK_f,0x066,7182,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_f\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_g
	CompareConstant(GDK_g,0x067,7183,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_g\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_h
	CompareConstant(GDK_h,0x068,7184,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_h\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_i
	CompareConstant(GDK_i,0x069,7185,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_j
	CompareConstant(GDK_j,0x06a,7186,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_j\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_k
	CompareConstant(GDK_k,0x06b,7187,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_k\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_l
	CompareConstant(GDK_l,0x06c,7188,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_l\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_m
	CompareConstant(GDK_m,0x06d,7189,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_m\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_n
	CompareConstant(GDK_n,0x06e,7190,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_n\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_o
	CompareConstant(GDK_o,0x06f,7191,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_o\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_p
	CompareConstant(GDK_p,0x070,7192,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_p\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_q
	CompareConstant(GDK_q,0x071,7193,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_q\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_r
	CompareConstant(GDK_r,0x072,7194,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_r\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_s
	CompareConstant(GDK_s,0x073,7195,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_s\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_t
	CompareConstant(GDK_t,0x074,7196,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_t\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_u
	CompareConstant(GDK_u,0x075,7197,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_u\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_v
	CompareConstant(GDK_v,0x076,7198,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_v\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_w
	CompareConstant(GDK_w,0x077,7199,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_w\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_x
	CompareConstant(GDK_x,0x078,7200,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_x\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_y
	CompareConstant(GDK_y,0x079,7201,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_z
	CompareConstant(GDK_z,0x07a,7202,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_braceleft
	CompareConstant(GDK_braceleft,0x07b,7203,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_braceleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_bar
	CompareConstant(GDK_bar,0x07c,7204,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_braceright
	CompareConstant(GDK_braceright,0x07d,7205,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_braceright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_asciitilde
	CompareConstant(GDK_asciitilde,0x07e,7206,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_asciitilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_nobreakspace
	CompareConstant(GDK_nobreakspace,0x0a0,7207,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_nobreakspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_exclamdown
	CompareConstant(GDK_exclamdown,0x0a1,7208,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_exclamdown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_cent
	CompareConstant(GDK_cent,0x0a2,7209,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_cent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_sterling
	CompareConstant(GDK_sterling,0x0a3,7210,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_sterling\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_currency
	CompareConstant(GDK_currency,0x0a4,7211,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_currency\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_yen
	CompareConstant(GDK_yen,0x0a5,7212,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_yen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_brokenbar
	CompareConstant(GDK_brokenbar,0x0a6,7213,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_brokenbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_section
	CompareConstant(GDK_section,0x0a7,7214,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_section\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_diaeresis
	CompareConstant(GDK_diaeresis,0x0a8,7215,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_diaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_copyright
	CompareConstant(GDK_copyright,0x0a9,7216,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_copyright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ordfeminine
	CompareConstant(GDK_ordfeminine,0x0aa,7217,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ordfeminine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_guillemotleft
	CompareConstant(GDK_guillemotleft,0x0ab,7218,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_guillemotleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_notsign
	CompareConstant(GDK_notsign,0x0ac,7219,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_notsign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hyphen
	CompareConstant(GDK_hyphen,0x0ad,7220,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hyphen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_registered
	CompareConstant(GDK_registered,0x0ae,7221,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_registered\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_macron
	CompareConstant(GDK_macron,0x0af,7222,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_degree
	CompareConstant(GDK_degree,0x0b0,7223,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_degree\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_plusminus
	CompareConstant(GDK_plusminus,0x0b1,7224,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_plusminus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_twosuperior
	CompareConstant(GDK_twosuperior,0x0b2,7225,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_twosuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_threesuperior
	CompareConstant(GDK_threesuperior,0x0b3,7226,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_threesuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_acute
	CompareConstant(GDK_acute,0x0b4,7227,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_acute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_mu
	CompareConstant(GDK_mu,0x0b5,7228,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_mu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_paragraph
	CompareConstant(GDK_paragraph,0x0b6,7229,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_paragraph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_periodcentered
	CompareConstant(GDK_periodcentered,0x0b7,7230,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_periodcentered\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_cedilla
	CompareConstant(GDK_cedilla,0x0b8,7231,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_cedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_onesuperior
	CompareConstant(GDK_onesuperior,0x0b9,7232,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_onesuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_masculine
	CompareConstant(GDK_masculine,0x0ba,7233,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_masculine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_guillemotright
	CompareConstant(GDK_guillemotright,0x0bb,7234,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_guillemotright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_onequarter
	CompareConstant(GDK_onequarter,0x0bc,7235,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_onequarter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_onehalf
	CompareConstant(GDK_onehalf,0x0bd,7236,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_onehalf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_threequarters
	CompareConstant(GDK_threequarters,0x0be,7237,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_threequarters\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_questiondown
	CompareConstant(GDK_questiondown,0x0bf,7238,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_questiondown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Agrave
	CompareConstant(GDK_Agrave,0x0c0,7239,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Agrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Aacute
	CompareConstant(GDK_Aacute,0x0c1,7240,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Aacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Acircumflex
	CompareConstant(GDK_Acircumflex,0x0c2,7241,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Acircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Atilde
	CompareConstant(GDK_Atilde,0x0c3,7242,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Atilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Adiaeresis
	CompareConstant(GDK_Adiaeresis,0x0c4,7243,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Adiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Aring
	CompareConstant(GDK_Aring,0x0c5,7244,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Aring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_AE
	CompareConstant(GDK_AE,0x0c6,7245,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_AE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ccedilla
	CompareConstant(GDK_Ccedilla,0x0c7,7246,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ccedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Egrave
	CompareConstant(GDK_Egrave,0x0c8,7247,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Egrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Eacute
	CompareConstant(GDK_Eacute,0x0c9,7248,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Eacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ecircumflex
	CompareConstant(GDK_Ecircumflex,0x0ca,7249,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ecircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ediaeresis
	CompareConstant(GDK_Ediaeresis,0x0cb,7250,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ediaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Igrave
	CompareConstant(GDK_Igrave,0x0cc,7251,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Igrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Iacute
	CompareConstant(GDK_Iacute,0x0cd,7252,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Iacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Icircumflex
	CompareConstant(GDK_Icircumflex,0x0ce,7253,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Icircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Idiaeresis
	CompareConstant(GDK_Idiaeresis,0x0cf,7254,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Idiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ETH
	CompareConstant(GDK_ETH,0x0d0,7255,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ETH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Eth
	CompareConstant(GDK_Eth,0x0d0,7256,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Eth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ntilde
	CompareConstant(GDK_Ntilde,0x0d1,7257,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ograve
	CompareConstant(GDK_Ograve,0x0d2,7258,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ograve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Oacute
	CompareConstant(GDK_Oacute,0x0d3,7259,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Oacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ocircumflex
	CompareConstant(GDK_Ocircumflex,0x0d4,7260,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ocircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Otilde
	CompareConstant(GDK_Otilde,0x0d5,7261,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Otilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Odiaeresis
	CompareConstant(GDK_Odiaeresis,0x0d6,7262,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Odiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_multiply
	CompareConstant(GDK_multiply,0x0d7,7263,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_multiply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ooblique
	CompareConstant(GDK_Ooblique,0x0d8,7264,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ooblique\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ugrave
	CompareConstant(GDK_Ugrave,0x0d9,7265,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ugrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Uacute
	CompareConstant(GDK_Uacute,0x0da,7266,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Uacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ucircumflex
	CompareConstant(GDK_Ucircumflex,0x0db,7267,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ucircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Udiaeresis
	CompareConstant(GDK_Udiaeresis,0x0dc,7268,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Udiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Yacute
	CompareConstant(GDK_Yacute,0x0dd,7269,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Yacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_THORN
	CompareConstant(GDK_THORN,0x0de,7270,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_THORN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thorn
	CompareConstant(GDK_Thorn,0x0de,7271,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ssharp
	CompareConstant(GDK_ssharp,0x0df,7272,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ssharp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_agrave
	CompareConstant(GDK_agrave,0x0e0,7273,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_agrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_aacute
	CompareConstant(GDK_aacute,0x0e1,7274,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_aacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_acircumflex
	CompareConstant(GDK_acircumflex,0x0e2,7275,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_acircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_atilde
	CompareConstant(GDK_atilde,0x0e3,7276,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_atilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_adiaeresis
	CompareConstant(GDK_adiaeresis,0x0e4,7277,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_adiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_aring
	CompareConstant(GDK_aring,0x0e5,7278,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_aring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ae
	CompareConstant(GDK_ae,0x0e6,7279,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ccedilla
	CompareConstant(GDK_ccedilla,0x0e7,7280,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ccedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_egrave
	CompareConstant(GDK_egrave,0x0e8,7281,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_egrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_eacute
	CompareConstant(GDK_eacute,0x0e9,7282,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_eacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ecircumflex
	CompareConstant(GDK_ecircumflex,0x0ea,7283,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ecircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ediaeresis
	CompareConstant(GDK_ediaeresis,0x0eb,7284,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ediaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_igrave
	CompareConstant(GDK_igrave,0x0ec,7285,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_igrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_iacute
	CompareConstant(GDK_iacute,0x0ed,7286,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_iacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_icircumflex
	CompareConstant(GDK_icircumflex,0x0ee,7287,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_icircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_idiaeresis
	CompareConstant(GDK_idiaeresis,0x0ef,7288,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_idiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_eth
	CompareConstant(GDK_eth,0x0f0,7289,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_eth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ntilde
	CompareConstant(GDK_ntilde,0x0f1,7290,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ograve
	CompareConstant(GDK_ograve,0x0f2,7291,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ograve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_oacute
	CompareConstant(GDK_oacute,0x0f3,7292,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_oacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ocircumflex
	CompareConstant(GDK_ocircumflex,0x0f4,7293,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ocircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_otilde
	CompareConstant(GDK_otilde,0x0f5,7294,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_otilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_odiaeresis
	CompareConstant(GDK_odiaeresis,0x0f6,7295,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_odiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_division
	CompareConstant(GDK_division,0x0f7,7296,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_division\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_oslash
	CompareConstant(GDK_oslash,0x0f8,7297,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_oslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ugrave
	CompareConstant(GDK_ugrave,0x0f9,7298,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ugrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_uacute
	CompareConstant(GDK_uacute,0x0fa,7299,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_uacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ucircumflex
	CompareConstant(GDK_ucircumflex,0x0fb,7300,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ucircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_udiaeresis
	CompareConstant(GDK_udiaeresis,0x0fc,7301,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_udiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_yacute
	CompareConstant(GDK_yacute,0x0fd,7302,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_yacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_thorn
	CompareConstant(GDK_thorn,0x0fe,7303,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_thorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ydiaeresis
	CompareConstant(GDK_ydiaeresis,0x0ff,7304,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ydiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Aogonek
	CompareConstant(GDK_Aogonek,0x1a1,7305,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Aogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_breve
	CompareConstant(GDK_breve,0x1a2,7306,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_breve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Lstroke
	CompareConstant(GDK_Lstroke,0x1a3,7307,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Lstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Lcaron
	CompareConstant(GDK_Lcaron,0x1a5,7308,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Lcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Sacute
	CompareConstant(GDK_Sacute,0x1a6,7309,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Sacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Scaron
	CompareConstant(GDK_Scaron,0x1a9,7310,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Scaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Scedilla
	CompareConstant(GDK_Scedilla,0x1aa,7311,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Scedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Tcaron
	CompareConstant(GDK_Tcaron,0x1ab,7312,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Tcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Zacute
	CompareConstant(GDK_Zacute,0x1ac,7313,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Zacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Zcaron
	CompareConstant(GDK_Zcaron,0x1ae,7314,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Zcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Zabovedot
	CompareConstant(GDK_Zabovedot,0x1af,7315,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Zabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_aogonek
	CompareConstant(GDK_aogonek,0x1b1,7316,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_aogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ogonek
	CompareConstant(GDK_ogonek,0x1b2,7317,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lstroke
	CompareConstant(GDK_lstroke,0x1b3,7318,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lcaron
	CompareConstant(GDK_lcaron,0x1b5,7319,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_sacute
	CompareConstant(GDK_sacute,0x1b6,7320,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_sacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_caron
	CompareConstant(GDK_caron,0x1b7,7321,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_caron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_scaron
	CompareConstant(GDK_scaron,0x1b9,7322,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_scaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_scedilla
	CompareConstant(GDK_scedilla,0x1ba,7323,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_scedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_tcaron
	CompareConstant(GDK_tcaron,0x1bb,7324,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_tcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_zacute
	CompareConstant(GDK_zacute,0x1bc,7325,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_zacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_doubleacute
	CompareConstant(GDK_doubleacute,0x1bd,7326,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_doubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_zcaron
	CompareConstant(GDK_zcaron,0x1be,7327,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_zcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_zabovedot
	CompareConstant(GDK_zabovedot,0x1bf,7328,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_zabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Racute
	CompareConstant(GDK_Racute,0x1c0,7329,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Racute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Abreve
	CompareConstant(GDK_Abreve,0x1c3,7330,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Abreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Lacute
	CompareConstant(GDK_Lacute,0x1c5,7331,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Lacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cacute
	CompareConstant(GDK_Cacute,0x1c6,7332,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ccaron
	CompareConstant(GDK_Ccaron,0x1c8,7333,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ccaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Eogonek
	CompareConstant(GDK_Eogonek,0x1ca,7334,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Eogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ecaron
	CompareConstant(GDK_Ecaron,0x1cc,7335,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ecaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Dcaron
	CompareConstant(GDK_Dcaron,0x1cf,7336,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Dcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Dstroke
	CompareConstant(GDK_Dstroke,0x1d0,7337,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Dstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Nacute
	CompareConstant(GDK_Nacute,0x1d1,7338,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Nacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ncaron
	CompareConstant(GDK_Ncaron,0x1d2,7339,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ncaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Odoubleacute
	CompareConstant(GDK_Odoubleacute,0x1d5,7340,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Odoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Rcaron
	CompareConstant(GDK_Rcaron,0x1d8,7341,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Rcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Uring
	CompareConstant(GDK_Uring,0x1d9,7342,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Uring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Udoubleacute
	CompareConstant(GDK_Udoubleacute,0x1db,7343,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Udoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Tcedilla
	CompareConstant(GDK_Tcedilla,0x1de,7344,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Tcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_racute
	CompareConstant(GDK_racute,0x1e0,7345,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_racute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_abreve
	CompareConstant(GDK_abreve,0x1e3,7346,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_abreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lacute
	CompareConstant(GDK_lacute,0x1e5,7347,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_cacute
	CompareConstant(GDK_cacute,0x1e6,7348,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_cacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ccaron
	CompareConstant(GDK_ccaron,0x1e8,7349,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ccaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_eogonek
	CompareConstant(GDK_eogonek,0x1ea,7350,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_eogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ecaron
	CompareConstant(GDK_ecaron,0x1ec,7351,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ecaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dcaron
	CompareConstant(GDK_dcaron,0x1ef,7352,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dstroke
	CompareConstant(GDK_dstroke,0x1f0,7353,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_nacute
	CompareConstant(GDK_nacute,0x1f1,7354,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_nacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ncaron
	CompareConstant(GDK_ncaron,0x1f2,7355,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ncaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_odoubleacute
	CompareConstant(GDK_odoubleacute,0x1f5,7356,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_odoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_udoubleacute
	CompareConstant(GDK_udoubleacute,0x1fb,7357,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_udoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rcaron
	CompareConstant(GDK_rcaron,0x1f8,7358,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_uring
	CompareConstant(GDK_uring,0x1f9,7359,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_uring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_tcedilla
	CompareConstant(GDK_tcedilla,0x1fe,7360,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_tcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_abovedot
	CompareConstant(GDK_abovedot,0x1ff,7361,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_abovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hstroke
	CompareConstant(GDK_Hstroke,0x2a1,7362,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hcircumflex
	CompareConstant(GDK_Hcircumflex,0x2a6,7363,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Iabovedot
	CompareConstant(GDK_Iabovedot,0x2a9,7364,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Iabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Gbreve
	CompareConstant(GDK_Gbreve,0x2ab,7365,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Gbreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Jcircumflex
	CompareConstant(GDK_Jcircumflex,0x2ac,7366,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Jcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hstroke
	CompareConstant(GDK_hstroke,0x2b1,7367,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hcircumflex
	CompareConstant(GDK_hcircumflex,0x2b6,7368,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_idotless
	CompareConstant(GDK_idotless,0x2b9,7369,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_idotless\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_gbreve
	CompareConstant(GDK_gbreve,0x2bb,7370,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_gbreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_jcircumflex
	CompareConstant(GDK_jcircumflex,0x2bc,7371,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_jcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cabovedot
	CompareConstant(GDK_Cabovedot,0x2c5,7372,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ccircumflex
	CompareConstant(GDK_Ccircumflex,0x2c6,7373,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ccircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Gabovedot
	CompareConstant(GDK_Gabovedot,0x2d5,7374,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Gabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Gcircumflex
	CompareConstant(GDK_Gcircumflex,0x2d8,7375,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Gcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ubreve
	CompareConstant(GDK_Ubreve,0x2dd,7376,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ubreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Scircumflex
	CompareConstant(GDK_Scircumflex,0x2de,7377,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Scircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_cabovedot
	CompareConstant(GDK_cabovedot,0x2e5,7378,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_cabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ccircumflex
	CompareConstant(GDK_ccircumflex,0x2e6,7379,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ccircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_gabovedot
	CompareConstant(GDK_gabovedot,0x2f5,7380,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_gabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_gcircumflex
	CompareConstant(GDK_gcircumflex,0x2f8,7381,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_gcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ubreve
	CompareConstant(GDK_ubreve,0x2fd,7382,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ubreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_scircumflex
	CompareConstant(GDK_scircumflex,0x2fe,7383,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_scircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kra
	CompareConstant(GDK_kra,0x3a2,7384,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kappa
	CompareConstant(GDK_kappa,0x3a2,7385,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kappa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Rcedilla
	CompareConstant(GDK_Rcedilla,0x3a3,7386,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Rcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Itilde
	CompareConstant(GDK_Itilde,0x3a5,7387,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Itilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Lcedilla
	CompareConstant(GDK_Lcedilla,0x3a6,7388,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Lcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Emacron
	CompareConstant(GDK_Emacron,0x3aa,7389,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Emacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Gcedilla
	CompareConstant(GDK_Gcedilla,0x3ab,7390,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Gcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Tslash
	CompareConstant(GDK_Tslash,0x3ac,7391,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Tslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rcedilla
	CompareConstant(GDK_rcedilla,0x3b3,7392,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_itilde
	CompareConstant(GDK_itilde,0x3b5,7393,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_itilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lcedilla
	CompareConstant(GDK_lcedilla,0x3b6,7394,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_emacron
	CompareConstant(GDK_emacron,0x3ba,7395,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_emacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_gcedilla
	CompareConstant(GDK_gcedilla,0x3bb,7396,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_gcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_tslash
	CompareConstant(GDK_tslash,0x3bc,7397,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_tslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ENG
	CompareConstant(GDK_ENG,0x3bd,7398,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ENG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_eng
	CompareConstant(GDK_eng,0x3bf,7399,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_eng\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Amacron
	CompareConstant(GDK_Amacron,0x3c0,7400,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Amacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Iogonek
	CompareConstant(GDK_Iogonek,0x3c7,7401,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Iogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Eabovedot
	CompareConstant(GDK_Eabovedot,0x3cc,7402,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Eabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Imacron
	CompareConstant(GDK_Imacron,0x3cf,7403,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Imacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ncedilla
	CompareConstant(GDK_Ncedilla,0x3d1,7404,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ncedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Omacron
	CompareConstant(GDK_Omacron,0x3d2,7405,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Omacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Kcedilla
	CompareConstant(GDK_Kcedilla,0x3d3,7406,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Kcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Uogonek
	CompareConstant(GDK_Uogonek,0x3d9,7407,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Uogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Utilde
	CompareConstant(GDK_Utilde,0x3dd,7408,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Utilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Umacron
	CompareConstant(GDK_Umacron,0x3de,7409,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Umacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_amacron
	CompareConstant(GDK_amacron,0x3e0,7410,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_amacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_iogonek
	CompareConstant(GDK_iogonek,0x3e7,7411,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_iogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_eabovedot
	CompareConstant(GDK_eabovedot,0x3ec,7412,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_eabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_imacron
	CompareConstant(GDK_imacron,0x3ef,7413,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_imacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ncedilla
	CompareConstant(GDK_ncedilla,0x3f1,7414,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ncedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_omacron
	CompareConstant(GDK_omacron,0x3f2,7415,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_omacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kcedilla
	CompareConstant(GDK_kcedilla,0x3f3,7416,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_uogonek
	CompareConstant(GDK_uogonek,0x3f9,7417,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_uogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_utilde
	CompareConstant(GDK_utilde,0x3fd,7418,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_utilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_umacron
	CompareConstant(GDK_umacron,0x3fe,7419,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_umacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_OE
	CompareConstant(GDK_OE,0x13bc,7420,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_OE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_oe
	CompareConstant(GDK_oe,0x13bd,7421,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_oe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ydiaeresis
	CompareConstant(GDK_Ydiaeresis,0x13be,7422,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ydiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_overline
	CompareConstant(GDK_overline,0x47e,7423,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_overline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_fullstop
	CompareConstant(GDK_kana_fullstop,0x4a1,7424,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_fullstop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_openingbracket
	CompareConstant(GDK_kana_openingbracket,0x4a2,7425,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_openingbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_closingbracket
	CompareConstant(GDK_kana_closingbracket,0x4a3,7426,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_closingbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_comma
	CompareConstant(GDK_kana_comma,0x4a4,7427,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_comma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_conjunctive
	CompareConstant(GDK_kana_conjunctive,0x4a5,7428,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_conjunctive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_middledot
	CompareConstant(GDK_kana_middledot,0x4a5,7429,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_middledot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_WO
	CompareConstant(GDK_kana_WO,0x4a6,7430,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_WO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_a
	CompareConstant(GDK_kana_a,0x4a7,7431,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_a\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_i
	CompareConstant(GDK_kana_i,0x4a8,7432,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_u
	CompareConstant(GDK_kana_u,0x4a9,7433,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_u\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_e
	CompareConstant(GDK_kana_e,0x4aa,7434,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_e\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_o
	CompareConstant(GDK_kana_o,0x4ab,7435,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_o\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_ya
	CompareConstant(GDK_kana_ya,0x4ac,7436,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_ya\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_yu
	CompareConstant(GDK_kana_yu,0x4ad,7437,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_yu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_yo
	CompareConstant(GDK_kana_yo,0x4ae,7438,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_yo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_tsu
	CompareConstant(GDK_kana_tsu,0x4af,7439,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_tsu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_tu
	CompareConstant(GDK_kana_tu,0x4af,7440,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_tu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_prolongedsound
	CompareConstant(GDK_prolongedsound,0x4b0,7441,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_prolongedsound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_A
	CompareConstant(GDK_kana_A,0x4b1,7442,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_I
	CompareConstant(GDK_kana_I,0x4b2,7443,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_U
	CompareConstant(GDK_kana_U,0x4b3,7444,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_E
	CompareConstant(GDK_kana_E,0x4b4,7445,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_O
	CompareConstant(GDK_kana_O,0x4b5,7446,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_KA
	CompareConstant(GDK_kana_KA,0x4b6,7447,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_KA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_KI
	CompareConstant(GDK_kana_KI,0x4b7,7448,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_KI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_KU
	CompareConstant(GDK_kana_KU,0x4b8,7449,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_KU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_KE
	CompareConstant(GDK_kana_KE,0x4b9,7450,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_KE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_KO
	CompareConstant(GDK_kana_KO,0x4ba,7451,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_KO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_SA
	CompareConstant(GDK_kana_SA,0x4bb,7452,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_SA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_SHI
	CompareConstant(GDK_kana_SHI,0x4bc,7453,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_SHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_SU
	CompareConstant(GDK_kana_SU,0x4bd,7454,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_SU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_SE
	CompareConstant(GDK_kana_SE,0x4be,7455,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_SE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_SO
	CompareConstant(GDK_kana_SO,0x4bf,7456,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_SO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_TA
	CompareConstant(GDK_kana_TA,0x4c0,7457,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_TA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_CHI
	CompareConstant(GDK_kana_CHI,0x4c1,7458,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_CHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_TI
	CompareConstant(GDK_kana_TI,0x4c1,7459,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_TI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_TSU
	CompareConstant(GDK_kana_TSU,0x4c2,7460,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_TSU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_TU
	CompareConstant(GDK_kana_TU,0x4c2,7461,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_TU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_TE
	CompareConstant(GDK_kana_TE,0x4c3,7462,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_TE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_TO
	CompareConstant(GDK_kana_TO,0x4c4,7463,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_TO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_NA
	CompareConstant(GDK_kana_NA,0x4c5,7464,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_NA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_NI
	CompareConstant(GDK_kana_NI,0x4c6,7465,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_NI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_NU
	CompareConstant(GDK_kana_NU,0x4c7,7466,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_NU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_NE
	CompareConstant(GDK_kana_NE,0x4c8,7467,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_NE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_NO
	CompareConstant(GDK_kana_NO,0x4c9,7468,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_NO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_HA
	CompareConstant(GDK_kana_HA,0x4ca,7469,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_HA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_HI
	CompareConstant(GDK_kana_HI,0x4cb,7470,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_HI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_FU
	CompareConstant(GDK_kana_FU,0x4cc,7471,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_FU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_HU
	CompareConstant(GDK_kana_HU,0x4cc,7472,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_HU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_HE
	CompareConstant(GDK_kana_HE,0x4cd,7473,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_HE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_HO
	CompareConstant(GDK_kana_HO,0x4ce,7474,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_HO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_MA
	CompareConstant(GDK_kana_MA,0x4cf,7475,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_MA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_MI
	CompareConstant(GDK_kana_MI,0x4d0,7476,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_MI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_MU
	CompareConstant(GDK_kana_MU,0x4d1,7477,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_MU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_ME
	CompareConstant(GDK_kana_ME,0x4d2,7478,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_ME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_MO
	CompareConstant(GDK_kana_MO,0x4d3,7479,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_MO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_YA
	CompareConstant(GDK_kana_YA,0x4d4,7480,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_YA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_YU
	CompareConstant(GDK_kana_YU,0x4d5,7481,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_YU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_YO
	CompareConstant(GDK_kana_YO,0x4d6,7482,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_YO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_RA
	CompareConstant(GDK_kana_RA,0x4d7,7483,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_RA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_RI
	CompareConstant(GDK_kana_RI,0x4d8,7484,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_RI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_RU
	CompareConstant(GDK_kana_RU,0x4d9,7485,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_RU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_RE
	CompareConstant(GDK_kana_RE,0x4da,7486,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_RE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_RO
	CompareConstant(GDK_kana_RO,0x4db,7487,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_RO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_WA
	CompareConstant(GDK_kana_WA,0x4dc,7488,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_WA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_N
	CompareConstant(GDK_kana_N,0x4dd,7489,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_N\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_voicedsound
	CompareConstant(GDK_voicedsound,0x4de,7490,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_voicedsound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_semivoicedsound
	CompareConstant(GDK_semivoicedsound,0x4df,7491,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_semivoicedsound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_kana_switch
	CompareConstant(GDK_kana_switch,0xFF7E,7492,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_kana_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_comma
	CompareConstant(GDK_Arabic_comma,0x5ac,7493,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_comma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_semicolon
	CompareConstant(GDK_Arabic_semicolon,0x5bb,7494,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_semicolon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_question_mark
	CompareConstant(GDK_Arabic_question_mark,0x5bf,7495,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_question_mark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_hamza
	CompareConstant(GDK_Arabic_hamza,0x5c1,7496,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_hamza\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_maddaonalef
	CompareConstant(GDK_Arabic_maddaonalef,0x5c2,7497,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_maddaonalef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_hamzaonalef
	CompareConstant(GDK_Arabic_hamzaonalef,0x5c3,7498,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_hamzaonalef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_hamzaonwaw
	CompareConstant(GDK_Arabic_hamzaonwaw,0x5c4,7499,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_hamzaonwaw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_hamzaunderalef
	CompareConstant(GDK_Arabic_hamzaunderalef,0x5c5,7500,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_hamzaunderalef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_hamzaonyeh
	CompareConstant(GDK_Arabic_hamzaonyeh,0x5c6,7501,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_hamzaonyeh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_alef
	CompareConstant(GDK_Arabic_alef,0x5c7,7502,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_alef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_beh
	CompareConstant(GDK_Arabic_beh,0x5c8,7503,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_beh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_tehmarbuta
	CompareConstant(GDK_Arabic_tehmarbuta,0x5c9,7504,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_tehmarbuta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_teh
	CompareConstant(GDK_Arabic_teh,0x5ca,7505,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_teh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_theh
	CompareConstant(GDK_Arabic_theh,0x5cb,7506,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_theh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_jeem
	CompareConstant(GDK_Arabic_jeem,0x5cc,7507,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_jeem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_hah
	CompareConstant(GDK_Arabic_hah,0x5cd,7508,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_hah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_khah
	CompareConstant(GDK_Arabic_khah,0x5ce,7509,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_khah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_dal
	CompareConstant(GDK_Arabic_dal,0x5cf,7510,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_dal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_thal
	CompareConstant(GDK_Arabic_thal,0x5d0,7511,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_thal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_ra
	CompareConstant(GDK_Arabic_ra,0x5d1,7512,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_ra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_zain
	CompareConstant(GDK_Arabic_zain,0x5d2,7513,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_zain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_seen
	CompareConstant(GDK_Arabic_seen,0x5d3,7514,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_seen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_sheen
	CompareConstant(GDK_Arabic_sheen,0x5d4,7515,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_sheen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_sad
	CompareConstant(GDK_Arabic_sad,0x5d5,7516,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_sad\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_dad
	CompareConstant(GDK_Arabic_dad,0x5d6,7517,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_dad\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_tah
	CompareConstant(GDK_Arabic_tah,0x5d7,7518,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_tah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_zah
	CompareConstant(GDK_Arabic_zah,0x5d8,7519,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_zah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_ain
	CompareConstant(GDK_Arabic_ain,0x5d9,7520,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_ain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_ghain
	CompareConstant(GDK_Arabic_ghain,0x5da,7521,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_ghain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_tatweel
	CompareConstant(GDK_Arabic_tatweel,0x5e0,7522,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_tatweel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_feh
	CompareConstant(GDK_Arabic_feh,0x5e1,7523,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_feh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_qaf
	CompareConstant(GDK_Arabic_qaf,0x5e2,7524,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_qaf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_kaf
	CompareConstant(GDK_Arabic_kaf,0x5e3,7525,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_kaf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_lam
	CompareConstant(GDK_Arabic_lam,0x5e4,7526,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_lam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_meem
	CompareConstant(GDK_Arabic_meem,0x5e5,7527,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_meem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_noon
	CompareConstant(GDK_Arabic_noon,0x5e6,7528,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_noon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_ha
	CompareConstant(GDK_Arabic_ha,0x5e7,7529,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_ha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_heh
	CompareConstant(GDK_Arabic_heh,0x5e7,7530,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_heh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_waw
	CompareConstant(GDK_Arabic_waw,0x5e8,7531,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_waw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_alefmaksura
	CompareConstant(GDK_Arabic_alefmaksura,0x5e9,7532,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_alefmaksura\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_yeh
	CompareConstant(GDK_Arabic_yeh,0x5ea,7533,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_yeh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_fathatan
	CompareConstant(GDK_Arabic_fathatan,0x5eb,7534,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_fathatan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_dammatan
	CompareConstant(GDK_Arabic_dammatan,0x5ec,7535,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_dammatan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_kasratan
	CompareConstant(GDK_Arabic_kasratan,0x5ed,7536,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_kasratan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_fatha
	CompareConstant(GDK_Arabic_fatha,0x5ee,7537,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_fatha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_damma
	CompareConstant(GDK_Arabic_damma,0x5ef,7538,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_damma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_kasra
	CompareConstant(GDK_Arabic_kasra,0x5f0,7539,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_kasra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_shadda
	CompareConstant(GDK_Arabic_shadda,0x5f1,7540,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_shadda\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_sukun
	CompareConstant(GDK_Arabic_sukun,0x5f2,7541,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_sukun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Arabic_switch
	CompareConstant(GDK_Arabic_switch,0xFF7E,7542,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Arabic_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_dje
	CompareConstant(GDK_Serbian_dje,0x6a1,7543,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_dje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Macedonia_gje
	CompareConstant(GDK_Macedonia_gje,0x6a2,7544,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Macedonia_gje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_io
	CompareConstant(GDK_Cyrillic_io,0x6a3,7545,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_io\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_ie
	CompareConstant(GDK_Ukrainian_ie,0x6a4,7546,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_ie\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukranian_je
	CompareConstant(GDK_Ukranian_je,0x6a4,7547,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukranian_je\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Macedonia_dse
	CompareConstant(GDK_Macedonia_dse,0x6a5,7548,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Macedonia_dse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_i
	CompareConstant(GDK_Ukrainian_i,0x6a6,7549,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukranian_i
	CompareConstant(GDK_Ukranian_i,0x6a6,7550,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukranian_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_yi
	CompareConstant(GDK_Ukrainian_yi,0x6a7,7551,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_yi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukranian_yi
	CompareConstant(GDK_Ukranian_yi,0x6a7,7552,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukranian_yi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_je
	CompareConstant(GDK_Cyrillic_je,0x6a8,7553,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_je\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_je
	CompareConstant(GDK_Serbian_je,0x6a8,7554,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_je\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_lje
	CompareConstant(GDK_Cyrillic_lje,0x6a9,7555,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_lje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_lje
	CompareConstant(GDK_Serbian_lje,0x6a9,7556,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_lje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_nje
	CompareConstant(GDK_Cyrillic_nje,0x6aa,7557,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_nje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_nje
	CompareConstant(GDK_Serbian_nje,0x6aa,7558,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_nje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_tshe
	CompareConstant(GDK_Serbian_tshe,0x6ab,7559,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_tshe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Macedonia_kje
	CompareConstant(GDK_Macedonia_kje,0x6ac,7560,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Macedonia_kje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_ghe_with_upturn
	CompareConstant(GDK_Ukrainian_ghe_with_upturn,0x6ad,7561,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_ghe_with_upturn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Byelorussian_shortu
	CompareConstant(GDK_Byelorussian_shortu,0x6ae,7562,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Byelorussian_shortu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_dzhe
	CompareConstant(GDK_Cyrillic_dzhe,0x6af,7563,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_dzhe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_dze
	CompareConstant(GDK_Serbian_dze,0x6af,7564,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_dze\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_numerosign
	CompareConstant(GDK_numerosign,0x6b0,7565,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_numerosign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_DJE
	CompareConstant(GDK_Serbian_DJE,0x6b1,7566,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_DJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Macedonia_GJE
	CompareConstant(GDK_Macedonia_GJE,0x6b2,7567,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Macedonia_GJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_IO
	CompareConstant(GDK_Cyrillic_IO,0x6b3,7568,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_IE
	CompareConstant(GDK_Ukrainian_IE,0x6b4,7569,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_IE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukranian_JE
	CompareConstant(GDK_Ukranian_JE,0x6b4,7570,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukranian_JE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Macedonia_DSE
	CompareConstant(GDK_Macedonia_DSE,0x6b5,7571,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Macedonia_DSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_I
	CompareConstant(GDK_Ukrainian_I,0x6b6,7572,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukranian_I
	CompareConstant(GDK_Ukranian_I,0x6b6,7573,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukranian_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_YI
	CompareConstant(GDK_Ukrainian_YI,0x6b7,7574,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_YI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukranian_YI
	CompareConstant(GDK_Ukranian_YI,0x6b7,7575,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukranian_YI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_JE
	CompareConstant(GDK_Cyrillic_JE,0x6b8,7576,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_JE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_JE
	CompareConstant(GDK_Serbian_JE,0x6b8,7577,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_JE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_LJE
	CompareConstant(GDK_Cyrillic_LJE,0x6b9,7578,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_LJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_LJE
	CompareConstant(GDK_Serbian_LJE,0x6b9,7579,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_LJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_NJE
	CompareConstant(GDK_Cyrillic_NJE,0x6ba,7580,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_NJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_NJE
	CompareConstant(GDK_Serbian_NJE,0x6ba,7581,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_NJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_TSHE
	CompareConstant(GDK_Serbian_TSHE,0x6bb,7582,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_TSHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Macedonia_KJE
	CompareConstant(GDK_Macedonia_KJE,0x6bc,7583,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Macedonia_KJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Ukrainian_GHE_WITH_UPTURN
	CompareConstant(GDK_Ukrainian_GHE_WITH_UPTURN,0x6bd,7584,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Ukrainian_GHE_WITH_UPTURN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Byelorussian_SHORTU
	CompareConstant(GDK_Byelorussian_SHORTU,0x6be,7585,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Byelorussian_SHORTU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_DZHE
	CompareConstant(GDK_Cyrillic_DZHE,0x6bf,7586,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_DZHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Serbian_DZE
	CompareConstant(GDK_Serbian_DZE,0x6bf,7587,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Serbian_DZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_yu
	CompareConstant(GDK_Cyrillic_yu,0x6c0,7588,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_yu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_a
	CompareConstant(GDK_Cyrillic_a,0x6c1,7589,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_a\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_be
	CompareConstant(GDK_Cyrillic_be,0x6c2,7590,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_be\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_tse
	CompareConstant(GDK_Cyrillic_tse,0x6c3,7591,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_tse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_de
	CompareConstant(GDK_Cyrillic_de,0x6c4,7592,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_de\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ie
	CompareConstant(GDK_Cyrillic_ie,0x6c5,7593,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ie\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ef
	CompareConstant(GDK_Cyrillic_ef,0x6c6,7594,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ghe
	CompareConstant(GDK_Cyrillic_ghe,0x6c7,7595,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ghe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ha
	CompareConstant(GDK_Cyrillic_ha,0x6c8,7596,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_i
	CompareConstant(GDK_Cyrillic_i,0x6c9,7597,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_shorti
	CompareConstant(GDK_Cyrillic_shorti,0x6ca,7598,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_shorti\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ka
	CompareConstant(GDK_Cyrillic_ka,0x6cb,7599,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ka\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_el
	CompareConstant(GDK_Cyrillic_el,0x6cc,7600,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_el\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_em
	CompareConstant(GDK_Cyrillic_em,0x6cd,7601,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_em\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_en
	CompareConstant(GDK_Cyrillic_en,0x6ce,7602,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_en\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_o
	CompareConstant(GDK_Cyrillic_o,0x6cf,7603,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_o\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_pe
	CompareConstant(GDK_Cyrillic_pe,0x6d0,7604,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_pe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ya
	CompareConstant(GDK_Cyrillic_ya,0x6d1,7605,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ya\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_er
	CompareConstant(GDK_Cyrillic_er,0x6d2,7606,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_er\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_es
	CompareConstant(GDK_Cyrillic_es,0x6d3,7607,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_es\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_te
	CompareConstant(GDK_Cyrillic_te,0x6d4,7608,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_te\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_u
	CompareConstant(GDK_Cyrillic_u,0x6d5,7609,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_u\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_zhe
	CompareConstant(GDK_Cyrillic_zhe,0x6d6,7610,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_zhe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ve
	CompareConstant(GDK_Cyrillic_ve,0x6d7,7611,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_softsign
	CompareConstant(GDK_Cyrillic_softsign,0x6d8,7612,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_softsign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_yeru
	CompareConstant(GDK_Cyrillic_yeru,0x6d9,7613,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_yeru\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ze
	CompareConstant(GDK_Cyrillic_ze,0x6da,7614,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ze\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_sha
	CompareConstant(GDK_Cyrillic_sha,0x6db,7615,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_sha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_e
	CompareConstant(GDK_Cyrillic_e,0x6dc,7616,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_e\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_shcha
	CompareConstant(GDK_Cyrillic_shcha,0x6dd,7617,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_shcha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_che
	CompareConstant(GDK_Cyrillic_che,0x6de,7618,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_che\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_hardsign
	CompareConstant(GDK_Cyrillic_hardsign,0x6df,7619,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_hardsign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_YU
	CompareConstant(GDK_Cyrillic_YU,0x6e0,7620,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_YU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_A
	CompareConstant(GDK_Cyrillic_A,0x6e1,7621,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_BE
	CompareConstant(GDK_Cyrillic_BE,0x6e2,7622,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_BE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_TSE
	CompareConstant(GDK_Cyrillic_TSE,0x6e3,7623,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_TSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_DE
	CompareConstant(GDK_Cyrillic_DE,0x6e4,7624,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_DE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_IE
	CompareConstant(GDK_Cyrillic_IE,0x6e5,7625,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_IE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_EF
	CompareConstant(GDK_Cyrillic_EF,0x6e6,7626,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_EF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_GHE
	CompareConstant(GDK_Cyrillic_GHE,0x6e7,7627,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_GHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_HA
	CompareConstant(GDK_Cyrillic_HA,0x6e8,7628,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_HA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_I
	CompareConstant(GDK_Cyrillic_I,0x6e9,7629,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_SHORTI
	CompareConstant(GDK_Cyrillic_SHORTI,0x6ea,7630,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_SHORTI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_KA
	CompareConstant(GDK_Cyrillic_KA,0x6eb,7631,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_KA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_EL
	CompareConstant(GDK_Cyrillic_EL,0x6ec,7632,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_EL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_EM
	CompareConstant(GDK_Cyrillic_EM,0x6ed,7633,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_EM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_EN
	CompareConstant(GDK_Cyrillic_EN,0x6ee,7634,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_EN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_O
	CompareConstant(GDK_Cyrillic_O,0x6ef,7635,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_PE
	CompareConstant(GDK_Cyrillic_PE,0x6f0,7636,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_PE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_YA
	CompareConstant(GDK_Cyrillic_YA,0x6f1,7637,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_YA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ER
	CompareConstant(GDK_Cyrillic_ER,0x6f2,7638,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ES
	CompareConstant(GDK_Cyrillic_ES,0x6f3,7639,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_TE
	CompareConstant(GDK_Cyrillic_TE,0x6f4,7640,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_TE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_U
	CompareConstant(GDK_Cyrillic_U,0x6f5,7641,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ZHE
	CompareConstant(GDK_Cyrillic_ZHE,0x6f6,7642,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ZHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_VE
	CompareConstant(GDK_Cyrillic_VE,0x6f7,7643,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_VE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_SOFTSIGN
	CompareConstant(GDK_Cyrillic_SOFTSIGN,0x6f8,7644,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_SOFTSIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_YERU
	CompareConstant(GDK_Cyrillic_YERU,0x6f9,7645,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_YERU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_ZE
	CompareConstant(GDK_Cyrillic_ZE,0x6fa,7646,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_ZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_SHA
	CompareConstant(GDK_Cyrillic_SHA,0x6fb,7647,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_E
	CompareConstant(GDK_Cyrillic_E,0x6fc,7648,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_SHCHA
	CompareConstant(GDK_Cyrillic_SHCHA,0x6fd,7649,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_SHCHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_CHE
	CompareConstant(GDK_Cyrillic_CHE,0x6fe,7650,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_CHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Cyrillic_HARDSIGN
	CompareConstant(GDK_Cyrillic_HARDSIGN,0x6ff,7651,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Cyrillic_HARDSIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_ALPHAaccent
	CompareConstant(GDK_Greek_ALPHAaccent,0x7a1,7652,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_ALPHAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_EPSILONaccent
	CompareConstant(GDK_Greek_EPSILONaccent,0x7a2,7653,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_EPSILONaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_ETAaccent
	CompareConstant(GDK_Greek_ETAaccent,0x7a3,7654,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_ETAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_IOTAaccent
	CompareConstant(GDK_Greek_IOTAaccent,0x7a4,7655,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_IOTAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_IOTAdieresis
	CompareConstant(GDK_Greek_IOTAdieresis,0x7a5,7656,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_IOTAdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_IOTAdiaeresis
	CompareConstant(GDK_Greek_IOTAdiaeresis,GDK_Greek_IOTAdieresis,7657,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_IOTAdiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_OMICRONaccent
	CompareConstant(GDK_Greek_OMICRONaccent,0x7a7,7658,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_OMICRONaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_UPSILONaccent
	CompareConstant(GDK_Greek_UPSILONaccent,0x7a8,7659,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_UPSILONaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_UPSILONdieresis
	CompareConstant(GDK_Greek_UPSILONdieresis,0x7a9,7660,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_UPSILONdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_OMEGAaccent
	CompareConstant(GDK_Greek_OMEGAaccent,0x7ab,7661,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_OMEGAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_accentdieresis
	CompareConstant(GDK_Greek_accentdieresis,0x7ae,7662,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_accentdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_horizbar
	CompareConstant(GDK_Greek_horizbar,0x7af,7663,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_horizbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_alphaaccent
	CompareConstant(GDK_Greek_alphaaccent,0x7b1,7664,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_alphaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_epsilonaccent
	CompareConstant(GDK_Greek_epsilonaccent,0x7b2,7665,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_epsilonaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_etaaccent
	CompareConstant(GDK_Greek_etaaccent,0x7b3,7666,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_etaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_iotaaccent
	CompareConstant(GDK_Greek_iotaaccent,0x7b4,7667,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_iotaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_iotadieresis
	CompareConstant(GDK_Greek_iotadieresis,0x7b5,7668,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_iotadieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_iotaaccentdieresis
	CompareConstant(GDK_Greek_iotaaccentdieresis,0x7b6,7669,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_iotaaccentdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_omicronaccent
	CompareConstant(GDK_Greek_omicronaccent,0x7b7,7670,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_omicronaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_upsilonaccent
	CompareConstant(GDK_Greek_upsilonaccent,0x7b8,7671,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_upsilonaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_upsilondieresis
	CompareConstant(GDK_Greek_upsilondieresis,0x7b9,7672,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_upsilondieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_upsilonaccentdieresis
	CompareConstant(GDK_Greek_upsilonaccentdieresis,0x7ba,7673,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_upsilonaccentdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_omegaaccent
	CompareConstant(GDK_Greek_omegaaccent,0x7bb,7674,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_omegaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_ALPHA
	CompareConstant(GDK_Greek_ALPHA,0x7c1,7675,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_BETA
	CompareConstant(GDK_Greek_BETA,0x7c2,7676,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_BETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_GAMMA
	CompareConstant(GDK_Greek_GAMMA,0x7c3,7677,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_GAMMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_DELTA
	CompareConstant(GDK_Greek_DELTA,0x7c4,7678,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_DELTA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_EPSILON
	CompareConstant(GDK_Greek_EPSILON,0x7c5,7679,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_EPSILON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_ZETA
	CompareConstant(GDK_Greek_ZETA,0x7c6,7680,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_ZETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_ETA
	CompareConstant(GDK_Greek_ETA,0x7c7,7681,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_ETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_THETA
	CompareConstant(GDK_Greek_THETA,0x7c8,7682,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_THETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_IOTA
	CompareConstant(GDK_Greek_IOTA,0x7c9,7683,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_IOTA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_KAPPA
	CompareConstant(GDK_Greek_KAPPA,0x7ca,7684,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_KAPPA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_LAMDA
	CompareConstant(GDK_Greek_LAMDA,0x7cb,7685,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_LAMDA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_LAMBDA
	CompareConstant(GDK_Greek_LAMBDA,0x7cb,7686,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_LAMBDA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_MU
	CompareConstant(GDK_Greek_MU,0x7cc,7687,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_MU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_NU
	CompareConstant(GDK_Greek_NU,0x7cd,7688,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_NU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_XI
	CompareConstant(GDK_Greek_XI,0x7ce,7689,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_XI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_OMICRON
	CompareConstant(GDK_Greek_OMICRON,0x7cf,7690,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_OMICRON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_PI
	CompareConstant(GDK_Greek_PI,0x7d0,7691,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_RHO
	CompareConstant(GDK_Greek_RHO,0x7d1,7692,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_RHO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_SIGMA
	CompareConstant(GDK_Greek_SIGMA,0x7d2,7693,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_SIGMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_TAU
	CompareConstant(GDK_Greek_TAU,0x7d4,7694,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_TAU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_UPSILON
	CompareConstant(GDK_Greek_UPSILON,0x7d5,7695,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_UPSILON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_PHI
	CompareConstant(GDK_Greek_PHI,0x7d6,7696,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_PHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_CHI
	CompareConstant(GDK_Greek_CHI,0x7d7,7697,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_CHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_PSI
	CompareConstant(GDK_Greek_PSI,0x7d8,7698,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_PSI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_OMEGA
	CompareConstant(GDK_Greek_OMEGA,0x7d9,7699,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_OMEGA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_alpha
	CompareConstant(GDK_Greek_alpha,0x7e1,7700,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_alpha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_beta
	CompareConstant(GDK_Greek_beta,0x7e2,7701,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_beta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_gamma
	CompareConstant(GDK_Greek_gamma,0x7e3,7702,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_gamma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_delta
	CompareConstant(GDK_Greek_delta,0x7e4,7703,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_delta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_epsilon
	CompareConstant(GDK_Greek_epsilon,0x7e5,7704,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_epsilon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_zeta
	CompareConstant(GDK_Greek_zeta,0x7e6,7705,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_zeta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_eta
	CompareConstant(GDK_Greek_eta,0x7e7,7706,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_eta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_theta
	CompareConstant(GDK_Greek_theta,0x7e8,7707,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_theta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_iota
	CompareConstant(GDK_Greek_iota,0x7e9,7708,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_iota\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_kappa
	CompareConstant(GDK_Greek_kappa,0x7ea,7709,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_kappa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_lamda
	CompareConstant(GDK_Greek_lamda,0x7eb,7710,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_lamda\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_lambda
	CompareConstant(GDK_Greek_lambda,0x7eb,7711,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_lambda\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_mu
	CompareConstant(GDK_Greek_mu,0x7ec,7712,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_mu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_nu
	CompareConstant(GDK_Greek_nu,0x7ed,7713,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_nu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_xi
	CompareConstant(GDK_Greek_xi,0x7ee,7714,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_xi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_omicron
	CompareConstant(GDK_Greek_omicron,0x7ef,7715,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_omicron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_pi
	CompareConstant(GDK_Greek_pi,0x7f0,7716,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_pi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_rho
	CompareConstant(GDK_Greek_rho,0x7f1,7717,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_rho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_sigma
	CompareConstant(GDK_Greek_sigma,0x7f2,7718,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_sigma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_finalsmallsigma
	CompareConstant(GDK_Greek_finalsmallsigma,0x7f3,7719,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_finalsmallsigma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_tau
	CompareConstant(GDK_Greek_tau,0x7f4,7720,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_tau\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_upsilon
	CompareConstant(GDK_Greek_upsilon,0x7f5,7721,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_upsilon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_phi
	CompareConstant(GDK_Greek_phi,0x7f6,7722,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_phi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_chi
	CompareConstant(GDK_Greek_chi,0x7f7,7723,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_chi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_psi
	CompareConstant(GDK_Greek_psi,0x7f8,7724,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_psi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_omega
	CompareConstant(GDK_Greek_omega,0x7f9,7725,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_omega\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Greek_switch
	CompareConstant(GDK_Greek_switch,0xFF7E,7726,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Greek_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftradical
	CompareConstant(GDK_leftradical,0x8a1,7727,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftradical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_topleftradical
	CompareConstant(GDK_topleftradical,0x8a2,7728,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_topleftradical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_horizconnector
	CompareConstant(GDK_horizconnector,0x8a3,7729,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_horizconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_topintegral
	CompareConstant(GDK_topintegral,0x8a4,7730,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_topintegral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botintegral
	CompareConstant(GDK_botintegral,0x8a5,7731,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botintegral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_vertconnector
	CompareConstant(GDK_vertconnector,0x8a6,7732,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_vertconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_topleftsqbracket
	CompareConstant(GDK_topleftsqbracket,0x8a7,7733,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_topleftsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botleftsqbracket
	CompareConstant(GDK_botleftsqbracket,0x8a8,7734,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botleftsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_toprightsqbracket
	CompareConstant(GDK_toprightsqbracket,0x8a9,7735,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_toprightsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botrightsqbracket
	CompareConstant(GDK_botrightsqbracket,0x8aa,7736,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botrightsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_topleftparens
	CompareConstant(GDK_topleftparens,0x8ab,7737,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_topleftparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botleftparens
	CompareConstant(GDK_botleftparens,0x8ac,7738,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botleftparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_toprightparens
	CompareConstant(GDK_toprightparens,0x8ad,7739,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_toprightparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botrightparens
	CompareConstant(GDK_botrightparens,0x8ae,7740,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botrightparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftmiddlecurlybrace
	CompareConstant(GDK_leftmiddlecurlybrace,0x8af,7741,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftmiddlecurlybrace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightmiddlecurlybrace
	CompareConstant(GDK_rightmiddlecurlybrace,0x8b0,7742,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightmiddlecurlybrace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_topleftsummation
	CompareConstant(GDK_topleftsummation,0x8b1,7743,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_topleftsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botleftsummation
	CompareConstant(GDK_botleftsummation,0x8b2,7744,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botleftsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_topvertsummationconnector
	CompareConstant(GDK_topvertsummationconnector,0x8b3,7745,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_topvertsummationconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botvertsummationconnector
	CompareConstant(GDK_botvertsummationconnector,0x8b4,7746,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botvertsummationconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_toprightsummation
	CompareConstant(GDK_toprightsummation,0x8b5,7747,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_toprightsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_botrightsummation
	CompareConstant(GDK_botrightsummation,0x8b6,7748,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_botrightsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightmiddlesummation
	CompareConstant(GDK_rightmiddlesummation,0x8b7,7749,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightmiddlesummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lessthanequal
	CompareConstant(GDK_lessthanequal,0x8bc,7750,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lessthanequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_notequal
	CompareConstant(GDK_notequal,0x8bd,7751,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_notequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_greaterthanequal
	CompareConstant(GDK_greaterthanequal,0x8be,7752,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_greaterthanequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_integral
	CompareConstant(GDK_integral,0x8bf,7753,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_integral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_therefore
	CompareConstant(GDK_therefore,0x8c0,7754,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_therefore\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_variation
	CompareConstant(GDK_variation,0x8c1,7755,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_variation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_infinity
	CompareConstant(GDK_infinity,0x8c2,7756,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_infinity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_nabla
	CompareConstant(GDK_nabla,0x8c5,7757,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_nabla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_approximate
	CompareConstant(GDK_approximate,0x8c8,7758,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_approximate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_similarequal
	CompareConstant(GDK_similarequal,0x8c9,7759,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_similarequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ifonlyif
	CompareConstant(GDK_ifonlyif,0x8cd,7760,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ifonlyif\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_implies
	CompareConstant(GDK_implies,0x8ce,7761,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_implies\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_identical
	CompareConstant(GDK_identical,0x8cf,7762,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_identical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_radical
	CompareConstant(GDK_radical,0x8d6,7763,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_radical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_includedin
	CompareConstant(GDK_includedin,0x8da,7764,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_includedin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_includes
	CompareConstant(GDK_includes,0x8db,7765,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_includes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_intersection
	CompareConstant(GDK_intersection,0x8dc,7766,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_intersection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_union
	CompareConstant(GDK_union,0x8dd,7767,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_union\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_logicaland
	CompareConstant(GDK_logicaland,0x8de,7768,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_logicaland\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_logicalor
	CompareConstant(GDK_logicalor,0x8df,7769,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_logicalor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_partialderivative
	CompareConstant(GDK_partialderivative,0x8ef,7770,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_partialderivative\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_function
	CompareConstant(GDK_function,0x8f6,7771,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_function\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftarrow
	CompareConstant(GDK_leftarrow,0x8fb,7772,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftarrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_uparrow
	CompareConstant(GDK_uparrow,0x8fc,7773,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_uparrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightarrow
	CompareConstant(GDK_rightarrow,0x8fd,7774,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightarrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_downarrow
	CompareConstant(GDK_downarrow,0x8fe,7775,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_downarrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_blank
	CompareConstant(GDK_blank,0x9df,7776,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_blank\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_soliddiamond
	CompareConstant(GDK_soliddiamond,0x9e0,7777,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_soliddiamond\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_checkerboard
	CompareConstant(GDK_checkerboard,0x9e1,7778,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_checkerboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ht
	CompareConstant(GDK_ht,0x9e2,7779,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ht\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ff
	CompareConstant(GDK_ff,0x9e3,7780,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_cr
	CompareConstant(GDK_cr,0x9e4,7781,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_cr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lf
	CompareConstant(GDK_lf,0x9e5,7782,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_nl
	CompareConstant(GDK_nl,0x9e8,7783,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_nl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_vt
	CompareConstant(GDK_vt,0x9e9,7784,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_vt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lowrightcorner
	CompareConstant(GDK_lowrightcorner,0x9ea,7785,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lowrightcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_uprightcorner
	CompareConstant(GDK_uprightcorner,0x9eb,7786,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_uprightcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_upleftcorner
	CompareConstant(GDK_upleftcorner,0x9ec,7787,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_upleftcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lowleftcorner
	CompareConstant(GDK_lowleftcorner,0x9ed,7788,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lowleftcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_crossinglines
	CompareConstant(GDK_crossinglines,0x9ee,7789,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_crossinglines\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_horizlinescan1
	CompareConstant(GDK_horizlinescan1,0x9ef,7790,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_horizlinescan1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_horizlinescan3
	CompareConstant(GDK_horizlinescan3,0x9f0,7791,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_horizlinescan3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_horizlinescan5
	CompareConstant(GDK_horizlinescan5,0x9f1,7792,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_horizlinescan5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_horizlinescan7
	CompareConstant(GDK_horizlinescan7,0x9f2,7793,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_horizlinescan7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_horizlinescan9
	CompareConstant(GDK_horizlinescan9,0x9f3,7794,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_horizlinescan9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftt
	CompareConstant(GDK_leftt,0x9f4,7795,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightt
	CompareConstant(GDK_rightt,0x9f5,7796,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_bott
	CompareConstant(GDK_bott,0x9f6,7797,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_bott\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_topt
	CompareConstant(GDK_topt,0x9f7,7798,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_topt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_vertbar
	CompareConstant(GDK_vertbar,0x9f8,7799,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_vertbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_emspace
	CompareConstant(GDK_emspace,0xaa1,7800,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_emspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_enspace
	CompareConstant(GDK_enspace,0xaa2,7801,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_enspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_em3space
	CompareConstant(GDK_em3space,0xaa3,7802,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_em3space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_em4space
	CompareConstant(GDK_em4space,0xaa4,7803,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_em4space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_digitspace
	CompareConstant(GDK_digitspace,0xaa5,7804,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_digitspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_punctspace
	CompareConstant(GDK_punctspace,0xaa6,7805,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_punctspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_thinspace
	CompareConstant(GDK_thinspace,0xaa7,7806,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_thinspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hairspace
	CompareConstant(GDK_hairspace,0xaa8,7807,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hairspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_emdash
	CompareConstant(GDK_emdash,0xaa9,7808,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_emdash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_endash
	CompareConstant(GDK_endash,0xaaa,7809,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_endash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_signifblank
	CompareConstant(GDK_signifblank,0xaac,7810,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_signifblank\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ellipsis
	CompareConstant(GDK_ellipsis,0xaae,7811,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ellipsis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_doubbaselinedot
	CompareConstant(GDK_doubbaselinedot,0xaaf,7812,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_doubbaselinedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_onethird
	CompareConstant(GDK_onethird,0xab0,7813,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_onethird\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_twothirds
	CompareConstant(GDK_twothirds,0xab1,7814,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_twothirds\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_onefifth
	CompareConstant(GDK_onefifth,0xab2,7815,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_onefifth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_twofifths
	CompareConstant(GDK_twofifths,0xab3,7816,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_twofifths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_threefifths
	CompareConstant(GDK_threefifths,0xab4,7817,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_threefifths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_fourfifths
	CompareConstant(GDK_fourfifths,0xab5,7818,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_fourfifths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_onesixth
	CompareConstant(GDK_onesixth,0xab6,7819,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_onesixth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_fivesixths
	CompareConstant(GDK_fivesixths,0xab7,7820,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_fivesixths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_careof
	CompareConstant(GDK_careof,0xab8,7821,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_careof\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_figdash
	CompareConstant(GDK_figdash,0xabb,7822,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_figdash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftanglebracket
	CompareConstant(GDK_leftanglebracket,0xabc,7823,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftanglebracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_decimalpoint
	CompareConstant(GDK_decimalpoint,0xabd,7824,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_decimalpoint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightanglebracket
	CompareConstant(GDK_rightanglebracket,0xabe,7825,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightanglebracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_marker
	CompareConstant(GDK_marker,0xabf,7826,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_marker\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_oneeighth
	CompareConstant(GDK_oneeighth,0xac3,7827,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_oneeighth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_threeeighths
	CompareConstant(GDK_threeeighths,0xac4,7828,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_threeeighths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_fiveeighths
	CompareConstant(GDK_fiveeighths,0xac5,7829,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_fiveeighths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_seveneighths
	CompareConstant(GDK_seveneighths,0xac6,7830,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_seveneighths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_trademark
	CompareConstant(GDK_trademark,0xac9,7831,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_trademark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_signaturemark
	CompareConstant(GDK_signaturemark,0xaca,7832,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_signaturemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_trademarkincircle
	CompareConstant(GDK_trademarkincircle,0xacb,7833,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_trademarkincircle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftopentriangle
	CompareConstant(GDK_leftopentriangle,0xacc,7834,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftopentriangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightopentriangle
	CompareConstant(GDK_rightopentriangle,0xacd,7835,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightopentriangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_emopencircle
	CompareConstant(GDK_emopencircle,0xace,7836,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_emopencircle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_emopenrectangle
	CompareConstant(GDK_emopenrectangle,0xacf,7837,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_emopenrectangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftsinglequotemark
	CompareConstant(GDK_leftsinglequotemark,0xad0,7838,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftsinglequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightsinglequotemark
	CompareConstant(GDK_rightsinglequotemark,0xad1,7839,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightsinglequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftdoublequotemark
	CompareConstant(GDK_leftdoublequotemark,0xad2,7840,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftdoublequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightdoublequotemark
	CompareConstant(GDK_rightdoublequotemark,0xad3,7841,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightdoublequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_prescription
	CompareConstant(GDK_prescription,0xad4,7842,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_prescription\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_minutes
	CompareConstant(GDK_minutes,0xad6,7843,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_minutes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_seconds
	CompareConstant(GDK_seconds,0xad7,7844,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_seconds\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_latincross
	CompareConstant(GDK_latincross,0xad9,7845,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_latincross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hexagram
	CompareConstant(GDK_hexagram,0xada,7846,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hexagram\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_filledrectbullet
	CompareConstant(GDK_filledrectbullet,0xadb,7847,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_filledrectbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_filledlefttribullet
	CompareConstant(GDK_filledlefttribullet,0xadc,7848,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_filledlefttribullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_filledrighttribullet
	CompareConstant(GDK_filledrighttribullet,0xadd,7849,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_filledrighttribullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_emfilledcircle
	CompareConstant(GDK_emfilledcircle,0xade,7850,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_emfilledcircle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_emfilledrect
	CompareConstant(GDK_emfilledrect,0xadf,7851,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_emfilledrect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_enopencircbullet
	CompareConstant(GDK_enopencircbullet,0xae0,7852,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_enopencircbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_enopensquarebullet
	CompareConstant(GDK_enopensquarebullet,0xae1,7853,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_enopensquarebullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_openrectbullet
	CompareConstant(GDK_openrectbullet,0xae2,7854,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_openrectbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_opentribulletup
	CompareConstant(GDK_opentribulletup,0xae3,7855,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_opentribulletup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_opentribulletdown
	CompareConstant(GDK_opentribulletdown,0xae4,7856,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_opentribulletdown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_openstar
	CompareConstant(GDK_openstar,0xae5,7857,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_openstar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_enfilledcircbullet
	CompareConstant(GDK_enfilledcircbullet,0xae6,7858,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_enfilledcircbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_enfilledsqbullet
	CompareConstant(GDK_enfilledsqbullet,0xae7,7859,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_enfilledsqbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_filledtribulletup
	CompareConstant(GDK_filledtribulletup,0xae8,7860,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_filledtribulletup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_filledtribulletdown
	CompareConstant(GDK_filledtribulletdown,0xae9,7861,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_filledtribulletdown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftpointer
	CompareConstant(GDK_leftpointer,0xaea,7862,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftpointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightpointer
	CompareConstant(GDK_rightpointer,0xaeb,7863,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightpointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_club
	CompareConstant(GDK_club,0xaec,7864,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_club\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_diamond
	CompareConstant(GDK_diamond,0xaed,7865,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_diamond\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_heart
	CompareConstant(GDK_heart,0xaee,7866,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_heart\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_maltesecross
	CompareConstant(GDK_maltesecross,0xaf0,7867,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_maltesecross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_dagger
	CompareConstant(GDK_dagger,0xaf1,7868,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_dagger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_doubledagger
	CompareConstant(GDK_doubledagger,0xaf2,7869,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_doubledagger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_checkmark
	CompareConstant(GDK_checkmark,0xaf3,7870,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_checkmark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ballotcross
	CompareConstant(GDK_ballotcross,0xaf4,7871,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ballotcross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_musicalsharp
	CompareConstant(GDK_musicalsharp,0xaf5,7872,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_musicalsharp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_musicalflat
	CompareConstant(GDK_musicalflat,0xaf6,7873,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_musicalflat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_malesymbol
	CompareConstant(GDK_malesymbol,0xaf7,7874,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_malesymbol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_femalesymbol
	CompareConstant(GDK_femalesymbol,0xaf8,7875,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_femalesymbol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_telephone
	CompareConstant(GDK_telephone,0xaf9,7876,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_telephone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_telephonerecorder
	CompareConstant(GDK_telephonerecorder,0xafa,7877,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_telephonerecorder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_phonographcopyright
	CompareConstant(GDK_phonographcopyright,0xafb,7878,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_phonographcopyright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_caret
	CompareConstant(GDK_caret,0xafc,7879,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_caret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_singlelowquotemark
	CompareConstant(GDK_singlelowquotemark,0xafd,7880,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_singlelowquotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_doublelowquotemark
	CompareConstant(GDK_doublelowquotemark,0xafe,7881,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_doublelowquotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_cursor
	CompareConstant(GDK_cursor,0xaff,7882,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_cursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftcaret
	CompareConstant(GDK_leftcaret,0xba3,7883,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightcaret
	CompareConstant(GDK_rightcaret,0xba6,7884,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_downcaret
	CompareConstant(GDK_downcaret,0xba8,7885,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_downcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_upcaret
	CompareConstant(GDK_upcaret,0xba9,7886,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_upcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_overbar
	CompareConstant(GDK_overbar,0xbc0,7887,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_overbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_downtack
	CompareConstant(GDK_downtack,0xbc2,7888,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_downtack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_upshoe
	CompareConstant(GDK_upshoe,0xbc3,7889,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_upshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_downstile
	CompareConstant(GDK_downstile,0xbc4,7890,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_downstile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_underbar
	CompareConstant(GDK_underbar,0xbc6,7891,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_underbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_jot
	CompareConstant(GDK_jot,0xbca,7892,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_jot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_quad
	CompareConstant(GDK_quad,0xbcc,7893,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_quad\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_uptack
	CompareConstant(GDK_uptack,0xbce,7894,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_uptack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_circle
	CompareConstant(GDK_circle,0xbcf,7895,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_circle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_upstile
	CompareConstant(GDK_upstile,0xbd3,7896,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_upstile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_downshoe
	CompareConstant(GDK_downshoe,0xbd6,7897,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_downshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_rightshoe
	CompareConstant(GDK_rightshoe,0xbd8,7898,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_rightshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_leftshoe
	CompareConstant(GDK_leftshoe,0xbda,7899,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_leftshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_lefttack
	CompareConstant(GDK_lefttack,0xbdc,7900,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_lefttack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_righttack
	CompareConstant(GDK_righttack,0xbfc,7901,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_righttack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_doublelowline
	CompareConstant(GDK_hebrew_doublelowline,0xcdf,7902,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_doublelowline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_aleph
	CompareConstant(GDK_hebrew_aleph,0xce0,7903,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_aleph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_bet
	CompareConstant(GDK_hebrew_bet,0xce1,7904,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_bet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_beth
	CompareConstant(GDK_hebrew_beth,0xce1,7905,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_beth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_gimel
	CompareConstant(GDK_hebrew_gimel,0xce2,7906,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_gimel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_gimmel
	CompareConstant(GDK_hebrew_gimmel,0xce2,7907,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_gimmel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_dalet
	CompareConstant(GDK_hebrew_dalet,0xce3,7908,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_dalet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_daleth
	CompareConstant(GDK_hebrew_daleth,0xce3,7909,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_daleth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_he
	CompareConstant(GDK_hebrew_he,0xce4,7910,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_he\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_waw
	CompareConstant(GDK_hebrew_waw,0xce5,7911,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_waw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_zain
	CompareConstant(GDK_hebrew_zain,0xce6,7912,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_zain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_zayin
	CompareConstant(GDK_hebrew_zayin,0xce6,7913,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_zayin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_chet
	CompareConstant(GDK_hebrew_chet,0xce7,7914,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_chet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_het
	CompareConstant(GDK_hebrew_het,0xce7,7915,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_het\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_tet
	CompareConstant(GDK_hebrew_tet,0xce8,7916,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_tet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_teth
	CompareConstant(GDK_hebrew_teth,0xce8,7917,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_teth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_yod
	CompareConstant(GDK_hebrew_yod,0xce9,7918,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_yod\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_finalkaph
	CompareConstant(GDK_hebrew_finalkaph,0xcea,7919,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_finalkaph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_kaph
	CompareConstant(GDK_hebrew_kaph,0xceb,7920,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_kaph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_lamed
	CompareConstant(GDK_hebrew_lamed,0xcec,7921,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_lamed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_finalmem
	CompareConstant(GDK_hebrew_finalmem,0xced,7922,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_finalmem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_mem
	CompareConstant(GDK_hebrew_mem,0xcee,7923,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_mem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_finalnun
	CompareConstant(GDK_hebrew_finalnun,0xcef,7924,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_finalnun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_nun
	CompareConstant(GDK_hebrew_nun,0xcf0,7925,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_nun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_samech
	CompareConstant(GDK_hebrew_samech,0xcf1,7926,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_samech\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_samekh
	CompareConstant(GDK_hebrew_samekh,0xcf1,7927,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_samekh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_ayin
	CompareConstant(GDK_hebrew_ayin,0xcf2,7928,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_ayin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_finalpe
	CompareConstant(GDK_hebrew_finalpe,0xcf3,7929,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_finalpe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_pe
	CompareConstant(GDK_hebrew_pe,0xcf4,7930,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_pe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_finalzade
	CompareConstant(GDK_hebrew_finalzade,0xcf5,7931,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_finalzade\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_finalzadi
	CompareConstant(GDK_hebrew_finalzadi,0xcf5,7932,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_finalzadi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_zade
	CompareConstant(GDK_hebrew_zade,0xcf6,7933,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_zade\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_zadi
	CompareConstant(GDK_hebrew_zadi,0xcf6,7934,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_zadi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_qoph
	CompareConstant(GDK_hebrew_qoph,0xcf7,7935,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_qoph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_kuf
	CompareConstant(GDK_hebrew_kuf,0xcf7,7936,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_kuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_resh
	CompareConstant(GDK_hebrew_resh,0xcf8,7937,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_resh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_shin
	CompareConstant(GDK_hebrew_shin,0xcf9,7938,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_shin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_taw
	CompareConstant(GDK_hebrew_taw,0xcfa,7939,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_taw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_hebrew_taf
	CompareConstant(GDK_hebrew_taf,0xcfa,7940,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_hebrew_taf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hebrew_switch
	CompareConstant(GDK_Hebrew_switch,0xFF7E,7941,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hebrew_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_kokai
	CompareConstant(GDK_Thai_kokai,0xda1,7942,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_kokai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_khokhai
	CompareConstant(GDK_Thai_khokhai,0xda2,7943,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_khokhai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_khokhuat
	CompareConstant(GDK_Thai_khokhuat,0xda3,7944,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_khokhuat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_khokhwai
	CompareConstant(GDK_Thai_khokhwai,0xda4,7945,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_khokhwai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_khokhon
	CompareConstant(GDK_Thai_khokhon,0xda5,7946,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_khokhon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_khorakhang
	CompareConstant(GDK_Thai_khorakhang,0xda6,7947,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_khorakhang\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_ngongu
	CompareConstant(GDK_Thai_ngongu,0xda7,7948,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_ngongu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_chochan
	CompareConstant(GDK_Thai_chochan,0xda8,7949,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_chochan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_choching
	CompareConstant(GDK_Thai_choching,0xda9,7950,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_choching\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_chochang
	CompareConstant(GDK_Thai_chochang,0xdaa,7951,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_chochang\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_soso
	CompareConstant(GDK_Thai_soso,0xdab,7952,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_soso\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_chochoe
	CompareConstant(GDK_Thai_chochoe,0xdac,7953,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_chochoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_yoying
	CompareConstant(GDK_Thai_yoying,0xdad,7954,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_yoying\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_dochada
	CompareConstant(GDK_Thai_dochada,0xdae,7955,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_dochada\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_topatak
	CompareConstant(GDK_Thai_topatak,0xdaf,7956,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_topatak\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_thothan
	CompareConstant(GDK_Thai_thothan,0xdb0,7957,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_thothan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_thonangmontho
	CompareConstant(GDK_Thai_thonangmontho,0xdb1,7958,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_thonangmontho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_thophuthao
	CompareConstant(GDK_Thai_thophuthao,0xdb2,7959,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_thophuthao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_nonen
	CompareConstant(GDK_Thai_nonen,0xdb3,7960,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_nonen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_dodek
	CompareConstant(GDK_Thai_dodek,0xdb4,7961,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_dodek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_totao
	CompareConstant(GDK_Thai_totao,0xdb5,7962,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_totao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_thothung
	CompareConstant(GDK_Thai_thothung,0xdb6,7963,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_thothung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_thothahan
	CompareConstant(GDK_Thai_thothahan,0xdb7,7964,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_thothahan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_thothong
	CompareConstant(GDK_Thai_thothong,0xdb8,7965,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_thothong\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_nonu
	CompareConstant(GDK_Thai_nonu,0xdb9,7966,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_nonu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_bobaimai
	CompareConstant(GDK_Thai_bobaimai,0xdba,7967,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_bobaimai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_popla
	CompareConstant(GDK_Thai_popla,0xdbb,7968,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_popla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_phophung
	CompareConstant(GDK_Thai_phophung,0xdbc,7969,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_phophung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_fofa
	CompareConstant(GDK_Thai_fofa,0xdbd,7970,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_fofa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_phophan
	CompareConstant(GDK_Thai_phophan,0xdbe,7971,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_phophan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_fofan
	CompareConstant(GDK_Thai_fofan,0xdbf,7972,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_fofan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_phosamphao
	CompareConstant(GDK_Thai_phosamphao,0xdc0,7973,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_phosamphao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_moma
	CompareConstant(GDK_Thai_moma,0xdc1,7974,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_moma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_yoyak
	CompareConstant(GDK_Thai_yoyak,0xdc2,7975,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_yoyak\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_rorua
	CompareConstant(GDK_Thai_rorua,0xdc3,7976,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_rorua\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_ru
	CompareConstant(GDK_Thai_ru,0xdc4,7977,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_ru\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_loling
	CompareConstant(GDK_Thai_loling,0xdc5,7978,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_loling\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lu
	CompareConstant(GDK_Thai_lu,0xdc6,7979,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_wowaen
	CompareConstant(GDK_Thai_wowaen,0xdc7,7980,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_wowaen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sosala
	CompareConstant(GDK_Thai_sosala,0xdc8,7981,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sosala\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sorusi
	CompareConstant(GDK_Thai_sorusi,0xdc9,7982,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sorusi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sosua
	CompareConstant(GDK_Thai_sosua,0xdca,7983,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sosua\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_hohip
	CompareConstant(GDK_Thai_hohip,0xdcb,7984,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_hohip\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lochula
	CompareConstant(GDK_Thai_lochula,0xdcc,7985,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lochula\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_oang
	CompareConstant(GDK_Thai_oang,0xdcd,7986,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_oang\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_honokhuk
	CompareConstant(GDK_Thai_honokhuk,0xdce,7987,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_honokhuk\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_paiyannoi
	CompareConstant(GDK_Thai_paiyannoi,0xdcf,7988,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_paiyannoi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraa
	CompareConstant(GDK_Thai_saraa,0xdd0,7989,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maihanakat
	CompareConstant(GDK_Thai_maihanakat,0xdd1,7990,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maihanakat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraaa
	CompareConstant(GDK_Thai_saraaa,0xdd2,7991,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraaa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraam
	CompareConstant(GDK_Thai_saraam,0xdd3,7992,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sarai
	CompareConstant(GDK_Thai_sarai,0xdd4,7993,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sarai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraii
	CompareConstant(GDK_Thai_saraii,0xdd5,7994,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraii\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraue
	CompareConstant(GDK_Thai_saraue,0xdd6,7995,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sarauee
	CompareConstant(GDK_Thai_sarauee,0xdd7,7996,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sarauee\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sarau
	CompareConstant(GDK_Thai_sarau,0xdd8,7997,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sarau\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sarauu
	CompareConstant(GDK_Thai_sarauu,0xdd9,7998,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sarauu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_phinthu
	CompareConstant(GDK_Thai_phinthu,0xdda,7999,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_phinthu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maihanakat_maitho
	CompareConstant(GDK_Thai_maihanakat_maitho,0xdde,8000,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maihanakat_maitho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_baht
	CompareConstant(GDK_Thai_baht,0xddf,8001,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_baht\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sarae
	CompareConstant(GDK_Thai_sarae,0xde0,8002,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sarae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraae
	CompareConstant(GDK_Thai_saraae,0xde1,8003,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_sarao
	CompareConstant(GDK_Thai_sarao,0xde2,8004,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_sarao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraaimaimuan
	CompareConstant(GDK_Thai_saraaimaimuan,0xde3,8005,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraaimaimuan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_saraaimaimalai
	CompareConstant(GDK_Thai_saraaimaimalai,0xde4,8006,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_saraaimaimalai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lakkhangyao
	CompareConstant(GDK_Thai_lakkhangyao,0xde5,8007,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lakkhangyao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maiyamok
	CompareConstant(GDK_Thai_maiyamok,0xde6,8008,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maiyamok\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maitaikhu
	CompareConstant(GDK_Thai_maitaikhu,0xde7,8009,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maitaikhu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maiek
	CompareConstant(GDK_Thai_maiek,0xde8,8010,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maiek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maitho
	CompareConstant(GDK_Thai_maitho,0xde9,8011,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maitho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maitri
	CompareConstant(GDK_Thai_maitri,0xdea,8012,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maitri\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_maichattawa
	CompareConstant(GDK_Thai_maichattawa,0xdeb,8013,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_maichattawa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_thanthakhat
	CompareConstant(GDK_Thai_thanthakhat,0xdec,8014,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_thanthakhat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_nikhahit
	CompareConstant(GDK_Thai_nikhahit,0xded,8015,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_nikhahit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_leksun
	CompareConstant(GDK_Thai_leksun,0xdf0,8016,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_leksun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_leknung
	CompareConstant(GDK_Thai_leknung,0xdf1,8017,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_leknung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_leksong
	CompareConstant(GDK_Thai_leksong,0xdf2,8018,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_leksong\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_leksam
	CompareConstant(GDK_Thai_leksam,0xdf3,8019,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_leksam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_leksi
	CompareConstant(GDK_Thai_leksi,0xdf4,8020,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_leksi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lekha
	CompareConstant(GDK_Thai_lekha,0xdf5,8021,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lekha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lekhok
	CompareConstant(GDK_Thai_lekhok,0xdf6,8022,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lekhok\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lekchet
	CompareConstant(GDK_Thai_lekchet,0xdf7,8023,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lekchet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lekpaet
	CompareConstant(GDK_Thai_lekpaet,0xdf8,8024,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lekpaet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Thai_lekkao
	CompareConstant(GDK_Thai_lekkao,0xdf9,8025,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Thai_lekkao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul
	CompareConstant(GDK_Hangul,0xff31,8026,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Start
	CompareConstant(GDK_Hangul_Start,0xff32,8027,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Start\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_End
	CompareConstant(GDK_Hangul_End,0xff33,8028,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Hanja
	CompareConstant(GDK_Hangul_Hanja,0xff34,8029,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Hanja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Jamo
	CompareConstant(GDK_Hangul_Jamo,0xff35,8030,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Jamo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Romaja
	CompareConstant(GDK_Hangul_Romaja,0xff36,8031,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Romaja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Codeinput
	CompareConstant(GDK_Hangul_Codeinput,0xff37,8032,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Codeinput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Jeonja
	CompareConstant(GDK_Hangul_Jeonja,0xff38,8033,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Jeonja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Banja
	CompareConstant(GDK_Hangul_Banja,0xff39,8034,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Banja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_PreHanja
	CompareConstant(GDK_Hangul_PreHanja,0xff3a,8035,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_PreHanja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_PostHanja
	CompareConstant(GDK_Hangul_PostHanja,0xff3b,8036,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_PostHanja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SingleCandidate
	CompareConstant(GDK_Hangul_SingleCandidate,0xff3c,8037,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SingleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_MultipleCandidate
	CompareConstant(GDK_Hangul_MultipleCandidate,0xff3d,8038,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_MultipleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_PreviousCandidate
	CompareConstant(GDK_Hangul_PreviousCandidate,0xff3e,8039,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_PreviousCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Special
	CompareConstant(GDK_Hangul_Special,0xff3f,8040,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Special\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_switch
	CompareConstant(GDK_Hangul_switch,0xFF7E,8041,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Kiyeog
	CompareConstant(GDK_Hangul_Kiyeog,0xea1,8042,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Kiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SsangKiyeog
	CompareConstant(GDK_Hangul_SsangKiyeog,0xea2,8043,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SsangKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_KiyeogSios
	CompareConstant(GDK_Hangul_KiyeogSios,0xea3,8044,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_KiyeogSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Nieun
	CompareConstant(GDK_Hangul_Nieun,0xea4,8045,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Nieun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_NieunJieuj
	CompareConstant(GDK_Hangul_NieunJieuj,0xea5,8046,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_NieunJieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_NieunHieuh
	CompareConstant(GDK_Hangul_NieunHieuh,0xea6,8047,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_NieunHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Dikeud
	CompareConstant(GDK_Hangul_Dikeud,0xea7,8048,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Dikeud\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SsangDikeud
	CompareConstant(GDK_Hangul_SsangDikeud,0xea8,8049,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SsangDikeud\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Rieul
	CompareConstant(GDK_Hangul_Rieul,0xea9,8050,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Rieul\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulKiyeog
	CompareConstant(GDK_Hangul_RieulKiyeog,0xeaa,8051,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulMieum
	CompareConstant(GDK_Hangul_RieulMieum,0xeab,8052,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulMieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulPieub
	CompareConstant(GDK_Hangul_RieulPieub,0xeac,8053,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulSios
	CompareConstant(GDK_Hangul_RieulSios,0xead,8054,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulTieut
	CompareConstant(GDK_Hangul_RieulTieut,0xeae,8055,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulTieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulPhieuf
	CompareConstant(GDK_Hangul_RieulPhieuf,0xeaf,8056,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulPhieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulHieuh
	CompareConstant(GDK_Hangul_RieulHieuh,0xeb0,8057,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Mieum
	CompareConstant(GDK_Hangul_Mieum,0xeb1,8058,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Mieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Pieub
	CompareConstant(GDK_Hangul_Pieub,0xeb2,8059,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Pieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SsangPieub
	CompareConstant(GDK_Hangul_SsangPieub,0xeb3,8060,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SsangPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_PieubSios
	CompareConstant(GDK_Hangul_PieubSios,0xeb4,8061,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_PieubSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Sios
	CompareConstant(GDK_Hangul_Sios,0xeb5,8062,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Sios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SsangSios
	CompareConstant(GDK_Hangul_SsangSios,0xeb6,8063,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SsangSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Ieung
	CompareConstant(GDK_Hangul_Ieung,0xeb7,8064,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Ieung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Jieuj
	CompareConstant(GDK_Hangul_Jieuj,0xeb8,8065,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Jieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SsangJieuj
	CompareConstant(GDK_Hangul_SsangJieuj,0xeb9,8066,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SsangJieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Cieuc
	CompareConstant(GDK_Hangul_Cieuc,0xeba,8067,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Cieuc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Khieuq
	CompareConstant(GDK_Hangul_Khieuq,0xebb,8068,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Khieuq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Tieut
	CompareConstant(GDK_Hangul_Tieut,0xebc,8069,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Tieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Phieuf
	CompareConstant(GDK_Hangul_Phieuf,0xebd,8070,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Phieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_Hieuh
	CompareConstant(GDK_Hangul_Hieuh,0xebe,8071,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_Hieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_A
	CompareConstant(GDK_Hangul_A,0xebf,8072,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_AE
	CompareConstant(GDK_Hangul_AE,0xec0,8073,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_AE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YA
	CompareConstant(GDK_Hangul_YA,0xec1,8074,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YAE
	CompareConstant(GDK_Hangul_YAE,0xec2,8075,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YAE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_EO
	CompareConstant(GDK_Hangul_EO,0xec3,8076,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_EO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_E
	CompareConstant(GDK_Hangul_E,0xec4,8077,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YEO
	CompareConstant(GDK_Hangul_YEO,0xec5,8078,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YEO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YE
	CompareConstant(GDK_Hangul_YE,0xec6,8079,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_O
	CompareConstant(GDK_Hangul_O,0xec7,8080,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_WA
	CompareConstant(GDK_Hangul_WA,0xec8,8081,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_WA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_WAE
	CompareConstant(GDK_Hangul_WAE,0xec9,8082,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_WAE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_OE
	CompareConstant(GDK_Hangul_OE,0xeca,8083,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_OE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YO
	CompareConstant(GDK_Hangul_YO,0xecb,8084,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_U
	CompareConstant(GDK_Hangul_U,0xecc,8085,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_WEO
	CompareConstant(GDK_Hangul_WEO,0xecd,8086,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_WEO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_WE
	CompareConstant(GDK_Hangul_WE,0xece,8087,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_WE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_WI
	CompareConstant(GDK_Hangul_WI,0xecf,8088,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_WI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YU
	CompareConstant(GDK_Hangul_YU,0xed0,8089,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_EU
	CompareConstant(GDK_Hangul_EU,0xed1,8090,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_EU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YI
	CompareConstant(GDK_Hangul_YI,0xed2,8091,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_I
	CompareConstant(GDK_Hangul_I,0xed3,8092,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Kiyeog
	CompareConstant(GDK_Hangul_J_Kiyeog,0xed4,8093,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Kiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_SsangKiyeog
	CompareConstant(GDK_Hangul_J_SsangKiyeog,0xed5,8094,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_SsangKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_KiyeogSios
	CompareConstant(GDK_Hangul_J_KiyeogSios,0xed6,8095,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_KiyeogSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Nieun
	CompareConstant(GDK_Hangul_J_Nieun,0xed7,8096,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Nieun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_NieunJieuj
	CompareConstant(GDK_Hangul_J_NieunJieuj,0xed8,8097,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_NieunJieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_NieunHieuh
	CompareConstant(GDK_Hangul_J_NieunHieuh,0xed9,8098,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_NieunHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Dikeud
	CompareConstant(GDK_Hangul_J_Dikeud,0xeda,8099,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Dikeud\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Rieul
	CompareConstant(GDK_Hangul_J_Rieul,0xedb,8100,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Rieul\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_RieulKiyeog
	CompareConstant(GDK_Hangul_J_RieulKiyeog,0xedc,8101,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_RieulKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_RieulMieum
	CompareConstant(GDK_Hangul_J_RieulMieum,0xedd,8102,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_RieulMieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_RieulPieub
	CompareConstant(GDK_Hangul_J_RieulPieub,0xede,8103,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_RieulPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_RieulSios
	CompareConstant(GDK_Hangul_J_RieulSios,0xedf,8104,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_RieulSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_RieulTieut
	CompareConstant(GDK_Hangul_J_RieulTieut,0xee0,8105,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_RieulTieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_RieulPhieuf
	CompareConstant(GDK_Hangul_J_RieulPhieuf,0xee1,8106,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_RieulPhieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_RieulHieuh
	CompareConstant(GDK_Hangul_J_RieulHieuh,0xee2,8107,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_RieulHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Mieum
	CompareConstant(GDK_Hangul_J_Mieum,0xee3,8108,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Mieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Pieub
	CompareConstant(GDK_Hangul_J_Pieub,0xee4,8109,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Pieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_PieubSios
	CompareConstant(GDK_Hangul_J_PieubSios,0xee5,8110,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_PieubSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Sios
	CompareConstant(GDK_Hangul_J_Sios,0xee6,8111,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Sios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_SsangSios
	CompareConstant(GDK_Hangul_J_SsangSios,0xee7,8112,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_SsangSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Ieung
	CompareConstant(GDK_Hangul_J_Ieung,0xee8,8113,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Ieung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Jieuj
	CompareConstant(GDK_Hangul_J_Jieuj,0xee9,8114,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Jieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Cieuc
	CompareConstant(GDK_Hangul_J_Cieuc,0xeea,8115,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Cieuc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Khieuq
	CompareConstant(GDK_Hangul_J_Khieuq,0xeeb,8116,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Khieuq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Tieut
	CompareConstant(GDK_Hangul_J_Tieut,0xeec,8117,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Tieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Phieuf
	CompareConstant(GDK_Hangul_J_Phieuf,0xeed,8118,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Phieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_Hieuh
	CompareConstant(GDK_Hangul_J_Hieuh,0xeee,8119,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_Hieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_RieulYeorinHieuh
	CompareConstant(GDK_Hangul_RieulYeorinHieuh,0xeef,8120,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_RieulYeorinHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SunkyeongeumMieum
	CompareConstant(GDK_Hangul_SunkyeongeumMieum,0xef0,8121,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SunkyeongeumMieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SunkyeongeumPieub
	CompareConstant(GDK_Hangul_SunkyeongeumPieub,0xef1,8122,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SunkyeongeumPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_PanSios
	CompareConstant(GDK_Hangul_PanSios,0xef2,8123,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_PanSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_KkogjiDalrinIeung
	CompareConstant(GDK_Hangul_KkogjiDalrinIeung,0xef3,8124,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_KkogjiDalrinIeung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_SunkyeongeumPhieuf
	CompareConstant(GDK_Hangul_SunkyeongeumPhieuf,0xef4,8125,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_SunkyeongeumPhieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_YeorinHieuh
	CompareConstant(GDK_Hangul_YeorinHieuh,0xef5,8126,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_YeorinHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_AraeA
	CompareConstant(GDK_Hangul_AraeA,0xef6,8127,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_AraeA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_AraeAE
	CompareConstant(GDK_Hangul_AraeAE,0xef7,8128,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_AraeAE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_PanSios
	CompareConstant(GDK_Hangul_J_PanSios,0xef8,8129,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_PanSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_KkogjiDalrinIeung
	CompareConstant(GDK_Hangul_J_KkogjiDalrinIeung,0xef9,8130,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_KkogjiDalrinIeung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Hangul_J_YeorinHieuh
	CompareConstant(GDK_Hangul_J_YeorinHieuh,0xefa,8131,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Hangul_J_YeorinHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_Korean_Won
	CompareConstant(GDK_Korean_Won,0xeff,8132,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_Korean_Won\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_EcuSign
	CompareConstant(GDK_EcuSign,0x20a0,8133,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_EcuSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_ColonSign
	CompareConstant(GDK_ColonSign,0x20a1,8134,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_ColonSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_CruzeiroSign
	CompareConstant(GDK_CruzeiroSign,0x20a2,8135,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_CruzeiroSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_FFrancSign
	CompareConstant(GDK_FFrancSign,0x20a3,8136,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_FFrancSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_LiraSign
	CompareConstant(GDK_LiraSign,0x20a4,8137,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_LiraSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_MillSign
	CompareConstant(GDK_MillSign,0x20a5,8138,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_MillSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_NairaSign
	CompareConstant(GDK_NairaSign,0x20a6,8139,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_NairaSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_PesetaSign
	CompareConstant(GDK_PesetaSign,0x20a7,8140,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_PesetaSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_RupeeSign
	CompareConstant(GDK_RupeeSign,0x20a8,8141,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_RupeeSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_WonSign
	CompareConstant(GDK_WonSign,0x20a9,8142,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_WonSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_NewSheqelSign
	CompareConstant(GDK_NewSheqelSign,0x20aa,8143,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_NewSheqelSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_DongSign
	CompareConstant(GDK_DongSign,0x20ab,8144,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_DongSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GDK_EuroSign
	CompareConstant(GDK_EuroSign,0x20ac,8145,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: GDK_EuroSign\n");
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
printf("%d tests passed out of %d tests in gtk-2.0/gdk/gdkkeysyms.h\n\n",pcnt,cnt);
return cnt;
#endif

}
