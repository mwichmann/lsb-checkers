/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <stdio.h> 

struct screen {
	};
#include "curses.h"



#ifdef TET_TEST
void curses_h()
{
#else
int curses_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in curses.h\n");
#endif

#if _LSB_DEFAULT_ARCH
/* No test for getyx(win,y,x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for getbegyx(win,y,x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for getmaxyx(win,y,x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for getparyx(win,y,x) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERR
	CompareConstant(ERR,(-1),2577,architecture)
#else
Msg( "Error: Constant not found: ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OK
	CompareConstant(OK,(0),2578,architecture)
#else
Msg( "Error: Constant not found: OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SUBWIN
	CompareConstant(_SUBWIN,0x01,2579,architecture)
#else
Msg( "Error: Constant not found: _SUBWIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _ENDLINE
	CompareConstant(_ENDLINE,0x02,2580,architecture)
#else
Msg( "Error: Constant not found: _ENDLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _FULLWIN
	CompareConstant(_FULLWIN,0x04,2581,architecture)
#else
Msg( "Error: Constant not found: _FULLWIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _ISPAD
	CompareConstant(_ISPAD,0x10,2583,architecture)
#else
Msg( "Error: Constant not found: _ISPAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _HASMOVED
	CompareConstant(_HASMOVED,0x20,2584,architecture)
#else
Msg( "Error: Constant not found: _HASMOVED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CODE_YES
	CompareConstant(KEY_CODE_YES,0400,2804,architecture)
#else
Msg( "Error: Constant not found: KEY_CODE_YES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MIN
	CompareConstant(KEY_MIN,0401,2805,architecture)
#else
Msg( "Error: Constant not found: KEY_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BREAK
	CompareConstant(KEY_BREAK,0401,2806,architecture)
#else
Msg( "Error: Constant not found: KEY_BREAK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_DOWN
	CompareConstant(KEY_DOWN,0402,2807,architecture)
#else
Msg( "Error: Constant not found: KEY_DOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_UP
	CompareConstant(KEY_UP,0403,2808,architecture)
#else
Msg( "Error: Constant not found: KEY_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_LEFT
	CompareConstant(KEY_LEFT,0404,2809,architecture)
#else
Msg( "Error: Constant not found: KEY_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for NCURSES_BITS(mask,shift) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_NORMAL
	CompareConstant(A_NORMAL,0L,2593,architecture)
#else
Msg( "Error: Constant not found: A_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_ATTRIBUTES
	CompareConstant(A_ATTRIBUTES,NCURSES_BITS(~(1UL-1UL),0),2594,architecture)
#else
Msg( "Error: Constant not found: A_ATTRIBUTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_CHARTEXT
	CompareConstant(A_CHARTEXT,(NCURSES_BITS(1UL,0)-1UL),2595,architecture)
#else
Msg( "Error: Constant not found: A_CHARTEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_COLOR
	CompareConstant(A_COLOR,NCURSES_BITS(((1UL)<<8)-1UL,0),2596,architecture)
#else
Msg( "Error: Constant not found: A_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_STANDOUT
	CompareConstant(A_STANDOUT,NCURSES_BITS(1UL,8),2597,architecture)
#else
Msg( "Error: Constant not found: A_STANDOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_UNDERLINE
	CompareConstant(A_UNDERLINE,NCURSES_BITS(1UL,9),2598,architecture)
#else
Msg( "Error: Constant not found: A_UNDERLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_REVERSE
	CompareConstant(A_REVERSE,NCURSES_BITS(1UL,10),2599,architecture)
#else
Msg( "Error: Constant not found: A_REVERSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RIGHT
	CompareConstant(KEY_RIGHT,0405,2810,architecture)
#else
Msg( "Error: Constant not found: KEY_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_HOME
	CompareConstant(KEY_HOME,0406,2811,architecture)
#else
Msg( "Error: Constant not found: KEY_HOME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BACKSPACE
	CompareConstant(KEY_BACKSPACE,0407,2812,architecture)
#else
Msg( "Error: Constant not found: KEY_BACKSPACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_F0
	CompareConstant(KEY_F0,0410,2813,architecture)
#else
Msg( "Error: Constant not found: KEY_F0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_DL
	CompareConstant(KEY_DL,0510,2815,architecture)
#else
Msg( "Error: Constant not found: KEY_DL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_IL
	CompareConstant(KEY_IL,0511,2816,architecture)
#else
Msg( "Error: Constant not found: KEY_IL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_DC
	CompareConstant(KEY_DC,0512,2817,architecture)
#else
Msg( "Error: Constant not found: KEY_DC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_IC
	CompareConstant(KEY_IC,0513,2818,architecture)
#else
Msg( "Error: Constant not found: KEY_IC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EIC
	CompareConstant(KEY_EIC,0514,2819,architecture)
#else
Msg( "Error: Constant not found: KEY_EIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CLEAR
	CompareConstant(KEY_CLEAR,0515,2820,architecture)
#else
Msg( "Error: Constant not found: KEY_CLEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EOS
	CompareConstant(KEY_EOS,0516,2821,architecture)
#else
Msg( "Error: Constant not found: KEY_EOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EOL
	CompareConstant(KEY_EOL,0517,2822,architecture)
#else
Msg( "Error: Constant not found: KEY_EOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SF
	CompareConstant(KEY_SF,0520,2823,architecture)
#else
Msg( "Error: Constant not found: KEY_SF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SR
	CompareConstant(KEY_SR,0521,2824,architecture)
#else
Msg( "Error: Constant not found: KEY_SR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_NPAGE
	CompareConstant(KEY_NPAGE,0522,2825,architecture)
#else
Msg( "Error: Constant not found: KEY_NPAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_PPAGE
	CompareConstant(KEY_PPAGE,0523,2826,architecture)
#else
Msg( "Error: Constant not found: KEY_PPAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_STAB
	CompareConstant(KEY_STAB,0524,2827,architecture)
#else
Msg( "Error: Constant not found: KEY_STAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CTAB
	CompareConstant(KEY_CTAB,0525,2828,architecture)
#else
Msg( "Error: Constant not found: KEY_CTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CATAB
	CompareConstant(KEY_CATAB,0526,2829,architecture)
#else
Msg( "Error: Constant not found: KEY_CATAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_ENTER
	CompareConstant(KEY_ENTER,0527,2830,architecture)
#else
Msg( "Error: Constant not found: KEY_ENTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SRESET
	CompareConstant(KEY_SRESET,0530,2831,architecture)
#else
Msg( "Error: Constant not found: KEY_SRESET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESET
	CompareConstant(KEY_RESET,0531,2832,architecture)
#else
Msg( "Error: Constant not found: KEY_RESET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_PRINT
	CompareConstant(KEY_PRINT,0532,2833,architecture)
#else
Msg( "Error: Constant not found: KEY_PRINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_LL
	CompareConstant(KEY_LL,0533,2834,architecture)
#else
Msg( "Error: Constant not found: KEY_LL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_A1
	CompareConstant(KEY_A1,0534,2835,architecture)
#else
Msg( "Error: Constant not found: KEY_A1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_A3
	CompareConstant(KEY_A3,0535,2836,architecture)
#else
Msg( "Error: Constant not found: KEY_A3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_B2
	CompareConstant(KEY_B2,0536,2837,architecture)
#else
Msg( "Error: Constant not found: KEY_B2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_C1
	CompareConstant(KEY_C1,0537,2838,architecture)
#else
Msg( "Error: Constant not found: KEY_C1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_C3
	CompareConstant(KEY_C3,0540,2839,architecture)
#else
Msg( "Error: Constant not found: KEY_C3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BTAB
	CompareConstant(KEY_BTAB,0541,2840,architecture)
#else
Msg( "Error: Constant not found: KEY_BTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BEG
	CompareConstant(KEY_BEG,0542,2841,architecture)
#else
Msg( "Error: Constant not found: KEY_BEG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CANCEL
	CompareConstant(KEY_CANCEL,0543,2842,architecture)
#else
Msg( "Error: Constant not found: KEY_CANCEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CLOSE
	CompareConstant(KEY_CLOSE,0544,2843,architecture)
#else
Msg( "Error: Constant not found: KEY_CLOSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_COMMAND
	CompareConstant(KEY_COMMAND,0545,2844,architecture)
#else
Msg( "Error: Constant not found: KEY_COMMAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_COPY
	CompareConstant(KEY_COPY,0546,2845,architecture)
#else
Msg( "Error: Constant not found: KEY_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CREATE
	CompareConstant(KEY_CREATE,0547,2846,architecture)
#else
Msg( "Error: Constant not found: KEY_CREATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_END
	CompareConstant(KEY_END,0550,2847,architecture)
#else
Msg( "Error: Constant not found: KEY_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EXIT
	CompareConstant(KEY_EXIT,0551,2848,architecture)
#else
Msg( "Error: Constant not found: KEY_EXIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_FIND
	CompareConstant(KEY_FIND,0552,2849,architecture)
#else
Msg( "Error: Constant not found: KEY_FIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_HELP
	CompareConstant(KEY_HELP,0553,2850,architecture)
#else
Msg( "Error: Constant not found: KEY_HELP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MARK
	CompareConstant(KEY_MARK,0554,2851,architecture)
#else
Msg( "Error: Constant not found: KEY_MARK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MESSAGE
	CompareConstant(KEY_MESSAGE,0555,2852,architecture)
#else
Msg( "Error: Constant not found: KEY_MESSAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MOVE
	CompareConstant(KEY_MOVE,0556,2853,architecture)
#else
Msg( "Error: Constant not found: KEY_MOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_NEXT
	CompareConstant(KEY_NEXT,0557,2854,architecture)
#else
Msg( "Error: Constant not found: KEY_NEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_OPEN
	CompareConstant(KEY_OPEN,0560,2855,architecture)
#else
Msg( "Error: Constant not found: KEY_OPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_OPTIONS
	CompareConstant(KEY_OPTIONS,0561,2856,architecture)
#else
Msg( "Error: Constant not found: KEY_OPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_PREVIOUS
	CompareConstant(KEY_PREVIOUS,0562,2857,architecture)
#else
Msg( "Error: Constant not found: KEY_PREVIOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REDO
	CompareConstant(KEY_REDO,0563,2858,architecture)
#else
Msg( "Error: Constant not found: KEY_REDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REFERENCE
	CompareConstant(KEY_REFERENCE,0564,2859,architecture)
#else
Msg( "Error: Constant not found: KEY_REFERENCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REFRESH
	CompareConstant(KEY_REFRESH,0565,2860,architecture)
#else
Msg( "Error: Constant not found: KEY_REFRESH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REPLACE
	CompareConstant(KEY_REPLACE,0566,2861,architecture)
#else
Msg( "Error: Constant not found: KEY_REPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESTART
	CompareConstant(KEY_RESTART,0567,2862,architecture)
#else
Msg( "Error: Constant not found: KEY_RESTART\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESUME
	CompareConstant(KEY_RESUME,0570,2863,architecture)
#else
Msg( "Error: Constant not found: KEY_RESUME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SAVE
	CompareConstant(KEY_SAVE,0571,2864,architecture)
#else
Msg( "Error: Constant not found: KEY_SAVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SBEG
	CompareConstant(KEY_SBEG,0572,2865,architecture)
#else
Msg( "Error: Constant not found: KEY_SBEG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCANCEL
	CompareConstant(KEY_SCANCEL,0573,2866,architecture)
#else
Msg( "Error: Constant not found: KEY_SCANCEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCOMMAND
	CompareConstant(KEY_SCOMMAND,0574,2867,architecture)
#else
Msg( "Error: Constant not found: KEY_SCOMMAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCOPY
	CompareConstant(KEY_SCOPY,0575,2868,architecture)
#else
Msg( "Error: Constant not found: KEY_SCOPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCREATE
	CompareConstant(KEY_SCREATE,0576,2869,architecture)
#else
Msg( "Error: Constant not found: KEY_SCREATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_ATTRIBUTES
	CompareConstant(WA_ATTRIBUTES,A_ATTRIBUTES,2509,architecture)
#else
Msg( "Error: Constant not found: WA_ATTRIBUTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SDC
	CompareConstant(KEY_SDC,0577,2870,architecture)
#else
Msg( "Error: Constant not found: KEY_SDC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SDL
	CompareConstant(KEY_SDL,0600,2871,architecture)
#else
Msg( "Error: Constant not found: KEY_SDL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SELECT
	CompareConstant(KEY_SELECT,0601,2872,architecture)
#else
Msg( "Error: Constant not found: KEY_SELECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SEND
	CompareConstant(KEY_SEND,0602,2873,architecture)
#else
Msg( "Error: Constant not found: KEY_SEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SEOL
	CompareConstant(KEY_SEOL,0603,2874,architecture)
#else
Msg( "Error: Constant not found: KEY_SEOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SEXIT
	CompareConstant(KEY_SEXIT,0604,2875,architecture)
#else
Msg( "Error: Constant not found: KEY_SEXIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SFIND
	CompareConstant(KEY_SFIND,0605,2876,architecture)
#else
Msg( "Error: Constant not found: KEY_SFIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SHELP
	CompareConstant(KEY_SHELP,0606,2877,architecture)
#else
Msg( "Error: Constant not found: KEY_SHELP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SHOME
	CompareConstant(KEY_SHOME,0607,2878,architecture)
#else
Msg( "Error: Constant not found: KEY_SHOME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SIC
	CompareConstant(KEY_SIC,0610,2879,architecture)
#else
Msg( "Error: Constant not found: KEY_SIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_NORMAL
	CompareConstant(WA_NORMAL,A_NORMAL,2510,architecture)
#else
Msg( "Error: Constant not found: WA_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_STANDOUT
	CompareConstant(WA_STANDOUT,A_STANDOUT,2511,architecture)
#else
Msg( "Error: Constant not found: WA_STANDOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_UNDERLINE
	CompareConstant(WA_UNDERLINE,A_UNDERLINE,2512,architecture)
#else
Msg( "Error: Constant not found: WA_UNDERLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_REVERSE
	CompareConstant(WA_REVERSE,A_REVERSE,2513,architecture)
#else
Msg( "Error: Constant not found: WA_REVERSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_BLINK
	CompareConstant(WA_BLINK,A_BLINK,2514,architecture)
#else
Msg( "Error: Constant not found: WA_BLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_DIM
	CompareConstant(WA_DIM,A_DIM,2515,architecture)
#else
Msg( "Error: Constant not found: WA_DIM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_BOLD
	CompareConstant(WA_BOLD,A_BOLD,2516,architecture)
#else
Msg( "Error: Constant not found: WA_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_ALTCHARSET
	CompareConstant(WA_ALTCHARSET,A_ALTCHARSET,2517,architecture)
#else
Msg( "Error: Constant not found: WA_ALTCHARSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_INVIS
	CompareConstant(WA_INVIS,A_INVIS,2518,architecture)
#else
Msg( "Error: Constant not found: WA_INVIS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_PROTECT
	CompareConstant(WA_PROTECT,A_PROTECT,2519,architecture)
#else
Msg( "Error: Constant not found: WA_PROTECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TRACE_MAXIMUM
	CompareConstant(TRACE_MAXIMUM,0xffff,2951,architecture)
#else
Msg( "Error: Constant not found: TRACE_MAXIMUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SLEFT
	CompareConstant(KEY_SLEFT,0611,2880,architecture)
#else
Msg( "Error: Constant not found: KEY_SLEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SMESSAGE
	CompareConstant(KEY_SMESSAGE,0612,2881,architecture)
#else
Msg( "Error: Constant not found: KEY_SMESSAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SMOVE
	CompareConstant(KEY_SMOVE,0613,2882,architecture)
#else
Msg( "Error: Constant not found: KEY_SMOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SNEXT
	CompareConstant(KEY_SNEXT,0614,2883,architecture)
#else
Msg( "Error: Constant not found: KEY_SNEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SOPTIONS
	CompareConstant(KEY_SOPTIONS,0615,2884,architecture)
#else
Msg( "Error: Constant not found: KEY_SOPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SPREVIOUS
	CompareConstant(KEY_SPREVIOUS,0616,2885,architecture)
#else
Msg( "Error: Constant not found: KEY_SPREVIOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SPRINT
	CompareConstant(KEY_SPRINT,0617,2886,architecture)
#else
Msg( "Error: Constant not found: KEY_SPRINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SREDO
	CompareConstant(KEY_SREDO,0620,2887,architecture)
#else
Msg( "Error: Constant not found: KEY_SREDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SREPLACE
	CompareConstant(KEY_SREPLACE,0621,2888,architecture)
#else
Msg( "Error: Constant not found: KEY_SREPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SRIGHT
	CompareConstant(KEY_SRIGHT,0622,2889,architecture)
#else
Msg( "Error: Constant not found: KEY_SRIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_HORIZONTAL
	CompareConstant(WA_HORIZONTAL,A_HORIZONTAL,2520,architecture)
#else
Msg( "Error: Constant not found: WA_HORIZONTAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_LEFT
	CompareConstant(WA_LEFT,A_LEFT,2521,architecture)
#else
Msg( "Error: Constant not found: WA_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_LOW
	CompareConstant(WA_LOW,A_LOW,2522,architecture)
#else
Msg( "Error: Constant not found: WA_LOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_RIGHT
	CompareConstant(WA_RIGHT,A_RIGHT,2523,architecture)
#else
Msg( "Error: Constant not found: WA_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_TOP
	CompareConstant(WA_TOP,A_TOP,2524,architecture)
#else
Msg( "Error: Constant not found: WA_TOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_VERTICAL
	CompareConstant(WA_VERTICAL,A_VERTICAL,2525,architecture)
#else
Msg( "Error: Constant not found: WA_VERTICAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_BLACK
	CompareConstant(COLOR_BLACK,0,2526,architecture)
#else
Msg( "Error: Constant not found: COLOR_BLACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_RED
	CompareConstant(COLOR_RED,1,2527,architecture)
#else
Msg( "Error: Constant not found: COLOR_RED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_GREEN
	CompareConstant(COLOR_GREEN,2,2528,architecture)
#else
Msg( "Error: Constant not found: COLOR_GREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_YELLOW
	CompareConstant(COLOR_YELLOW,3,2529,architecture)
#else
Msg( "Error: Constant not found: COLOR_YELLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SRSUME
	CompareConstant(KEY_SRSUME,0623,2890,architecture)
#else
Msg( "Error: Constant not found: KEY_SRSUME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SSAVE
	CompareConstant(KEY_SSAVE,0624,2891,architecture)
#else
Msg( "Error: Constant not found: KEY_SSAVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SSUSPEND
	CompareConstant(KEY_SSUSPEND,0625,2892,architecture)
#else
Msg( "Error: Constant not found: KEY_SSUSPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SUNDO
	CompareConstant(KEY_SUNDO,0626,2893,architecture)
#else
Msg( "Error: Constant not found: KEY_SUNDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SUSPEND
	CompareConstant(KEY_SUSPEND,0627,2894,architecture)
#else
Msg( "Error: Constant not found: KEY_SUSPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_UNDO
	CompareConstant(KEY_UNDO,0630,2895,architecture)
#else
Msg( "Error: Constant not found: KEY_UNDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MOUSE
	CompareConstant(KEY_MOUSE,0631,2896,architecture)
#else
Msg( "Error: Constant not found: KEY_MOUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESIZE
	CompareConstant(KEY_RESIZE,0632,2897,architecture)
#else
Msg( "Error: Constant not found: KEY_RESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MAX
	CompareConstant(KEY_MAX,0777,2898,architecture)
#else
Msg( "Error: Constant not found: KEY_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_BLINK
	CompareConstant(A_BLINK,NCURSES_BITS(1UL,11),2600,architecture)
#else
Msg( "Error: Constant not found: A_BLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_DIM
	CompareConstant(A_DIM,NCURSES_BITS(1UL,12),2601,architecture)
#else
Msg( "Error: Constant not found: A_DIM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_BOLD
	CompareConstant(A_BOLD,NCURSES_BITS(1UL,13),2602,architecture)
#else
Msg( "Error: Constant not found: A_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_BLUE
	CompareConstant(COLOR_BLUE,4,2530,architecture)
#else
Msg( "Error: Constant not found: COLOR_BLUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_ALTCHARSET
	CompareConstant(A_ALTCHARSET,NCURSES_BITS(1UL,14),2603,architecture)
#else
Msg( "Error: Constant not found: A_ALTCHARSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_MAGENTA
	CompareConstant(COLOR_MAGENTA,5,2531,architecture)
#else
Msg( "Error: Constant not found: COLOR_MAGENTA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_INVIS
	CompareConstant(A_INVIS,NCURSES_BITS(1UL,15),2604,architecture)
#else
Msg( "Error: Constant not found: A_INVIS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_CYAN
	CompareConstant(COLOR_CYAN,6,2532,architecture)
#else
Msg( "Error: Constant not found: COLOR_CYAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_PROTECT
	CompareConstant(A_PROTECT,NCURSES_BITS(1UL,16),2605,architecture)
#else
Msg( "Error: Constant not found: A_PROTECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_WHITE
	CompareConstant(COLOR_WHITE,7,2533,architecture)
#else
Msg( "Error: Constant not found: COLOR_WHITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_HORIZONTAL
	CompareConstant(A_HORIZONTAL,NCURSES_BITS(1UL,17),2606,architecture)
#else
Msg( "Error: Constant not found: A_HORIZONTAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_LEFT
	CompareConstant(A_LEFT,NCURSES_BITS(1UL,18),2607,architecture)
#else
Msg( "Error: Constant not found: A_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_LOW
	CompareConstant(A_LOW,NCURSES_BITS(1UL,19),2608,architecture)
#else
Msg( "Error: Constant not found: A_LOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_RIGHT
	CompareConstant(A_RIGHT,NCURSES_BITS(1UL,20),2609,architecture)
#else
Msg( "Error: Constant not found: A_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_TOP
	CompareConstant(A_TOP,NCURSES_BITS(1UL,21),2610,architecture)
#else
Msg( "Error: Constant not found: A_TOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_VERTICAL
	CompareConstant(A_VERTICAL,NCURSES_BITS(1UL,22),2611,architecture)
#else
Msg( "Error: Constant not found: A_VERTICAL\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(chtype,4, 8650, 2)
#elif __ia64__
CheckTypeSize(chtype,8, 8650, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(chtype,4, 8650, 6)
#elif __s390__
CheckTypeSize(chtype,4, 8650, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8650,0);
Msg("Find size of chtype (8650)\n");
#endif

#if __i386__
CheckTypeSize(bool,1, 8651, 2)
#elif __ia64__
CheckTypeSize(bool,4, 8651, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(bool,4, 8651, 6)
#elif __s390__
CheckTypeSize(bool,4, 8651, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8651,0);
Msg("Find size of bool (8651)\n");
#endif

#if __i386__
CheckTypeSize(SCREEN,0, 8653, 2)
#elif __ia64__
CheckTypeSize(SCREEN,0, 8653, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SCREEN,0, 8653, 6)
#elif __s390__
CheckTypeSize(SCREEN,0, 8653, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8653,0);
Msg("Find size of SCREEN (8653)\n");
#endif

#if __i386__
CheckTypeSize(WINDOW,100, 8655, 2)
#elif __ia64__
CheckTypeSize(WINDOW,152, 8655, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(WINDOW,124, 8655, 6)
#elif __s390__
CheckTypeSize(WINDOW,124, 8655, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8655,0);
Msg("Find size of WINDOW (8655)\n");
#endif

#if __i386__
CheckTypeSize(attr_t,4, 8656, 2)
#elif __ia64__
CheckTypeSize(attr_t,8, 8656, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(attr_t,4, 8656, 6)
#elif __s390__
CheckTypeSize(attr_t,4, 8656, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8656,0);
Msg("Find size of attr_t (8656)\n");
#endif

#if __i386__
CheckTypeSize(cchar_t,24, 8658, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(cchar_t,24, 8658, 6)
#elif __ia64__
CheckTypeSize(cchar_t,32, 8658, 3)
#elif __s390__
CheckTypeSize(cchar_t,24, 8658, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8658,0);
Msg("Find size of cchar_t (8658)\n");
#endif

#if __i386__
CheckTypeSize(struct pdat,12, 8663, 2)
CheckOffset(struct pdat,_pad_y,0,2,29725)
CheckOffset(struct pdat,_pad_x,2,2,29726)
CheckOffset(struct pdat,_pad_top,4,2,29727)
CheckOffset(struct pdat,_pad_left,6,2,29728)
CheckOffset(struct pdat,_pad_bottom,8,2,29729)
CheckOffset(struct pdat,_pad_right,10,2,29730)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct pdat,12, 8663, 6)
CheckOffset(struct pdat,_pad_x,2,6,29726)
CheckOffset(struct pdat,_pad_top,4,6,29727)
CheckOffset(struct pdat,_pad_left,6,6,29728)
CheckOffset(struct pdat,_pad_bottom,8,6,29729)
CheckOffset(struct pdat,_pad_right,10,6,29730)
#elif __ia64__
CheckTypeSize(struct pdat,12, 8663, 3)
CheckOffset(struct pdat,_pad_y,0,3,29725)
CheckOffset(struct pdat,_pad_x,2,3,29726)
CheckOffset(struct pdat,_pad_top,4,3,29727)
CheckOffset(struct pdat,_pad_left,6,3,29728)
CheckOffset(struct pdat,_pad_bottom,8,3,29729)
CheckOffset(struct pdat,_pad_right,10,3,29730)
#elif __s390__
CheckTypeSize(struct pdat,12, 8663, 10)
CheckOffset(struct pdat,_pad_x,2,10,29726)
CheckOffset(struct pdat,_pad_top,4,10,29727)
CheckOffset(struct pdat,_pad_left,6,10,29728)
CheckOffset(struct pdat,_pad_bottom,8,10,29729)
CheckOffset(struct pdat,_pad_right,10,10,29730)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8663,0);
Msg("Find size of pdat (8663)\n");
#endif

#if __i386__
CheckTypeSize(struct _win_st,100, 8654, 2)
CheckOffset(struct _win_st,_cury,0,2,29700)
CheckOffset(struct _win_st,_curx,2,2,29701)
CheckOffset(struct _win_st,_maxy,4,2,29702)
CheckOffset(struct _win_st,_maxx,6,2,29703)
CheckOffset(struct _win_st,_begy,8,2,29704)
CheckOffset(struct _win_st,_begx,10,2,29705)
CheckOffset(struct _win_st,_flags,12,2,29706)
CheckOffset(struct _win_st,_attrs,16,2,29707)
CheckOffset(struct _win_st,_bkgd,20,2,29708)
CheckOffset(struct _win_st,_notimeout,24,2,29709)
CheckOffset(struct _win_st,_clear,25,2,29710)
CheckOffset(struct _win_st,_leaveok,26,2,29711)
CheckOffset(struct _win_st,_scroll,27,2,29712)
CheckOffset(struct _win_st,_idlok,28,2,29713)
CheckOffset(struct _win_st,_idcok,29,2,29714)
CheckOffset(struct _win_st,_immed,30,2,29715)
CheckOffset(struct _win_st,_sync,31,2,29716)
CheckOffset(struct _win_st,_use_keypad,32,2,29717)
CheckOffset(struct _win_st,_delay,36,2,29718)
CheckOffset(struct _win_st,_line,40,2,29719)
CheckOffset(struct _win_st,_regtop,44,2,29720)
CheckOffset(struct _win_st,_regbottom,46,2,29721)
CheckOffset(struct _win_st,_parx,48,2,29722)
CheckOffset(struct _win_st,_pary,52,2,29723)
CheckOffset(struct _win_st,_parent,56,2,29724)
CheckOffset(struct _win_st,_pad,60,2,29731)
CheckOffset(struct _win_st,_yoffset,72,2,29732)
CheckOffset(struct _win_st,_bkgrnd,76,2,34437)
#elif __ia64__
CheckTypeSize(struct _win_st,152, 8654, 3)
CheckOffset(struct _win_st,_cury,0,3,29700)
CheckOffset(struct _win_st,_curx,2,3,29701)
CheckOffset(struct _win_st,_maxy,4,3,29702)
CheckOffset(struct _win_st,_maxx,6,3,29703)
CheckOffset(struct _win_st,_begy,8,3,29704)
CheckOffset(struct _win_st,_begx,10,3,29705)
CheckOffset(struct _win_st,_flags,12,3,29706)
CheckOffset(struct _win_st,_attrs,16,3,29707)
CheckOffset(struct _win_st,_bkgd,24,3,29708)
CheckOffset(struct _win_st,_notimeout,32,3,29709)
CheckOffset(struct _win_st,_clear,36,3,29710)
CheckOffset(struct _win_st,_leaveok,40,3,29711)
CheckOffset(struct _win_st,_scroll,44,3,29712)
CheckOffset(struct _win_st,_idlok,48,3,29713)
CheckOffset(struct _win_st,_idcok,52,3,29714)
CheckOffset(struct _win_st,_immed,56,3,29715)
CheckOffset(struct _win_st,_sync,60,3,29716)
CheckOffset(struct _win_st,_use_keypad,64,3,29717)
CheckOffset(struct _win_st,_delay,68,3,29718)
CheckOffset(struct _win_st,_line,72,3,29719)
CheckOffset(struct _win_st,_regtop,80,3,29720)
CheckOffset(struct _win_st,_regbottom,82,3,29721)
CheckOffset(struct _win_st,_parx,84,3,29722)
CheckOffset(struct _win_st,_pary,88,3,29723)
CheckOffset(struct _win_st,_parent,96,3,29724)
CheckOffset(struct _win_st,_pad,104,3,29731)
CheckOffset(struct _win_st,_yoffset,116,3,29732)
CheckOffset(struct _win_st,_bkgrnd,120,3,34437)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _win_st,124, 8654, 6)
CheckOffset(struct _win_st,_curx,2,6,29701)
CheckOffset(struct _win_st,_maxy,4,6,29702)
CheckOffset(struct _win_st,_maxx,6,6,29703)
CheckOffset(struct _win_st,_begy,8,6,29704)
CheckOffset(struct _win_st,_begx,10,6,29705)
CheckOffset(struct _win_st,_flags,12,6,29706)
CheckOffset(struct _win_st,_attrs,16,6,29707)
CheckOffset(struct _win_st,_bkgd,20,6,29708)
CheckOffset(struct _win_st,_notimeout,24,6,29709)
CheckOffset(struct _win_st,_clear,28,6,29710)
CheckOffset(struct _win_st,_leaveok,32,6,29711)
CheckOffset(struct _win_st,_scroll,36,6,29712)
CheckOffset(struct _win_st,_idlok,40,6,29713)
CheckOffset(struct _win_st,_idcok,44,6,29714)
CheckOffset(struct _win_st,_immed,48,6,29715)
CheckOffset(struct _win_st,_sync,52,6,29716)
CheckOffset(struct _win_st,_use_keypad,56,6,29717)
CheckOffset(struct _win_st,_delay,60,6,29718)
CheckOffset(struct _win_st,_line,64,6,29719)
CheckOffset(struct _win_st,_regtop,68,6,29720)
CheckOffset(struct _win_st,_regbottom,70,6,29721)
CheckOffset(struct _win_st,_parx,72,6,29722)
CheckOffset(struct _win_st,_pary,76,6,29723)
CheckOffset(struct _win_st,_parent,80,6,29724)
CheckOffset(struct _win_st,_pad,84,6,29731)
CheckOffset(struct _win_st,_yoffset,96,6,29732)
CheckOffset(struct _win_st,_bkgrnd,100,6,34437)
#elif __s390__
CheckTypeSize(struct _win_st,124, 8654, 10)
CheckOffset(struct _win_st,_curx,2,10,29701)
CheckOffset(struct _win_st,_maxy,4,10,29702)
CheckOffset(struct _win_st,_maxx,6,10,29703)
CheckOffset(struct _win_st,_begy,8,10,29704)
CheckOffset(struct _win_st,_begx,10,10,29705)
CheckOffset(struct _win_st,_flags,12,10,29706)
CheckOffset(struct _win_st,_attrs,16,10,29707)
CheckOffset(struct _win_st,_bkgd,20,10,29708)
CheckOffset(struct _win_st,_notimeout,24,10,29709)
CheckOffset(struct _win_st,_clear,28,10,29710)
CheckOffset(struct _win_st,_leaveok,32,10,29711)
CheckOffset(struct _win_st,_scroll,36,10,29712)
CheckOffset(struct _win_st,_idlok,40,10,29713)
CheckOffset(struct _win_st,_idcok,44,10,29714)
CheckOffset(struct _win_st,_immed,48,10,29715)
CheckOffset(struct _win_st,_sync,52,10,29716)
CheckOffset(struct _win_st,_use_keypad,56,10,29717)
CheckOffset(struct _win_st,_delay,60,10,29718)
CheckOffset(struct _win_st,_line,64,10,29719)
CheckOffset(struct _win_st,_regtop,68,10,29720)
CheckOffset(struct _win_st,_regbottom,70,10,29721)
CheckOffset(struct _win_st,_parx,72,10,29722)
CheckOffset(struct _win_st,_pary,76,10,29723)
CheckOffset(struct _win_st,_parent,80,10,29724)
CheckOffset(struct _win_st,_pad,84,10,29731)
CheckOffset(struct _win_st,_yoffset,96,10,29732)
CheckOffset(struct _win_st,_bkgrnd,100,10,34437)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8654,0);
Msg("Find size of _win_st (8654)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in curses.h\n",cnt);
return cnt;
#endif

}
