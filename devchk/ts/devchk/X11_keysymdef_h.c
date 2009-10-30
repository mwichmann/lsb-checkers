/*
 * Test of X11/keysymdef.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <X11/keysym.h>
#include "X11/keysymdef.h"



#ifdef TET_TEST
void X11_keysymdef_h()
{
#else
int X11_keysymdef_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/keysymdef.h\n");
#endif

printf("Checking data structures in X11/keysymdef.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XK_BackSpace
	CompareConstant(XK_BackSpace,0xff08,17711,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_BackSpace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Tab
	CompareConstant(XK_Tab,0xff09,17712,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Tab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Linefeed
	CompareConstant(XK_Linefeed,0xff0a,17713,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Linefeed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Clear
	CompareConstant(XK_Clear,0xff0b,17714,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Clear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Return
	CompareConstant(XK_Return,0xff0d,17715,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Return\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pause
	CompareConstant(XK_Pause,0xff13,17716,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pause\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Scroll_Lock
	CompareConstant(XK_Scroll_Lock,0xff14,17717,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Scroll_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Sys_Req
	CompareConstant(XK_Sys_Req,0xff15,17718,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Sys_Req\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Escape
	CompareConstant(XK_Escape,0xff1b,17719,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Escape\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Delete
	CompareConstant(XK_Delete,0xffff,17720,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Delete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Multi_key
	CompareConstant(XK_Multi_key,0xff20,17721,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Multi_key\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Codeinput
	CompareConstant(XK_Codeinput,0xff37,17722,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Codeinput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_SingleCandidate
	CompareConstant(XK_SingleCandidate,0xff3c,17723,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_SingleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_MultipleCandidate
	CompareConstant(XK_MultipleCandidate,0xff3d,17724,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_MultipleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_PreviousCandidate
	CompareConstant(XK_PreviousCandidate,0xff3e,17725,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_PreviousCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Kanji
	CompareConstant(XK_Kanji,0xff21,17726,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Kanji\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Muhenkan
	CompareConstant(XK_Muhenkan,0xff22,17727,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Muhenkan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Henkan_Mode
	CompareConstant(XK_Henkan_Mode,0xff23,17728,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Henkan_Mode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Henkan
	CompareConstant(XK_Henkan,0xff23,17729,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Henkan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Romaji
	CompareConstant(XK_Romaji,0xff24,17730,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Romaji\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hiragana
	CompareConstant(XK_Hiragana,0xff25,17731,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hiragana\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Katakana
	CompareConstant(XK_Katakana,0xff26,17732,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Katakana\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hiragana_Katakana
	CompareConstant(XK_Hiragana_Katakana,0xff27,17733,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hiragana_Katakana\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Zenkaku
	CompareConstant(XK_Zenkaku,0xff28,17734,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Zenkaku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hankaku
	CompareConstant(XK_Hankaku,0xff29,17735,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hankaku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Zenkaku_Hankaku
	CompareConstant(XK_Zenkaku_Hankaku,0xff2a,17736,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Zenkaku_Hankaku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Touroku
	CompareConstant(XK_Touroku,0xff2b,17737,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Touroku\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Massyo
	CompareConstant(XK_Massyo,0xff2c,17738,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Massyo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Kana_Lock
	CompareConstant(XK_Kana_Lock,0xff2d,17739,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Kana_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Kana_Shift
	CompareConstant(XK_Kana_Shift,0xff2e,17740,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Kana_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Eisu_Shift
	CompareConstant(XK_Eisu_Shift,0xff2f,17741,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Eisu_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Eisu_toggle
	CompareConstant(XK_Eisu_toggle,0xff30,17742,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Eisu_toggle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Kanji_Bangou
	CompareConstant(XK_Kanji_Bangou,0xff37,17743,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Kanji_Bangou\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Zen_Koho
	CompareConstant(XK_Zen_Koho,0xff3d,17744,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Zen_Koho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Mae_Koho
	CompareConstant(XK_Mae_Koho,0xff3e,17745,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Mae_Koho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Home
	CompareConstant(XK_Home,0xff50,17746,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Home\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Left
	CompareConstant(XK_Left,0xff51,17747,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Up
	CompareConstant(XK_Up,0xff52,17748,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Right
	CompareConstant(XK_Right,0xff53,17749,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Down
	CompareConstant(XK_Down,0xff54,17750,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Prior
	CompareConstant(XK_Prior,0xff55,17751,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Prior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Page_Up
	CompareConstant(XK_Page_Up,0xff55,17752,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Page_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Next
	CompareConstant(XK_Next,0xff56,17753,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Next\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Page_Down
	CompareConstant(XK_Page_Down,0xff56,17754,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Page_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_End
	CompareConstant(XK_End,0xff57,17755,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Begin
	CompareConstant(XK_Begin,0xff58,17756,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Begin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Select
	CompareConstant(XK_Select,0xff60,17757,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Select\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Print
	CompareConstant(XK_Print,0xff61,17758,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Print\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Execute
	CompareConstant(XK_Execute,0xff62,17759,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Execute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Insert
	CompareConstant(XK_Insert,0xff63,17760,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Insert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Undo
	CompareConstant(XK_Undo,0xff65,17761,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Undo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Redo
	CompareConstant(XK_Redo,0xff66,17762,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Redo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Menu
	CompareConstant(XK_Menu,0xff67,17763,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Menu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Find
	CompareConstant(XK_Find,0xff68,17764,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Find\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cancel
	CompareConstant(XK_Cancel,0xff69,17765,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cancel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Help
	CompareConstant(XK_Help,0xff6a,17766,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Help\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Break
	CompareConstant(XK_Break,0xff6b,17767,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Break\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Mode_switch
	CompareConstant(XK_Mode_switch,0xff7e,17768,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Mode_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_script_switch
	CompareConstant(XK_script_switch,0xff7e,17769,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_script_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Num_Lock
	CompareConstant(XK_Num_Lock,0xff7f,17770,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Num_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Space
	CompareConstant(XK_KP_Space,0xff80,17771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Tab
	CompareConstant(XK_KP_Tab,0xff89,17772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Tab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Enter
	CompareConstant(XK_KP_Enter,0xff8d,17773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Enter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_F1
	CompareConstant(XK_KP_F1,0xff91,17774,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_F1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_F2
	CompareConstant(XK_KP_F2,0xff92,17775,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_F2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_F3
	CompareConstant(XK_KP_F3,0xff93,17776,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_F3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_F4
	CompareConstant(XK_KP_F4,0xff94,17777,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_F4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Home
	CompareConstant(XK_KP_Home,0xff95,17778,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Home\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Left
	CompareConstant(XK_KP_Left,0xff96,17779,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Up
	CompareConstant(XK_KP_Up,0xff97,17780,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Right
	CompareConstant(XK_KP_Right,0xff98,17781,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Down
	CompareConstant(XK_KP_Down,0xff99,17782,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Prior
	CompareConstant(XK_KP_Prior,0xff9a,17783,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Prior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Page_Up
	CompareConstant(XK_KP_Page_Up,0xff9a,17784,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Page_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Next
	CompareConstant(XK_KP_Next,0xff9b,17785,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Next\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Page_Down
	CompareConstant(XK_KP_Page_Down,0xff9b,17786,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Page_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_End
	CompareConstant(XK_KP_End,0xff9c,17787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Begin
	CompareConstant(XK_KP_Begin,0xff9d,17788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Begin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Insert
	CompareConstant(XK_KP_Insert,0xff9e,17789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Insert\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Delete
	CompareConstant(XK_KP_Delete,0xff9f,17790,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Delete\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Equal
	CompareConstant(XK_KP_Equal,0xffbd,17791,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Equal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Multiply
	CompareConstant(XK_KP_Multiply,0xffaa,17792,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Multiply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Add
	CompareConstant(XK_KP_Add,0xffab,17793,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Add\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Separator
	CompareConstant(XK_KP_Separator,0xffac,17794,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Separator\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Subtract
	CompareConstant(XK_KP_Subtract,0xffad,17795,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Subtract\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Decimal
	CompareConstant(XK_KP_Decimal,0xffae,17796,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Decimal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_Divide
	CompareConstant(XK_KP_Divide,0xffaf,17797,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_Divide\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_0
	CompareConstant(XK_KP_0,0xffb0,17798,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_1
	CompareConstant(XK_KP_1,0xffb1,17799,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_2
	CompareConstant(XK_KP_2,0xffb2,17800,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_3
	CompareConstant(XK_KP_3,0xffb3,17801,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_4
	CompareConstant(XK_KP_4,0xffb4,17802,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_5
	CompareConstant(XK_KP_5,0xffb5,17803,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_6
	CompareConstant(XK_KP_6,0xffb6,17804,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_7
	CompareConstant(XK_KP_7,0xffb7,17805,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_8
	CompareConstant(XK_KP_8,0xffb8,17806,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_KP_9
	CompareConstant(XK_KP_9,0xffb9,17807,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_KP_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F1
	CompareConstant(XK_F1,0xffbe,17808,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F2
	CompareConstant(XK_F2,0xffbf,17809,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F3
	CompareConstant(XK_F3,0xffc0,17810,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F4
	CompareConstant(XK_F4,0xffc1,17811,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F5
	CompareConstant(XK_F5,0xffc2,17812,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F6
	CompareConstant(XK_F6,0xffc3,17813,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F7
	CompareConstant(XK_F7,0xffc4,17814,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F8
	CompareConstant(XK_F8,0xffc5,17815,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F9
	CompareConstant(XK_F9,0xffc6,17816,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F10
	CompareConstant(XK_F10,0xffc7,17817,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F11
	CompareConstant(XK_F11,0xffc8,17818,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L1
	CompareConstant(XK_L1,0xffc8,17819,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F12
	CompareConstant(XK_F12,0xffc9,17820,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L2
	CompareConstant(XK_L2,0xffc9,17821,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F13
	CompareConstant(XK_F13,0xffca,17822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L3
	CompareConstant(XK_L3,0xffca,17823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F14
	CompareConstant(XK_F14,0xffcb,17824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L4
	CompareConstant(XK_L4,0xffcb,17825,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F15
	CompareConstant(XK_F15,0xffcc,17826,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L5
	CompareConstant(XK_L5,0xffcc,17827,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F16
	CompareConstant(XK_F16,0xffcd,17828,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L6
	CompareConstant(XK_L6,0xffcd,17829,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F17
	CompareConstant(XK_F17,0xffce,17830,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F17\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L7
	CompareConstant(XK_L7,0xffce,17831,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F18
	CompareConstant(XK_F18,0xffcf,17832,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F18\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L8
	CompareConstant(XK_L8,0xffcf,17833,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F19
	CompareConstant(XK_F19,0xffd0,17834,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F19\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L9
	CompareConstant(XK_L9,0xffd0,17835,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F20
	CompareConstant(XK_F20,0xffd1,17836,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F20\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L10
	CompareConstant(XK_L10,0xffd1,17837,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F21
	CompareConstant(XK_F21,0xffd2,17838,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F21\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R1
	CompareConstant(XK_R1,0xffd2,17839,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F22
	CompareConstant(XK_F22,0xffd3,17840,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F22\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R2
	CompareConstant(XK_R2,0xffd3,17841,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F23
	CompareConstant(XK_F23,0xffd4,17842,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F23\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R3
	CompareConstant(XK_R3,0xffd4,17843,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F24
	CompareConstant(XK_F24,0xffd5,17844,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R4
	CompareConstant(XK_R4,0xffd5,17845,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F25
	CompareConstant(XK_F25,0xffd6,17846,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F25\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R5
	CompareConstant(XK_R5,0xffd6,17847,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F26
	CompareConstant(XK_F26,0xffd7,17848,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F26\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R6
	CompareConstant(XK_R6,0xffd7,17849,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F27
	CompareConstant(XK_F27,0xffd8,17850,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F27\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R7
	CompareConstant(XK_R7,0xffd8,17851,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F28
	CompareConstant(XK_F28,0xffd9,17852,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F28\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R8
	CompareConstant(XK_R8,0xffd9,17853,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F29
	CompareConstant(XK_F29,0xffda,17854,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F29\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R9
	CompareConstant(XK_R9,0xffda,17855,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F30
	CompareConstant(XK_F30,0xffdb,17856,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F30\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R10
	CompareConstant(XK_R10,0xffdb,17857,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F31
	CompareConstant(XK_F31,0xffdc,17858,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F31\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R11
	CompareConstant(XK_R11,0xffdc,17859,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F32
	CompareConstant(XK_F32,0xffdd,17860,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R12
	CompareConstant(XK_R12,0xffdd,17861,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F33
	CompareConstant(XK_F33,0xffde,17862,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F33\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R13
	CompareConstant(XK_R13,0xffde,17863,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F34
	CompareConstant(XK_F34,0xffdf,17864,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F34\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R14
	CompareConstant(XK_R14,0xffdf,17865,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F35
	CompareConstant(XK_F35,0xffe0,17866,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F35\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R15
	CompareConstant(XK_R15,0xffe0,17867,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Shift_L
	CompareConstant(XK_Shift_L,0xffe1,17868,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Shift_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Shift_R
	CompareConstant(XK_Shift_R,0xffe2,17869,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Shift_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Control_L
	CompareConstant(XK_Control_L,0xffe3,17870,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Control_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Control_R
	CompareConstant(XK_Control_R,0xffe4,17871,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Control_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Caps_Lock
	CompareConstant(XK_Caps_Lock,0xffe5,17872,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Caps_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Shift_Lock
	CompareConstant(XK_Shift_Lock,0xffe6,17873,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Shift_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Meta_L
	CompareConstant(XK_Meta_L,0xffe7,17874,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Meta_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Meta_R
	CompareConstant(XK_Meta_R,0xffe8,17875,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Meta_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Alt_L
	CompareConstant(XK_Alt_L,0xffe9,17876,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Alt_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Alt_R
	CompareConstant(XK_Alt_R,0xffea,17877,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Alt_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Super_L
	CompareConstant(XK_Super_L,0xffeb,17878,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Super_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Super_R
	CompareConstant(XK_Super_R,0xffec,17879,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Super_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hyper_L
	CompareConstant(XK_Hyper_L,0xffed,17880,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hyper_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hyper_R
	CompareConstant(XK_Hyper_R,0xffee,17881,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hyper_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Lock
	CompareConstant(XK_ISO_Lock,0xfe01,17882,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Level2_Latch
	CompareConstant(XK_ISO_Level2_Latch,0xfe02,17883,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Level2_Latch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Level3_Shift
	CompareConstant(XK_ISO_Level3_Shift,0xfe03,17884,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Level3_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Level3_Latch
	CompareConstant(XK_ISO_Level3_Latch,0xfe04,17885,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Level3_Latch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Level3_Lock
	CompareConstant(XK_ISO_Level3_Lock,0xfe05,17886,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Level3_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Level5_Shift
	CompareConstant(XK_ISO_Level5_Shift,0xfe11,17887,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Level5_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Level5_Latch
	CompareConstant(XK_ISO_Level5_Latch,0xfe12,17888,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Level5_Latch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Level5_Lock
	CompareConstant(XK_ISO_Level5_Lock,0xfe13,17889,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Level5_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Group_Shift
	CompareConstant(XK_ISO_Group_Shift,0xff7e,17890,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Group_Shift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Group_Latch
	CompareConstant(XK_ISO_Group_Latch,0xfe06,17891,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Group_Latch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Group_Lock
	CompareConstant(XK_ISO_Group_Lock,0xfe07,17892,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Next_Group
	CompareConstant(XK_ISO_Next_Group,0xfe08,17893,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Next_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Next_Group_Lock
	CompareConstant(XK_ISO_Next_Group_Lock,0xfe09,17894,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Next_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Prev_Group
	CompareConstant(XK_ISO_Prev_Group,0xfe0a,17895,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Prev_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Prev_Group_Lock
	CompareConstant(XK_ISO_Prev_Group_Lock,0xfe0b,17896,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Prev_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_First_Group
	CompareConstant(XK_ISO_First_Group,0xfe0c,17897,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_First_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_First_Group_Lock
	CompareConstant(XK_ISO_First_Group_Lock,0xfe0d,17898,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_First_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Last_Group
	CompareConstant(XK_ISO_Last_Group,0xfe0e,17899,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Last_Group\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Last_Group_Lock
	CompareConstant(XK_ISO_Last_Group_Lock,0xfe0f,17900,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Last_Group_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Left_Tab
	CompareConstant(XK_ISO_Left_Tab,0xfe20,17901,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Left_Tab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Move_Line_Up
	CompareConstant(XK_ISO_Move_Line_Up,0xfe21,17902,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Move_Line_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Move_Line_Down
	CompareConstant(XK_ISO_Move_Line_Down,0xfe22,17903,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Move_Line_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Partial_Line_Up
	CompareConstant(XK_ISO_Partial_Line_Up,0xfe23,17904,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Partial_Line_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Partial_Line_Down
	CompareConstant(XK_ISO_Partial_Line_Down,0xfe24,17905,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Partial_Line_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Partial_Space_Left
	CompareConstant(XK_ISO_Partial_Space_Left,0xfe25,17906,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Partial_Space_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Partial_Space_Right
	CompareConstant(XK_ISO_Partial_Space_Right,0xfe26,17907,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Partial_Space_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Set_Margin_Left
	CompareConstant(XK_ISO_Set_Margin_Left,0xfe27,17908,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Set_Margin_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Set_Margin_Right
	CompareConstant(XK_ISO_Set_Margin_Right,0xfe28,17909,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Set_Margin_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Release_Margin_Left
	CompareConstant(XK_ISO_Release_Margin_Left,0xfe29,17910,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Release_Margin_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Release_Margin_Right
	CompareConstant(XK_ISO_Release_Margin_Right,0xfe2a,17911,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Release_Margin_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Release_Both_Margins
	CompareConstant(XK_ISO_Release_Both_Margins,0xfe2b,17912,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Release_Both_Margins\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Fast_Cursor_Left
	CompareConstant(XK_ISO_Fast_Cursor_Left,0xfe2c,17913,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Fast_Cursor_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Fast_Cursor_Right
	CompareConstant(XK_ISO_Fast_Cursor_Right,0xfe2d,17914,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Fast_Cursor_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Fast_Cursor_Up
	CompareConstant(XK_ISO_Fast_Cursor_Up,0xfe2e,17915,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Fast_Cursor_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Fast_Cursor_Down
	CompareConstant(XK_ISO_Fast_Cursor_Down,0xfe2f,17916,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Fast_Cursor_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Continuous_Underline
	CompareConstant(XK_ISO_Continuous_Underline,0xfe30,17917,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Continuous_Underline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Discontinuous_Underline
	CompareConstant(XK_ISO_Discontinuous_Underline,0xfe31,17918,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Discontinuous_Underline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Emphasize
	CompareConstant(XK_ISO_Emphasize,0xfe32,17919,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Emphasize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Center_Object
	CompareConstant(XK_ISO_Center_Object,0xfe33,17920,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Center_Object\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ISO_Enter
	CompareConstant(XK_ISO_Enter,0xfe34,17921,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ISO_Enter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_grave
	CompareConstant(XK_dead_grave,0xfe50,17922,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_grave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_acute
	CompareConstant(XK_dead_acute,0xfe51,17923,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_acute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_circumflex
	CompareConstant(XK_dead_circumflex,0xfe52,17924,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_circumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_tilde
	CompareConstant(XK_dead_tilde,0xfe53,17925,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_tilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_macron
	CompareConstant(XK_dead_macron,0xfe54,17926,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_breve
	CompareConstant(XK_dead_breve,0xfe55,17927,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_breve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_abovedot
	CompareConstant(XK_dead_abovedot,0xfe56,17928,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_abovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_diaeresis
	CompareConstant(XK_dead_diaeresis,0xfe57,17929,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_diaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_abovering
	CompareConstant(XK_dead_abovering,0xfe58,17930,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_abovering\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_doubleacute
	CompareConstant(XK_dead_doubleacute,0xfe59,17931,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_doubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_caron
	CompareConstant(XK_dead_caron,0xfe5a,17932,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_caron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_cedilla
	CompareConstant(XK_dead_cedilla,0xfe5b,17933,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_cedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_ogonek
	CompareConstant(XK_dead_ogonek,0xfe5c,17934,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_ogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_iota
	CompareConstant(XK_dead_iota,0xfe5d,17935,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_iota\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_voiced_sound
	CompareConstant(XK_dead_voiced_sound,0xfe5e,17936,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_voiced_sound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_semivoiced_sound
	CompareConstant(XK_dead_semivoiced_sound,0xfe5f,17937,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_semivoiced_sound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_belowdot
	CompareConstant(XK_dead_belowdot,0xfe60,17938,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_belowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_hook
	CompareConstant(XK_dead_hook,0xfe61,17939,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_hook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_horn
	CompareConstant(XK_dead_horn,0xfe62,17940,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_horn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_stroke
	CompareConstant(XK_dead_stroke,0xfe63,17941,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_stroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_abovecomma
	CompareConstant(XK_dead_abovecomma,0xfe64,17942,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_abovecomma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_psili
	CompareConstant(XK_dead_psili,0xfe64,17943,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_psili\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_abovereversedcomma
	CompareConstant(XK_dead_abovereversedcomma,0xfe65,17944,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_abovereversedcomma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_dasia
	CompareConstant(XK_dead_dasia,0xfe66,17945,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_dasia\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_belowring
	CompareConstant(XK_dead_belowring,0xfe67,17946,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_belowring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_belowmacron
	CompareConstant(XK_dead_belowmacron,0xfe68,17947,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_belowmacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_belowcircumflex
	CompareConstant(XK_dead_belowcircumflex,0xfe69,17948,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_belowcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_belowtilde
	CompareConstant(XK_dead_belowtilde,0xfe6a,17949,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_belowtilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_belowbreve
	CompareConstant(XK_dead_belowbreve,0xfe6b,17950,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_belowbreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dead_belowdiaeresis
	CompareConstant(XK_dead_belowdiaeresis,0xfe6c,17951,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dead_belowdiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_First_Virtual_Screen
	CompareConstant(XK_First_Virtual_Screen,0xfed0,17952,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_First_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Prev_Virtual_Screen
	CompareConstant(XK_Prev_Virtual_Screen,0xfed1,17953,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Prev_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Next_Virtual_Screen
	CompareConstant(XK_Next_Virtual_Screen,0xfed2,17954,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Next_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Last_Virtual_Screen
	CompareConstant(XK_Last_Virtual_Screen,0xfed4,17955,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Last_Virtual_Screen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Terminate_Server
	CompareConstant(XK_Terminate_Server,0xfed5,17956,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Terminate_Server\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_AccessX_Enable
	CompareConstant(XK_AccessX_Enable,0xfe70,17957,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_AccessX_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_AccessX_Feedback_Enable
	CompareConstant(XK_AccessX_Feedback_Enable,0xfe71,17958,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_AccessX_Feedback_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_RepeatKeys_Enable
	CompareConstant(XK_RepeatKeys_Enable,0xfe72,17959,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_RepeatKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_SlowKeys_Enable
	CompareConstant(XK_SlowKeys_Enable,0xfe73,17960,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_SlowKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_BounceKeys_Enable
	CompareConstant(XK_BounceKeys_Enable,0xfe74,17961,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_BounceKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_StickyKeys_Enable
	CompareConstant(XK_StickyKeys_Enable,0xfe75,17962,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_StickyKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_MouseKeys_Enable
	CompareConstant(XK_MouseKeys_Enable,0xfe76,17963,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_MouseKeys_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_MouseKeys_Accel_Enable
	CompareConstant(XK_MouseKeys_Accel_Enable,0xfe77,17964,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_MouseKeys_Accel_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Overlay1_Enable
	CompareConstant(XK_Overlay1_Enable,0xfe78,17965,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Overlay1_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Overlay2_Enable
	CompareConstant(XK_Overlay2_Enable,0xfe79,17966,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Overlay2_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_AudibleBell_Enable
	CompareConstant(XK_AudibleBell_Enable,0xfe7a,17967,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_AudibleBell_Enable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Left
	CompareConstant(XK_Pointer_Left,0xfee0,17968,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Left\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Right
	CompareConstant(XK_Pointer_Right,0xfee1,17969,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Right\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Up
	CompareConstant(XK_Pointer_Up,0xfee2,17970,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Up\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Down
	CompareConstant(XK_Pointer_Down,0xfee3,17971,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Down\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_UpLeft
	CompareConstant(XK_Pointer_UpLeft,0xfee4,17972,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_UpLeft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_UpRight
	CompareConstant(XK_Pointer_UpRight,0xfee5,17973,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_UpRight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DownLeft
	CompareConstant(XK_Pointer_DownLeft,0xfee6,17974,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DownLeft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DownRight
	CompareConstant(XK_Pointer_DownRight,0xfee7,17975,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DownRight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Button_Dflt
	CompareConstant(XK_Pointer_Button_Dflt,0xfee8,17976,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Button_Dflt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Button1
	CompareConstant(XK_Pointer_Button1,0xfee9,17977,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Button1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Button2
	CompareConstant(XK_Pointer_Button2,0xfeea,17978,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Button2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Button3
	CompareConstant(XK_Pointer_Button3,0xfeeb,17979,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Button3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Button4
	CompareConstant(XK_Pointer_Button4,0xfeec,17980,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Button4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Button5
	CompareConstant(XK_Pointer_Button5,0xfeed,17981,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Button5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DblClick_Dflt
	CompareConstant(XK_Pointer_DblClick_Dflt,0xfeee,17982,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DblClick_Dflt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DblClick1
	CompareConstant(XK_Pointer_DblClick1,0xfeef,17983,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DblClick1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DblClick2
	CompareConstant(XK_Pointer_DblClick2,0xfef0,17984,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DblClick2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DblClick3
	CompareConstant(XK_Pointer_DblClick3,0xfef1,17985,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DblClick3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DblClick4
	CompareConstant(XK_Pointer_DblClick4,0xfef2,17986,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DblClick4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DblClick5
	CompareConstant(XK_Pointer_DblClick5,0xfef3,17987,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DblClick5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Drag_Dflt
	CompareConstant(XK_Pointer_Drag_Dflt,0xfef4,17988,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Drag_Dflt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Drag1
	CompareConstant(XK_Pointer_Drag1,0xfef5,17989,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Drag1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Drag2
	CompareConstant(XK_Pointer_Drag2,0xfef6,17990,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Drag2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Drag3
	CompareConstant(XK_Pointer_Drag3,0xfef7,17991,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Drag3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Drag4
	CompareConstant(XK_Pointer_Drag4,0xfef8,17992,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Drag4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Drag5
	CompareConstant(XK_Pointer_Drag5,0xfefd,17993,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Drag5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_EnableKeys
	CompareConstant(XK_Pointer_EnableKeys,0xfef9,17994,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_EnableKeys\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_Accelerate
	CompareConstant(XK_Pointer_Accelerate,0xfefa,17995,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_Accelerate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DfltBtnNext
	CompareConstant(XK_Pointer_DfltBtnNext,0xfefb,17996,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DfltBtnNext\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pointer_DfltBtnPrev
	CompareConstant(XK_Pointer_DfltBtnPrev,0xfefc,17997,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pointer_DfltBtnPrev\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_space
	CompareConstant(XK_space,0x0020,18028,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_exclam
	CompareConstant(XK_exclam,0x0021,18029,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_exclam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_quotedbl
	CompareConstant(XK_quotedbl,0x0022,18030,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_quotedbl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_numbersign
	CompareConstant(XK_numbersign,0x0023,18031,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_numbersign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dollar
	CompareConstant(XK_dollar,0x0024,18032,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dollar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_percent
	CompareConstant(XK_percent,0x0025,18033,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_percent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ampersand
	CompareConstant(XK_ampersand,0x0026,18034,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ampersand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_apostrophe
	CompareConstant(XK_apostrophe,0x0027,18035,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_apostrophe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_quoteright
	CompareConstant(XK_quoteright,0x0027,18036,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_quoteright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_parenleft
	CompareConstant(XK_parenleft,0x0028,18037,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_parenleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_parenright
	CompareConstant(XK_parenright,0x0029,18038,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_parenright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_asterisk
	CompareConstant(XK_asterisk,0x002a,18039,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_asterisk\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_plus
	CompareConstant(XK_plus,0x002b,18040,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_plus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_comma
	CompareConstant(XK_comma,0x002c,18041,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_comma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_minus
	CompareConstant(XK_minus,0x002d,18042,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_minus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_period
	CompareConstant(XK_period,0x002e,18043,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_period\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_slash
	CompareConstant(XK_slash,0x002f,18044,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_slash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_0
	CompareConstant(XK_0,0x0030,18045,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_1
	CompareConstant(XK_1,0x0031,18046,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_2
	CompareConstant(XK_2,0x0032,18047,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_3
	CompareConstant(XK_3,0x0033,18048,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_4
	CompareConstant(XK_4,0x0034,18049,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_5
	CompareConstant(XK_5,0x0035,18050,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_6
	CompareConstant(XK_6,0x0036,18051,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_7
	CompareConstant(XK_7,0x0037,18052,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_8
	CompareConstant(XK_8,0x0038,18053,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_9
	CompareConstant(XK_9,0x0039,18054,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_colon
	CompareConstant(XK_colon,0x003a,18055,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_colon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_semicolon
	CompareConstant(XK_semicolon,0x003b,18056,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_semicolon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_less
	CompareConstant(XK_less,0x003c,18057,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_less\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_equal
	CompareConstant(XK_equal,0x003d,18058,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_equal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_greater
	CompareConstant(XK_greater,0x003e,18059,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_greater\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_question
	CompareConstant(XK_question,0x003f,18060,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_question\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_at
	CompareConstant(XK_at,0x0040,18061,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_at\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_A
	CompareConstant(XK_A,0x0041,18062,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_B
	CompareConstant(XK_B,0x0042,18063,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_B\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_C
	CompareConstant(XK_C,0x0043,18064,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_C\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_D
	CompareConstant(XK_D,0x0044,18065,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_D\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_E
	CompareConstant(XK_E,0x0045,18066,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_F
	CompareConstant(XK_F,0x0046,18067,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_F\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_G
	CompareConstant(XK_G,0x0047,18068,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_G\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_H
	CompareConstant(XK_H,0x0048,18069,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_H\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_I
	CompareConstant(XK_I,0x0049,18070,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_J
	CompareConstant(XK_J,0x004a,18071,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_J\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_K
	CompareConstant(XK_K,0x004b,18072,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_K\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_L
	CompareConstant(XK_L,0x004c,18073,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_L\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_M
	CompareConstant(XK_M,0x004d,18074,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_M\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_N
	CompareConstant(XK_N,0x004e,18075,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_N\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_O
	CompareConstant(XK_O,0x004f,18076,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_P
	CompareConstant(XK_P,0x0050,18077,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_P\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Q
	CompareConstant(XK_Q,0x0051,18078,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Q\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_R
	CompareConstant(XK_R,0x0052,18079,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_S
	CompareConstant(XK_S,0x0053,18080,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_S\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_T
	CompareConstant(XK_T,0x0054,18081,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_T\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_U
	CompareConstant(XK_U,0x0055,18082,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_V
	CompareConstant(XK_V,0x0056,18083,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_V\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_W
	CompareConstant(XK_W,0x0057,18084,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_W\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_X
	CompareConstant(XK_X,0x0058,18085,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Y
	CompareConstant(XK_Y,0x0059,18086,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Z
	CompareConstant(XK_Z,0x005a,18087,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_bracketleft
	CompareConstant(XK_bracketleft,0x005b,18088,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_bracketleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_backslash
	CompareConstant(XK_backslash,0x005c,18089,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_backslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_bracketright
	CompareConstant(XK_bracketright,0x005d,18090,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_bracketright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_asciicircum
	CompareConstant(XK_asciicircum,0x005e,18091,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_asciicircum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_underscore
	CompareConstant(XK_underscore,0x005f,18092,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_underscore\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_grave
	CompareConstant(XK_grave,0x0060,18093,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_grave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_quoteleft
	CompareConstant(XK_quoteleft,0x0060,18094,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_quoteleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_a
	CompareConstant(XK_a,0x0061,18095,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_a\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_b
	CompareConstant(XK_b,0x0062,18096,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_b\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_c
	CompareConstant(XK_c,0x0063,18097,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_c\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_d
	CompareConstant(XK_d,0x0064,18098,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_d\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_e
	CompareConstant(XK_e,0x0065,18099,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_e\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_f
	CompareConstant(XK_f,0x0066,18100,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_f\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_g
	CompareConstant(XK_g,0x0067,18101,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_g\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_h
	CompareConstant(XK_h,0x0068,18102,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_h\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_i
	CompareConstant(XK_i,0x0069,18103,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_j
	CompareConstant(XK_j,0x006a,18104,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_j\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_k
	CompareConstant(XK_k,0x006b,18105,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_k\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_l
	CompareConstant(XK_l,0x006c,18106,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_l\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_m
	CompareConstant(XK_m,0x006d,18107,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_m\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_n
	CompareConstant(XK_n,0x006e,18108,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_n\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_o
	CompareConstant(XK_o,0x006f,18109,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_o\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_p
	CompareConstant(XK_p,0x0070,18110,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_p\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_q
	CompareConstant(XK_q,0x0071,18111,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_q\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_r
	CompareConstant(XK_r,0x0072,18112,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_r\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_s
	CompareConstant(XK_s,0x0073,18113,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_s\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_t
	CompareConstant(XK_t,0x0074,18114,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_t\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_u
	CompareConstant(XK_u,0x0075,18115,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_u\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_v
	CompareConstant(XK_v,0x0076,18116,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_v\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_w
	CompareConstant(XK_w,0x0077,18117,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_w\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_x
	CompareConstant(XK_x,0x0078,18118,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_x\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_y
	CompareConstant(XK_y,0x0079,18119,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_z
	CompareConstant(XK_z,0x007a,18120,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_z\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braceleft
	CompareConstant(XK_braceleft,0x007b,18121,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braceleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_bar
	CompareConstant(XK_bar,0x007c,18122,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braceright
	CompareConstant(XK_braceright,0x007d,18123,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braceright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_asciitilde
	CompareConstant(XK_asciitilde,0x007e,18124,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_asciitilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_nobreakspace
	CompareConstant(XK_nobreakspace,0x00a0,18125,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_nobreakspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_exclamdown
	CompareConstant(XK_exclamdown,0x00a1,18126,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_exclamdown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_cent
	CompareConstant(XK_cent,0x00a2,18127,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_cent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_sterling
	CompareConstant(XK_sterling,0x00a3,18128,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_sterling\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_currency
	CompareConstant(XK_currency,0x00a4,18129,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_currency\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_yen
	CompareConstant(XK_yen,0x00a5,18130,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_yen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_brokenbar
	CompareConstant(XK_brokenbar,0x00a6,18131,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_brokenbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_section
	CompareConstant(XK_section,0x00a7,18132,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_section\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_diaeresis
	CompareConstant(XK_diaeresis,0x00a8,18133,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_diaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_copyright
	CompareConstant(XK_copyright,0x00a9,18134,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_copyright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ordfeminine
	CompareConstant(XK_ordfeminine,0x00aa,18135,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ordfeminine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_guillemotleft
	CompareConstant(XK_guillemotleft,0x00ab,18136,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_guillemotleft\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_notsign
	CompareConstant(XK_notsign,0x00ac,18137,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_notsign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hyphen
	CompareConstant(XK_hyphen,0x00ad,18138,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hyphen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_registered
	CompareConstant(XK_registered,0x00ae,18139,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_registered\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_macron
	CompareConstant(XK_macron,0x00af,18140,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_degree
	CompareConstant(XK_degree,0x00b0,18141,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_degree\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_plusminus
	CompareConstant(XK_plusminus,0x00b1,18142,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_plusminus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_twosuperior
	CompareConstant(XK_twosuperior,0x00b2,18143,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_twosuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_threesuperior
	CompareConstant(XK_threesuperior,0x00b3,18144,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_threesuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_acute
	CompareConstant(XK_acute,0x00b4,18145,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_acute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_mu
	CompareConstant(XK_mu,0x00b5,18146,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_mu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_paragraph
	CompareConstant(XK_paragraph,0x00b6,18147,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_paragraph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_periodcentered
	CompareConstant(XK_periodcentered,0x00b7,18148,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_periodcentered\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_cedilla
	CompareConstant(XK_cedilla,0x00b8,18149,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_cedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_onesuperior
	CompareConstant(XK_onesuperior,0x00b9,18150,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_onesuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_masculine
	CompareConstant(XK_masculine,0x00ba,18151,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_masculine\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_guillemotright
	CompareConstant(XK_guillemotright,0x00bb,18152,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_guillemotright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_onequarter
	CompareConstant(XK_onequarter,0x00bc,18153,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_onequarter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_onehalf
	CompareConstant(XK_onehalf,0x00bd,18154,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_onehalf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_threequarters
	CompareConstant(XK_threequarters,0x00be,18155,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_threequarters\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_questiondown
	CompareConstant(XK_questiondown,0x00bf,18156,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_questiondown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Agrave
	CompareConstant(XK_Agrave,0x00c0,18157,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Agrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Aacute
	CompareConstant(XK_Aacute,0x00c1,18158,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Aacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Acircumflex
	CompareConstant(XK_Acircumflex,0x00c2,18159,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Acircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Atilde
	CompareConstant(XK_Atilde,0x00c3,18160,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Atilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Adiaeresis
	CompareConstant(XK_Adiaeresis,0x00c4,18161,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Adiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Aring
	CompareConstant(XK_Aring,0x00c5,18162,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Aring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_AE
	CompareConstant(XK_AE,0x00c6,18163,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_AE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ccedilla
	CompareConstant(XK_Ccedilla,0x00c7,18164,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ccedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Egrave
	CompareConstant(XK_Egrave,0x00c8,18165,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Egrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Eacute
	CompareConstant(XK_Eacute,0x00c9,18166,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Eacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ecircumflex
	CompareConstant(XK_Ecircumflex,0x00ca,18167,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ecircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ediaeresis
	CompareConstant(XK_Ediaeresis,0x00cb,18168,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ediaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Igrave
	CompareConstant(XK_Igrave,0x00cc,18169,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Igrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Iacute
	CompareConstant(XK_Iacute,0x00cd,18170,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Iacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Icircumflex
	CompareConstant(XK_Icircumflex,0x00ce,18171,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Icircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Idiaeresis
	CompareConstant(XK_Idiaeresis,0x00cf,18172,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Idiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ETH
	CompareConstant(XK_ETH,0x00d0,18173,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ETH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Eth
	CompareConstant(XK_Eth,0x00d0,18174,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Eth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ntilde
	CompareConstant(XK_Ntilde,0x00d1,18175,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ograve
	CompareConstant(XK_Ograve,0x00d2,18176,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ograve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Oacute
	CompareConstant(XK_Oacute,0x00d3,18177,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Oacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ocircumflex
	CompareConstant(XK_Ocircumflex,0x00d4,18178,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ocircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Otilde
	CompareConstant(XK_Otilde,0x00d5,18179,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Otilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Odiaeresis
	CompareConstant(XK_Odiaeresis,0x00d6,18180,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Odiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_multiply
	CompareConstant(XK_multiply,0x00d7,18181,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_multiply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Oslash
	CompareConstant(XK_Oslash,0x00d8,18182,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Oslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ooblique
	CompareConstant(XK_Ooblique,0x00d8,18183,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ooblique\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ugrave
	CompareConstant(XK_Ugrave,0x00d9,18184,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ugrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uacute
	CompareConstant(XK_Uacute,0x00da,18185,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ucircumflex
	CompareConstant(XK_Ucircumflex,0x00db,18186,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ucircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Udiaeresis
	CompareConstant(XK_Udiaeresis,0x00dc,18187,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Udiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Yacute
	CompareConstant(XK_Yacute,0x00dd,18188,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Yacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_THORN
	CompareConstant(XK_THORN,0x00de,18189,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_THORN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thorn
	CompareConstant(XK_Thorn,0x00de,18190,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ssharp
	CompareConstant(XK_ssharp,0x00df,18191,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ssharp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_agrave
	CompareConstant(XK_agrave,0x00e0,18192,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_agrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_aacute
	CompareConstant(XK_aacute,0x00e1,18193,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_aacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_acircumflex
	CompareConstant(XK_acircumflex,0x00e2,18194,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_acircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_atilde
	CompareConstant(XK_atilde,0x00e3,18195,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_atilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_adiaeresis
	CompareConstant(XK_adiaeresis,0x00e4,18196,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_adiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_aring
	CompareConstant(XK_aring,0x00e5,18197,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_aring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ae
	CompareConstant(XK_ae,0x00e6,18198,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ccedilla
	CompareConstant(XK_ccedilla,0x00e7,18199,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ccedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_egrave
	CompareConstant(XK_egrave,0x00e8,18200,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_egrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_eacute
	CompareConstant(XK_eacute,0x00e9,18201,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_eacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ecircumflex
	CompareConstant(XK_ecircumflex,0x00ea,18202,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ecircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ediaeresis
	CompareConstant(XK_ediaeresis,0x00eb,18203,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ediaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_igrave
	CompareConstant(XK_igrave,0x00ec,18204,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_igrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_iacute
	CompareConstant(XK_iacute,0x00ed,18205,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_iacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_icircumflex
	CompareConstant(XK_icircumflex,0x00ee,18206,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_icircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_idiaeresis
	CompareConstant(XK_idiaeresis,0x00ef,18207,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_idiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_eth
	CompareConstant(XK_eth,0x00f0,18208,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_eth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ntilde
	CompareConstant(XK_ntilde,0x00f1,18209,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ograve
	CompareConstant(XK_ograve,0x00f2,18210,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ograve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_oacute
	CompareConstant(XK_oacute,0x00f3,18211,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_oacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ocircumflex
	CompareConstant(XK_ocircumflex,0x00f4,18212,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ocircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_otilde
	CompareConstant(XK_otilde,0x00f5,18213,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_otilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_odiaeresis
	CompareConstant(XK_odiaeresis,0x00f6,18214,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_odiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_division
	CompareConstant(XK_division,0x00f7,18215,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_division\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_oslash
	CompareConstant(XK_oslash,0x00f8,18216,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_oslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ooblique
	CompareConstant(XK_ooblique,0x00f8,18217,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ooblique\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ugrave
	CompareConstant(XK_ugrave,0x00f9,18218,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ugrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uacute
	CompareConstant(XK_uacute,0x00fa,18219,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ucircumflex
	CompareConstant(XK_ucircumflex,0x00fb,18220,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ucircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_udiaeresis
	CompareConstant(XK_udiaeresis,0x00fc,18221,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_udiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_yacute
	CompareConstant(XK_yacute,0x00fd,18222,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_yacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_thorn
	CompareConstant(XK_thorn,0x00fe,18223,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_thorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ydiaeresis
	CompareConstant(XK_ydiaeresis,0x00ff,18224,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ydiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Aogonek
	CompareConstant(XK_Aogonek,0x01a1,18225,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Aogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_breve
	CompareConstant(XK_breve,0x01a2,18226,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_breve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Lstroke
	CompareConstant(XK_Lstroke,0x01a3,18227,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Lstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Lcaron
	CompareConstant(XK_Lcaron,0x01a5,18228,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Lcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Sacute
	CompareConstant(XK_Sacute,0x01a6,18229,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Sacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Scaron
	CompareConstant(XK_Scaron,0x01a9,18230,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Scaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Scedilla
	CompareConstant(XK_Scedilla,0x01aa,18231,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Scedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Tcaron
	CompareConstant(XK_Tcaron,0x01ab,18232,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Tcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Zacute
	CompareConstant(XK_Zacute,0x01ac,18233,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Zacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Zcaron
	CompareConstant(XK_Zcaron,0x01ae,18234,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Zcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Zabovedot
	CompareConstant(XK_Zabovedot,0x01af,18235,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Zabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_aogonek
	CompareConstant(XK_aogonek,0x01b1,18236,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_aogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ogonek
	CompareConstant(XK_ogonek,0x01b2,18237,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lstroke
	CompareConstant(XK_lstroke,0x01b3,18238,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lcaron
	CompareConstant(XK_lcaron,0x01b5,18239,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_sacute
	CompareConstant(XK_sacute,0x01b6,18240,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_sacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_caron
	CompareConstant(XK_caron,0x01b7,18241,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_caron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_scaron
	CompareConstant(XK_scaron,0x01b9,18242,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_scaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_scedilla
	CompareConstant(XK_scedilla,0x01ba,18243,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_scedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_tcaron
	CompareConstant(XK_tcaron,0x01bb,18244,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_tcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_zacute
	CompareConstant(XK_zacute,0x01bc,18245,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_zacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_doubleacute
	CompareConstant(XK_doubleacute,0x01bd,18246,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_doubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_zcaron
	CompareConstant(XK_zcaron,0x01be,18247,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_zcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_zabovedot
	CompareConstant(XK_zabovedot,0x01bf,18248,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_zabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Racute
	CompareConstant(XK_Racute,0x01c0,18249,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Racute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Abreve
	CompareConstant(XK_Abreve,0x01c3,18250,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Abreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Lacute
	CompareConstant(XK_Lacute,0x01c5,18251,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Lacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cacute
	CompareConstant(XK_Cacute,0x01c6,18252,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ccaron
	CompareConstant(XK_Ccaron,0x01c8,18253,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ccaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Eogonek
	CompareConstant(XK_Eogonek,0x01ca,18254,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Eogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ecaron
	CompareConstant(XK_Ecaron,0x01cc,18255,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ecaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Dcaron
	CompareConstant(XK_Dcaron,0x01cf,18256,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Dcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Dstroke
	CompareConstant(XK_Dstroke,0x01d0,18257,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Dstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Nacute
	CompareConstant(XK_Nacute,0x01d1,18258,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Nacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ncaron
	CompareConstant(XK_Ncaron,0x01d2,18259,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ncaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Odoubleacute
	CompareConstant(XK_Odoubleacute,0x01d5,18260,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Odoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Rcaron
	CompareConstant(XK_Rcaron,0x01d8,18261,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Rcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uring
	CompareConstant(XK_Uring,0x01d9,18262,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Udoubleacute
	CompareConstant(XK_Udoubleacute,0x01db,18263,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Udoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Tcedilla
	CompareConstant(XK_Tcedilla,0x01de,18264,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Tcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_racute
	CompareConstant(XK_racute,0x01e0,18265,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_racute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abreve
	CompareConstant(XK_abreve,0x01e3,18266,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lacute
	CompareConstant(XK_lacute,0x01e5,18267,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_cacute
	CompareConstant(XK_cacute,0x01e6,18268,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_cacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ccaron
	CompareConstant(XK_ccaron,0x01e8,18269,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ccaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_eogonek
	CompareConstant(XK_eogonek,0x01ea,18270,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_eogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ecaron
	CompareConstant(XK_ecaron,0x01ec,18271,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ecaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dcaron
	CompareConstant(XK_dcaron,0x01ef,18272,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dstroke
	CompareConstant(XK_dstroke,0x01f0,18273,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_nacute
	CompareConstant(XK_nacute,0x01f1,18274,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_nacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ncaron
	CompareConstant(XK_ncaron,0x01f2,18275,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ncaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_odoubleacute
	CompareConstant(XK_odoubleacute,0x01f5,18276,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_odoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_udoubleacute
	CompareConstant(XK_udoubleacute,0x01fb,18277,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_udoubleacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rcaron
	CompareConstant(XK_rcaron,0x01f8,18278,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uring
	CompareConstant(XK_uring,0x01f9,18279,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uring\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_tcedilla
	CompareConstant(XK_tcedilla,0x01fe,18280,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_tcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abovedot
	CompareConstant(XK_abovedot,0x01ff,18281,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hstroke
	CompareConstant(XK_Hstroke,0x02a1,18282,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hcircumflex
	CompareConstant(XK_Hcircumflex,0x02a6,18283,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Iabovedot
	CompareConstant(XK_Iabovedot,0x02a9,18284,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Iabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Gbreve
	CompareConstant(XK_Gbreve,0x02ab,18285,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Gbreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Jcircumflex
	CompareConstant(XK_Jcircumflex,0x02ac,18286,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Jcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hstroke
	CompareConstant(XK_hstroke,0x02b1,18287,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hcircumflex
	CompareConstant(XK_hcircumflex,0x02b6,18288,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_idotless
	CompareConstant(XK_idotless,0x02b9,18289,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_idotless\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_gbreve
	CompareConstant(XK_gbreve,0x02bb,18290,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_gbreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_jcircumflex
	CompareConstant(XK_jcircumflex,0x02bc,18291,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_jcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cabovedot
	CompareConstant(XK_Cabovedot,0x02c5,18292,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ccircumflex
	CompareConstant(XK_Ccircumflex,0x02c6,18293,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ccircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Gabovedot
	CompareConstant(XK_Gabovedot,0x02d5,18294,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Gabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Gcircumflex
	CompareConstant(XK_Gcircumflex,0x02d8,18295,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Gcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ubreve
	CompareConstant(XK_Ubreve,0x02dd,18296,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ubreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Scircumflex
	CompareConstant(XK_Scircumflex,0x02de,18297,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Scircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_cabovedot
	CompareConstant(XK_cabovedot,0x02e5,18298,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_cabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ccircumflex
	CompareConstant(XK_ccircumflex,0x02e6,18299,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ccircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_gabovedot
	CompareConstant(XK_gabovedot,0x02f5,18300,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_gabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_gcircumflex
	CompareConstant(XK_gcircumflex,0x02f8,18301,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_gcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ubreve
	CompareConstant(XK_ubreve,0x02fd,18302,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ubreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_scircumflex
	CompareConstant(XK_scircumflex,0x02fe,18303,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_scircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kra
	CompareConstant(XK_kra,0x03a2,18304,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kappa
	CompareConstant(XK_kappa,0x03a2,18305,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kappa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Rcedilla
	CompareConstant(XK_Rcedilla,0x03a3,18306,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Rcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Itilde
	CompareConstant(XK_Itilde,0x03a5,18307,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Itilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Lcedilla
	CompareConstant(XK_Lcedilla,0x03a6,18308,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Lcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Emacron
	CompareConstant(XK_Emacron,0x03aa,18309,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Emacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Gcedilla
	CompareConstant(XK_Gcedilla,0x03ab,18310,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Gcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Tslash
	CompareConstant(XK_Tslash,0x03ac,18311,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Tslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rcedilla
	CompareConstant(XK_rcedilla,0x03b3,18312,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_itilde
	CompareConstant(XK_itilde,0x03b5,18313,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_itilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lcedilla
	CompareConstant(XK_lcedilla,0x03b6,18314,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emacron
	CompareConstant(XK_emacron,0x03ba,18315,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_gcedilla
	CompareConstant(XK_gcedilla,0x03bb,18316,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_gcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_tslash
	CompareConstant(XK_tslash,0x03bc,18317,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_tslash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ENG
	CompareConstant(XK_ENG,0x03bd,18318,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ENG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_eng
	CompareConstant(XK_eng,0x03bf,18319,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_eng\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Amacron
	CompareConstant(XK_Amacron,0x03c0,18320,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Amacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Iogonek
	CompareConstant(XK_Iogonek,0x03c7,18321,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Iogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Eabovedot
	CompareConstant(XK_Eabovedot,0x03cc,18322,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Eabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Imacron
	CompareConstant(XK_Imacron,0x03cf,18323,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Imacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ncedilla
	CompareConstant(XK_Ncedilla,0x03d1,18324,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ncedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Omacron
	CompareConstant(XK_Omacron,0x03d2,18325,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Omacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Kcedilla
	CompareConstant(XK_Kcedilla,0x03d3,18326,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Kcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uogonek
	CompareConstant(XK_Uogonek,0x03d9,18327,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Utilde
	CompareConstant(XK_Utilde,0x03dd,18328,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Utilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Umacron
	CompareConstant(XK_Umacron,0x03de,18329,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Umacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_amacron
	CompareConstant(XK_amacron,0x03e0,18330,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_amacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_iogonek
	CompareConstant(XK_iogonek,0x03e7,18331,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_iogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_eabovedot
	CompareConstant(XK_eabovedot,0x03ec,18332,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_eabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_imacron
	CompareConstant(XK_imacron,0x03ef,18333,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_imacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ncedilla
	CompareConstant(XK_ncedilla,0x03f1,18334,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ncedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_omacron
	CompareConstant(XK_omacron,0x03f2,18335,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_omacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kcedilla
	CompareConstant(XK_kcedilla,0x03f3,18336,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kcedilla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uogonek
	CompareConstant(XK_uogonek,0x03f9,18337,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uogonek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_utilde
	CompareConstant(XK_utilde,0x03fd,18338,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_utilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_umacron
	CompareConstant(XK_umacron,0x03fe,18339,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_umacron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Babovedot
	CompareConstant(XK_Babovedot,0x1001e02,18340,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Babovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_babovedot
	CompareConstant(XK_babovedot,0x1001e03,18341,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_babovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Dabovedot
	CompareConstant(XK_Dabovedot,0x1001e0a,18342,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Dabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Wgrave
	CompareConstant(XK_Wgrave,0x1001e80,18343,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Wgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Wacute
	CompareConstant(XK_Wacute,0x1001e82,18344,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Wacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dabovedot
	CompareConstant(XK_dabovedot,0x1001e0b,18345,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ygrave
	CompareConstant(XK_Ygrave,0x1001ef2,18346,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ygrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Fabovedot
	CompareConstant(XK_Fabovedot,0x1001e1e,18347,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Fabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_fabovedot
	CompareConstant(XK_fabovedot,0x1001e1f,18348,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_fabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Mabovedot
	CompareConstant(XK_Mabovedot,0x1001e40,18349,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Mabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_mabovedot
	CompareConstant(XK_mabovedot,0x1001e41,18350,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_mabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Pabovedot
	CompareConstant(XK_Pabovedot,0x1001e56,18351,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Pabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_wgrave
	CompareConstant(XK_wgrave,0x1001e81,18352,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_wgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_pabovedot
	CompareConstant(XK_pabovedot,0x1001e57,18353,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_pabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_wacute
	CompareConstant(XK_wacute,0x1001e83,18354,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_wacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Sabovedot
	CompareConstant(XK_Sabovedot,0x1001e60,18355,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Sabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ygrave
	CompareConstant(XK_ygrave,0x1001ef3,18356,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ygrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Wdiaeresis
	CompareConstant(XK_Wdiaeresis,0x1001e84,18357,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Wdiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_wdiaeresis
	CompareConstant(XK_wdiaeresis,0x1001e85,18358,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_wdiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_sabovedot
	CompareConstant(XK_sabovedot,0x1001e61,18359,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_sabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Wcircumflex
	CompareConstant(XK_Wcircumflex,0x1000174,18360,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Wcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Tabovedot
	CompareConstant(XK_Tabovedot,0x1001e6a,18361,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Tabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ycircumflex
	CompareConstant(XK_Ycircumflex,0x1000176,18362,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ycircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_wcircumflex
	CompareConstant(XK_wcircumflex,0x1000175,18363,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_wcircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_tabovedot
	CompareConstant(XK_tabovedot,0x1001e6b,18364,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_tabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ycircumflex
	CompareConstant(XK_ycircumflex,0x1000177,18365,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ycircumflex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_OE
	CompareConstant(XK_OE,0x13bc,18366,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_OE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_oe
	CompareConstant(XK_oe,0x13bd,18367,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_oe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ydiaeresis
	CompareConstant(XK_Ydiaeresis,0x13be,18368,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ydiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_overline
	CompareConstant(XK_overline,0x047e,18369,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_overline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_fullstop
	CompareConstant(XK_kana_fullstop,0x04a1,18370,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_fullstop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_openingbracket
	CompareConstant(XK_kana_openingbracket,0x04a2,18371,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_openingbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_closingbracket
	CompareConstant(XK_kana_closingbracket,0x04a3,18372,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_closingbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_comma
	CompareConstant(XK_kana_comma,0x04a4,18373,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_comma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_conjunctive
	CompareConstant(XK_kana_conjunctive,0x04a5,18374,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_conjunctive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_middledot
	CompareConstant(XK_kana_middledot,0x04a5,18375,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_middledot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_WO
	CompareConstant(XK_kana_WO,0x04a6,18376,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_WO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_a
	CompareConstant(XK_kana_a,0x04a7,18377,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_a\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_i
	CompareConstant(XK_kana_i,0x04a8,18378,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_u
	CompareConstant(XK_kana_u,0x04a9,18379,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_u\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_e
	CompareConstant(XK_kana_e,0x04aa,18380,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_e\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_o
	CompareConstant(XK_kana_o,0x04ab,18381,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_o\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_ya
	CompareConstant(XK_kana_ya,0x04ac,18382,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_ya\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_yu
	CompareConstant(XK_kana_yu,0x04ad,18383,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_yu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_yo
	CompareConstant(XK_kana_yo,0x04ae,18384,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_yo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_tsu
	CompareConstant(XK_kana_tsu,0x04af,18385,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_tsu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_tu
	CompareConstant(XK_kana_tu,0x04af,18386,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_tu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_prolongedsound
	CompareConstant(XK_prolongedsound,0x04b0,18387,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_prolongedsound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_A
	CompareConstant(XK_kana_A,0x04b1,18388,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_I
	CompareConstant(XK_kana_I,0x04b2,18389,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_U
	CompareConstant(XK_kana_U,0x04b3,18390,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_E
	CompareConstant(XK_kana_E,0x04b4,18391,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_O
	CompareConstant(XK_kana_O,0x04b5,18392,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_KA
	CompareConstant(XK_kana_KA,0x04b6,18393,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_KA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_KI
	CompareConstant(XK_kana_KI,0x04b7,18394,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_KI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_KU
	CompareConstant(XK_kana_KU,0x04b8,18395,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_KU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_KE
	CompareConstant(XK_kana_KE,0x04b9,18396,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_KE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_KO
	CompareConstant(XK_kana_KO,0x04ba,18397,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_KO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_SA
	CompareConstant(XK_kana_SA,0x04bb,18398,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_SA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_SHI
	CompareConstant(XK_kana_SHI,0x04bc,18399,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_SHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_SU
	CompareConstant(XK_kana_SU,0x04bd,18400,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_SU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_SE
	CompareConstant(XK_kana_SE,0x04be,18401,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_SE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_SO
	CompareConstant(XK_kana_SO,0x04bf,18402,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_SO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_TA
	CompareConstant(XK_kana_TA,0x04c0,18403,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_TA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_CHI
	CompareConstant(XK_kana_CHI,0x04c1,18404,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_CHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_TI
	CompareConstant(XK_kana_TI,0x04c1,18405,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_TI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_TSU
	CompareConstant(XK_kana_TSU,0x04c2,18406,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_TSU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_TU
	CompareConstant(XK_kana_TU,0x04c2,18407,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_TU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_TE
	CompareConstant(XK_kana_TE,0x04c3,18408,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_TE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_TO
	CompareConstant(XK_kana_TO,0x04c4,18409,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_TO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_NA
	CompareConstant(XK_kana_NA,0x04c5,18410,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_NA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_NI
	CompareConstant(XK_kana_NI,0x04c6,18411,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_NI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_NU
	CompareConstant(XK_kana_NU,0x04c7,18412,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_NU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_NE
	CompareConstant(XK_kana_NE,0x04c8,18413,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_NE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_NO
	CompareConstant(XK_kana_NO,0x04c9,18414,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_NO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_HA
	CompareConstant(XK_kana_HA,0x04ca,18415,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_HA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_HI
	CompareConstant(XK_kana_HI,0x04cb,18416,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_HI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_FU
	CompareConstant(XK_kana_FU,0x04cc,18417,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_FU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_HU
	CompareConstant(XK_kana_HU,0x04cc,18418,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_HU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_HE
	CompareConstant(XK_kana_HE,0x04cd,18419,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_HE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_HO
	CompareConstant(XK_kana_HO,0x04ce,18420,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_HO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_MA
	CompareConstant(XK_kana_MA,0x04cf,18421,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_MA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_MI
	CompareConstant(XK_kana_MI,0x04d0,18422,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_MI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_MU
	CompareConstant(XK_kana_MU,0x04d1,18423,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_MU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_ME
	CompareConstant(XK_kana_ME,0x04d2,18424,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_ME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_MO
	CompareConstant(XK_kana_MO,0x04d3,18425,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_MO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_YA
	CompareConstant(XK_kana_YA,0x04d4,18426,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_YA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_YU
	CompareConstant(XK_kana_YU,0x04d5,18427,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_YU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_YO
	CompareConstant(XK_kana_YO,0x04d6,18428,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_YO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_RA
	CompareConstant(XK_kana_RA,0x04d7,18429,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_RA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_RI
	CompareConstant(XK_kana_RI,0x04d8,18430,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_RI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_RU
	CompareConstant(XK_kana_RU,0x04d9,18431,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_RU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_RE
	CompareConstant(XK_kana_RE,0x04da,18432,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_RE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_RO
	CompareConstant(XK_kana_RO,0x04db,18433,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_RO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_WA
	CompareConstant(XK_kana_WA,0x04dc,18434,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_WA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_N
	CompareConstant(XK_kana_N,0x04dd,18435,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_N\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_voicedsound
	CompareConstant(XK_voicedsound,0x04de,18436,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_voicedsound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_semivoicedsound
	CompareConstant(XK_semivoicedsound,0x04df,18437,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_semivoicedsound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_kana_switch
	CompareConstant(XK_kana_switch,0xff7e,18438,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_kana_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_0
	CompareConstant(XK_Farsi_0,0x10006f0,18439,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_1
	CompareConstant(XK_Farsi_1,0x10006f1,18440,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_2
	CompareConstant(XK_Farsi_2,0x10006f2,18441,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_3
	CompareConstant(XK_Farsi_3,0x10006f3,18442,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_4
	CompareConstant(XK_Farsi_4,0x10006f4,18443,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_5
	CompareConstant(XK_Farsi_5,0x10006f5,18444,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_6
	CompareConstant(XK_Farsi_6,0x10006f6,18445,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_7
	CompareConstant(XK_Farsi_7,0x10006f7,18446,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_8
	CompareConstant(XK_Farsi_8,0x10006f8,18447,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_9
	CompareConstant(XK_Farsi_9,0x10006f9,18448,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_percent
	CompareConstant(XK_Arabic_percent,0x100066a,18449,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_percent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_superscript_alef
	CompareConstant(XK_Arabic_superscript_alef,0x1000670,18450,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_superscript_alef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_tteh
	CompareConstant(XK_Arabic_tteh,0x1000679,18451,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_tteh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_peh
	CompareConstant(XK_Arabic_peh,0x100067e,18452,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_peh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_tcheh
	CompareConstant(XK_Arabic_tcheh,0x1000686,18453,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_tcheh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_ddal
	CompareConstant(XK_Arabic_ddal,0x1000688,18454,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_ddal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_rreh
	CompareConstant(XK_Arabic_rreh,0x1000691,18455,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_rreh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_comma
	CompareConstant(XK_Arabic_comma,0x05ac,18456,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_comma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_fullstop
	CompareConstant(XK_Arabic_fullstop,0x10006d4,18457,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_fullstop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_0
	CompareConstant(XK_Arabic_0,0x1000660,18458,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_1
	CompareConstant(XK_Arabic_1,0x1000661,18459,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_2
	CompareConstant(XK_Arabic_2,0x1000662,18460,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_3
	CompareConstant(XK_Arabic_3,0x1000663,18461,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_4
	CompareConstant(XK_Arabic_4,0x1000664,18462,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_5
	CompareConstant(XK_Arabic_5,0x1000665,18463,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_6
	CompareConstant(XK_Arabic_6,0x1000666,18464,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_7
	CompareConstant(XK_Arabic_7,0x1000667,18465,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_8
	CompareConstant(XK_Arabic_8,0x1000668,18466,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_9
	CompareConstant(XK_Arabic_9,0x1000669,18467,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_semicolon
	CompareConstant(XK_Arabic_semicolon,0x05bb,18468,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_semicolon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_question_mark
	CompareConstant(XK_Arabic_question_mark,0x05bf,18469,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_question_mark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hamza
	CompareConstant(XK_Arabic_hamza,0x05c1,18470,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hamza\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_maddaonalef
	CompareConstant(XK_Arabic_maddaonalef,0x05c2,18471,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_maddaonalef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hamzaonalef
	CompareConstant(XK_Arabic_hamzaonalef,0x05c3,18472,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hamzaonalef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hamzaonwaw
	CompareConstant(XK_Arabic_hamzaonwaw,0x05c4,18473,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hamzaonwaw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hamzaunderalef
	CompareConstant(XK_Arabic_hamzaunderalef,0x05c5,18474,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hamzaunderalef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hamzaonyeh
	CompareConstant(XK_Arabic_hamzaonyeh,0x05c6,18475,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hamzaonyeh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_alef
	CompareConstant(XK_Arabic_alef,0x05c7,18476,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_alef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_beh
	CompareConstant(XK_Arabic_beh,0x05c8,18477,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_beh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_tehmarbuta
	CompareConstant(XK_Arabic_tehmarbuta,0x05c9,18478,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_tehmarbuta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_teh
	CompareConstant(XK_Arabic_teh,0x05ca,18479,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_teh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_theh
	CompareConstant(XK_Arabic_theh,0x05cb,18480,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_theh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_jeem
	CompareConstant(XK_Arabic_jeem,0x05cc,18481,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_jeem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hah
	CompareConstant(XK_Arabic_hah,0x05cd,18482,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_khah
	CompareConstant(XK_Arabic_khah,0x05ce,18483,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_khah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_dal
	CompareConstant(XK_Arabic_dal,0x05cf,18484,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_dal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_thal
	CompareConstant(XK_Arabic_thal,0x05d0,18485,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_thal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_ra
	CompareConstant(XK_Arabic_ra,0x05d1,18486,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_ra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_zain
	CompareConstant(XK_Arabic_zain,0x05d2,18487,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_zain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_seen
	CompareConstant(XK_Arabic_seen,0x05d3,18488,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_seen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_sheen
	CompareConstant(XK_Arabic_sheen,0x05d4,18489,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_sheen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_sad
	CompareConstant(XK_Arabic_sad,0x05d5,18490,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_sad\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_dad
	CompareConstant(XK_Arabic_dad,0x05d6,18491,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_dad\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_tah
	CompareConstant(XK_Arabic_tah,0x05d7,18492,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_tah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_zah
	CompareConstant(XK_Arabic_zah,0x05d8,18493,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_zah\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_ain
	CompareConstant(XK_Arabic_ain,0x05d9,18494,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_ain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_ghain
	CompareConstant(XK_Arabic_ghain,0x05da,18495,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_ghain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_tatweel
	CompareConstant(XK_Arabic_tatweel,0x05e0,18496,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_tatweel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_feh
	CompareConstant(XK_Arabic_feh,0x05e1,18497,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_feh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_qaf
	CompareConstant(XK_Arabic_qaf,0x05e2,18498,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_qaf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_kaf
	CompareConstant(XK_Arabic_kaf,0x05e3,18499,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_kaf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_lam
	CompareConstant(XK_Arabic_lam,0x05e4,18500,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_lam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_meem
	CompareConstant(XK_Arabic_meem,0x05e5,18501,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_meem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_noon
	CompareConstant(XK_Arabic_noon,0x05e6,18502,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_noon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_ha
	CompareConstant(XK_Arabic_ha,0x05e7,18503,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_ha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_heh
	CompareConstant(XK_Arabic_heh,0x05e7,18504,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_heh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_waw
	CompareConstant(XK_Arabic_waw,0x05e8,18505,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_waw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_alefmaksura
	CompareConstant(XK_Arabic_alefmaksura,0x05e9,18506,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_alefmaksura\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_yeh
	CompareConstant(XK_Arabic_yeh,0x05ea,18507,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_yeh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_fathatan
	CompareConstant(XK_Arabic_fathatan,0x05eb,18508,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_fathatan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_dammatan
	CompareConstant(XK_Arabic_dammatan,0x05ec,18509,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_dammatan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_kasratan
	CompareConstant(XK_Arabic_kasratan,0x05ed,18510,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_kasratan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_fatha
	CompareConstant(XK_Arabic_fatha,0x05ee,18511,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_fatha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_damma
	CompareConstant(XK_Arabic_damma,0x05ef,18512,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_damma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_kasra
	CompareConstant(XK_Arabic_kasra,0x05f0,18513,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_kasra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_shadda
	CompareConstant(XK_Arabic_shadda,0x05f1,18514,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_shadda\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_sukun
	CompareConstant(XK_Arabic_sukun,0x05f2,18515,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_sukun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_madda_above
	CompareConstant(XK_Arabic_madda_above,0x1000653,18516,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_madda_above\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hamza_above
	CompareConstant(XK_Arabic_hamza_above,0x1000654,18517,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hamza_above\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_hamza_below
	CompareConstant(XK_Arabic_hamza_below,0x1000655,18518,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_hamza_below\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_jeh
	CompareConstant(XK_Arabic_jeh,0x1000698,18519,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_jeh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_veh
	CompareConstant(XK_Arabic_veh,0x10006a4,18520,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_veh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_keheh
	CompareConstant(XK_Arabic_keheh,0x10006a9,18521,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_keheh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_gaf
	CompareConstant(XK_Arabic_gaf,0x10006af,18522,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_gaf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_noon_ghunna
	CompareConstant(XK_Arabic_noon_ghunna,0x10006ba,18523,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_noon_ghunna\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_heh_doachashmee
	CompareConstant(XK_Arabic_heh_doachashmee,0x10006be,18524,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_heh_doachashmee\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Farsi_yeh
	CompareConstant(XK_Farsi_yeh,0x10006cc,18525,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Farsi_yeh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_farsi_yeh
	CompareConstant(XK_Arabic_farsi_yeh,0x10006cc,18526,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_farsi_yeh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_yeh_baree
	CompareConstant(XK_Arabic_yeh_baree,0x10006d2,18527,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_yeh_baree\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_heh_goal
	CompareConstant(XK_Arabic_heh_goal,0x10006c1,18528,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_heh_goal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Arabic_switch
	CompareConstant(XK_Arabic_switch,0xff7e,18529,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Arabic_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_GHE_bar
	CompareConstant(XK_Cyrillic_GHE_bar,0x1000492,18530,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_GHE_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ghe_bar
	CompareConstant(XK_Cyrillic_ghe_bar,0x1000493,18531,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ghe_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ZHE_descender
	CompareConstant(XK_Cyrillic_ZHE_descender,0x1000496,18532,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ZHE_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_zhe_descender
	CompareConstant(XK_Cyrillic_zhe_descender,0x1000497,18533,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_zhe_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_KA_descender
	CompareConstant(XK_Cyrillic_KA_descender,0x100049a,18534,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_KA_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ka_descender
	CompareConstant(XK_Cyrillic_ka_descender,0x100049b,18535,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ka_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_KA_vertstroke
	CompareConstant(XK_Cyrillic_KA_vertstroke,0x100049c,18536,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_KA_vertstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ka_vertstroke
	CompareConstant(XK_Cyrillic_ka_vertstroke,0x100049d,18537,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ka_vertstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_EN_descender
	CompareConstant(XK_Cyrillic_EN_descender,0x10004a2,18538,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_EN_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_en_descender
	CompareConstant(XK_Cyrillic_en_descender,0x10004a3,18539,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_en_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_U_straight
	CompareConstant(XK_Cyrillic_U_straight,0x10004ae,18540,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_U_straight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_u_straight
	CompareConstant(XK_Cyrillic_u_straight,0x10004af,18541,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_u_straight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_U_straight_bar
	CompareConstant(XK_Cyrillic_U_straight_bar,0x10004b0,18542,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_U_straight_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_u_straight_bar
	CompareConstant(XK_Cyrillic_u_straight_bar,0x10004b1,18543,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_u_straight_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_HA_descender
	CompareConstant(XK_Cyrillic_HA_descender,0x10004b2,18544,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_HA_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ha_descender
	CompareConstant(XK_Cyrillic_ha_descender,0x10004b3,18545,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ha_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_CHE_descender
	CompareConstant(XK_Cyrillic_CHE_descender,0x10004b6,18546,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_CHE_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_che_descender
	CompareConstant(XK_Cyrillic_che_descender,0x10004b7,18547,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_che_descender\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_CHE_vertstroke
	CompareConstant(XK_Cyrillic_CHE_vertstroke,0x10004b8,18548,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_CHE_vertstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_che_vertstroke
	CompareConstant(XK_Cyrillic_che_vertstroke,0x10004b9,18549,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_che_vertstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_SHHA
	CompareConstant(XK_Cyrillic_SHHA,0x10004ba,18550,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_SHHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_shha
	CompareConstant(XK_Cyrillic_shha,0x10004bb,18551,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_shha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_SCHWA
	CompareConstant(XK_Cyrillic_SCHWA,0x10004d8,18552,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_SCHWA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_schwa
	CompareConstant(XK_Cyrillic_schwa,0x10004d9,18553,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_schwa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_I_macron
	CompareConstant(XK_Cyrillic_I_macron,0x10004e2,18554,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_I_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_i_macron
	CompareConstant(XK_Cyrillic_i_macron,0x10004e3,18555,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_i_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_O_bar
	CompareConstant(XK_Cyrillic_O_bar,0x10004e8,18556,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_O_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_o_bar
	CompareConstant(XK_Cyrillic_o_bar,0x10004e9,18557,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_o_bar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_U_macron
	CompareConstant(XK_Cyrillic_U_macron,0x10004ee,18558,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_U_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_u_macron
	CompareConstant(XK_Cyrillic_u_macron,0x10004ef,18559,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_u_macron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_dje
	CompareConstant(XK_Serbian_dje,0x06a1,18560,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_dje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Macedonia_gje
	CompareConstant(XK_Macedonia_gje,0x06a2,18561,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Macedonia_gje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_io
	CompareConstant(XK_Cyrillic_io,0x06a3,18562,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_io\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_ie
	CompareConstant(XK_Ukrainian_ie,0x06a4,18563,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_ie\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukranian_je
	CompareConstant(XK_Ukranian_je,0x06a4,18564,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukranian_je\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Macedonia_dse
	CompareConstant(XK_Macedonia_dse,0x06a5,18565,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Macedonia_dse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_i
	CompareConstant(XK_Ukrainian_i,0x06a6,18566,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukranian_i
	CompareConstant(XK_Ukranian_i,0x06a6,18567,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukranian_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_yi
	CompareConstant(XK_Ukrainian_yi,0x06a7,18568,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_yi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukranian_yi
	CompareConstant(XK_Ukranian_yi,0x06a7,18569,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukranian_yi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_je
	CompareConstant(XK_Cyrillic_je,0x06a8,18570,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_je\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_je
	CompareConstant(XK_Serbian_je,0x06a8,18571,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_je\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_lje
	CompareConstant(XK_Cyrillic_lje,0x06a9,18572,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_lje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_lje
	CompareConstant(XK_Serbian_lje,0x06a9,18573,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_lje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_nje
	CompareConstant(XK_Cyrillic_nje,0x06aa,18574,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_nje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_nje
	CompareConstant(XK_Serbian_nje,0x06aa,18575,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_nje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_tshe
	CompareConstant(XK_Serbian_tshe,0x06ab,18576,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_tshe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Macedonia_kje
	CompareConstant(XK_Macedonia_kje,0x06ac,18577,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Macedonia_kje\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_ghe_with_upturn
	CompareConstant(XK_Ukrainian_ghe_with_upturn,0x06ad,18578,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_ghe_with_upturn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Byelorussian_shortu
	CompareConstant(XK_Byelorussian_shortu,0x06ae,18579,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Byelorussian_shortu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_dzhe
	CompareConstant(XK_Cyrillic_dzhe,0x06af,18580,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_dzhe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_dze
	CompareConstant(XK_Serbian_dze,0x06af,18581,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_dze\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_numerosign
	CompareConstant(XK_numerosign,0x06b0,18582,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_numerosign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_DJE
	CompareConstant(XK_Serbian_DJE,0x06b1,18583,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_DJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Macedonia_GJE
	CompareConstant(XK_Macedonia_GJE,0x06b2,18584,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Macedonia_GJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_IO
	CompareConstant(XK_Cyrillic_IO,0x06b3,18585,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_IE
	CompareConstant(XK_Ukrainian_IE,0x06b4,18586,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_IE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukranian_JE
	CompareConstant(XK_Ukranian_JE,0x06b4,18587,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukranian_JE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Macedonia_DSE
	CompareConstant(XK_Macedonia_DSE,0x06b5,18588,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Macedonia_DSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_I
	CompareConstant(XK_Ukrainian_I,0x06b6,18589,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukranian_I
	CompareConstant(XK_Ukranian_I,0x06b6,18590,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukranian_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_YI
	CompareConstant(XK_Ukrainian_YI,0x06b7,18591,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_YI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukranian_YI
	CompareConstant(XK_Ukranian_YI,0x06b7,18592,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukranian_YI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_JE
	CompareConstant(XK_Cyrillic_JE,0x06b8,18593,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_JE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_JE
	CompareConstant(XK_Serbian_JE,0x06b8,18594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_JE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_LJE
	CompareConstant(XK_Cyrillic_LJE,0x06b9,18595,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_LJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_LJE
	CompareConstant(XK_Serbian_LJE,0x06b9,18596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_LJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_NJE
	CompareConstant(XK_Cyrillic_NJE,0x06ba,18597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_NJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_NJE
	CompareConstant(XK_Serbian_NJE,0x06ba,18598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_NJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_TSHE
	CompareConstant(XK_Serbian_TSHE,0x06bb,18599,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_TSHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Macedonia_KJE
	CompareConstant(XK_Macedonia_KJE,0x06bc,18600,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Macedonia_KJE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ukrainian_GHE_WITH_UPTURN
	CompareConstant(XK_Ukrainian_GHE_WITH_UPTURN,0x06bd,18601,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ukrainian_GHE_WITH_UPTURN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Byelorussian_SHORTU
	CompareConstant(XK_Byelorussian_SHORTU,0x06be,18602,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Byelorussian_SHORTU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_DZHE
	CompareConstant(XK_Cyrillic_DZHE,0x06bf,18603,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_DZHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Serbian_DZE
	CompareConstant(XK_Serbian_DZE,0x06bf,18604,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Serbian_DZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_yu
	CompareConstant(XK_Cyrillic_yu,0x06c0,18605,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_yu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_a
	CompareConstant(XK_Cyrillic_a,0x06c1,18606,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_a\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_be
	CompareConstant(XK_Cyrillic_be,0x06c2,18607,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_be\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_tse
	CompareConstant(XK_Cyrillic_tse,0x06c3,18608,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_tse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_de
	CompareConstant(XK_Cyrillic_de,0x06c4,18609,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_de\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ie
	CompareConstant(XK_Cyrillic_ie,0x06c5,18610,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ie\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ef
	CompareConstant(XK_Cyrillic_ef,0x06c6,18611,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ef\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ghe
	CompareConstant(XK_Cyrillic_ghe,0x06c7,18612,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ghe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ha
	CompareConstant(XK_Cyrillic_ha,0x06c8,18613,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_i
	CompareConstant(XK_Cyrillic_i,0x06c9,18614,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_i\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_shorti
	CompareConstant(XK_Cyrillic_shorti,0x06ca,18615,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_shorti\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ka
	CompareConstant(XK_Cyrillic_ka,0x06cb,18616,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ka\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_el
	CompareConstant(XK_Cyrillic_el,0x06cc,18617,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_el\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_em
	CompareConstant(XK_Cyrillic_em,0x06cd,18618,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_em\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_en
	CompareConstant(XK_Cyrillic_en,0x06ce,18619,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_en\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_o
	CompareConstant(XK_Cyrillic_o,0x06cf,18620,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_o\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_pe
	CompareConstant(XK_Cyrillic_pe,0x06d0,18621,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_pe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ya
	CompareConstant(XK_Cyrillic_ya,0x06d1,18622,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ya\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_er
	CompareConstant(XK_Cyrillic_er,0x06d2,18623,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_er\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_es
	CompareConstant(XK_Cyrillic_es,0x06d3,18624,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_es\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_te
	CompareConstant(XK_Cyrillic_te,0x06d4,18625,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_te\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_u
	CompareConstant(XK_Cyrillic_u,0x06d5,18626,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_u\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_zhe
	CompareConstant(XK_Cyrillic_zhe,0x06d6,18627,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_zhe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ve
	CompareConstant(XK_Cyrillic_ve,0x06d7,18628,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_softsign
	CompareConstant(XK_Cyrillic_softsign,0x06d8,18629,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_softsign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_yeru
	CompareConstant(XK_Cyrillic_yeru,0x06d9,18630,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_yeru\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ze
	CompareConstant(XK_Cyrillic_ze,0x06da,18631,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ze\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_sha
	CompareConstant(XK_Cyrillic_sha,0x06db,18632,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_sha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_e
	CompareConstant(XK_Cyrillic_e,0x06dc,18633,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_e\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_shcha
	CompareConstant(XK_Cyrillic_shcha,0x06dd,18634,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_shcha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_che
	CompareConstant(XK_Cyrillic_che,0x06de,18635,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_che\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_hardsign
	CompareConstant(XK_Cyrillic_hardsign,0x06df,18636,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_hardsign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_YU
	CompareConstant(XK_Cyrillic_YU,0x06e0,18637,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_YU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_A
	CompareConstant(XK_Cyrillic_A,0x06e1,18638,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_BE
	CompareConstant(XK_Cyrillic_BE,0x06e2,18639,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_BE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_TSE
	CompareConstant(XK_Cyrillic_TSE,0x06e3,18640,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_TSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_DE
	CompareConstant(XK_Cyrillic_DE,0x06e4,18641,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_DE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_IE
	CompareConstant(XK_Cyrillic_IE,0x06e5,18642,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_IE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_EF
	CompareConstant(XK_Cyrillic_EF,0x06e6,18643,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_EF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_GHE
	CompareConstant(XK_Cyrillic_GHE,0x06e7,18644,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_GHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_HA
	CompareConstant(XK_Cyrillic_HA,0x06e8,18645,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_HA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_I
	CompareConstant(XK_Cyrillic_I,0x06e9,18646,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_SHORTI
	CompareConstant(XK_Cyrillic_SHORTI,0x06ea,18647,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_SHORTI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_KA
	CompareConstant(XK_Cyrillic_KA,0x06eb,18648,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_KA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_EL
	CompareConstant(XK_Cyrillic_EL,0x06ec,18649,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_EL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_EM
	CompareConstant(XK_Cyrillic_EM,0x06ed,18650,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_EM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_EN
	CompareConstant(XK_Cyrillic_EN,0x06ee,18651,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_EN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_O
	CompareConstant(XK_Cyrillic_O,0x06ef,18652,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_PE
	CompareConstant(XK_Cyrillic_PE,0x06f0,18653,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_PE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_YA
	CompareConstant(XK_Cyrillic_YA,0x06f1,18654,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_YA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ER
	CompareConstant(XK_Cyrillic_ER,0x06f2,18655,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ES
	CompareConstant(XK_Cyrillic_ES,0x06f3,18656,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_TE
	CompareConstant(XK_Cyrillic_TE,0x06f4,18657,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_TE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_U
	CompareConstant(XK_Cyrillic_U,0x06f5,18658,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ZHE
	CompareConstant(XK_Cyrillic_ZHE,0x06f6,18659,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ZHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_VE
	CompareConstant(XK_Cyrillic_VE,0x06f7,18660,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_VE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_SOFTSIGN
	CompareConstant(XK_Cyrillic_SOFTSIGN,0x06f8,18661,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_SOFTSIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_YERU
	CompareConstant(XK_Cyrillic_YERU,0x06f9,18662,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_YERU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_ZE
	CompareConstant(XK_Cyrillic_ZE,0x06fa,18663,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_ZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_SHA
	CompareConstant(XK_Cyrillic_SHA,0x06fb,18664,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_E
	CompareConstant(XK_Cyrillic_E,0x06fc,18665,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_SHCHA
	CompareConstant(XK_Cyrillic_SHCHA,0x06fd,18666,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_SHCHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_CHE
	CompareConstant(XK_Cyrillic_CHE,0x06fe,18667,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_CHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Cyrillic_HARDSIGN
	CompareConstant(XK_Cyrillic_HARDSIGN,0x06ff,18668,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Cyrillic_HARDSIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_ALPHAaccent
	CompareConstant(XK_Greek_ALPHAaccent,0x07a1,18669,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_ALPHAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_EPSILONaccent
	CompareConstant(XK_Greek_EPSILONaccent,0x07a2,18670,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_EPSILONaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_ETAaccent
	CompareConstant(XK_Greek_ETAaccent,0x07a3,18671,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_ETAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_IOTAaccent
	CompareConstant(XK_Greek_IOTAaccent,0x07a4,18672,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_IOTAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_IOTAdieresis
	CompareConstant(XK_Greek_IOTAdieresis,0x07a5,18673,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_IOTAdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_IOTAdiaeresis
	CompareConstant(XK_Greek_IOTAdiaeresis,0x07a5,18674,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_IOTAdiaeresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_OMICRONaccent
	CompareConstant(XK_Greek_OMICRONaccent,0x07a7,18675,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_OMICRONaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_UPSILONaccent
	CompareConstant(XK_Greek_UPSILONaccent,0x07a8,18676,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_UPSILONaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_UPSILONdieresis
	CompareConstant(XK_Greek_UPSILONdieresis,0x07a9,18677,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_UPSILONdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_OMEGAaccent
	CompareConstant(XK_Greek_OMEGAaccent,0x07ab,18678,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_OMEGAaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_accentdieresis
	CompareConstant(XK_Greek_accentdieresis,0x07ae,18679,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_accentdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_horizbar
	CompareConstant(XK_Greek_horizbar,0x07af,18680,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_horizbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_alphaaccent
	CompareConstant(XK_Greek_alphaaccent,0x07b1,18681,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_alphaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_epsilonaccent
	CompareConstant(XK_Greek_epsilonaccent,0x07b2,18682,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_epsilonaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_etaaccent
	CompareConstant(XK_Greek_etaaccent,0x07b3,18683,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_etaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_iotaaccent
	CompareConstant(XK_Greek_iotaaccent,0x07b4,18684,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_iotaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_iotadieresis
	CompareConstant(XK_Greek_iotadieresis,0x07b5,18685,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_iotadieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_iotaaccentdieresis
	CompareConstant(XK_Greek_iotaaccentdieresis,0x07b6,18686,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_iotaaccentdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_omicronaccent
	CompareConstant(XK_Greek_omicronaccent,0x07b7,18687,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_omicronaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_upsilonaccent
	CompareConstant(XK_Greek_upsilonaccent,0x07b8,18688,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_upsilonaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_upsilondieresis
	CompareConstant(XK_Greek_upsilondieresis,0x07b9,18689,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_upsilondieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_upsilonaccentdieresis
	CompareConstant(XK_Greek_upsilonaccentdieresis,0x07ba,18690,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_upsilonaccentdieresis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_omegaaccent
	CompareConstant(XK_Greek_omegaaccent,0x07bb,18691,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_omegaaccent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_ALPHA
	CompareConstant(XK_Greek_ALPHA,0x07c1,18692,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_ALPHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_BETA
	CompareConstant(XK_Greek_BETA,0x07c2,18693,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_BETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_GAMMA
	CompareConstant(XK_Greek_GAMMA,0x07c3,18694,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_GAMMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_DELTA
	CompareConstant(XK_Greek_DELTA,0x07c4,18695,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_DELTA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_EPSILON
	CompareConstant(XK_Greek_EPSILON,0x07c5,18696,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_EPSILON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_ZETA
	CompareConstant(XK_Greek_ZETA,0x07c6,18697,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_ZETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_ETA
	CompareConstant(XK_Greek_ETA,0x07c7,18698,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_ETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_THETA
	CompareConstant(XK_Greek_THETA,0x07c8,18699,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_THETA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_IOTA
	CompareConstant(XK_Greek_IOTA,0x07c9,18700,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_IOTA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_KAPPA
	CompareConstant(XK_Greek_KAPPA,0x07ca,18701,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_KAPPA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_LAMDA
	CompareConstant(XK_Greek_LAMDA,0x07cb,18702,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_LAMDA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_LAMBDA
	CompareConstant(XK_Greek_LAMBDA,0x07cb,18703,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_LAMBDA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_MU
	CompareConstant(XK_Greek_MU,0x07cc,18704,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_MU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_NU
	CompareConstant(XK_Greek_NU,0x07cd,18705,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_NU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_XI
	CompareConstant(XK_Greek_XI,0x07ce,18706,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_XI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_OMICRON
	CompareConstant(XK_Greek_OMICRON,0x07cf,18707,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_OMICRON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_PI
	CompareConstant(XK_Greek_PI,0x07d0,18708,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_PI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_RHO
	CompareConstant(XK_Greek_RHO,0x07d1,18709,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_RHO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_SIGMA
	CompareConstant(XK_Greek_SIGMA,0x07d2,18710,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_SIGMA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_TAU
	CompareConstant(XK_Greek_TAU,0x07d4,18711,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_TAU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_UPSILON
	CompareConstant(XK_Greek_UPSILON,0x07d5,18712,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_UPSILON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_PHI
	CompareConstant(XK_Greek_PHI,0x07d6,18713,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_PHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_CHI
	CompareConstant(XK_Greek_CHI,0x07d7,18714,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_CHI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_PSI
	CompareConstant(XK_Greek_PSI,0x07d8,18715,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_PSI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_OMEGA
	CompareConstant(XK_Greek_OMEGA,0x07d9,18716,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_OMEGA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_alpha
	CompareConstant(XK_Greek_alpha,0x07e1,18717,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_alpha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_beta
	CompareConstant(XK_Greek_beta,0x07e2,18718,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_beta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_gamma
	CompareConstant(XK_Greek_gamma,0x07e3,18719,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_gamma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_delta
	CompareConstant(XK_Greek_delta,0x07e4,18720,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_delta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_epsilon
	CompareConstant(XK_Greek_epsilon,0x07e5,18721,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_epsilon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_zeta
	CompareConstant(XK_Greek_zeta,0x07e6,18722,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_zeta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_eta
	CompareConstant(XK_Greek_eta,0x07e7,18723,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_eta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_theta
	CompareConstant(XK_Greek_theta,0x07e8,18724,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_theta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_iota
	CompareConstant(XK_Greek_iota,0x07e9,18725,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_iota\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_kappa
	CompareConstant(XK_Greek_kappa,0x07ea,18726,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_kappa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_lamda
	CompareConstant(XK_Greek_lamda,0x07eb,18727,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_lamda\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_lambda
	CompareConstant(XK_Greek_lambda,0x07eb,18728,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_lambda\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_mu
	CompareConstant(XK_Greek_mu,0x07ec,18729,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_mu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_nu
	CompareConstant(XK_Greek_nu,0x07ed,18730,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_nu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_xi
	CompareConstant(XK_Greek_xi,0x07ee,18731,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_xi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_omicron
	CompareConstant(XK_Greek_omicron,0x07ef,18732,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_omicron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_pi
	CompareConstant(XK_Greek_pi,0x07f0,18733,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_pi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_rho
	CompareConstant(XK_Greek_rho,0x07f1,18734,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_rho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_sigma
	CompareConstant(XK_Greek_sigma,0x07f2,18735,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_sigma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_finalsmallsigma
	CompareConstant(XK_Greek_finalsmallsigma,0x07f3,18736,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_finalsmallsigma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_tau
	CompareConstant(XK_Greek_tau,0x07f4,18737,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_tau\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_upsilon
	CompareConstant(XK_Greek_upsilon,0x07f5,18738,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_upsilon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_phi
	CompareConstant(XK_Greek_phi,0x07f6,18739,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_phi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_chi
	CompareConstant(XK_Greek_chi,0x07f7,18740,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_chi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_psi
	CompareConstant(XK_Greek_psi,0x07f8,18741,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_psi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_omega
	CompareConstant(XK_Greek_omega,0x07f9,18742,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_omega\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Greek_switch
	CompareConstant(XK_Greek_switch,0xff7e,18743,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Greek_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftradical
	CompareConstant(XK_leftradical,0x08a1,18744,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftradical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_topleftradical
	CompareConstant(XK_topleftradical,0x08a2,18745,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_topleftradical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_horizconnector
	CompareConstant(XK_horizconnector,0x08a3,18746,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_horizconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_topintegral
	CompareConstant(XK_topintegral,0x08a4,18747,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_topintegral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botintegral
	CompareConstant(XK_botintegral,0x08a5,18748,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botintegral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_vertconnector
	CompareConstant(XK_vertconnector,0x08a6,18749,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_vertconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_topleftsqbracket
	CompareConstant(XK_topleftsqbracket,0x08a7,18750,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_topleftsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botleftsqbracket
	CompareConstant(XK_botleftsqbracket,0x08a8,18751,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botleftsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_toprightsqbracket
	CompareConstant(XK_toprightsqbracket,0x08a9,18752,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_toprightsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botrightsqbracket
	CompareConstant(XK_botrightsqbracket,0x08aa,18753,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botrightsqbracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_topleftparens
	CompareConstant(XK_topleftparens,0x08ab,18754,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_topleftparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botleftparens
	CompareConstant(XK_botleftparens,0x08ac,18755,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botleftparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_toprightparens
	CompareConstant(XK_toprightparens,0x08ad,18756,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_toprightparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botrightparens
	CompareConstant(XK_botrightparens,0x08ae,18757,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botrightparens\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftmiddlecurlybrace
	CompareConstant(XK_leftmiddlecurlybrace,0x08af,18758,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftmiddlecurlybrace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightmiddlecurlybrace
	CompareConstant(XK_rightmiddlecurlybrace,0x08b0,18759,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightmiddlecurlybrace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_topleftsummation
	CompareConstant(XK_topleftsummation,0x08b1,18760,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_topleftsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botleftsummation
	CompareConstant(XK_botleftsummation,0x08b2,18761,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botleftsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_topvertsummationconnector
	CompareConstant(XK_topvertsummationconnector,0x08b3,18762,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_topvertsummationconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botvertsummationconnector
	CompareConstant(XK_botvertsummationconnector,0x08b4,18763,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botvertsummationconnector\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_toprightsummation
	CompareConstant(XK_toprightsummation,0x08b5,18764,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_toprightsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_botrightsummation
	CompareConstant(XK_botrightsummation,0x08b6,18765,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_botrightsummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightmiddlesummation
	CompareConstant(XK_rightmiddlesummation,0x08b7,18766,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightmiddlesummation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lessthanequal
	CompareConstant(XK_lessthanequal,0x08bc,18767,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lessthanequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_notequal
	CompareConstant(XK_notequal,0x08bd,18768,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_notequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_greaterthanequal
	CompareConstant(XK_greaterthanequal,0x08be,18769,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_greaterthanequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_integral
	CompareConstant(XK_integral,0x08bf,18770,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_integral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_therefore
	CompareConstant(XK_therefore,0x08c0,18771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_therefore\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_variation
	CompareConstant(XK_variation,0x08c1,18772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_variation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_infinity
	CompareConstant(XK_infinity,0x08c2,18773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_infinity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_nabla
	CompareConstant(XK_nabla,0x08c5,18774,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_nabla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_approximate
	CompareConstant(XK_approximate,0x08c8,18775,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_approximate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_similarequal
	CompareConstant(XK_similarequal,0x08c9,18776,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_similarequal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ifonlyif
	CompareConstant(XK_ifonlyif,0x08cd,18777,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ifonlyif\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_implies
	CompareConstant(XK_implies,0x08ce,18778,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_implies\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_identical
	CompareConstant(XK_identical,0x08cf,18779,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_identical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_radical
	CompareConstant(XK_radical,0x08d6,18780,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_radical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_includedin
	CompareConstant(XK_includedin,0x08da,18781,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_includedin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_includes
	CompareConstant(XK_includes,0x08db,18782,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_includes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_intersection
	CompareConstant(XK_intersection,0x08dc,18783,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_intersection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_union
	CompareConstant(XK_union,0x08dd,18784,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_union\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_logicaland
	CompareConstant(XK_logicaland,0x08de,18785,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_logicaland\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_logicalor
	CompareConstant(XK_logicalor,0x08df,18786,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_logicalor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_partialderivative
	CompareConstant(XK_partialderivative,0x08ef,18787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_partialderivative\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_function
	CompareConstant(XK_function,0x08f6,18788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_function\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftarrow
	CompareConstant(XK_leftarrow,0x08fb,18789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftarrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uparrow
	CompareConstant(XK_uparrow,0x08fc,18790,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uparrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightarrow
	CompareConstant(XK_rightarrow,0x08fd,18791,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightarrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_downarrow
	CompareConstant(XK_downarrow,0x08fe,18792,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_downarrow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_blank
	CompareConstant(XK_blank,0x09df,18793,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_blank\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_soliddiamond
	CompareConstant(XK_soliddiamond,0x09e0,18794,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_soliddiamond\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_checkerboard
	CompareConstant(XK_checkerboard,0x09e1,18795,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_checkerboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ht
	CompareConstant(XK_ht,0x09e2,18796,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ht\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ff
	CompareConstant(XK_ff,0x09e3,18797,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_cr
	CompareConstant(XK_cr,0x09e4,18798,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_cr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lf
	CompareConstant(XK_lf,0x09e5,18799,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_nl
	CompareConstant(XK_nl,0x09e8,18800,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_nl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_vt
	CompareConstant(XK_vt,0x09e9,18801,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_vt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lowrightcorner
	CompareConstant(XK_lowrightcorner,0x09ea,18802,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lowrightcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uprightcorner
	CompareConstant(XK_uprightcorner,0x09eb,18803,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uprightcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_upleftcorner
	CompareConstant(XK_upleftcorner,0x09ec,18804,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_upleftcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lowleftcorner
	CompareConstant(XK_lowleftcorner,0x09ed,18805,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lowleftcorner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_crossinglines
	CompareConstant(XK_crossinglines,0x09ee,18806,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_crossinglines\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_horizlinescan1
	CompareConstant(XK_horizlinescan1,0x09ef,18807,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_horizlinescan1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_horizlinescan3
	CompareConstant(XK_horizlinescan3,0x09f0,18808,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_horizlinescan3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_horizlinescan5
	CompareConstant(XK_horizlinescan5,0x09f1,18809,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_horizlinescan5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_horizlinescan7
	CompareConstant(XK_horizlinescan7,0x09f2,18810,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_horizlinescan7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_horizlinescan9
	CompareConstant(XK_horizlinescan9,0x09f3,18811,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_horizlinescan9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftt
	CompareConstant(XK_leftt,0x09f4,18812,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightt
	CompareConstant(XK_rightt,0x09f5,18813,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_bott
	CompareConstant(XK_bott,0x09f6,18814,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_bott\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_topt
	CompareConstant(XK_topt,0x09f7,18815,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_topt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_vertbar
	CompareConstant(XK_vertbar,0x09f8,18816,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_vertbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emspace
	CompareConstant(XK_emspace,0x0aa1,18817,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_enspace
	CompareConstant(XK_enspace,0x0aa2,18818,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_enspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_em3space
	CompareConstant(XK_em3space,0x0aa3,18819,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_em3space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_em4space
	CompareConstant(XK_em4space,0x0aa4,18820,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_em4space\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_digitspace
	CompareConstant(XK_digitspace,0x0aa5,18821,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_digitspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_punctspace
	CompareConstant(XK_punctspace,0x0aa6,18822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_punctspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_thinspace
	CompareConstant(XK_thinspace,0x0aa7,18823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_thinspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hairspace
	CompareConstant(XK_hairspace,0x0aa8,18824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hairspace\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emdash
	CompareConstant(XK_emdash,0x0aa9,18825,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emdash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_endash
	CompareConstant(XK_endash,0x0aaa,18826,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_endash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_signifblank
	CompareConstant(XK_signifblank,0x0aac,18827,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_signifblank\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ellipsis
	CompareConstant(XK_ellipsis,0x0aae,18828,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ellipsis\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_doubbaselinedot
	CompareConstant(XK_doubbaselinedot,0x0aaf,18829,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_doubbaselinedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_onethird
	CompareConstant(XK_onethird,0x0ab0,18830,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_onethird\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_twothirds
	CompareConstant(XK_twothirds,0x0ab1,18831,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_twothirds\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_onefifth
	CompareConstant(XK_onefifth,0x0ab2,18832,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_onefifth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_twofifths
	CompareConstant(XK_twofifths,0x0ab3,18833,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_twofifths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_threefifths
	CompareConstant(XK_threefifths,0x0ab4,18834,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_threefifths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_fourfifths
	CompareConstant(XK_fourfifths,0x0ab5,18835,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_fourfifths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_onesixth
	CompareConstant(XK_onesixth,0x0ab6,18836,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_onesixth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_fivesixths
	CompareConstant(XK_fivesixths,0x0ab7,18837,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_fivesixths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_careof
	CompareConstant(XK_careof,0x0ab8,18838,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_careof\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_figdash
	CompareConstant(XK_figdash,0x0abb,18839,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_figdash\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftanglebracket
	CompareConstant(XK_leftanglebracket,0x0abc,18840,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftanglebracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_decimalpoint
	CompareConstant(XK_decimalpoint,0x0abd,18841,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_decimalpoint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightanglebracket
	CompareConstant(XK_rightanglebracket,0x0abe,18842,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightanglebracket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_marker
	CompareConstant(XK_marker,0x0abf,18843,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_marker\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_oneeighth
	CompareConstant(XK_oneeighth,0x0ac3,18844,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_oneeighth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_threeeighths
	CompareConstant(XK_threeeighths,0x0ac4,18845,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_threeeighths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_fiveeighths
	CompareConstant(XK_fiveeighths,0x0ac5,18846,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_fiveeighths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_seveneighths
	CompareConstant(XK_seveneighths,0x0ac6,18847,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_seveneighths\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_trademark
	CompareConstant(XK_trademark,0x0ac9,18848,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_trademark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_signaturemark
	CompareConstant(XK_signaturemark,0x0aca,18849,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_signaturemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_trademarkincircle
	CompareConstant(XK_trademarkincircle,0x0acb,18850,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_trademarkincircle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftopentriangle
	CompareConstant(XK_leftopentriangle,0x0acc,18851,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftopentriangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightopentriangle
	CompareConstant(XK_rightopentriangle,0x0acd,18852,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightopentriangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emopencircle
	CompareConstant(XK_emopencircle,0x0ace,18853,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emopencircle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emopenrectangle
	CompareConstant(XK_emopenrectangle,0x0acf,18854,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emopenrectangle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftsinglequotemark
	CompareConstant(XK_leftsinglequotemark,0x0ad0,18855,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftsinglequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightsinglequotemark
	CompareConstant(XK_rightsinglequotemark,0x0ad1,18856,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightsinglequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftdoublequotemark
	CompareConstant(XK_leftdoublequotemark,0x0ad2,18857,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftdoublequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightdoublequotemark
	CompareConstant(XK_rightdoublequotemark,0x0ad3,18858,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightdoublequotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_prescription
	CompareConstant(XK_prescription,0x0ad4,18859,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_prescription\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_minutes
	CompareConstant(XK_minutes,0x0ad6,18860,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_minutes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_seconds
	CompareConstant(XK_seconds,0x0ad7,18861,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_seconds\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_latincross
	CompareConstant(XK_latincross,0x0ad9,18862,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_latincross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hexagram
	CompareConstant(XK_hexagram,0x0ada,18863,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hexagram\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_filledrectbullet
	CompareConstant(XK_filledrectbullet,0x0adb,18864,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_filledrectbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_filledlefttribullet
	CompareConstant(XK_filledlefttribullet,0x0adc,18865,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_filledlefttribullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_filledrighttribullet
	CompareConstant(XK_filledrighttribullet,0x0add,18866,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_filledrighttribullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emfilledcircle
	CompareConstant(XK_emfilledcircle,0x0ade,18867,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emfilledcircle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emfilledrect
	CompareConstant(XK_emfilledrect,0x0adf,18868,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emfilledrect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_enopencircbullet
	CompareConstant(XK_enopencircbullet,0x0ae0,18869,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_enopencircbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_enopensquarebullet
	CompareConstant(XK_enopensquarebullet,0x0ae1,18870,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_enopensquarebullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_openrectbullet
	CompareConstant(XK_openrectbullet,0x0ae2,18871,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_openrectbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_opentribulletup
	CompareConstant(XK_opentribulletup,0x0ae3,18872,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_opentribulletup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_opentribulletdown
	CompareConstant(XK_opentribulletdown,0x0ae4,18873,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_opentribulletdown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_openstar
	CompareConstant(XK_openstar,0x0ae5,18874,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_openstar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_enfilledcircbullet
	CompareConstant(XK_enfilledcircbullet,0x0ae6,18875,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_enfilledcircbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_enfilledsqbullet
	CompareConstant(XK_enfilledsqbullet,0x0ae7,18876,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_enfilledsqbullet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_filledtribulletup
	CompareConstant(XK_filledtribulletup,0x0ae8,18877,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_filledtribulletup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_filledtribulletdown
	CompareConstant(XK_filledtribulletdown,0x0ae9,18878,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_filledtribulletdown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftpointer
	CompareConstant(XK_leftpointer,0x0aea,18879,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftpointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightpointer
	CompareConstant(XK_rightpointer,0x0aeb,18880,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightpointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_club
	CompareConstant(XK_club,0x0aec,18881,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_club\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_diamond
	CompareConstant(XK_diamond,0x0aed,18882,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_diamond\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_heart
	CompareConstant(XK_heart,0x0aee,18883,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_heart\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_maltesecross
	CompareConstant(XK_maltesecross,0x0af0,18884,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_maltesecross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dagger
	CompareConstant(XK_dagger,0x0af1,18885,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dagger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_doubledagger
	CompareConstant(XK_doubledagger,0x0af2,18886,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_doubledagger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_checkmark
	CompareConstant(XK_checkmark,0x0af3,18887,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_checkmark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ballotcross
	CompareConstant(XK_ballotcross,0x0af4,18888,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ballotcross\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_musicalsharp
	CompareConstant(XK_musicalsharp,0x0af5,18889,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_musicalsharp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_musicalflat
	CompareConstant(XK_musicalflat,0x0af6,18890,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_musicalflat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_malesymbol
	CompareConstant(XK_malesymbol,0x0af7,18891,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_malesymbol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_femalesymbol
	CompareConstant(XK_femalesymbol,0x0af8,18892,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_femalesymbol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_telephone
	CompareConstant(XK_telephone,0x0af9,18893,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_telephone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_telephonerecorder
	CompareConstant(XK_telephonerecorder,0x0afa,18894,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_telephonerecorder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_phonographcopyright
	CompareConstant(XK_phonographcopyright,0x0afb,18895,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_phonographcopyright\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_caret
	CompareConstant(XK_caret,0x0afc,18896,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_caret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_singlelowquotemark
	CompareConstant(XK_singlelowquotemark,0x0afd,18897,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_singlelowquotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_doublelowquotemark
	CompareConstant(XK_doublelowquotemark,0x0afe,18898,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_doublelowquotemark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_cursor
	CompareConstant(XK_cursor,0x0aff,18899,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_cursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftcaret
	CompareConstant(XK_leftcaret,0x0ba3,18900,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightcaret
	CompareConstant(XK_rightcaret,0x0ba6,18901,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_downcaret
	CompareConstant(XK_downcaret,0x0ba8,18902,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_downcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_upcaret
	CompareConstant(XK_upcaret,0x0ba9,18903,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_upcaret\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_overbar
	CompareConstant(XK_overbar,0x0bc0,18904,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_overbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_downtack
	CompareConstant(XK_downtack,0x0bc2,18905,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_downtack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_upshoe
	CompareConstant(XK_upshoe,0x0bc3,18906,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_upshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_downstile
	CompareConstant(XK_downstile,0x0bc4,18907,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_downstile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_underbar
	CompareConstant(XK_underbar,0x0bc6,18908,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_underbar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_jot
	CompareConstant(XK_jot,0x0bca,18909,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_jot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_quad
	CompareConstant(XK_quad,0x0bcc,18910,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_quad\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uptack
	CompareConstant(XK_uptack,0x0bce,18911,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uptack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_circle
	CompareConstant(XK_circle,0x0bcf,18912,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_circle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_upstile
	CompareConstant(XK_upstile,0x0bd3,18913,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_upstile\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_downshoe
	CompareConstant(XK_downshoe,0x0bd6,18914,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_downshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_rightshoe
	CompareConstant(XK_rightshoe,0x0bd8,18915,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_rightshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_leftshoe
	CompareConstant(XK_leftshoe,0x0bda,18916,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_leftshoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lefttack
	CompareConstant(XK_lefttack,0x0bdc,18917,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lefttack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_righttack
	CompareConstant(XK_righttack,0x0bfc,18918,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_righttack\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_doublelowline
	CompareConstant(XK_hebrew_doublelowline,0x0cdf,18919,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_doublelowline\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_aleph
	CompareConstant(XK_hebrew_aleph,0x0ce0,18920,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_aleph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_bet
	CompareConstant(XK_hebrew_bet,0x0ce1,18921,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_bet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_beth
	CompareConstant(XK_hebrew_beth,0x0ce1,18922,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_beth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_gimel
	CompareConstant(XK_hebrew_gimel,0x0ce2,18923,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_gimel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_gimmel
	CompareConstant(XK_hebrew_gimmel,0x0ce2,18924,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_gimmel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_dalet
	CompareConstant(XK_hebrew_dalet,0x0ce3,18925,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_dalet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_daleth
	CompareConstant(XK_hebrew_daleth,0x0ce3,18926,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_daleth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_he
	CompareConstant(XK_hebrew_he,0x0ce4,18927,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_he\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_waw
	CompareConstant(XK_hebrew_waw,0x0ce5,18928,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_waw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_zain
	CompareConstant(XK_hebrew_zain,0x0ce6,18929,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_zain\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_zayin
	CompareConstant(XK_hebrew_zayin,0x0ce6,18930,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_zayin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_chet
	CompareConstant(XK_hebrew_chet,0x0ce7,18931,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_chet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_het
	CompareConstant(XK_hebrew_het,0x0ce7,18932,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_het\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_tet
	CompareConstant(XK_hebrew_tet,0x0ce8,18933,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_tet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_teth
	CompareConstant(XK_hebrew_teth,0x0ce8,18934,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_teth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_yod
	CompareConstant(XK_hebrew_yod,0x0ce9,18935,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_yod\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_finalkaph
	CompareConstant(XK_hebrew_finalkaph,0x0cea,18936,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_finalkaph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_kaph
	CompareConstant(XK_hebrew_kaph,0x0ceb,18937,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_kaph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_lamed
	CompareConstant(XK_hebrew_lamed,0x0cec,18938,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_lamed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_finalmem
	CompareConstant(XK_hebrew_finalmem,0x0ced,18939,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_finalmem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_mem
	CompareConstant(XK_hebrew_mem,0x0cee,18940,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_mem\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_finalnun
	CompareConstant(XK_hebrew_finalnun,0x0cef,18941,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_finalnun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_nun
	CompareConstant(XK_hebrew_nun,0x0cf0,18942,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_nun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_samech
	CompareConstant(XK_hebrew_samech,0x0cf1,18943,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_samech\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_samekh
	CompareConstant(XK_hebrew_samekh,0x0cf1,18944,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_samekh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_ayin
	CompareConstant(XK_hebrew_ayin,0x0cf2,18945,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_ayin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_finalpe
	CompareConstant(XK_hebrew_finalpe,0x0cf3,18946,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_finalpe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_pe
	CompareConstant(XK_hebrew_pe,0x0cf4,18947,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_pe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_finalzade
	CompareConstant(XK_hebrew_finalzade,0x0cf5,18948,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_finalzade\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_finalzadi
	CompareConstant(XK_hebrew_finalzadi,0x0cf5,18949,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_finalzadi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_zade
	CompareConstant(XK_hebrew_zade,0x0cf6,18950,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_zade\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_zadi
	CompareConstant(XK_hebrew_zadi,0x0cf6,18951,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_zadi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_qoph
	CompareConstant(XK_hebrew_qoph,0x0cf7,18952,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_qoph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_kuf
	CompareConstant(XK_hebrew_kuf,0x0cf7,18953,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_kuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_resh
	CompareConstant(XK_hebrew_resh,0x0cf8,18954,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_resh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_shin
	CompareConstant(XK_hebrew_shin,0x0cf9,18955,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_shin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_taw
	CompareConstant(XK_hebrew_taw,0x0cfa,18956,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_taw\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_hebrew_taf
	CompareConstant(XK_hebrew_taf,0x0cfa,18957,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_hebrew_taf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hebrew_switch
	CompareConstant(XK_Hebrew_switch,0xff7e,18958,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hebrew_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_kokai
	CompareConstant(XK_Thai_kokai,0x0da1,18959,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_kokai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_khokhai
	CompareConstant(XK_Thai_khokhai,0x0da2,18960,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_khokhai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_khokhuat
	CompareConstant(XK_Thai_khokhuat,0x0da3,18961,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_khokhuat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_khokhwai
	CompareConstant(XK_Thai_khokhwai,0x0da4,18962,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_khokhwai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_khokhon
	CompareConstant(XK_Thai_khokhon,0x0da5,18963,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_khokhon\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_khorakhang
	CompareConstant(XK_Thai_khorakhang,0x0da6,18964,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_khorakhang\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_ngongu
	CompareConstant(XK_Thai_ngongu,0x0da7,18965,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_ngongu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_chochan
	CompareConstant(XK_Thai_chochan,0x0da8,18966,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_chochan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_choching
	CompareConstant(XK_Thai_choching,0x0da9,18967,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_choching\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_chochang
	CompareConstant(XK_Thai_chochang,0x0daa,18968,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_chochang\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_soso
	CompareConstant(XK_Thai_soso,0x0dab,18969,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_soso\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_chochoe
	CompareConstant(XK_Thai_chochoe,0x0dac,18970,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_chochoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_yoying
	CompareConstant(XK_Thai_yoying,0x0dad,18971,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_yoying\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_dochada
	CompareConstant(XK_Thai_dochada,0x0dae,18972,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_dochada\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_topatak
	CompareConstant(XK_Thai_topatak,0x0daf,18973,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_topatak\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_thothan
	CompareConstant(XK_Thai_thothan,0x0db0,18974,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_thothan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_thonangmontho
	CompareConstant(XK_Thai_thonangmontho,0x0db1,18975,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_thonangmontho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_thophuthao
	CompareConstant(XK_Thai_thophuthao,0x0db2,18976,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_thophuthao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_nonen
	CompareConstant(XK_Thai_nonen,0x0db3,18977,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_nonen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_dodek
	CompareConstant(XK_Thai_dodek,0x0db4,18978,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_dodek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_totao
	CompareConstant(XK_Thai_totao,0x0db5,18979,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_totao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_thothung
	CompareConstant(XK_Thai_thothung,0x0db6,18980,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_thothung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_thothahan
	CompareConstant(XK_Thai_thothahan,0x0db7,18981,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_thothahan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_thothong
	CompareConstant(XK_Thai_thothong,0x0db8,18982,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_thothong\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_nonu
	CompareConstant(XK_Thai_nonu,0x0db9,18983,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_nonu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_bobaimai
	CompareConstant(XK_Thai_bobaimai,0x0dba,18984,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_bobaimai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_popla
	CompareConstant(XK_Thai_popla,0x0dbb,18985,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_popla\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_phophung
	CompareConstant(XK_Thai_phophung,0x0dbc,18986,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_phophung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_fofa
	CompareConstant(XK_Thai_fofa,0x0dbd,18987,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_fofa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_phophan
	CompareConstant(XK_Thai_phophan,0x0dbe,18988,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_phophan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_fofan
	CompareConstant(XK_Thai_fofan,0x0dbf,18989,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_fofan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_phosamphao
	CompareConstant(XK_Thai_phosamphao,0x0dc0,18990,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_phosamphao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_moma
	CompareConstant(XK_Thai_moma,0x0dc1,18991,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_moma\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_yoyak
	CompareConstant(XK_Thai_yoyak,0x0dc2,18992,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_yoyak\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_rorua
	CompareConstant(XK_Thai_rorua,0x0dc3,18993,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_rorua\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_ru
	CompareConstant(XK_Thai_ru,0x0dc4,18994,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_ru\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_loling
	CompareConstant(XK_Thai_loling,0x0dc5,18995,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_loling\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lu
	CompareConstant(XK_Thai_lu,0x0dc6,18996,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_wowaen
	CompareConstant(XK_Thai_wowaen,0x0dc7,18997,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_wowaen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sosala
	CompareConstant(XK_Thai_sosala,0x0dc8,18998,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sosala\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sorusi
	CompareConstant(XK_Thai_sorusi,0x0dc9,18999,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sorusi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sosua
	CompareConstant(XK_Thai_sosua,0x0dca,19000,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sosua\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_hohip
	CompareConstant(XK_Thai_hohip,0x0dcb,19001,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_hohip\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lochula
	CompareConstant(XK_Thai_lochula,0x0dcc,19002,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lochula\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_oang
	CompareConstant(XK_Thai_oang,0x0dcd,19003,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_oang\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_honokhuk
	CompareConstant(XK_Thai_honokhuk,0x0dce,19004,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_honokhuk\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_paiyannoi
	CompareConstant(XK_Thai_paiyannoi,0x0dcf,19005,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_paiyannoi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraa
	CompareConstant(XK_Thai_saraa,0x0dd0,19006,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maihanakat
	CompareConstant(XK_Thai_maihanakat,0x0dd1,19007,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maihanakat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraaa
	CompareConstant(XK_Thai_saraaa,0x0dd2,19008,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraaa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraam
	CompareConstant(XK_Thai_saraam,0x0dd3,19009,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sarai
	CompareConstant(XK_Thai_sarai,0x0dd4,19010,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sarai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraii
	CompareConstant(XK_Thai_saraii,0x0dd5,19011,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraii\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraue
	CompareConstant(XK_Thai_saraue,0x0dd6,19012,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sarauee
	CompareConstant(XK_Thai_sarauee,0x0dd7,19013,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sarauee\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sarau
	CompareConstant(XK_Thai_sarau,0x0dd8,19014,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sarau\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sarauu
	CompareConstant(XK_Thai_sarauu,0x0dd9,19015,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sarauu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_phinthu
	CompareConstant(XK_Thai_phinthu,0x0dda,19016,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_phinthu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maihanakat_maitho
	CompareConstant(XK_Thai_maihanakat_maitho,0x0dde,19017,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maihanakat_maitho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_baht
	CompareConstant(XK_Thai_baht,0x0ddf,19018,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_baht\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sarae
	CompareConstant(XK_Thai_sarae,0x0de0,19019,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sarae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraae
	CompareConstant(XK_Thai_saraae,0x0de1,19020,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_sarao
	CompareConstant(XK_Thai_sarao,0x0de2,19021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_sarao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraaimaimuan
	CompareConstant(XK_Thai_saraaimaimuan,0x0de3,19022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraaimaimuan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_saraaimaimalai
	CompareConstant(XK_Thai_saraaimaimalai,0x0de4,19023,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_saraaimaimalai\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lakkhangyao
	CompareConstant(XK_Thai_lakkhangyao,0x0de5,19024,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lakkhangyao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maiyamok
	CompareConstant(XK_Thai_maiyamok,0x0de6,19025,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maiyamok\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maitaikhu
	CompareConstant(XK_Thai_maitaikhu,0x0de7,19026,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maitaikhu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maiek
	CompareConstant(XK_Thai_maiek,0x0de8,19027,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maiek\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maitho
	CompareConstant(XK_Thai_maitho,0x0de9,19028,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maitho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maitri
	CompareConstant(XK_Thai_maitri,0x0dea,19029,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maitri\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_maichattawa
	CompareConstant(XK_Thai_maichattawa,0x0deb,19030,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_maichattawa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_thanthakhat
	CompareConstant(XK_Thai_thanthakhat,0x0dec,19031,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_thanthakhat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_nikhahit
	CompareConstant(XK_Thai_nikhahit,0x0ded,19032,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_nikhahit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_leksun
	CompareConstant(XK_Thai_leksun,0x0df0,19033,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_leksun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_leknung
	CompareConstant(XK_Thai_leknung,0x0df1,19034,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_leknung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_leksong
	CompareConstant(XK_Thai_leksong,0x0df2,19035,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_leksong\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_leksam
	CompareConstant(XK_Thai_leksam,0x0df3,19036,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_leksam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_leksi
	CompareConstant(XK_Thai_leksi,0x0df4,19037,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_leksi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lekha
	CompareConstant(XK_Thai_lekha,0x0df5,19038,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lekha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lekhok
	CompareConstant(XK_Thai_lekhok,0x0df6,19039,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lekhok\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lekchet
	CompareConstant(XK_Thai_lekchet,0x0df7,19040,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lekchet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lekpaet
	CompareConstant(XK_Thai_lekpaet,0x0df8,19041,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lekpaet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Thai_lekkao
	CompareConstant(XK_Thai_lekkao,0x0df9,19042,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Thai_lekkao\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul
	CompareConstant(XK_Hangul,0xff31,19043,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Start
	CompareConstant(XK_Hangul_Start,0xff32,19044,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Start\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_End
	CompareConstant(XK_Hangul_End,0xff33,19045,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Hanja
	CompareConstant(XK_Hangul_Hanja,0xff34,19046,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Hanja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Jamo
	CompareConstant(XK_Hangul_Jamo,0xff35,19047,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Jamo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Romaja
	CompareConstant(XK_Hangul_Romaja,0xff36,19048,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Romaja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Codeinput
	CompareConstant(XK_Hangul_Codeinput,0xff37,19049,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Codeinput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Jeonja
	CompareConstant(XK_Hangul_Jeonja,0xff38,19050,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Jeonja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Banja
	CompareConstant(XK_Hangul_Banja,0xff39,19051,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Banja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_PreHanja
	CompareConstant(XK_Hangul_PreHanja,0xff3a,19052,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_PreHanja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_PostHanja
	CompareConstant(XK_Hangul_PostHanja,0xff3b,19053,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_PostHanja\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SingleCandidate
	CompareConstant(XK_Hangul_SingleCandidate,0xff3c,19054,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SingleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_MultipleCandidate
	CompareConstant(XK_Hangul_MultipleCandidate,0xff3d,19055,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_MultipleCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_PreviousCandidate
	CompareConstant(XK_Hangul_PreviousCandidate,0xff3e,19056,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_PreviousCandidate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Special
	CompareConstant(XK_Hangul_Special,0xff3f,19057,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Special\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_switch
	CompareConstant(XK_Hangul_switch,0xff7e,19058,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_switch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Kiyeog
	CompareConstant(XK_Hangul_Kiyeog,0x0ea1,19059,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Kiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SsangKiyeog
	CompareConstant(XK_Hangul_SsangKiyeog,0x0ea2,19060,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SsangKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_KiyeogSios
	CompareConstant(XK_Hangul_KiyeogSios,0x0ea3,19061,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_KiyeogSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Nieun
	CompareConstant(XK_Hangul_Nieun,0x0ea4,19062,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Nieun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_NieunJieuj
	CompareConstant(XK_Hangul_NieunJieuj,0x0ea5,19063,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_NieunJieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_NieunHieuh
	CompareConstant(XK_Hangul_NieunHieuh,0x0ea6,19064,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_NieunHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Dikeud
	CompareConstant(XK_Hangul_Dikeud,0x0ea7,19065,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Dikeud\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SsangDikeud
	CompareConstant(XK_Hangul_SsangDikeud,0x0ea8,19066,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SsangDikeud\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Rieul
	CompareConstant(XK_Hangul_Rieul,0x0ea9,19067,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Rieul\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulKiyeog
	CompareConstant(XK_Hangul_RieulKiyeog,0x0eaa,19068,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulMieum
	CompareConstant(XK_Hangul_RieulMieum,0x0eab,19069,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulMieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulPieub
	CompareConstant(XK_Hangul_RieulPieub,0x0eac,19070,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulSios
	CompareConstant(XK_Hangul_RieulSios,0x0ead,19071,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulTieut
	CompareConstant(XK_Hangul_RieulTieut,0x0eae,19072,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulTieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulPhieuf
	CompareConstant(XK_Hangul_RieulPhieuf,0x0eaf,19073,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulPhieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulHieuh
	CompareConstant(XK_Hangul_RieulHieuh,0x0eb0,19074,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Mieum
	CompareConstant(XK_Hangul_Mieum,0x0eb1,19075,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Mieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Pieub
	CompareConstant(XK_Hangul_Pieub,0x0eb2,19076,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Pieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SsangPieub
	CompareConstant(XK_Hangul_SsangPieub,0x0eb3,19077,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SsangPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_PieubSios
	CompareConstant(XK_Hangul_PieubSios,0x0eb4,19078,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_PieubSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Sios
	CompareConstant(XK_Hangul_Sios,0x0eb5,19079,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Sios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SsangSios
	CompareConstant(XK_Hangul_SsangSios,0x0eb6,19080,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SsangSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Ieung
	CompareConstant(XK_Hangul_Ieung,0x0eb7,19081,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Ieung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Jieuj
	CompareConstant(XK_Hangul_Jieuj,0x0eb8,19082,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Jieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SsangJieuj
	CompareConstant(XK_Hangul_SsangJieuj,0x0eb9,19083,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SsangJieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Cieuc
	CompareConstant(XK_Hangul_Cieuc,0x0eba,19084,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Cieuc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Khieuq
	CompareConstant(XK_Hangul_Khieuq,0x0ebb,19085,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Khieuq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Tieut
	CompareConstant(XK_Hangul_Tieut,0x0ebc,19086,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Tieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Phieuf
	CompareConstant(XK_Hangul_Phieuf,0x0ebd,19087,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Phieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_Hieuh
	CompareConstant(XK_Hangul_Hieuh,0x0ebe,19088,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_Hieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_A
	CompareConstant(XK_Hangul_A,0x0ebf,19089,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_A\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_AE
	CompareConstant(XK_Hangul_AE,0x0ec0,19090,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_AE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YA
	CompareConstant(XK_Hangul_YA,0x0ec1,19091,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YAE
	CompareConstant(XK_Hangul_YAE,0x0ec2,19092,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YAE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_EO
	CompareConstant(XK_Hangul_EO,0x0ec3,19093,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_EO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_E
	CompareConstant(XK_Hangul_E,0x0ec4,19094,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YEO
	CompareConstant(XK_Hangul_YEO,0x0ec5,19095,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YEO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YE
	CompareConstant(XK_Hangul_YE,0x0ec6,19096,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_O
	CompareConstant(XK_Hangul_O,0x0ec7,19097,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_WA
	CompareConstant(XK_Hangul_WA,0x0ec8,19098,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_WA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_WAE
	CompareConstant(XK_Hangul_WAE,0x0ec9,19099,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_WAE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_OE
	CompareConstant(XK_Hangul_OE,0x0eca,19100,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_OE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YO
	CompareConstant(XK_Hangul_YO,0x0ecb,19101,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_U
	CompareConstant(XK_Hangul_U,0x0ecc,19102,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_U\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_WEO
	CompareConstant(XK_Hangul_WEO,0x0ecd,19103,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_WEO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_WE
	CompareConstant(XK_Hangul_WE,0x0ece,19104,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_WE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_WI
	CompareConstant(XK_Hangul_WI,0x0ecf,19105,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_WI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YU
	CompareConstant(XK_Hangul_YU,0x0ed0,19106,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_EU
	CompareConstant(XK_Hangul_EU,0x0ed1,19107,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_EU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YI
	CompareConstant(XK_Hangul_YI,0x0ed2,19108,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_I
	CompareConstant(XK_Hangul_I,0x0ed3,19109,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_I\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Kiyeog
	CompareConstant(XK_Hangul_J_Kiyeog,0x0ed4,19110,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Kiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_SsangKiyeog
	CompareConstant(XK_Hangul_J_SsangKiyeog,0x0ed5,19111,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_SsangKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_KiyeogSios
	CompareConstant(XK_Hangul_J_KiyeogSios,0x0ed6,19112,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_KiyeogSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Nieun
	CompareConstant(XK_Hangul_J_Nieun,0x0ed7,19113,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Nieun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_NieunJieuj
	CompareConstant(XK_Hangul_J_NieunJieuj,0x0ed8,19114,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_NieunJieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_NieunHieuh
	CompareConstant(XK_Hangul_J_NieunHieuh,0x0ed9,19115,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_NieunHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Dikeud
	CompareConstant(XK_Hangul_J_Dikeud,0x0eda,19116,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Dikeud\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Rieul
	CompareConstant(XK_Hangul_J_Rieul,0x0edb,19117,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Rieul\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_RieulKiyeog
	CompareConstant(XK_Hangul_J_RieulKiyeog,0x0edc,19118,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_RieulKiyeog\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_RieulMieum
	CompareConstant(XK_Hangul_J_RieulMieum,0x0edd,19119,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_RieulMieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_RieulPieub
	CompareConstant(XK_Hangul_J_RieulPieub,0x0ede,19120,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_RieulPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_RieulSios
	CompareConstant(XK_Hangul_J_RieulSios,0x0edf,19121,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_RieulSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_RieulTieut
	CompareConstant(XK_Hangul_J_RieulTieut,0x0ee0,19122,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_RieulTieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_RieulPhieuf
	CompareConstant(XK_Hangul_J_RieulPhieuf,0x0ee1,19123,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_RieulPhieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_RieulHieuh
	CompareConstant(XK_Hangul_J_RieulHieuh,0x0ee2,19124,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_RieulHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Mieum
	CompareConstant(XK_Hangul_J_Mieum,0x0ee3,19125,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Mieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Pieub
	CompareConstant(XK_Hangul_J_Pieub,0x0ee4,19126,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Pieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_PieubSios
	CompareConstant(XK_Hangul_J_PieubSios,0x0ee5,19127,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_PieubSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Sios
	CompareConstant(XK_Hangul_J_Sios,0x0ee6,19128,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Sios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_SsangSios
	CompareConstant(XK_Hangul_J_SsangSios,0x0ee7,19129,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_SsangSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Ieung
	CompareConstant(XK_Hangul_J_Ieung,0x0ee8,19130,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Ieung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Jieuj
	CompareConstant(XK_Hangul_J_Jieuj,0x0ee9,19131,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Jieuj\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Cieuc
	CompareConstant(XK_Hangul_J_Cieuc,0x0eea,19132,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Cieuc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Khieuq
	CompareConstant(XK_Hangul_J_Khieuq,0x0eeb,19133,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Khieuq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Tieut
	CompareConstant(XK_Hangul_J_Tieut,0x0eec,19134,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Tieut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Phieuf
	CompareConstant(XK_Hangul_J_Phieuf,0x0eed,19135,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Phieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_Hieuh
	CompareConstant(XK_Hangul_J_Hieuh,0x0eee,19136,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_Hieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_RieulYeorinHieuh
	CompareConstant(XK_Hangul_RieulYeorinHieuh,0x0eef,19137,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_RieulYeorinHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SunkyeongeumMieum
	CompareConstant(XK_Hangul_SunkyeongeumMieum,0x0ef0,19138,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SunkyeongeumMieum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SunkyeongeumPieub
	CompareConstant(XK_Hangul_SunkyeongeumPieub,0x0ef1,19139,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SunkyeongeumPieub\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_PanSios
	CompareConstant(XK_Hangul_PanSios,0x0ef2,19140,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_PanSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_KkogjiDalrinIeung
	CompareConstant(XK_Hangul_KkogjiDalrinIeung,0x0ef3,19141,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_KkogjiDalrinIeung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_SunkyeongeumPhieuf
	CompareConstant(XK_Hangul_SunkyeongeumPhieuf,0x0ef4,19142,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_SunkyeongeumPhieuf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_YeorinHieuh
	CompareConstant(XK_Hangul_YeorinHieuh,0x0ef5,19143,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_YeorinHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_AraeA
	CompareConstant(XK_Hangul_AraeA,0x0ef6,19144,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_AraeA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_AraeAE
	CompareConstant(XK_Hangul_AraeAE,0x0ef7,19145,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_AraeAE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_PanSios
	CompareConstant(XK_Hangul_J_PanSios,0x0ef8,19146,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_PanSios\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_KkogjiDalrinIeung
	CompareConstant(XK_Hangul_J_KkogjiDalrinIeung,0x0ef9,19147,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_KkogjiDalrinIeung\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Hangul_J_YeorinHieuh
	CompareConstant(XK_Hangul_J_YeorinHieuh,0x0efa,19148,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Hangul_J_YeorinHieuh\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Korean_Won
	CompareConstant(XK_Korean_Won,0x0eff,19149,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Korean_Won\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ligature_ew
	CompareConstant(XK_Armenian_ligature_ew,0x1000587,19150,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ligature_ew\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_full_stop
	CompareConstant(XK_Armenian_full_stop,0x1000589,19151,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_full_stop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_verjaket
	CompareConstant(XK_Armenian_verjaket,0x1000589,19152,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_verjaket\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_separation_mark
	CompareConstant(XK_Armenian_separation_mark,0x100055d,19153,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_separation_mark\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_but
	CompareConstant(XK_Armenian_but,0x100055d,19154,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_but\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_hyphen
	CompareConstant(XK_Armenian_hyphen,0x100058a,19155,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_hyphen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_yentamna
	CompareConstant(XK_Armenian_yentamna,0x100058a,19156,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_yentamna\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_exclam
	CompareConstant(XK_Armenian_exclam,0x100055c,19157,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_exclam\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_amanak
	CompareConstant(XK_Armenian_amanak,0x100055c,19158,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_amanak\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_accent
	CompareConstant(XK_Armenian_accent,0x100055b,19159,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_accent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_shesht
	CompareConstant(XK_Armenian_shesht,0x100055b,19160,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_shesht\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_question
	CompareConstant(XK_Armenian_question,0x100055e,19161,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_question\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_paruyk
	CompareConstant(XK_Armenian_paruyk,0x100055e,19162,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_paruyk\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_AYB
	CompareConstant(XK_Armenian_AYB,0x1000531,19163,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_AYB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ayb
	CompareConstant(XK_Armenian_ayb,0x1000561,19164,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ayb\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_BEN
	CompareConstant(XK_Armenian_BEN,0x1000532,19165,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_BEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ben
	CompareConstant(XK_Armenian_ben,0x1000562,19166,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ben\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_GIM
	CompareConstant(XK_Armenian_GIM,0x1000533,19167,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_GIM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_gim
	CompareConstant(XK_Armenian_gim,0x1000563,19168,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_gim\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_DA
	CompareConstant(XK_Armenian_DA,0x1000534,19169,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_DA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_da
	CompareConstant(XK_Armenian_da,0x1000564,19170,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_da\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_YECH
	CompareConstant(XK_Armenian_YECH,0x1000535,19171,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_YECH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_yech
	CompareConstant(XK_Armenian_yech,0x1000565,19172,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_yech\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ZA
	CompareConstant(XK_Armenian_ZA,0x1000536,19173,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ZA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_za
	CompareConstant(XK_Armenian_za,0x1000566,19174,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_za\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_E
	CompareConstant(XK_Armenian_E,0x1000537,19175,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_E\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_e
	CompareConstant(XK_Armenian_e,0x1000567,19176,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_e\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_AT
	CompareConstant(XK_Armenian_AT,0x1000538,19177,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_AT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_at
	CompareConstant(XK_Armenian_at,0x1000568,19178,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_at\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_TO
	CompareConstant(XK_Armenian_TO,0x1000539,19179,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_TO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_to
	CompareConstant(XK_Armenian_to,0x1000569,19180,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_to\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ZHE
	CompareConstant(XK_Armenian_ZHE,0x100053a,19181,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ZHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_zhe
	CompareConstant(XK_Armenian_zhe,0x100056a,19182,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_zhe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_INI
	CompareConstant(XK_Armenian_INI,0x100053b,19183,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_INI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ini
	CompareConstant(XK_Armenian_ini,0x100056b,19184,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ini\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_LYUN
	CompareConstant(XK_Armenian_LYUN,0x100053c,19185,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_LYUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_lyun
	CompareConstant(XK_Armenian_lyun,0x100056c,19186,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_lyun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_KHE
	CompareConstant(XK_Armenian_KHE,0x100053d,19187,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_KHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_khe
	CompareConstant(XK_Armenian_khe,0x100056d,19188,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_khe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_TSA
	CompareConstant(XK_Armenian_TSA,0x100053e,19189,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_TSA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_tsa
	CompareConstant(XK_Armenian_tsa,0x100056e,19190,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_tsa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_KEN
	CompareConstant(XK_Armenian_KEN,0x100053f,19191,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_KEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ken
	CompareConstant(XK_Armenian_ken,0x100056f,19192,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ken\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_HO
	CompareConstant(XK_Armenian_HO,0x1000540,19193,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_HO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ho
	CompareConstant(XK_Armenian_ho,0x1000570,19194,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ho\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_DZA
	CompareConstant(XK_Armenian_DZA,0x1000541,19195,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_DZA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_dza
	CompareConstant(XK_Armenian_dza,0x1000571,19196,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_dza\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_GHAT
	CompareConstant(XK_Armenian_GHAT,0x1000542,19197,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_GHAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ghat
	CompareConstant(XK_Armenian_ghat,0x1000572,19198,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ghat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_TCHE
	CompareConstant(XK_Armenian_TCHE,0x1000543,19199,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_TCHE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_tche
	CompareConstant(XK_Armenian_tche,0x1000573,19200,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_tche\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_MEN
	CompareConstant(XK_Armenian_MEN,0x1000544,19201,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_MEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_men
	CompareConstant(XK_Armenian_men,0x1000574,19202,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_men\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_HI
	CompareConstant(XK_Armenian_HI,0x1000545,19203,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_HI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_hi
	CompareConstant(XK_Armenian_hi,0x1000575,19204,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_hi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_NU
	CompareConstant(XK_Armenian_NU,0x1000546,19205,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_NU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_nu
	CompareConstant(XK_Armenian_nu,0x1000576,19206,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_nu\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_SHA
	CompareConstant(XK_Armenian_SHA,0x1000547,19207,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_sha
	CompareConstant(XK_Armenian_sha,0x1000577,19208,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_sha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_VO
	CompareConstant(XK_Armenian_VO,0x1000548,19209,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_VO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_vo
	CompareConstant(XK_Armenian_vo,0x1000578,19210,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_vo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_CHA
	CompareConstant(XK_Armenian_CHA,0x1000549,19211,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_CHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_cha
	CompareConstant(XK_Armenian_cha,0x1000579,19212,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_cha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_PE
	CompareConstant(XK_Armenian_PE,0x100054a,19213,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_PE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_pe
	CompareConstant(XK_Armenian_pe,0x100057a,19214,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_pe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_JE
	CompareConstant(XK_Armenian_JE,0x100054b,19215,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_JE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_je
	CompareConstant(XK_Armenian_je,0x100057b,19216,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_je\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_RA
	CompareConstant(XK_Armenian_RA,0x100054c,19217,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_RA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ra
	CompareConstant(XK_Armenian_ra,0x100057c,19218,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ra\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_SE
	CompareConstant(XK_Armenian_SE,0x100054d,19219,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_SE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_se
	CompareConstant(XK_Armenian_se,0x100057d,19220,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_se\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_VEV
	CompareConstant(XK_Armenian_VEV,0x100054e,19221,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_VEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_vev
	CompareConstant(XK_Armenian_vev,0x100057e,19222,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_vev\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_TYUN
	CompareConstant(XK_Armenian_TYUN,0x100054f,19223,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_TYUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_tyun
	CompareConstant(XK_Armenian_tyun,0x100057f,19224,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_tyun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_RE
	CompareConstant(XK_Armenian_RE,0x1000550,19225,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_RE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_re
	CompareConstant(XK_Armenian_re,0x1000580,19226,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_re\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_TSO
	CompareConstant(XK_Armenian_TSO,0x1000551,19227,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_TSO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_tso
	CompareConstant(XK_Armenian_tso,0x1000581,19228,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_tso\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_VYUN
	CompareConstant(XK_Armenian_VYUN,0x1000552,19229,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_VYUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_vyun
	CompareConstant(XK_Armenian_vyun,0x1000582,19230,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_vyun\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_PYUR
	CompareConstant(XK_Armenian_PYUR,0x1000553,19231,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_PYUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_pyur
	CompareConstant(XK_Armenian_pyur,0x1000583,19232,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_pyur\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_KE
	CompareConstant(XK_Armenian_KE,0x1000554,19233,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_KE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_ke
	CompareConstant(XK_Armenian_ke,0x1000584,19234,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_ke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_O
	CompareConstant(XK_Armenian_O,0x1000555,19235,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_O\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_o
	CompareConstant(XK_Armenian_o,0x1000585,19236,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_o\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_FE
	CompareConstant(XK_Armenian_FE,0x1000556,19237,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_FE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_fe
	CompareConstant(XK_Armenian_fe,0x1000586,19238,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_fe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Armenian_apostrophe
	CompareConstant(XK_Armenian_apostrophe,0x100055a,19239,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Armenian_apostrophe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_an
	CompareConstant(XK_Georgian_an,0x10010d0,19240,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_an\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_ban
	CompareConstant(XK_Georgian_ban,0x10010d1,19241,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_ban\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_gan
	CompareConstant(XK_Georgian_gan,0x10010d2,19242,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_gan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_don
	CompareConstant(XK_Georgian_don,0x10010d3,19243,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_don\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_en
	CompareConstant(XK_Georgian_en,0x10010d4,19244,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_en\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_vin
	CompareConstant(XK_Georgian_vin,0x10010d5,19245,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_vin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_zen
	CompareConstant(XK_Georgian_zen,0x10010d6,19246,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_zen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_tan
	CompareConstant(XK_Georgian_tan,0x10010d7,19247,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_tan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_in
	CompareConstant(XK_Georgian_in,0x10010d8,19248,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_in\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_kan
	CompareConstant(XK_Georgian_kan,0x10010d9,19249,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_kan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_las
	CompareConstant(XK_Georgian_las,0x10010da,19250,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_las\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_man
	CompareConstant(XK_Georgian_man,0x10010db,19251,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_man\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_nar
	CompareConstant(XK_Georgian_nar,0x10010dc,19252,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_nar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_on
	CompareConstant(XK_Georgian_on,0x10010dd,19253,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_on\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_par
	CompareConstant(XK_Georgian_par,0x10010de,19254,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_par\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_zhar
	CompareConstant(XK_Georgian_zhar,0x10010df,19255,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_zhar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_rae
	CompareConstant(XK_Georgian_rae,0x10010e0,19256,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_rae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_san
	CompareConstant(XK_Georgian_san,0x10010e1,19257,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_san\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_tar
	CompareConstant(XK_Georgian_tar,0x10010e2,19258,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_tar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_un
	CompareConstant(XK_Georgian_un,0x10010e3,19259,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_un\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_phar
	CompareConstant(XK_Georgian_phar,0x10010e4,19260,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_phar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_khar
	CompareConstant(XK_Georgian_khar,0x10010e5,19261,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_khar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_ghan
	CompareConstant(XK_Georgian_ghan,0x10010e6,19262,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_ghan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_qar
	CompareConstant(XK_Georgian_qar,0x10010e7,19263,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_qar\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_shin
	CompareConstant(XK_Georgian_shin,0x10010e8,19264,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_shin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_chin
	CompareConstant(XK_Georgian_chin,0x10010e9,19265,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_chin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_can
	CompareConstant(XK_Georgian_can,0x10010ea,19266,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_can\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_jil
	CompareConstant(XK_Georgian_jil,0x10010eb,19267,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_jil\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_cil
	CompareConstant(XK_Georgian_cil,0x10010ec,19268,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_cil\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_char
	CompareConstant(XK_Georgian_char,0x10010ed,19269,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_char\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_xan
	CompareConstant(XK_Georgian_xan,0x10010ee,19270,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_xan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_jhan
	CompareConstant(XK_Georgian_jhan,0x10010ef,19271,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_jhan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_hae
	CompareConstant(XK_Georgian_hae,0x10010f0,19272,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_hae\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_he
	CompareConstant(XK_Georgian_he,0x10010f1,19273,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_he\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_hie
	CompareConstant(XK_Georgian_hie,0x10010f2,19274,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_hie\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_we
	CompareConstant(XK_Georgian_we,0x10010f3,19275,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_we\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_har
	CompareConstant(XK_Georgian_har,0x10010f4,19276,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_har\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_hoe
	CompareConstant(XK_Georgian_hoe,0x10010f5,19277,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_hoe\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Georgian_fi
	CompareConstant(XK_Georgian_fi,0x10010f6,19278,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Georgian_fi\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Xabovedot
	CompareConstant(XK_Xabovedot,0x1001e8a,19279,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Xabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ibreve
	CompareConstant(XK_Ibreve,0x100012c,19280,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ibreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Zstroke
	CompareConstant(XK_Zstroke,0x10001b5,19281,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Zstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Gcaron
	CompareConstant(XK_Gcaron,0x10001e6,19282,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Gcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ocaron
	CompareConstant(XK_Ocaron,0x10001d1,19283,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ocaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Obarred
	CompareConstant(XK_Obarred,0x100019f,19284,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Obarred\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_xabovedot
	CompareConstant(XK_xabovedot,0x1001e8b,19285,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_xabovedot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ibreve
	CompareConstant(XK_ibreve,0x100012d,19286,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ibreve\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_zstroke
	CompareConstant(XK_zstroke,0x10001b6,19287,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_zstroke\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_gcaron
	CompareConstant(XK_gcaron,0x10001e7,19288,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_gcaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ocaron
	CompareConstant(XK_ocaron,0x10001d2,19289,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ocaron\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_obarred
	CompareConstant(XK_obarred,0x1000275,19290,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_obarred\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_SCHWA
	CompareConstant(XK_SCHWA,0x100018f,19291,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_SCHWA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_schwa
	CompareConstant(XK_schwa,0x1000259,19292,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_schwa\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Lbelowdot
	CompareConstant(XK_Lbelowdot,0x1001e36,19293,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Lbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_lbelowdot
	CompareConstant(XK_lbelowdot,0x1001e37,19294,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_lbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Abelowdot
	CompareConstant(XK_Abelowdot,0x1001ea0,19295,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Abelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abelowdot
	CompareConstant(XK_abelowdot,0x1001ea1,19296,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ahook
	CompareConstant(XK_Ahook,0x1001ea2,19297,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ahook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ahook
	CompareConstant(XK_ahook,0x1001ea3,19298,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ahook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Acircumflexacute
	CompareConstant(XK_Acircumflexacute,0x1001ea4,19299,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Acircumflexacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_acircumflexacute
	CompareConstant(XK_acircumflexacute,0x1001ea5,19300,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_acircumflexacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Acircumflexgrave
	CompareConstant(XK_Acircumflexgrave,0x1001ea6,19301,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Acircumflexgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_acircumflexgrave
	CompareConstant(XK_acircumflexgrave,0x1001ea7,19302,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_acircumflexgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Acircumflexhook
	CompareConstant(XK_Acircumflexhook,0x1001ea8,19303,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Acircumflexhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_acircumflexhook
	CompareConstant(XK_acircumflexhook,0x1001ea9,19304,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_acircumflexhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Acircumflextilde
	CompareConstant(XK_Acircumflextilde,0x1001eaa,19305,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Acircumflextilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_acircumflextilde
	CompareConstant(XK_acircumflextilde,0x1001eab,19306,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_acircumflextilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Acircumflexbelowdot
	CompareConstant(XK_Acircumflexbelowdot,0x1001eac,19307,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Acircumflexbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_acircumflexbelowdot
	CompareConstant(XK_acircumflexbelowdot,0x1001ead,19308,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_acircumflexbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Abreveacute
	CompareConstant(XK_Abreveacute,0x1001eae,19309,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Abreveacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abreveacute
	CompareConstant(XK_abreveacute,0x1001eaf,19310,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abreveacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Abrevegrave
	CompareConstant(XK_Abrevegrave,0x1001eb0,19311,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Abrevegrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abrevegrave
	CompareConstant(XK_abrevegrave,0x1001eb1,19312,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abrevegrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Abrevehook
	CompareConstant(XK_Abrevehook,0x1001eb2,19313,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Abrevehook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abrevehook
	CompareConstant(XK_abrevehook,0x1001eb3,19314,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abrevehook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Abrevetilde
	CompareConstant(XK_Abrevetilde,0x1001eb4,19315,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Abrevetilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abrevetilde
	CompareConstant(XK_abrevetilde,0x1001eb5,19316,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abrevetilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Abrevebelowdot
	CompareConstant(XK_Abrevebelowdot,0x1001eb6,19317,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Abrevebelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_abrevebelowdot
	CompareConstant(XK_abrevebelowdot,0x1001eb7,19318,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_abrevebelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ebelowdot
	CompareConstant(XK_Ebelowdot,0x1001eb8,19319,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ebelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ebelowdot
	CompareConstant(XK_ebelowdot,0x1001eb9,19320,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ebelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ehook
	CompareConstant(XK_Ehook,0x1001eba,19321,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ehook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ehook
	CompareConstant(XK_ehook,0x1001ebb,19322,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ehook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Etilde
	CompareConstant(XK_Etilde,0x1001ebc,19323,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Etilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_etilde
	CompareConstant(XK_etilde,0x1001ebd,19324,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_etilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ecircumflexacute
	CompareConstant(XK_Ecircumflexacute,0x1001ebe,19325,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ecircumflexacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ecircumflexacute
	CompareConstant(XK_ecircumflexacute,0x1001ebf,19326,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ecircumflexacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ecircumflexgrave
	CompareConstant(XK_Ecircumflexgrave,0x1001ec0,19327,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ecircumflexgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ecircumflexgrave
	CompareConstant(XK_ecircumflexgrave,0x1001ec1,19328,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ecircumflexgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ecircumflexhook
	CompareConstant(XK_Ecircumflexhook,0x1001ec2,19329,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ecircumflexhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ecircumflexhook
	CompareConstant(XK_ecircumflexhook,0x1001ec3,19330,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ecircumflexhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ecircumflextilde
	CompareConstant(XK_Ecircumflextilde,0x1001ec4,19331,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ecircumflextilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ecircumflextilde
	CompareConstant(XK_ecircumflextilde,0x1001ec5,19332,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ecircumflextilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ecircumflexbelowdot
	CompareConstant(XK_Ecircumflexbelowdot,0x1001ec6,19333,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ecircumflexbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ecircumflexbelowdot
	CompareConstant(XK_ecircumflexbelowdot,0x1001ec7,19334,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ecircumflexbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ihook
	CompareConstant(XK_Ihook,0x1001ec8,19335,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ihook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ihook
	CompareConstant(XK_ihook,0x1001ec9,19336,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ihook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ibelowdot
	CompareConstant(XK_Ibelowdot,0x1001eca,19337,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ibelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ibelowdot
	CompareConstant(XK_ibelowdot,0x1001ecb,19338,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ibelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Obelowdot
	CompareConstant(XK_Obelowdot,0x1001ecc,19339,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Obelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_obelowdot
	CompareConstant(XK_obelowdot,0x1001ecd,19340,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_obelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ohook
	CompareConstant(XK_Ohook,0x1001ece,19341,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ohook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ohook
	CompareConstant(XK_ohook,0x1001ecf,19342,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ohook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ocircumflexacute
	CompareConstant(XK_Ocircumflexacute,0x1001ed0,19343,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ocircumflexacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ocircumflexacute
	CompareConstant(XK_ocircumflexacute,0x1001ed1,19344,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ocircumflexacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ocircumflexgrave
	CompareConstant(XK_Ocircumflexgrave,0x1001ed2,19345,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ocircumflexgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ocircumflexgrave
	CompareConstant(XK_ocircumflexgrave,0x1001ed3,19346,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ocircumflexgrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ocircumflexhook
	CompareConstant(XK_Ocircumflexhook,0x1001ed4,19347,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ocircumflexhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ocircumflexhook
	CompareConstant(XK_ocircumflexhook,0x1001ed5,19348,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ocircumflexhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ocircumflextilde
	CompareConstant(XK_Ocircumflextilde,0x1001ed6,19349,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ocircumflextilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ocircumflextilde
	CompareConstant(XK_ocircumflextilde,0x1001ed7,19350,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ocircumflextilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ocircumflexbelowdot
	CompareConstant(XK_Ocircumflexbelowdot,0x1001ed8,19351,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ocircumflexbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ocircumflexbelowdot
	CompareConstant(XK_ocircumflexbelowdot,0x1001ed9,19352,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ocircumflexbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ohornacute
	CompareConstant(XK_Ohornacute,0x1001eda,19353,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ohornacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ohornacute
	CompareConstant(XK_ohornacute,0x1001edb,19354,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ohornacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ohorngrave
	CompareConstant(XK_Ohorngrave,0x1001edc,19355,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ohorngrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ohorngrave
	CompareConstant(XK_ohorngrave,0x1001edd,19356,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ohorngrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ohornhook
	CompareConstant(XK_Ohornhook,0x1001ede,19357,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ohornhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ohornhook
	CompareConstant(XK_ohornhook,0x1001edf,19358,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ohornhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ohorntilde
	CompareConstant(XK_Ohorntilde,0x1001ee0,19359,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ohorntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ohorntilde
	CompareConstant(XK_ohorntilde,0x1001ee1,19360,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ohorntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ohornbelowdot
	CompareConstant(XK_Ohornbelowdot,0x1001ee2,19361,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ohornbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ohornbelowdot
	CompareConstant(XK_ohornbelowdot,0x1001ee3,19362,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ohornbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ubelowdot
	CompareConstant(XK_Ubelowdot,0x1001ee4,19363,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ubelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ubelowdot
	CompareConstant(XK_ubelowdot,0x1001ee5,19364,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ubelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uhook
	CompareConstant(XK_Uhook,0x1001ee6,19365,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uhook
	CompareConstant(XK_uhook,0x1001ee7,19366,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uhornacute
	CompareConstant(XK_Uhornacute,0x1001ee8,19367,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uhornacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uhornacute
	CompareConstant(XK_uhornacute,0x1001ee9,19368,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uhornacute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uhorngrave
	CompareConstant(XK_Uhorngrave,0x1001eea,19369,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uhorngrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uhorngrave
	CompareConstant(XK_uhorngrave,0x1001eeb,19370,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uhorngrave\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uhornhook
	CompareConstant(XK_Uhornhook,0x1001eec,19371,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uhornhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uhornhook
	CompareConstant(XK_uhornhook,0x1001eed,19372,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uhornhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uhorntilde
	CompareConstant(XK_Uhorntilde,0x1001eee,19373,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uhorntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uhorntilde
	CompareConstant(XK_uhorntilde,0x1001eef,19374,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uhorntilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uhornbelowdot
	CompareConstant(XK_Uhornbelowdot,0x1001ef0,19375,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uhornbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uhornbelowdot
	CompareConstant(XK_uhornbelowdot,0x1001ef1,19376,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uhornbelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ybelowdot
	CompareConstant(XK_Ybelowdot,0x1001ef4,19377,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ybelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ybelowdot
	CompareConstant(XK_ybelowdot,0x1001ef5,19378,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ybelowdot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Yhook
	CompareConstant(XK_Yhook,0x1001ef6,19379,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Yhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_yhook
	CompareConstant(XK_yhook,0x1001ef7,19380,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_yhook\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ytilde
	CompareConstant(XK_Ytilde,0x1001ef8,19381,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ytilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ytilde
	CompareConstant(XK_ytilde,0x1001ef9,19382,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ytilde\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Ohorn
	CompareConstant(XK_Ohorn,0x10001a0,19383,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Ohorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ohorn
	CompareConstant(XK_ohorn,0x10001a1,19384,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ohorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_Uhorn
	CompareConstant(XK_Uhorn,0x10001af,19385,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_Uhorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_uhorn
	CompareConstant(XK_uhorn,0x10001b0,19386,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_uhorn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_EcuSign
	CompareConstant(XK_EcuSign,0x10020a0,19387,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_EcuSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ColonSign
	CompareConstant(XK_ColonSign,0x10020a1,19388,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ColonSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_CruzeiroSign
	CompareConstant(XK_CruzeiroSign,0x10020a2,19389,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_CruzeiroSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_FFrancSign
	CompareConstant(XK_FFrancSign,0x10020a3,19390,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_FFrancSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_LiraSign
	CompareConstant(XK_LiraSign,0x10020a4,19391,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_LiraSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_MillSign
	CompareConstant(XK_MillSign,0x10020a5,19392,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_MillSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_NairaSign
	CompareConstant(XK_NairaSign,0x10020a6,19393,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_NairaSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_PesetaSign
	CompareConstant(XK_PesetaSign,0x10020a7,19394,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_PesetaSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_RupeeSign
	CompareConstant(XK_RupeeSign,0x10020a8,19395,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_RupeeSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_WonSign
	CompareConstant(XK_WonSign,0x10020a9,19396,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_WonSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_NewSheqelSign
	CompareConstant(XK_NewSheqelSign,0x10020aa,19397,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_NewSheqelSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_DongSign
	CompareConstant(XK_DongSign,0x10020ab,19398,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_DongSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_EuroSign
	CompareConstant(XK_EuroSign,0x20ac,19399,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_EuroSign\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_zerosuperior
	CompareConstant(XK_zerosuperior,0x1002070,19400,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_zerosuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_foursuperior
	CompareConstant(XK_foursuperior,0x1002074,19401,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_foursuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_fivesuperior
	CompareConstant(XK_fivesuperior,0x1002075,19402,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_fivesuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_sixsuperior
	CompareConstant(XK_sixsuperior,0x1002076,19403,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_sixsuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_sevensuperior
	CompareConstant(XK_sevensuperior,0x1002077,19404,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_sevensuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_eightsuperior
	CompareConstant(XK_eightsuperior,0x1002078,19405,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_eightsuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ninesuperior
	CompareConstant(XK_ninesuperior,0x1002079,19406,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ninesuperior\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_zerosubscript
	CompareConstant(XK_zerosubscript,0x1002080,19407,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_zerosubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_onesubscript
	CompareConstant(XK_onesubscript,0x1002081,19408,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_onesubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_twosubscript
	CompareConstant(XK_twosubscript,0x1002082,19409,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_twosubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_threesubscript
	CompareConstant(XK_threesubscript,0x1002083,19410,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_threesubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_foursubscript
	CompareConstant(XK_foursubscript,0x1002084,19411,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_foursubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_fivesubscript
	CompareConstant(XK_fivesubscript,0x1002085,19412,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_fivesubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_sixsubscript
	CompareConstant(XK_sixsubscript,0x1002086,19413,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_sixsubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_sevensubscript
	CompareConstant(XK_sevensubscript,0x1002087,19414,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_sevensubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_eightsubscript
	CompareConstant(XK_eightsubscript,0x1002088,19415,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_eightsubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_ninesubscript
	CompareConstant(XK_ninesubscript,0x1002089,19416,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_ninesubscript\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_partdifferential
	CompareConstant(XK_partdifferential,0x1002202,19417,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_partdifferential\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_emptyset
	CompareConstant(XK_emptyset,0x1002205,19418,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_emptyset\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_elementof
	CompareConstant(XK_elementof,0x1002208,19419,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_elementof\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_notelementof
	CompareConstant(XK_notelementof,0x1002209,19420,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_notelementof\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_containsas
	CompareConstant(XK_containsas,0x100220B,19421,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_containsas\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_squareroot
	CompareConstant(XK_squareroot,0x100221A,19422,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_squareroot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_cuberoot
	CompareConstant(XK_cuberoot,0x100221B,19423,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_cuberoot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_fourthroot
	CompareConstant(XK_fourthroot,0x100221C,19424,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_fourthroot\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_dintegral
	CompareConstant(XK_dintegral,0x100222C,19425,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_dintegral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_tintegral
	CompareConstant(XK_tintegral,0x100222D,19426,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_tintegral\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_because
	CompareConstant(XK_because,0x1002235,19427,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_because\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_approxeq
	CompareConstant(XK_approxeq,0x1002248,19428,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_approxeq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_notapproxeq
	CompareConstant(XK_notapproxeq,0x1002247,19429,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_notapproxeq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_notidentical
	CompareConstant(XK_notidentical,0x1002262,19430,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_notidentical\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_stricteq
	CompareConstant(XK_stricteq,0x1002263,19431,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_stricteq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_1
	CompareConstant(XK_braille_dot_1,0xfff1,19432,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_2
	CompareConstant(XK_braille_dot_2,0xfff2,19433,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_3
	CompareConstant(XK_braille_dot_3,0xfff3,19434,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_4
	CompareConstant(XK_braille_dot_4,0xfff4,19435,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_5
	CompareConstant(XK_braille_dot_5,0xfff5,19436,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_6
	CompareConstant(XK_braille_dot_6,0xfff6,19437,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_7
	CompareConstant(XK_braille_dot_7,0xfff7,19438,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_8
	CompareConstant(XK_braille_dot_8,0xfff8,19439,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_9
	CompareConstant(XK_braille_dot_9,0xfff9,19440,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dot_10
	CompareConstant(XK_braille_dot_10,0xfffa,19441,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dot_10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_blank
	CompareConstant(XK_braille_blank,0x1002800,19442,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_blank\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1
	CompareConstant(XK_braille_dots_1,0x1002801,19443,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2
	CompareConstant(XK_braille_dots_2,0x1002802,19444,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12
	CompareConstant(XK_braille_dots_12,0x1002803,19445,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3
	CompareConstant(XK_braille_dots_3,0x1002804,19446,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13
	CompareConstant(XK_braille_dots_13,0x1002805,19447,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23
	CompareConstant(XK_braille_dots_23,0x1002806,19448,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123
	CompareConstant(XK_braille_dots_123,0x1002807,19449,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_4
	CompareConstant(XK_braille_dots_4,0x1002808,19450,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_14
	CompareConstant(XK_braille_dots_14,0x1002809,19451,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_14\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_24
	CompareConstant(XK_braille_dots_24,0x100280a,19452,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_124
	CompareConstant(XK_braille_dots_124,0x100280b,19453,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_124\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_34
	CompareConstant(XK_braille_dots_34,0x100280c,19454,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_34\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_134
	CompareConstant(XK_braille_dots_134,0x100280d,19455,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_134\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_234
	CompareConstant(XK_braille_dots_234,0x100280e,19456,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_234\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1234
	CompareConstant(XK_braille_dots_1234,0x100280f,19457,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1234\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_5
	CompareConstant(XK_braille_dots_5,0x1002810,19458,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_15
	CompareConstant(XK_braille_dots_15,0x1002811,19459,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_15\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_25
	CompareConstant(XK_braille_dots_25,0x1002812,19460,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_25\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_125
	CompareConstant(XK_braille_dots_125,0x1002813,19461,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_125\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_35
	CompareConstant(XK_braille_dots_35,0x1002814,19462,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_35\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_135
	CompareConstant(XK_braille_dots_135,0x1002815,19463,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_135\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_235
	CompareConstant(XK_braille_dots_235,0x1002816,19464,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_235\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1235
	CompareConstant(XK_braille_dots_1235,0x1002817,19465,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1235\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_45
	CompareConstant(XK_braille_dots_45,0x1002818,19466,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_45\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_145
	CompareConstant(XK_braille_dots_145,0x1002819,19467,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_145\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_245
	CompareConstant(XK_braille_dots_245,0x100281a,19468,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_245\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1245
	CompareConstant(XK_braille_dots_1245,0x100281b,19469,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1245\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_345
	CompareConstant(XK_braille_dots_345,0x100281c,19470,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_345\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1345
	CompareConstant(XK_braille_dots_1345,0x100281d,19471,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1345\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2345
	CompareConstant(XK_braille_dots_2345,0x100281e,19472,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2345\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12345
	CompareConstant(XK_braille_dots_12345,0x100281f,19473,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12345\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_6
	CompareConstant(XK_braille_dots_6,0x1002820,19474,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_16
	CompareConstant(XK_braille_dots_16,0x1002821,19475,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_26
	CompareConstant(XK_braille_dots_26,0x1002822,19476,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_26\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_126
	CompareConstant(XK_braille_dots_126,0x1002823,19477,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_126\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_36
	CompareConstant(XK_braille_dots_36,0x1002824,19478,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_36\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_136
	CompareConstant(XK_braille_dots_136,0x1002825,19479,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_136\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_236
	CompareConstant(XK_braille_dots_236,0x1002826,19480,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_236\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1236
	CompareConstant(XK_braille_dots_1236,0x1002827,19481,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1236\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_46
	CompareConstant(XK_braille_dots_46,0x1002828,19482,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_46\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_146
	CompareConstant(XK_braille_dots_146,0x1002829,19483,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_146\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_246
	CompareConstant(XK_braille_dots_246,0x100282a,19484,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_246\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1246
	CompareConstant(XK_braille_dots_1246,0x100282b,19485,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1246\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_346
	CompareConstant(XK_braille_dots_346,0x100282c,19486,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_346\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1346
	CompareConstant(XK_braille_dots_1346,0x100282d,19487,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1346\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2346
	CompareConstant(XK_braille_dots_2346,0x100282e,19488,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2346\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12346
	CompareConstant(XK_braille_dots_12346,0x100282f,19489,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12346\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_56
	CompareConstant(XK_braille_dots_56,0x1002830,19490,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_56\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_156
	CompareConstant(XK_braille_dots_156,0x1002831,19491,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_156\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_256
	CompareConstant(XK_braille_dots_256,0x1002832,19492,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_256\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1256
	CompareConstant(XK_braille_dots_1256,0x1002833,19493,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1256\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_356
	CompareConstant(XK_braille_dots_356,0x1002834,19494,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_356\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1356
	CompareConstant(XK_braille_dots_1356,0x1002835,19495,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1356\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2356
	CompareConstant(XK_braille_dots_2356,0x1002836,19496,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2356\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12356
	CompareConstant(XK_braille_dots_12356,0x1002837,19497,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12356\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_456
	CompareConstant(XK_braille_dots_456,0x1002838,19498,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1456
	CompareConstant(XK_braille_dots_1456,0x1002839,19499,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2456
	CompareConstant(XK_braille_dots_2456,0x100283a,19500,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12456
	CompareConstant(XK_braille_dots_12456,0x100283b,19501,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3456
	CompareConstant(XK_braille_dots_3456,0x100283c,19502,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13456
	CompareConstant(XK_braille_dots_13456,0x100283d,19503,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23456
	CompareConstant(XK_braille_dots_23456,0x100283e,19504,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123456
	CompareConstant(XK_braille_dots_123456,0x100283f,19505,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123456\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_7
	CompareConstant(XK_braille_dots_7,0x1002840,19506,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_17
	CompareConstant(XK_braille_dots_17,0x1002841,19507,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_17\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_27
	CompareConstant(XK_braille_dots_27,0x1002842,19508,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_27\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_127
	CompareConstant(XK_braille_dots_127,0x1002843,19509,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_127\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_37
	CompareConstant(XK_braille_dots_37,0x1002844,19510,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_37\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_137
	CompareConstant(XK_braille_dots_137,0x1002845,19511,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_137\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_237
	CompareConstant(XK_braille_dots_237,0x1002846,19512,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_237\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1237
	CompareConstant(XK_braille_dots_1237,0x1002847,19513,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1237\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_47
	CompareConstant(XK_braille_dots_47,0x1002848,19514,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_47\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_147
	CompareConstant(XK_braille_dots_147,0x1002849,19515,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_147\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_247
	CompareConstant(XK_braille_dots_247,0x100284a,19516,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_247\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1247
	CompareConstant(XK_braille_dots_1247,0x100284b,19517,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1247\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_347
	CompareConstant(XK_braille_dots_347,0x100284c,19518,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_347\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1347
	CompareConstant(XK_braille_dots_1347,0x100284d,19519,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1347\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2347
	CompareConstant(XK_braille_dots_2347,0x100284e,19520,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2347\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12347
	CompareConstant(XK_braille_dots_12347,0x100284f,19521,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12347\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_57
	CompareConstant(XK_braille_dots_57,0x1002850,19522,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_57\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_157
	CompareConstant(XK_braille_dots_157,0x1002851,19523,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_157\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_257
	CompareConstant(XK_braille_dots_257,0x1002852,19524,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_257\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1257
	CompareConstant(XK_braille_dots_1257,0x1002853,19525,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1257\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_357
	CompareConstant(XK_braille_dots_357,0x1002854,19526,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_357\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1357
	CompareConstant(XK_braille_dots_1357,0x1002855,19527,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1357\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2357
	CompareConstant(XK_braille_dots_2357,0x1002856,19528,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2357\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12357
	CompareConstant(XK_braille_dots_12357,0x1002857,19529,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12357\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_457
	CompareConstant(XK_braille_dots_457,0x1002858,19530,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1457
	CompareConstant(XK_braille_dots_1457,0x1002859,19531,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2457
	CompareConstant(XK_braille_dots_2457,0x100285a,19532,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12457
	CompareConstant(XK_braille_dots_12457,0x100285b,19533,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3457
	CompareConstant(XK_braille_dots_3457,0x100285c,19534,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13457
	CompareConstant(XK_braille_dots_13457,0x100285d,19535,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23457
	CompareConstant(XK_braille_dots_23457,0x100285e,19536,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123457
	CompareConstant(XK_braille_dots_123457,0x100285f,19537,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123457\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_67
	CompareConstant(XK_braille_dots_67,0x1002860,19538,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_67\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_167
	CompareConstant(XK_braille_dots_167,0x1002861,19539,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_167\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_267
	CompareConstant(XK_braille_dots_267,0x1002862,19540,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_267\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1267
	CompareConstant(XK_braille_dots_1267,0x1002863,19541,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1267\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_367
	CompareConstant(XK_braille_dots_367,0x1002864,19542,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_367\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1367
	CompareConstant(XK_braille_dots_1367,0x1002865,19543,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1367\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2367
	CompareConstant(XK_braille_dots_2367,0x1002866,19544,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2367\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12367
	CompareConstant(XK_braille_dots_12367,0x1002867,19545,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12367\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_467
	CompareConstant(XK_braille_dots_467,0x1002868,19546,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1467
	CompareConstant(XK_braille_dots_1467,0x1002869,19547,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2467
	CompareConstant(XK_braille_dots_2467,0x100286a,19548,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12467
	CompareConstant(XK_braille_dots_12467,0x100286b,19549,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3467
	CompareConstant(XK_braille_dots_3467,0x100286c,19550,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13467
	CompareConstant(XK_braille_dots_13467,0x100286d,19551,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23467
	CompareConstant(XK_braille_dots_23467,0x100286e,19552,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123467
	CompareConstant(XK_braille_dots_123467,0x100286f,19553,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123467\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_567
	CompareConstant(XK_braille_dots_567,0x1002870,19554,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1567
	CompareConstant(XK_braille_dots_1567,0x1002871,19555,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2567
	CompareConstant(XK_braille_dots_2567,0x1002872,19556,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12567
	CompareConstant(XK_braille_dots_12567,0x1002873,19557,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3567
	CompareConstant(XK_braille_dots_3567,0x1002874,19558,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13567
	CompareConstant(XK_braille_dots_13567,0x1002875,19559,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23567
	CompareConstant(XK_braille_dots_23567,0x1002876,19560,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123567
	CompareConstant(XK_braille_dots_123567,0x1002877,19561,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_4567
	CompareConstant(XK_braille_dots_4567,0x1002878,19562,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_4567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_14567
	CompareConstant(XK_braille_dots_14567,0x1002879,19563,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_14567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_24567
	CompareConstant(XK_braille_dots_24567,0x100287a,19564,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_24567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_124567
	CompareConstant(XK_braille_dots_124567,0x100287b,19565,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_124567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_34567
	CompareConstant(XK_braille_dots_34567,0x100287c,19566,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_34567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_134567
	CompareConstant(XK_braille_dots_134567,0x100287d,19567,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_134567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_234567
	CompareConstant(XK_braille_dots_234567,0x100287e,19568,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_234567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1234567
	CompareConstant(XK_braille_dots_1234567,0x100287f,19569,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1234567\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_8
	CompareConstant(XK_braille_dots_8,0x1002880,19570,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_18
	CompareConstant(XK_braille_dots_18,0x1002881,19571,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_18\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_28
	CompareConstant(XK_braille_dots_28,0x1002882,19572,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_28\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_128
	CompareConstant(XK_braille_dots_128,0x1002883,19573,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_128\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_38
	CompareConstant(XK_braille_dots_38,0x1002884,19574,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_38\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_138
	CompareConstant(XK_braille_dots_138,0x1002885,19575,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_138\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_238
	CompareConstant(XK_braille_dots_238,0x1002886,19576,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_238\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1238
	CompareConstant(XK_braille_dots_1238,0x1002887,19577,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1238\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_48
	CompareConstant(XK_braille_dots_48,0x1002888,19578,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_48\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_148
	CompareConstant(XK_braille_dots_148,0x1002889,19579,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_148\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_248
	CompareConstant(XK_braille_dots_248,0x100288a,19580,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_248\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1248
	CompareConstant(XK_braille_dots_1248,0x100288b,19581,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1248\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_348
	CompareConstant(XK_braille_dots_348,0x100288c,19582,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_348\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1348
	CompareConstant(XK_braille_dots_1348,0x100288d,19583,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1348\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2348
	CompareConstant(XK_braille_dots_2348,0x100288e,19584,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2348\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12348
	CompareConstant(XK_braille_dots_12348,0x100288f,19585,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12348\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_58
	CompareConstant(XK_braille_dots_58,0x1002890,19586,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_58\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_158
	CompareConstant(XK_braille_dots_158,0x1002891,19587,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_158\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_258
	CompareConstant(XK_braille_dots_258,0x1002892,19588,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_258\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1258
	CompareConstant(XK_braille_dots_1258,0x1002893,19589,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1258\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_358
	CompareConstant(XK_braille_dots_358,0x1002894,19590,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_358\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1358
	CompareConstant(XK_braille_dots_1358,0x1002895,19591,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1358\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2358
	CompareConstant(XK_braille_dots_2358,0x1002896,19592,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2358\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12358
	CompareConstant(XK_braille_dots_12358,0x1002897,19593,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12358\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_458
	CompareConstant(XK_braille_dots_458,0x1002898,19594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1458
	CompareConstant(XK_braille_dots_1458,0x1002899,19595,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2458
	CompareConstant(XK_braille_dots_2458,0x100289a,19596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12458
	CompareConstant(XK_braille_dots_12458,0x100289b,19597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3458
	CompareConstant(XK_braille_dots_3458,0x100289c,19598,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13458
	CompareConstant(XK_braille_dots_13458,0x100289d,19599,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23458
	CompareConstant(XK_braille_dots_23458,0x100289e,19600,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123458
	CompareConstant(XK_braille_dots_123458,0x100289f,19601,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123458\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_68
	CompareConstant(XK_braille_dots_68,0x10028a0,19602,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_68\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_168
	CompareConstant(XK_braille_dots_168,0x10028a1,19603,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_168\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_268
	CompareConstant(XK_braille_dots_268,0x10028a2,19604,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_268\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1268
	CompareConstant(XK_braille_dots_1268,0x10028a3,19605,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1268\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_368
	CompareConstant(XK_braille_dots_368,0x10028a4,19606,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_368\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1368
	CompareConstant(XK_braille_dots_1368,0x10028a5,19607,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1368\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2368
	CompareConstant(XK_braille_dots_2368,0x10028a6,19608,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2368\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12368
	CompareConstant(XK_braille_dots_12368,0x10028a7,19609,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12368\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_468
	CompareConstant(XK_braille_dots_468,0x10028a8,19610,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1468
	CompareConstant(XK_braille_dots_1468,0x10028a9,19611,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2468
	CompareConstant(XK_braille_dots_2468,0x10028aa,19612,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12468
	CompareConstant(XK_braille_dots_12468,0x10028ab,19613,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3468
	CompareConstant(XK_braille_dots_3468,0x10028ac,19614,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13468
	CompareConstant(XK_braille_dots_13468,0x10028ad,19615,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23468
	CompareConstant(XK_braille_dots_23468,0x10028ae,19616,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123468
	CompareConstant(XK_braille_dots_123468,0x10028af,19617,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123468\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_568
	CompareConstant(XK_braille_dots_568,0x10028b0,19618,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1568
	CompareConstant(XK_braille_dots_1568,0x10028b1,19619,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2568
	CompareConstant(XK_braille_dots_2568,0x10028b2,19620,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12568
	CompareConstant(XK_braille_dots_12568,0x10028b3,19621,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3568
	CompareConstant(XK_braille_dots_3568,0x10028b4,19622,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13568
	CompareConstant(XK_braille_dots_13568,0x10028b5,19623,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23568
	CompareConstant(XK_braille_dots_23568,0x10028b6,19624,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123568
	CompareConstant(XK_braille_dots_123568,0x10028b7,19625,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_4568
	CompareConstant(XK_braille_dots_4568,0x10028b8,19626,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_4568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_14568
	CompareConstant(XK_braille_dots_14568,0x10028b9,19627,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_14568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_24568
	CompareConstant(XK_braille_dots_24568,0x10028ba,19628,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_24568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_124568
	CompareConstant(XK_braille_dots_124568,0x10028bb,19629,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_124568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_34568
	CompareConstant(XK_braille_dots_34568,0x10028bc,19630,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_34568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_134568
	CompareConstant(XK_braille_dots_134568,0x10028bd,19631,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_134568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_234568
	CompareConstant(XK_braille_dots_234568,0x10028be,19632,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_234568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1234568
	CompareConstant(XK_braille_dots_1234568,0x10028bf,19633,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1234568\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_78
	CompareConstant(XK_braille_dots_78,0x10028c0,19634,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_78\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_178
	CompareConstant(XK_braille_dots_178,0x10028c1,19635,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_178\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_278
	CompareConstant(XK_braille_dots_278,0x10028c2,19636,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_278\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1278
	CompareConstant(XK_braille_dots_1278,0x10028c3,19637,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1278\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_378
	CompareConstant(XK_braille_dots_378,0x10028c4,19638,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_378\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1378
	CompareConstant(XK_braille_dots_1378,0x10028c5,19639,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1378\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2378
	CompareConstant(XK_braille_dots_2378,0x10028c6,19640,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2378\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12378
	CompareConstant(XK_braille_dots_12378,0x10028c7,19641,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12378\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_478
	CompareConstant(XK_braille_dots_478,0x10028c8,19642,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1478
	CompareConstant(XK_braille_dots_1478,0x10028c9,19643,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2478
	CompareConstant(XK_braille_dots_2478,0x10028ca,19644,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12478
	CompareConstant(XK_braille_dots_12478,0x10028cb,19645,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3478
	CompareConstant(XK_braille_dots_3478,0x10028cc,19646,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13478
	CompareConstant(XK_braille_dots_13478,0x10028cd,19647,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23478
	CompareConstant(XK_braille_dots_23478,0x10028ce,19648,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123478
	CompareConstant(XK_braille_dots_123478,0x10028cf,19649,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123478\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_578
	CompareConstant(XK_braille_dots_578,0x10028d0,19650,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1578
	CompareConstant(XK_braille_dots_1578,0x10028d1,19651,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2578
	CompareConstant(XK_braille_dots_2578,0x10028d2,19652,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12578
	CompareConstant(XK_braille_dots_12578,0x10028d3,19653,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3578
	CompareConstant(XK_braille_dots_3578,0x10028d4,19654,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13578
	CompareConstant(XK_braille_dots_13578,0x10028d5,19655,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23578
	CompareConstant(XK_braille_dots_23578,0x10028d6,19656,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123578
	CompareConstant(XK_braille_dots_123578,0x10028d7,19657,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_4578
	CompareConstant(XK_braille_dots_4578,0x10028d8,19658,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_4578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_14578
	CompareConstant(XK_braille_dots_14578,0x10028d9,19659,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_14578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_24578
	CompareConstant(XK_braille_dots_24578,0x10028da,19660,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_24578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_124578
	CompareConstant(XK_braille_dots_124578,0x10028db,19661,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_124578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_34578
	CompareConstant(XK_braille_dots_34578,0x10028dc,19662,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_34578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_134578
	CompareConstant(XK_braille_dots_134578,0x10028dd,19663,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_134578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_234578
	CompareConstant(XK_braille_dots_234578,0x10028de,19664,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_234578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1234578
	CompareConstant(XK_braille_dots_1234578,0x10028df,19665,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1234578\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_678
	CompareConstant(XK_braille_dots_678,0x10028e0,19666,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1678
	CompareConstant(XK_braille_dots_1678,0x10028e1,19667,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2678
	CompareConstant(XK_braille_dots_2678,0x10028e2,19668,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12678
	CompareConstant(XK_braille_dots_12678,0x10028e3,19669,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_3678
	CompareConstant(XK_braille_dots_3678,0x10028e4,19670,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_3678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_13678
	CompareConstant(XK_braille_dots_13678,0x10028e5,19671,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_13678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_23678
	CompareConstant(XK_braille_dots_23678,0x10028e6,19672,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_23678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_123678
	CompareConstant(XK_braille_dots_123678,0x10028e7,19673,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_123678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_4678
	CompareConstant(XK_braille_dots_4678,0x10028e8,19674,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_4678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_14678
	CompareConstant(XK_braille_dots_14678,0x10028e9,19675,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_14678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_24678
	CompareConstant(XK_braille_dots_24678,0x10028ea,19676,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_24678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_124678
	CompareConstant(XK_braille_dots_124678,0x10028eb,19677,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_124678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_34678
	CompareConstant(XK_braille_dots_34678,0x10028ec,19678,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_34678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_134678
	CompareConstant(XK_braille_dots_134678,0x10028ed,19679,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_134678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_234678
	CompareConstant(XK_braille_dots_234678,0x10028ee,19680,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_234678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1234678
	CompareConstant(XK_braille_dots_1234678,0x10028ef,19681,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1234678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_5678
	CompareConstant(XK_braille_dots_5678,0x10028f0,19682,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_5678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_15678
	CompareConstant(XK_braille_dots_15678,0x10028f1,19683,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_15678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_25678
	CompareConstant(XK_braille_dots_25678,0x10028f2,19684,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_25678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_125678
	CompareConstant(XK_braille_dots_125678,0x10028f3,19685,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_125678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_35678
	CompareConstant(XK_braille_dots_35678,0x10028f4,19686,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_35678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_135678
	CompareConstant(XK_braille_dots_135678,0x10028f5,19687,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_135678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_235678
	CompareConstant(XK_braille_dots_235678,0x10028f6,19688,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_235678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1235678
	CompareConstant(XK_braille_dots_1235678,0x10028f7,19689,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1235678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_45678
	CompareConstant(XK_braille_dots_45678,0x10028f8,19690,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_45678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_145678
	CompareConstant(XK_braille_dots_145678,0x10028f9,19691,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_145678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_245678
	CompareConstant(XK_braille_dots_245678,0x10028fa,19692,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_245678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1245678
	CompareConstant(XK_braille_dots_1245678,0x10028fb,19693,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1245678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_345678
	CompareConstant(XK_braille_dots_345678,0x10028fc,19694,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_345678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_1345678
	CompareConstant(XK_braille_dots_1345678,0x10028fd,19695,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_1345678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_2345678
	CompareConstant(XK_braille_dots_2345678,0x10028fe,19696,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_2345678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_braille_dots_12345678
	CompareConstant(XK_braille_dots_12345678,0x10028ff,19697,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_braille_dots_12345678\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XK_VoidSymbol
	CompareConstant(XK_VoidSymbol,0xffffff,19981,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XK_VoidSymbol\n");
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
printf("%d tests passed out of %d tests in X11/keysymdef.h\n\n",pcnt,cnt);
return cnt;
#endif

}
