/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in curses.h\n");
#endif

printf("Checking data structures in curses.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for __NCURSES_H */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_ATTRIBUTES
	CompareConstant(WA_ATTRIBUTES,A_ATTRIBUTES,2509,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_ATTRIBUTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_NORMAL
	CompareConstant(WA_NORMAL,A_NORMAL,2510,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_STANDOUT
	CompareConstant(WA_STANDOUT,A_STANDOUT,2511,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_STANDOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_UNDERLINE
	CompareConstant(WA_UNDERLINE,A_UNDERLINE,2512,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_UNDERLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_REVERSE
	CompareConstant(WA_REVERSE,A_REVERSE,2513,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_REVERSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_BLINK
	CompareConstant(WA_BLINK,A_BLINK,2514,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_BLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_DIM
	CompareConstant(WA_DIM,A_DIM,2515,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_DIM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_BOLD
	CompareConstant(WA_BOLD,A_BOLD,2516,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_ALTCHARSET
	CompareConstant(WA_ALTCHARSET,A_ALTCHARSET,2517,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_ALTCHARSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_INVIS
	CompareConstant(WA_INVIS,A_INVIS,2518,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_INVIS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_PROTECT
	CompareConstant(WA_PROTECT,A_PROTECT,2519,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_PROTECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_HORIZONTAL
	CompareConstant(WA_HORIZONTAL,A_HORIZONTAL,2520,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_HORIZONTAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_LEFT
	CompareConstant(WA_LEFT,A_LEFT,2521,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_LOW
	CompareConstant(WA_LOW,A_LOW,2522,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_LOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_RIGHT
	CompareConstant(WA_RIGHT,A_RIGHT,2523,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_TOP
	CompareConstant(WA_TOP,A_TOP,2524,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_TOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WA_VERTICAL
	CompareConstant(WA_VERTICAL,A_VERTICAL,2525,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WA_VERTICAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_BLACK
	CompareConstant(COLOR_BLACK,0,2526,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_BLACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_RED
	CompareConstant(COLOR_RED,1,2527,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_RED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_GREEN
	CompareConstant(COLOR_GREEN,2,2528,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_GREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_YELLOW
	CompareConstant(COLOR_YELLOW,3,2529,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_YELLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_BLUE
	CompareConstant(COLOR_BLUE,4,2530,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_BLUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_MAGENTA
	CompareConstant(COLOR_MAGENTA,5,2531,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_MAGENTA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_CYAN
	CompareConstant(COLOR_CYAN,6,2532,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_CYAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLOR_WHITE
	CompareConstant(COLOR_WHITE,7,2533,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: COLOR_WHITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_ULCORNER
	CompareConstant(ACS_ULCORNER,(acs_map['l']),2534,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_ULCORNER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_LLCORNER
	CompareConstant(ACS_LLCORNER,(acs_map['m']),2535,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_LLCORNER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_URCORNER
	CompareConstant(ACS_URCORNER,(acs_map['k']),2536,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_URCORNER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_LRCORNER
	CompareConstant(ACS_LRCORNER,(acs_map['j']),2537,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_LRCORNER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_LTEE
	CompareConstant(ACS_LTEE,(acs_map['t']),2538,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_LTEE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_RTEE
	CompareConstant(ACS_RTEE,(acs_map['u']),2539,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_RTEE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_BTEE
	CompareConstant(ACS_BTEE,(acs_map['v']),2540,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_BTEE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_TTEE
	CompareConstant(ACS_TTEE,(acs_map['w']),2541,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_TTEE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_HLINE
	CompareConstant(ACS_HLINE,(acs_map['q']),2542,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_HLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_VLINE
	CompareConstant(ACS_VLINE,(acs_map['x']),2543,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_VLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_PLUS
	CompareConstant(ACS_PLUS,(acs_map['n']),2544,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_PLUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_S1
	CompareConstant(ACS_S1,(acs_map['o']),2545,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_S1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_S9
	CompareConstant(ACS_S9,(acs_map['s']),2546,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_S9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_DIAMOND
	CompareConstant(ACS_DIAMOND,(acs_map['`']),2547,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_DIAMOND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_CKBOARD
	CompareConstant(ACS_CKBOARD,(acs_map['a']),2548,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_CKBOARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_DEGREE
	CompareConstant(ACS_DEGREE,(acs_map['f']),2549,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_DEGREE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_PLMINUS
	CompareConstant(ACS_PLMINUS,(acs_map['g']),2550,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_PLMINUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_BULLET
	CompareConstant(ACS_BULLET,(acs_map['~']),2551,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_BULLET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_LARROW
	CompareConstant(ACS_LARROW,(acs_map[',']),2552,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_LARROW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_RARROW
	CompareConstant(ACS_RARROW,(acs_map['+']),2553,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_RARROW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_DARROW
	CompareConstant(ACS_DARROW,(acs_map['.']),2554,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_DARROW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_UARROW
	CompareConstant(ACS_UARROW,(acs_map['-']),2555,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_UARROW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_BOARD
	CompareConstant(ACS_BOARD,(acs_map['h']),2556,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_BOARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_LANTERN
	CompareConstant(ACS_LANTERN,(acs_map['i']),2557,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_LANTERN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACS_BLOCK
	CompareConstant(ACS_BLOCK,(acs_map['0']),2558,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ACS_BLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERR
	CompareConstant(ERR,(-1),2577,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OK
	CompareConstant(OK,(0),2578,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SUBWIN
	CompareConstant(_SUBWIN,0x01,2579,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _SUBWIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _ENDLINE
	CompareConstant(_ENDLINE,0x02,2580,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _ENDLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _FULLWIN
	CompareConstant(_FULLWIN,0x04,2581,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _FULLWIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SCROLLWIN
	CompareConstant(_SCROLLWIN,0x08,2582,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _SCROLLWIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _ISPAD
	CompareConstant(_ISPAD,0x10,2583,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _ISPAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _HASMOVED
	CompareConstant(_HASMOVED,0x20,2584,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _HASMOVED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for NCURSES_BITS(mask,shift) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_NORMAL
	CompareConstant(A_NORMAL,0L,2593,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_ATTRIBUTES
	CompareConstant(A_ATTRIBUTES,NCURSES_BITS(~(1UL-1UL),0),2594,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_ATTRIBUTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_CHARTEXT
	CompareConstant(A_CHARTEXT,(NCURSES_BITS(1UL,0)-1UL),2595,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_CHARTEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_COLOR
	CompareConstant(A_COLOR,NCURSES_BITS(((1UL)<<8)-1UL,0),2596,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_COLOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_STANDOUT
	CompareConstant(A_STANDOUT,NCURSES_BITS(1UL,8),2597,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_STANDOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_UNDERLINE
	CompareConstant(A_UNDERLINE,NCURSES_BITS(1UL,9),2598,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_UNDERLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_REVERSE
	CompareConstant(A_REVERSE,NCURSES_BITS(1UL,10),2599,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_REVERSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_BLINK
	CompareConstant(A_BLINK,NCURSES_BITS(1UL,11),2600,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_BLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_DIM
	CompareConstant(A_DIM,NCURSES_BITS(1UL,12),2601,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_DIM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_BOLD
	CompareConstant(A_BOLD,NCURSES_BITS(1UL,13),2602,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_ALTCHARSET
	CompareConstant(A_ALTCHARSET,NCURSES_BITS(1UL,14),2603,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_ALTCHARSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_INVIS
	CompareConstant(A_INVIS,NCURSES_BITS(1UL,15),2604,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_INVIS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_PROTECT
	CompareConstant(A_PROTECT,NCURSES_BITS(1UL,16),2605,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_PROTECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_HORIZONTAL
	CompareConstant(A_HORIZONTAL,NCURSES_BITS(1UL,17),2606,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_HORIZONTAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_LEFT
	CompareConstant(A_LEFT,NCURSES_BITS(1UL,18),2607,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_LOW
	CompareConstant(A_LOW,NCURSES_BITS(1UL,19),2608,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_LOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_RIGHT
	CompareConstant(A_RIGHT,NCURSES_BITS(1UL,20),2609,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_TOP
	CompareConstant(A_TOP,NCURSES_BITS(1UL,21),2610,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_TOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef A_VERTICAL
	CompareConstant(A_VERTICAL,NCURSES_BITS(1UL,22),2611,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: A_VERTICAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for COLOR_PAIR(n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PAIR_NUMBER(a) */
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
#ifdef KEY_CODE_YES
	CompareConstant(KEY_CODE_YES,0400,2804,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_CODE_YES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MIN
	CompareConstant(KEY_MIN,0401,2805,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BREAK
	CompareConstant(KEY_BREAK,0401,2806,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_BREAK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_DOWN
	CompareConstant(KEY_DOWN,0402,2807,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_DOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_UP
	CompareConstant(KEY_UP,0403,2808,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_UP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_LEFT
	CompareConstant(KEY_LEFT,0404,2809,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_LEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RIGHT
	CompareConstant(KEY_RIGHT,0405,2810,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_RIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_HOME
	CompareConstant(KEY_HOME,0406,2811,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_HOME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BACKSPACE
	CompareConstant(KEY_BACKSPACE,0407,2812,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_BACKSPACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_F0
	CompareConstant(KEY_F0,0410,2813,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_F0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for KEY_F(n) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_DL
	CompareConstant(KEY_DL,0510,2815,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_DL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_IL
	CompareConstant(KEY_IL,0511,2816,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_IL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_DC
	CompareConstant(KEY_DC,0512,2817,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_DC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_IC
	CompareConstant(KEY_IC,0513,2818,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_IC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EIC
	CompareConstant(KEY_EIC,0514,2819,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_EIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CLEAR
	CompareConstant(KEY_CLEAR,0515,2820,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_CLEAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EOS
	CompareConstant(KEY_EOS,0516,2821,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_EOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EOL
	CompareConstant(KEY_EOL,0517,2822,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_EOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SF
	CompareConstant(KEY_SF,0520,2823,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SR
	CompareConstant(KEY_SR,0521,2824,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_NPAGE
	CompareConstant(KEY_NPAGE,0522,2825,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_NPAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_PPAGE
	CompareConstant(KEY_PPAGE,0523,2826,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_PPAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_STAB
	CompareConstant(KEY_STAB,0524,2827,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_STAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CTAB
	CompareConstant(KEY_CTAB,0525,2828,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_CTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CATAB
	CompareConstant(KEY_CATAB,0526,2829,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_CATAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_ENTER
	CompareConstant(KEY_ENTER,0527,2830,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_ENTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SRESET
	CompareConstant(KEY_SRESET,0530,2831,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SRESET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESET
	CompareConstant(KEY_RESET,0531,2832,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_RESET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_PRINT
	CompareConstant(KEY_PRINT,0532,2833,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_PRINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_LL
	CompareConstant(KEY_LL,0533,2834,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_LL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_A1
	CompareConstant(KEY_A1,0534,2835,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_A1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_A3
	CompareConstant(KEY_A3,0535,2836,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_A3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_B2
	CompareConstant(KEY_B2,0536,2837,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_B2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_C1
	CompareConstant(KEY_C1,0537,2838,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_C1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_C3
	CompareConstant(KEY_C3,0540,2839,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_C3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BTAB
	CompareConstant(KEY_BTAB,0541,2840,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_BTAB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_BEG
	CompareConstant(KEY_BEG,0542,2841,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_BEG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CANCEL
	CompareConstant(KEY_CANCEL,0543,2842,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_CANCEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CLOSE
	CompareConstant(KEY_CLOSE,0544,2843,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_CLOSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_COMMAND
	CompareConstant(KEY_COMMAND,0545,2844,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_COMMAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_COPY
	CompareConstant(KEY_COPY,0546,2845,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_COPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_CREATE
	CompareConstant(KEY_CREATE,0547,2846,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_CREATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_END
	CompareConstant(KEY_END,0550,2847,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_EXIT
	CompareConstant(KEY_EXIT,0551,2848,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_EXIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_FIND
	CompareConstant(KEY_FIND,0552,2849,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_FIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_HELP
	CompareConstant(KEY_HELP,0553,2850,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_HELP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MARK
	CompareConstant(KEY_MARK,0554,2851,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_MARK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MESSAGE
	CompareConstant(KEY_MESSAGE,0555,2852,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_MESSAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MOVE
	CompareConstant(KEY_MOVE,0556,2853,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_MOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_NEXT
	CompareConstant(KEY_NEXT,0557,2854,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_NEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_OPEN
	CompareConstant(KEY_OPEN,0560,2855,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_OPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_OPTIONS
	CompareConstant(KEY_OPTIONS,0561,2856,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_OPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_PREVIOUS
	CompareConstant(KEY_PREVIOUS,0562,2857,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_PREVIOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REDO
	CompareConstant(KEY_REDO,0563,2858,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_REDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REFERENCE
	CompareConstant(KEY_REFERENCE,0564,2859,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_REFERENCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REFRESH
	CompareConstant(KEY_REFRESH,0565,2860,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_REFRESH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_REPLACE
	CompareConstant(KEY_REPLACE,0566,2861,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_REPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESTART
	CompareConstant(KEY_RESTART,0567,2862,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_RESTART\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESUME
	CompareConstant(KEY_RESUME,0570,2863,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_RESUME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SAVE
	CompareConstant(KEY_SAVE,0571,2864,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SAVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SBEG
	CompareConstant(KEY_SBEG,0572,2865,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SBEG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCANCEL
	CompareConstant(KEY_SCANCEL,0573,2866,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SCANCEL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCOMMAND
	CompareConstant(KEY_SCOMMAND,0574,2867,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SCOMMAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCOPY
	CompareConstant(KEY_SCOPY,0575,2868,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SCOPY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SCREATE
	CompareConstant(KEY_SCREATE,0576,2869,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SCREATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SDC
	CompareConstant(KEY_SDC,0577,2870,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SDC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SDL
	CompareConstant(KEY_SDL,0600,2871,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SDL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SELECT
	CompareConstant(KEY_SELECT,0601,2872,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SELECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SEND
	CompareConstant(KEY_SEND,0602,2873,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SEOL
	CompareConstant(KEY_SEOL,0603,2874,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SEOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SEXIT
	CompareConstant(KEY_SEXIT,0604,2875,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SEXIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SFIND
	CompareConstant(KEY_SFIND,0605,2876,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SFIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SHELP
	CompareConstant(KEY_SHELP,0606,2877,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SHELP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SHOME
	CompareConstant(KEY_SHOME,0607,2878,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SHOME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SIC
	CompareConstant(KEY_SIC,0610,2879,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SLEFT
	CompareConstant(KEY_SLEFT,0611,2880,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SLEFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SMESSAGE
	CompareConstant(KEY_SMESSAGE,0612,2881,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SMESSAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SMOVE
	CompareConstant(KEY_SMOVE,0613,2882,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SMOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SNEXT
	CompareConstant(KEY_SNEXT,0614,2883,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SNEXT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SOPTIONS
	CompareConstant(KEY_SOPTIONS,0615,2884,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SOPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SPREVIOUS
	CompareConstant(KEY_SPREVIOUS,0616,2885,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SPREVIOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SPRINT
	CompareConstant(KEY_SPRINT,0617,2886,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SPRINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SREDO
	CompareConstant(KEY_SREDO,0620,2887,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SREDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SREPLACE
	CompareConstant(KEY_SREPLACE,0621,2888,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SREPLACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SRIGHT
	CompareConstant(KEY_SRIGHT,0622,2889,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SRIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SRSUME
	CompareConstant(KEY_SRSUME,0623,2890,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SRSUME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SSAVE
	CompareConstant(KEY_SSAVE,0624,2891,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SSAVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SSUSPEND
	CompareConstant(KEY_SSUSPEND,0625,2892,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SSUSPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SUNDO
	CompareConstant(KEY_SUNDO,0626,2893,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SUNDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_SUSPEND
	CompareConstant(KEY_SUSPEND,0627,2894,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_SUSPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_UNDO
	CompareConstant(KEY_UNDO,0630,2895,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_UNDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MOUSE
	CompareConstant(KEY_MOUSE,0631,2896,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_MOUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_RESIZE
	CompareConstant(KEY_RESIZE,0632,2897,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_RESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KEY_MAX
	CompareConstant(KEY_MAX,0777,2898,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: KEY_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for NCURSES_EXPORT(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for NCURSES_EXPORT_VAR(type) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef NCURSES_ATTR_SHIFT
	CompareConstant(NCURSES_ATTR_SHIFT,8,5126,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: NCURSES_ATTR_SHIFT\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(chtype,8, 8650, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(chtype,8, 8650, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(chtype,4, 8650, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(chtype,8, 8650, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(chtype,4, 8650, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(chtype,8, 8650, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(chtype,4, 8650, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of chtype (8650)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8650,0);
#endif

#if defined __s390x__
CheckTypeSize(WINDOW,128, 8655, 12, 1.3, NULL, 8654, NULL)
#elif defined __x86_64__
CheckTypeSize(WINDOW,128, 8655, 11, 2.0, NULL, 8654, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(WINDOW,100, 8655, 10, 1.3, NULL, 8654, NULL)
#elif defined __powerpc64__
CheckTypeSize(WINDOW,128, 8655, 9, 2.0, NULL, 8654, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(WINDOW,100, 8655, 6, 1.2, NULL, 8654, NULL)
#elif defined __ia64__
CheckTypeSize(WINDOW,128, 8655, 3, 1.3, NULL, 8654, NULL)
#elif defined __i386__
CheckTypeSize(WINDOW,100, 8655, 2, 1.2, NULL, 8654, NULL)
#else
Msg("Find size of WINDOW (8655)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8654,NULL);\n",architecture,8655,0);
#endif

#if defined __s390x__
CheckTypeSize(attr_t,8, 8656, 12, 1.3, NULL, 8650, NULL)
#elif defined __x86_64__
CheckTypeSize(attr_t,8, 8656, 11, 2.0, NULL, 8650, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(attr_t,4, 8656, 10, 1.3, NULL, 8650, NULL)
#elif defined __powerpc64__
CheckTypeSize(attr_t,8, 8656, 9, 2.0, NULL, 8650, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(attr_t,4, 8656, 6, 1.2, NULL, 8650, NULL)
#elif defined __ia64__
CheckTypeSize(attr_t,8, 8656, 3, 1.3, NULL, 8650, NULL)
#elif defined __i386__
CheckTypeSize(attr_t,4, 8656, 2, 1.2, NULL, 8650, NULL)
#else
Msg("Find size of attr_t (8656)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8650,NULL);\n",architecture,8656,0);
#endif

#if defined __s390x__
CheckTypeSize(cchar_t,32, 8658, 12, 1.3, NULL, 8657, NULL)
#elif defined __x86_64__
CheckTypeSize(cchar_t,32, 8658, 11, 2.0, NULL, 8657, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(cchar_t,24, 8658, 10, 1.3, NULL, 8657, NULL)
#elif defined __powerpc64__
CheckTypeSize(cchar_t,32, 8658, 9, 2.0, NULL, 8657, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(cchar_t,24, 8658, 6, 1.2, NULL, 8657, NULL)
#elif defined __ia64__
CheckTypeSize(cchar_t,32, 8658, 3, 1.3, NULL, 8657, NULL)
#elif defined __i386__
CheckTypeSize(cchar_t,24, 8658, 2, 1.2, NULL, 8657, NULL)
#else
Msg("Find size of cchar_t (8658)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8657,NULL);\n",architecture,8658,0);
#endif

#if defined __s390x__
CheckTypeSize(struct pdat,12, 8663, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pdat,_pad_x,2,12,29726)
CheckOffset(struct pdat,_pad_x,2,12,29726)
CheckMemberSize(struct pdat,_pad_top,2,12,29727)
CheckOffset(struct pdat,_pad_top,4,12,29727)
CheckMemberSize(struct pdat,_pad_left,2,12,29728)
CheckOffset(struct pdat,_pad_left,6,12,29728)
CheckMemberSize(struct pdat,_pad_bottom,2,12,29729)
CheckOffset(struct pdat,_pad_bottom,8,12,29729)
CheckMemberSize(struct pdat,_pad_right,2,12,29730)
CheckOffset(struct pdat,_pad_right,10,12,29730)
#elif defined __x86_64__
CheckTypeSize(struct pdat,12, 8663, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pdat,_pad_x,2,11,29726)
CheckOffset(struct pdat,_pad_x,2,11,29726)
CheckMemberSize(struct pdat,_pad_top,2,11,29727)
CheckOffset(struct pdat,_pad_top,4,11,29727)
CheckMemberSize(struct pdat,_pad_left,2,11,29728)
CheckOffset(struct pdat,_pad_left,6,11,29728)
CheckMemberSize(struct pdat,_pad_bottom,2,11,29729)
CheckOffset(struct pdat,_pad_bottom,8,11,29729)
CheckMemberSize(struct pdat,_pad_right,2,11,29730)
CheckOffset(struct pdat,_pad_right,10,11,29730)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct pdat,12, 8663, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pdat,_pad_x,2,10,29726)
CheckOffset(struct pdat,_pad_x,2,10,29726)
CheckMemberSize(struct pdat,_pad_top,2,10,29727)
CheckOffset(struct pdat,_pad_top,4,10,29727)
CheckMemberSize(struct pdat,_pad_left,2,10,29728)
CheckOffset(struct pdat,_pad_left,6,10,29728)
CheckMemberSize(struct pdat,_pad_bottom,2,10,29729)
CheckOffset(struct pdat,_pad_bottom,8,10,29729)
CheckMemberSize(struct pdat,_pad_right,2,10,29730)
CheckOffset(struct pdat,_pad_right,10,10,29730)
#elif defined __powerpc64__
CheckTypeSize(struct pdat,12, 8663, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pdat,_pad_x,2,9,29726)
CheckOffset(struct pdat,_pad_x,2,9,29726)
CheckMemberSize(struct pdat,_pad_top,2,9,29727)
CheckOffset(struct pdat,_pad_top,4,9,29727)
CheckMemberSize(struct pdat,_pad_left,2,9,29728)
CheckOffset(struct pdat,_pad_left,6,9,29728)
CheckMemberSize(struct pdat,_pad_bottom,2,9,29729)
CheckOffset(struct pdat,_pad_bottom,8,9,29729)
CheckMemberSize(struct pdat,_pad_right,2,9,29730)
CheckOffset(struct pdat,_pad_right,10,9,29730)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct pdat,12, 8663, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct pdat,_pad_x,2,6,29726)
CheckOffset(struct pdat,_pad_x,2,6,29726)
CheckMemberSize(struct pdat,_pad_top,2,6,29727)
CheckOffset(struct pdat,_pad_top,4,6,29727)
CheckMemberSize(struct pdat,_pad_left,2,6,29728)
CheckOffset(struct pdat,_pad_left,6,6,29728)
CheckMemberSize(struct pdat,_pad_bottom,2,6,29729)
CheckOffset(struct pdat,_pad_bottom,8,6,29729)
CheckMemberSize(struct pdat,_pad_right,2,6,29730)
CheckOffset(struct pdat,_pad_right,10,6,29730)
#elif defined __ia64__
CheckTypeSize(struct pdat,12, 8663, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pdat,_pad_y,2,3,29725)
CheckOffset(struct pdat,_pad_y,0,3,29725)
CheckMemberSize(struct pdat,_pad_x,2,3,29726)
CheckOffset(struct pdat,_pad_x,2,3,29726)
CheckMemberSize(struct pdat,_pad_top,2,3,29727)
CheckOffset(struct pdat,_pad_top,4,3,29727)
CheckMemberSize(struct pdat,_pad_left,2,3,29728)
CheckOffset(struct pdat,_pad_left,6,3,29728)
CheckMemberSize(struct pdat,_pad_bottom,2,3,29729)
CheckOffset(struct pdat,_pad_bottom,8,3,29729)
CheckMemberSize(struct pdat,_pad_right,2,3,29730)
CheckOffset(struct pdat,_pad_right,10,3,29730)
#elif defined __i386__
CheckTypeSize(struct pdat,12, 8663, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct pdat,_pad_y,2,2,29725)
CheckOffset(struct pdat,_pad_y,0,2,29725)
CheckMemberSize(struct pdat,_pad_x,2,2,29726)
CheckOffset(struct pdat,_pad_x,2,2,29726)
CheckMemberSize(struct pdat,_pad_top,2,2,29727)
CheckOffset(struct pdat,_pad_top,4,2,29727)
CheckMemberSize(struct pdat,_pad_left,2,2,29728)
CheckOffset(struct pdat,_pad_left,6,2,29728)
CheckMemberSize(struct pdat,_pad_bottom,2,2,29729)
CheckOffset(struct pdat,_pad_bottom,8,2,29729)
CheckMemberSize(struct pdat,_pad_right,2,2,29730)
CheckOffset(struct pdat,_pad_right,10,2,29730)
#else
Msg("Find size of pdat (8663)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8663,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _win_st,128, 8654, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _win_st,_curx,2,12,29701)
CheckOffset(struct _win_st,_curx,2,12,29701)
CheckMemberSize(struct _win_st,_maxy,2,12,29702)
CheckOffset(struct _win_st,_maxy,4,12,29702)
CheckMemberSize(struct _win_st,_maxx,2,12,29703)
CheckOffset(struct _win_st,_maxx,6,12,29703)
CheckMemberSize(struct _win_st,_begy,2,12,29704)
CheckOffset(struct _win_st,_begy,8,12,29704)
CheckMemberSize(struct _win_st,_begx,2,12,29705)
CheckOffset(struct _win_st,_begx,10,12,29705)
CheckMemberSize(struct _win_st,_flags,2,12,29706)
CheckOffset(struct _win_st,_flags,12,12,29706)
CheckMemberSize(struct _win_st,_attrs,8,12,29707)
CheckOffset(struct _win_st,_attrs,16,12,29707)
CheckMemberSize(struct _win_st,_bkgd,8,12,29708)
CheckOffset(struct _win_st,_bkgd,24,12,29708)
CheckMemberSize(struct _win_st,_notimeout,1,12,29709)
CheckOffset(struct _win_st,_notimeout,32,12,29709)
CheckMemberSize(struct _win_st,_clear,1,12,29710)
CheckOffset(struct _win_st,_clear,33,12,29710)
CheckMemberSize(struct _win_st,_leaveok,1,12,29711)
CheckOffset(struct _win_st,_leaveok,34,12,29711)
CheckMemberSize(struct _win_st,_scroll,1,12,29712)
CheckOffset(struct _win_st,_scroll,35,12,29712)
CheckMemberSize(struct _win_st,_idlok,1,12,29713)
CheckOffset(struct _win_st,_idlok,36,12,29713)
CheckMemberSize(struct _win_st,_idcok,1,12,29714)
CheckOffset(struct _win_st,_idcok,37,12,29714)
CheckMemberSize(struct _win_st,_immed,1,12,29715)
CheckOffset(struct _win_st,_immed,38,12,29715)
CheckMemberSize(struct _win_st,_sync,1,12,29716)
CheckOffset(struct _win_st,_sync,39,12,29716)
CheckMemberSize(struct _win_st,_use_keypad,1,12,29717)
CheckOffset(struct _win_st,_use_keypad,40,12,29717)
CheckMemberSize(struct _win_st,_delay,4,12,29718)
CheckOffset(struct _win_st,_delay,44,12,29718)
CheckMemberSize(struct _win_st,_line,8,12,29719)
CheckOffset(struct _win_st,_line,48,12,29719)
CheckMemberSize(struct _win_st,_regtop,2,12,29720)
CheckOffset(struct _win_st,_regtop,56,12,29720)
CheckMemberSize(struct _win_st,_regbottom,2,12,29721)
CheckOffset(struct _win_st,_regbottom,58,12,29721)
CheckMemberSize(struct _win_st,_parx,4,12,29722)
CheckOffset(struct _win_st,_parx,60,12,29722)
CheckMemberSize(struct _win_st,_pary,4,12,29723)
CheckOffset(struct _win_st,_pary,64,12,29723)
CheckMemberSize(struct _win_st,_parent,8,12,29724)
CheckOffset(struct _win_st,_parent,72,12,29724)
CheckMemberSize(struct _win_st,_pad,12,12,29731)
CheckOffset(struct _win_st,_pad,80,12,29731)
CheckMemberSize(struct _win_st,_yoffset,2,12,29732)
CheckOffset(struct _win_st,_yoffset,92,12,29732)
CheckMemberSize(struct _win_st,_bkgrnd,32,12,34437)
CheckOffset(struct _win_st,_bkgrnd,96,12,34437)
#elif defined __x86_64__
CheckTypeSize(struct _win_st,128, 8654, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _win_st,_curx,2,11,29701)
CheckOffset(struct _win_st,_curx,2,11,29701)
CheckMemberSize(struct _win_st,_maxy,2,11,29702)
CheckOffset(struct _win_st,_maxy,4,11,29702)
CheckMemberSize(struct _win_st,_maxx,2,11,29703)
CheckOffset(struct _win_st,_maxx,6,11,29703)
CheckMemberSize(struct _win_st,_begy,2,11,29704)
CheckOffset(struct _win_st,_begy,8,11,29704)
CheckMemberSize(struct _win_st,_begx,2,11,29705)
CheckOffset(struct _win_st,_begx,10,11,29705)
CheckMemberSize(struct _win_st,_flags,2,11,29706)
CheckOffset(struct _win_st,_flags,12,11,29706)
CheckMemberSize(struct _win_st,_attrs,8,11,29707)
CheckOffset(struct _win_st,_attrs,16,11,29707)
CheckMemberSize(struct _win_st,_bkgd,8,11,29708)
CheckOffset(struct _win_st,_bkgd,24,11,29708)
CheckMemberSize(struct _win_st,_notimeout,1,11,29709)
CheckOffset(struct _win_st,_notimeout,32,11,29709)
CheckMemberSize(struct _win_st,_clear,1,11,29710)
CheckOffset(struct _win_st,_clear,33,11,29710)
CheckMemberSize(struct _win_st,_leaveok,1,11,29711)
CheckOffset(struct _win_st,_leaveok,34,11,29711)
CheckMemberSize(struct _win_st,_scroll,1,11,29712)
CheckOffset(struct _win_st,_scroll,35,11,29712)
CheckMemberSize(struct _win_st,_idlok,1,11,29713)
CheckOffset(struct _win_st,_idlok,36,11,29713)
CheckMemberSize(struct _win_st,_idcok,1,11,29714)
CheckOffset(struct _win_st,_idcok,37,11,29714)
CheckMemberSize(struct _win_st,_immed,1,11,29715)
CheckOffset(struct _win_st,_immed,38,11,29715)
CheckMemberSize(struct _win_st,_sync,1,11,29716)
CheckOffset(struct _win_st,_sync,39,11,29716)
CheckMemberSize(struct _win_st,_use_keypad,1,11,29717)
CheckOffset(struct _win_st,_use_keypad,40,11,29717)
CheckMemberSize(struct _win_st,_delay,4,11,29718)
CheckOffset(struct _win_st,_delay,44,11,29718)
CheckMemberSize(struct _win_st,_line,8,11,29719)
CheckOffset(struct _win_st,_line,48,11,29719)
CheckMemberSize(struct _win_st,_regtop,2,11,29720)
CheckOffset(struct _win_st,_regtop,56,11,29720)
CheckMemberSize(struct _win_st,_regbottom,2,11,29721)
CheckOffset(struct _win_st,_regbottom,58,11,29721)
CheckMemberSize(struct _win_st,_parx,4,11,29722)
CheckOffset(struct _win_st,_parx,60,11,29722)
CheckMemberSize(struct _win_st,_pary,4,11,29723)
CheckOffset(struct _win_st,_pary,64,11,29723)
CheckMemberSize(struct _win_st,_parent,8,11,29724)
CheckOffset(struct _win_st,_parent,72,11,29724)
CheckMemberSize(struct _win_st,_pad,12,11,29731)
CheckOffset(struct _win_st,_pad,80,11,29731)
CheckMemberSize(struct _win_st,_yoffset,2,11,29732)
CheckOffset(struct _win_st,_yoffset,92,11,29732)
CheckMemberSize(struct _win_st,_bkgrnd,32,11,34437)
CheckOffset(struct _win_st,_bkgrnd,96,11,34437)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _win_st,100, 8654, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _win_st,_curx,2,10,29701)
CheckOffset(struct _win_st,_curx,2,10,29701)
CheckMemberSize(struct _win_st,_maxy,2,10,29702)
CheckOffset(struct _win_st,_maxy,4,10,29702)
CheckMemberSize(struct _win_st,_maxx,2,10,29703)
CheckOffset(struct _win_st,_maxx,6,10,29703)
CheckMemberSize(struct _win_st,_begy,2,10,29704)
CheckOffset(struct _win_st,_begy,8,10,29704)
CheckMemberSize(struct _win_st,_begx,2,10,29705)
CheckOffset(struct _win_st,_begx,10,10,29705)
CheckMemberSize(struct _win_st,_flags,2,10,29706)
CheckOffset(struct _win_st,_flags,12,10,29706)
CheckMemberSize(struct _win_st,_attrs,4,10,29707)
CheckOffset(struct _win_st,_attrs,16,10,29707)
CheckMemberSize(struct _win_st,_bkgd,4,10,29708)
CheckOffset(struct _win_st,_bkgd,20,10,29708)
CheckMemberSize(struct _win_st,_notimeout,1,10,29709)
CheckOffset(struct _win_st,_notimeout,24,10,29709)
CheckMemberSize(struct _win_st,_clear,1,10,29710)
CheckOffset(struct _win_st,_clear,25,10,29710)
CheckMemberSize(struct _win_st,_leaveok,1,10,29711)
CheckOffset(struct _win_st,_leaveok,26,10,29711)
CheckMemberSize(struct _win_st,_scroll,1,10,29712)
CheckOffset(struct _win_st,_scroll,27,10,29712)
CheckMemberSize(struct _win_st,_idlok,1,10,29713)
CheckOffset(struct _win_st,_idlok,28,10,29713)
CheckMemberSize(struct _win_st,_idcok,1,10,29714)
CheckOffset(struct _win_st,_idcok,29,10,29714)
CheckMemberSize(struct _win_st,_immed,1,10,29715)
CheckOffset(struct _win_st,_immed,30,10,29715)
CheckMemberSize(struct _win_st,_sync,1,10,29716)
CheckOffset(struct _win_st,_sync,31,10,29716)
CheckMemberSize(struct _win_st,_use_keypad,1,10,29717)
CheckOffset(struct _win_st,_use_keypad,32,10,29717)
CheckMemberSize(struct _win_st,_delay,4,10,29718)
CheckOffset(struct _win_st,_delay,36,10,29718)
CheckMemberSize(struct _win_st,_line,4,10,29719)
CheckOffset(struct _win_st,_line,40,10,29719)
CheckMemberSize(struct _win_st,_regtop,2,10,29720)
CheckOffset(struct _win_st,_regtop,44,10,29720)
CheckMemberSize(struct _win_st,_regbottom,2,10,29721)
CheckOffset(struct _win_st,_regbottom,46,10,29721)
CheckMemberSize(struct _win_st,_parx,4,10,29722)
CheckOffset(struct _win_st,_parx,48,10,29722)
CheckMemberSize(struct _win_st,_pary,4,10,29723)
CheckOffset(struct _win_st,_pary,52,10,29723)
CheckMemberSize(struct _win_st,_parent,4,10,29724)
CheckOffset(struct _win_st,_parent,56,10,29724)
CheckMemberSize(struct _win_st,_pad,12,10,29731)
CheckOffset(struct _win_st,_pad,60,10,29731)
CheckMemberSize(struct _win_st,_yoffset,2,10,29732)
CheckOffset(struct _win_st,_yoffset,72,10,29732)
CheckMemberSize(struct _win_st,_bkgrnd,24,10,34437)
CheckOffset(struct _win_st,_bkgrnd,76,10,34437)
#elif defined __powerpc64__
CheckTypeSize(struct _win_st,128, 8654, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _win_st,_curx,2,9,29701)
CheckOffset(struct _win_st,_curx,2,9,29701)
CheckMemberSize(struct _win_st,_maxy,2,9,29702)
CheckOffset(struct _win_st,_maxy,4,9,29702)
CheckMemberSize(struct _win_st,_maxx,2,9,29703)
CheckOffset(struct _win_st,_maxx,6,9,29703)
CheckMemberSize(struct _win_st,_begy,2,9,29704)
CheckOffset(struct _win_st,_begy,8,9,29704)
CheckMemberSize(struct _win_st,_begx,2,9,29705)
CheckOffset(struct _win_st,_begx,10,9,29705)
CheckMemberSize(struct _win_st,_flags,2,9,29706)
CheckOffset(struct _win_st,_flags,12,9,29706)
CheckMemberSize(struct _win_st,_attrs,8,9,29707)
CheckOffset(struct _win_st,_attrs,16,9,29707)
CheckMemberSize(struct _win_st,_bkgd,8,9,29708)
CheckOffset(struct _win_st,_bkgd,24,9,29708)
CheckMemberSize(struct _win_st,_notimeout,1,9,29709)
CheckOffset(struct _win_st,_notimeout,32,9,29709)
CheckMemberSize(struct _win_st,_clear,1,9,29710)
CheckOffset(struct _win_st,_clear,33,9,29710)
CheckMemberSize(struct _win_st,_leaveok,1,9,29711)
CheckOffset(struct _win_st,_leaveok,34,9,29711)
CheckMemberSize(struct _win_st,_scroll,1,9,29712)
CheckOffset(struct _win_st,_scroll,35,9,29712)
CheckMemberSize(struct _win_st,_idlok,1,9,29713)
CheckOffset(struct _win_st,_idlok,36,9,29713)
CheckMemberSize(struct _win_st,_idcok,1,9,29714)
CheckOffset(struct _win_st,_idcok,37,9,29714)
CheckMemberSize(struct _win_st,_immed,1,9,29715)
CheckOffset(struct _win_st,_immed,38,9,29715)
CheckMemberSize(struct _win_st,_sync,1,9,29716)
CheckOffset(struct _win_st,_sync,39,9,29716)
CheckMemberSize(struct _win_st,_use_keypad,1,9,29717)
CheckOffset(struct _win_st,_use_keypad,40,9,29717)
CheckMemberSize(struct _win_st,_delay,4,9,29718)
CheckOffset(struct _win_st,_delay,44,9,29718)
CheckMemberSize(struct _win_st,_line,8,9,29719)
CheckOffset(struct _win_st,_line,48,9,29719)
CheckMemberSize(struct _win_st,_regtop,2,9,29720)
CheckOffset(struct _win_st,_regtop,56,9,29720)
CheckMemberSize(struct _win_st,_regbottom,2,9,29721)
CheckOffset(struct _win_st,_regbottom,58,9,29721)
CheckMemberSize(struct _win_st,_parx,4,9,29722)
CheckOffset(struct _win_st,_parx,60,9,29722)
CheckMemberSize(struct _win_st,_pary,4,9,29723)
CheckOffset(struct _win_st,_pary,64,9,29723)
CheckMemberSize(struct _win_st,_parent,8,9,29724)
CheckOffset(struct _win_st,_parent,72,9,29724)
CheckMemberSize(struct _win_st,_pad,12,9,29731)
CheckOffset(struct _win_st,_pad,80,9,29731)
CheckMemberSize(struct _win_st,_yoffset,2,9,29732)
CheckOffset(struct _win_st,_yoffset,92,9,29732)
CheckMemberSize(struct _win_st,_bkgrnd,32,9,34437)
CheckOffset(struct _win_st,_bkgrnd,96,9,34437)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _win_st,100, 8654, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _win_st,_curx,2,6,29701)
CheckOffset(struct _win_st,_curx,2,6,29701)
CheckMemberSize(struct _win_st,_maxy,2,6,29702)
CheckOffset(struct _win_st,_maxy,4,6,29702)
CheckMemberSize(struct _win_st,_maxx,2,6,29703)
CheckOffset(struct _win_st,_maxx,6,6,29703)
CheckMemberSize(struct _win_st,_begy,2,6,29704)
CheckOffset(struct _win_st,_begy,8,6,29704)
CheckMemberSize(struct _win_st,_begx,2,6,29705)
CheckOffset(struct _win_st,_begx,10,6,29705)
CheckMemberSize(struct _win_st,_flags,2,6,29706)
CheckOffset(struct _win_st,_flags,12,6,29706)
CheckMemberSize(struct _win_st,_attrs,4,6,29707)
CheckOffset(struct _win_st,_attrs,16,6,29707)
CheckMemberSize(struct _win_st,_bkgd,4,6,29708)
CheckOffset(struct _win_st,_bkgd,20,6,29708)
CheckMemberSize(struct _win_st,_notimeout,1,6,29709)
CheckOffset(struct _win_st,_notimeout,24,6,29709)
CheckMemberSize(struct _win_st,_clear,1,6,29710)
CheckOffset(struct _win_st,_clear,25,6,29710)
CheckMemberSize(struct _win_st,_leaveok,1,6,29711)
CheckOffset(struct _win_st,_leaveok,26,6,29711)
CheckMemberSize(struct _win_st,_scroll,1,6,29712)
CheckOffset(struct _win_st,_scroll,27,6,29712)
CheckMemberSize(struct _win_st,_idlok,1,6,29713)
CheckOffset(struct _win_st,_idlok,28,6,29713)
CheckMemberSize(struct _win_st,_idcok,1,6,29714)
CheckOffset(struct _win_st,_idcok,29,6,29714)
CheckMemberSize(struct _win_st,_immed,1,6,29715)
CheckOffset(struct _win_st,_immed,30,6,29715)
CheckMemberSize(struct _win_st,_sync,1,6,29716)
CheckOffset(struct _win_st,_sync,31,6,29716)
CheckMemberSize(struct _win_st,_use_keypad,1,6,29717)
CheckOffset(struct _win_st,_use_keypad,32,6,29717)
CheckMemberSize(struct _win_st,_delay,4,6,29718)
CheckOffset(struct _win_st,_delay,36,6,29718)
CheckMemberSize(struct _win_st,_line,4,6,29719)
CheckOffset(struct _win_st,_line,40,6,29719)
CheckMemberSize(struct _win_st,_regtop,2,6,29720)
CheckOffset(struct _win_st,_regtop,44,6,29720)
CheckMemberSize(struct _win_st,_regbottom,2,6,29721)
CheckOffset(struct _win_st,_regbottom,46,6,29721)
CheckMemberSize(struct _win_st,_parx,4,6,29722)
CheckOffset(struct _win_st,_parx,48,6,29722)
CheckMemberSize(struct _win_st,_pary,4,6,29723)
CheckOffset(struct _win_st,_pary,52,6,29723)
CheckMemberSize(struct _win_st,_parent,4,6,29724)
CheckOffset(struct _win_st,_parent,56,6,29724)
CheckMemberSize(struct _win_st,_pad,12,6,29731)
CheckOffset(struct _win_st,_pad,60,6,29731)
CheckMemberSize(struct _win_st,_yoffset,2,6,29732)
CheckOffset(struct _win_st,_yoffset,72,6,29732)
CheckMemberSize(struct _win_st,_bkgrnd,24,6,34437)
CheckOffset(struct _win_st,_bkgrnd,76,6,34437)
#elif defined __ia64__
CheckTypeSize(struct _win_st,128, 8654, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _win_st,_cury,2,3,29700)
CheckOffset(struct _win_st,_cury,0,3,29700)
CheckMemberSize(struct _win_st,_curx,2,3,29701)
CheckOffset(struct _win_st,_curx,2,3,29701)
CheckMemberSize(struct _win_st,_maxy,2,3,29702)
CheckOffset(struct _win_st,_maxy,4,3,29702)
CheckMemberSize(struct _win_st,_maxx,2,3,29703)
CheckOffset(struct _win_st,_maxx,6,3,29703)
CheckMemberSize(struct _win_st,_begy,2,3,29704)
CheckOffset(struct _win_st,_begy,8,3,29704)
CheckMemberSize(struct _win_st,_begx,2,3,29705)
CheckOffset(struct _win_st,_begx,10,3,29705)
CheckMemberSize(struct _win_st,_flags,2,3,29706)
CheckOffset(struct _win_st,_flags,12,3,29706)
CheckMemberSize(struct _win_st,_attrs,8,3,29707)
CheckOffset(struct _win_st,_attrs,16,3,29707)
CheckMemberSize(struct _win_st,_bkgd,8,3,29708)
CheckOffset(struct _win_st,_bkgd,24,3,29708)
CheckMemberSize(struct _win_st,_notimeout,1,3,29709)
CheckOffset(struct _win_st,_notimeout,32,3,29709)
CheckMemberSize(struct _win_st,_clear,1,3,29710)
CheckOffset(struct _win_st,_clear,33,3,29710)
CheckMemberSize(struct _win_st,_leaveok,1,3,29711)
CheckOffset(struct _win_st,_leaveok,34,3,29711)
CheckMemberSize(struct _win_st,_scroll,1,3,29712)
CheckOffset(struct _win_st,_scroll,35,3,29712)
CheckMemberSize(struct _win_st,_idlok,1,3,29713)
CheckOffset(struct _win_st,_idlok,36,3,29713)
CheckMemberSize(struct _win_st,_idcok,1,3,29714)
CheckOffset(struct _win_st,_idcok,37,3,29714)
CheckMemberSize(struct _win_st,_immed,1,3,29715)
CheckOffset(struct _win_st,_immed,38,3,29715)
CheckMemberSize(struct _win_st,_sync,1,3,29716)
CheckOffset(struct _win_st,_sync,39,3,29716)
CheckMemberSize(struct _win_st,_use_keypad,1,3,29717)
CheckOffset(struct _win_st,_use_keypad,40,3,29717)
CheckMemberSize(struct _win_st,_delay,4,3,29718)
CheckOffset(struct _win_st,_delay,44,3,29718)
CheckMemberSize(struct _win_st,_line,8,3,29719)
CheckOffset(struct _win_st,_line,48,3,29719)
CheckMemberSize(struct _win_st,_regtop,2,3,29720)
CheckOffset(struct _win_st,_regtop,56,3,29720)
CheckMemberSize(struct _win_st,_regbottom,2,3,29721)
CheckOffset(struct _win_st,_regbottom,58,3,29721)
CheckMemberSize(struct _win_st,_parx,4,3,29722)
CheckOffset(struct _win_st,_parx,60,3,29722)
CheckMemberSize(struct _win_st,_pary,4,3,29723)
CheckOffset(struct _win_st,_pary,64,3,29723)
CheckMemberSize(struct _win_st,_parent,8,3,29724)
CheckOffset(struct _win_st,_parent,72,3,29724)
CheckMemberSize(struct _win_st,_pad,12,3,29731)
CheckOffset(struct _win_st,_pad,80,3,29731)
CheckMemberSize(struct _win_st,_yoffset,2,3,29732)
CheckOffset(struct _win_st,_yoffset,92,3,29732)
CheckMemberSize(struct _win_st,_bkgrnd,32,3,34437)
CheckOffset(struct _win_st,_bkgrnd,96,3,34437)
#elif defined __i386__
CheckTypeSize(struct _win_st,100, 8654, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _win_st,_cury,2,2,29700)
CheckOffset(struct _win_st,_cury,0,2,29700)
CheckMemberSize(struct _win_st,_curx,2,2,29701)
CheckOffset(struct _win_st,_curx,2,2,29701)
CheckMemberSize(struct _win_st,_maxy,2,2,29702)
CheckOffset(struct _win_st,_maxy,4,2,29702)
CheckMemberSize(struct _win_st,_maxx,2,2,29703)
CheckOffset(struct _win_st,_maxx,6,2,29703)
CheckMemberSize(struct _win_st,_begy,2,2,29704)
CheckOffset(struct _win_st,_begy,8,2,29704)
CheckMemberSize(struct _win_st,_begx,2,2,29705)
CheckOffset(struct _win_st,_begx,10,2,29705)
CheckMemberSize(struct _win_st,_flags,2,2,29706)
CheckOffset(struct _win_st,_flags,12,2,29706)
CheckMemberSize(struct _win_st,_attrs,4,2,29707)
CheckOffset(struct _win_st,_attrs,16,2,29707)
CheckMemberSize(struct _win_st,_bkgd,4,2,29708)
CheckOffset(struct _win_st,_bkgd,20,2,29708)
CheckMemberSize(struct _win_st,_notimeout,1,2,29709)
CheckOffset(struct _win_st,_notimeout,24,2,29709)
CheckMemberSize(struct _win_st,_clear,1,2,29710)
CheckOffset(struct _win_st,_clear,25,2,29710)
CheckMemberSize(struct _win_st,_leaveok,1,2,29711)
CheckOffset(struct _win_st,_leaveok,26,2,29711)
CheckMemberSize(struct _win_st,_scroll,1,2,29712)
CheckOffset(struct _win_st,_scroll,27,2,29712)
CheckMemberSize(struct _win_st,_idlok,1,2,29713)
CheckOffset(struct _win_st,_idlok,28,2,29713)
CheckMemberSize(struct _win_st,_idcok,1,2,29714)
CheckOffset(struct _win_st,_idcok,29,2,29714)
CheckMemberSize(struct _win_st,_immed,1,2,29715)
CheckOffset(struct _win_st,_immed,30,2,29715)
CheckMemberSize(struct _win_st,_sync,1,2,29716)
CheckOffset(struct _win_st,_sync,31,2,29716)
CheckMemberSize(struct _win_st,_use_keypad,1,2,29717)
CheckOffset(struct _win_st,_use_keypad,32,2,29717)
CheckMemberSize(struct _win_st,_delay,4,2,29718)
CheckOffset(struct _win_st,_delay,36,2,29718)
CheckMemberSize(struct _win_st,_line,4,2,29719)
CheckOffset(struct _win_st,_line,40,2,29719)
CheckMemberSize(struct _win_st,_regtop,2,2,29720)
CheckOffset(struct _win_st,_regtop,44,2,29720)
CheckMemberSize(struct _win_st,_regbottom,2,2,29721)
CheckOffset(struct _win_st,_regbottom,46,2,29721)
CheckMemberSize(struct _win_st,_parx,4,2,29722)
CheckOffset(struct _win_st,_parx,48,2,29722)
CheckMemberSize(struct _win_st,_pary,4,2,29723)
CheckOffset(struct _win_st,_pary,52,2,29723)
CheckMemberSize(struct _win_st,_parent,4,2,29724)
CheckOffset(struct _win_st,_parent,56,2,29724)
CheckMemberSize(struct _win_st,_pad,12,2,29731)
CheckOffset(struct _win_st,_pad,60,2,29731)
CheckMemberSize(struct _win_st,_yoffset,2,2,29732)
CheckOffset(struct _win_st,_yoffset,72,2,29732)
CheckMemberSize(struct _win_st,_bkgrnd,24,2,34437)
CheckOffset(struct _win_st,_bkgrnd,76,2,34437)
#else
Msg("Find size of _win_st (8654)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8654,0);
#endif

#if 1
CheckTypeSize(bool,1, 8651, 1, 1.3, NULL, 3, NULL)
#endif

extern int addch_db(const chtype);
CheckInterfacedef(addch,addch_db);
extern int addchnstr_db(const chtype *, int);
CheckInterfacedef(addchnstr,addchnstr_db);
extern int addchstr_db(const chtype *);
CheckInterfacedef(addchstr,addchstr_db);
extern int addnstr_db(const char *, int);
CheckInterfacedef(addnstr,addnstr_db);
extern int addstr_db(const char *);
CheckInterfacedef(addstr,addstr_db);
extern int attroff_db(int);
CheckInterfacedef(attroff,attroff_db);
extern int attron_db(int);
CheckInterfacedef(attron,attron_db);
extern int attrset_db(int);
CheckInterfacedef(attrset,attrset_db);
extern int attr_get_db(attr_t *, short *, void *);
CheckInterfacedef(attr_get,attr_get_db);
extern int attr_off_db(attr_t, void *);
CheckInterfacedef(attr_off,attr_off_db);
extern int attr_on_db(attr_t, void *);
CheckInterfacedef(attr_on,attr_on_db);
extern int attr_set_db(attr_t, short, void *);
CheckInterfacedef(attr_set,attr_set_db);
extern int baudrate_db(void);
CheckInterfacedef(baudrate,baudrate_db);
extern int beep_db(void);
CheckInterfacedef(beep,beep_db);
extern int bkgd_db(chtype);
CheckInterfacedef(bkgd,bkgd_db);
extern void bkgdset_db(chtype);
CheckInterfacedef(bkgdset,bkgdset_db);
extern int border_db(chtype, chtype, chtype, chtype, chtype, chtype, chtype, chtype);
CheckInterfacedef(border,border_db);
extern int box_db(WINDOW *, chtype, chtype);
CheckInterfacedef(box,box_db);
extern bool can_change_color_db(void);
CheckInterfacedef(can_change_color,can_change_color_db);
extern int cbreak_db(void);
CheckInterfacedef(cbreak,cbreak_db);
extern int chgat_db(int, attr_t, short, const void *);
CheckInterfacedef(chgat,chgat_db);
extern int clear_db(void);
CheckInterfacedef(clear,clear_db);
extern int clearok_db(WINDOW *, bool);
CheckInterfacedef(clearok,clearok_db);
extern int clrtobot_db(void);
CheckInterfacedef(clrtobot,clrtobot_db);
extern int clrtoeol_db(void);
CheckInterfacedef(clrtoeol,clrtoeol_db);
extern int color_content_db(short, short *, short *, short *);
CheckInterfacedef(color_content,color_content_db);
extern int color_set_db(short, void *);
CheckInterfacedef(color_set,color_set_db);
extern int copywin_db(const WINDOW *, WINDOW *, int, int, int, int, int, int, int);
CheckInterfacedef(copywin,copywin_db);
extern int curs_set_db(int);
CheckInterfacedef(curs_set,curs_set_db);
extern int def_prog_mode_db(void);
CheckInterfacedef(def_prog_mode,def_prog_mode_db);
extern int def_shell_mode_db(void);
CheckInterfacedef(def_shell_mode,def_shell_mode_db);
extern int delay_output_db(int);
CheckInterfacedef(delay_output,delay_output_db);
extern int delch_db(void);
CheckInterfacedef(delch,delch_db);
extern void delscreen_db(SCREEN *);
CheckInterfacedef(delscreen,delscreen_db);
extern int delwin_db(WINDOW *);
CheckInterfacedef(delwin,delwin_db);
extern int deleteln_db(void);
CheckInterfacedef(deleteln,deleteln_db);
extern WINDOW * derwin_db(WINDOW *, int, int, int, int);
CheckInterfacedef(derwin,derwin_db);
extern int doupdate_db(void);
CheckInterfacedef(doupdate,doupdate_db);
extern WINDOW * dupwin_db(WINDOW *);
CheckInterfacedef(dupwin,dupwin_db);
extern int echo_db(void);
CheckInterfacedef(echo,echo_db);
extern int echochar_db(const chtype);
CheckInterfacedef(echochar,echochar_db);
extern int erase_db(void);
CheckInterfacedef(erase,erase_db);
extern int endwin_db(void);
CheckInterfacedef(endwin,endwin_db);
extern char erasechar_db(void);
CheckInterfacedef(erasechar,erasechar_db);
extern void filter_db(void);
CheckInterfacedef(filter,filter_db);
extern int flash_db(void);
CheckInterfacedef(flash,flash_db);
extern int flushinp_db(void);
CheckInterfacedef(flushinp,flushinp_db);
extern chtype getbkgd_db(WINDOW *);
CheckInterfacedef(getbkgd,getbkgd_db);
extern int getch_db(void);
CheckInterfacedef(getch,getch_db);
extern int getnstr_db(char *, int);
CheckInterfacedef(getnstr,getnstr_db);
extern int getstr_db(char *);
CheckInterfacedef(getstr,getstr_db);
extern WINDOW * getwin_db(FILE *);
CheckInterfacedef(getwin,getwin_db);
extern int halfdelay_db(int);
CheckInterfacedef(halfdelay,halfdelay_db);
extern bool has_colors_db(void);
CheckInterfacedef(has_colors,has_colors_db);
extern bool has_ic_db(void);
CheckInterfacedef(has_ic,has_ic_db);
extern bool has_il_db(void);
CheckInterfacedef(has_il,has_il_db);
extern int hline_db(chtype, int);
CheckInterfacedef(hline,hline_db);
extern void idcok_db(WINDOW *, bool);
CheckInterfacedef(idcok,idcok_db);
extern int idlok_db(WINDOW *, bool);
CheckInterfacedef(idlok,idlok_db);
extern void immedok_db(WINDOW *, bool);
CheckInterfacedef(immedok,immedok_db);
extern chtype inch_db(void);
CheckInterfacedef(inch,inch_db);
extern int inchnstr_db(chtype *, int);
CheckInterfacedef(inchnstr,inchnstr_db);
extern int inchstr_db(chtype *);
CheckInterfacedef(inchstr,inchstr_db);
extern WINDOW * initscr_db(void);
CheckInterfacedef(initscr,initscr_db);
extern int init_color_db(short, short, short, short);
CheckInterfacedef(init_color,init_color_db);
extern int init_pair_db(short, short, short);
CheckInterfacedef(init_pair,init_pair_db);
extern int innstr_db(char *, int);
CheckInterfacedef(innstr,innstr_db);
extern int insch_db(chtype);
CheckInterfacedef(insch,insch_db);
extern int insdelln_db(int);
CheckInterfacedef(insdelln,insdelln_db);
extern int insertln_db(void);
CheckInterfacedef(insertln,insertln_db);
extern int insnstr_db(const char *, int);
CheckInterfacedef(insnstr,insnstr_db);
extern int insstr_db(const char *);
CheckInterfacedef(insstr,insstr_db);
extern int instr_db(char *);
CheckInterfacedef(instr,instr_db);
extern int intrflush_db(WINDOW *, bool);
CheckInterfacedef(intrflush,intrflush_db);
extern bool isendwin_db(void);
CheckInterfacedef(isendwin,isendwin_db);
extern bool is_linetouched_db(WINDOW *, int);
CheckInterfacedef(is_linetouched,is_linetouched_db);
extern bool is_wintouched_db(WINDOW *);
CheckInterfacedef(is_wintouched,is_wintouched_db);
extern const char * keyname_db(int);
CheckInterfacedef(keyname,keyname_db);
extern int keypad_db(WINDOW *, bool);
CheckInterfacedef(keypad,keypad_db);
extern char killchar_db(void);
CheckInterfacedef(killchar,killchar_db);
extern int leaveok_db(WINDOW *, bool);
CheckInterfacedef(leaveok,leaveok_db);
extern char * longname_db(void);
CheckInterfacedef(longname,longname_db);
extern int meta_db(WINDOW *, bool);
CheckInterfacedef(meta,meta_db);
extern int move_db(int, int);
CheckInterfacedef(move,move_db);
extern int mvaddch_db(int, int, const chtype);
CheckInterfacedef(mvaddch,mvaddch_db);
extern int mvaddchnstr_db(int, int, const chtype *, int);
CheckInterfacedef(mvaddchnstr,mvaddchnstr_db);
extern int mvaddchstr_db(int, int, const chtype *);
CheckInterfacedef(mvaddchstr,mvaddchstr_db);
extern int mvaddnstr_db(int, int, const char *, int);
CheckInterfacedef(mvaddnstr,mvaddnstr_db);
extern int mvaddstr_db(int, int, const char *);
CheckInterfacedef(mvaddstr,mvaddstr_db);
extern int mvchgat_db(int, int, int, attr_t, short, const void *);
CheckInterfacedef(mvchgat,mvchgat_db);
extern int mvcur_db(int, int, int, int);
CheckInterfacedef(mvcur,mvcur_db);
extern int mvdelch_db(int, int);
CheckInterfacedef(mvdelch,mvdelch_db);
extern int mvderwin_db(WINDOW *, int, int);
CheckInterfacedef(mvderwin,mvderwin_db);
extern int mvgetch_db(int, int);
CheckInterfacedef(mvgetch,mvgetch_db);
extern int mvgetnstr_db(int, int, char *, int);
CheckInterfacedef(mvgetnstr,mvgetnstr_db);
extern int mvgetstr_db(int, int, char *);
CheckInterfacedef(mvgetstr,mvgetstr_db);
extern int mvhline_db(int, int, chtype, int);
CheckInterfacedef(mvhline,mvhline_db);
extern chtype mvinch_db(int, int);
CheckInterfacedef(mvinch,mvinch_db);
extern int mvinchnstr_db(int, int, chtype *, int);
CheckInterfacedef(mvinchnstr,mvinchnstr_db);
extern int mvinchstr_db(int, int, chtype *);
CheckInterfacedef(mvinchstr,mvinchstr_db);
extern int mvinnstr_db(int, int, char *, int);
CheckInterfacedef(mvinnstr,mvinnstr_db);
extern int mvinsch_db(int, int, chtype);
CheckInterfacedef(mvinsch,mvinsch_db);
extern int mvinsnstr_db(int, int, const char *, int);
CheckInterfacedef(mvinsnstr,mvinsnstr_db);
extern int mvinsstr_db(int, int, const char *);
CheckInterfacedef(mvinsstr,mvinsstr_db);
extern int mvinstr_db(int, int, char *);
CheckInterfacedef(mvinstr,mvinstr_db);
extern int mvprintw_db(int, int, char *, ...);
CheckInterfacedef(mvprintw,mvprintw_db);
extern int mvscanw_db(int, int, const char *, ...);
CheckInterfacedef(mvscanw,mvscanw_db);
extern int mvvline_db(int, int, chtype, int);
CheckInterfacedef(mvvline,mvvline_db);
extern int mvwaddch_db(WINDOW *, int, int, const chtype);
CheckInterfacedef(mvwaddch,mvwaddch_db);
extern int mvwaddchnstr_db(WINDOW *, int, int, const chtype *, int);
CheckInterfacedef(mvwaddchnstr,mvwaddchnstr_db);
extern int mvwaddchstr_db(WINDOW *, int, int, const chtype *);
CheckInterfacedef(mvwaddchstr,mvwaddchstr_db);
extern int mvwaddnstr_db(WINDOW *, int, int, const char *, int);
CheckInterfacedef(mvwaddnstr,mvwaddnstr_db);
extern int mvwaddstr_db(WINDOW *, int, int, const char *);
CheckInterfacedef(mvwaddstr,mvwaddstr_db);
extern int mvwchgat_db(WINDOW *, int, int, int, attr_t, short, const void *);
CheckInterfacedef(mvwchgat,mvwchgat_db);
extern int mvwdelch_db(WINDOW *, int, int);
CheckInterfacedef(mvwdelch,mvwdelch_db);
extern int mvwgetch_db(WINDOW *, int, int);
CheckInterfacedef(mvwgetch,mvwgetch_db);
extern int mvwgetnstr_db(WINDOW *, int, int, char *, int);
CheckInterfacedef(mvwgetnstr,mvwgetnstr_db);
extern int mvwgetstr_db(WINDOW *, int, int, char *);
CheckInterfacedef(mvwgetstr,mvwgetstr_db);
extern int mvwhline_db(WINDOW *, int, int, chtype, int);
CheckInterfacedef(mvwhline,mvwhline_db);
extern int mvwin_db(WINDOW *, int, int);
CheckInterfacedef(mvwin,mvwin_db);
extern chtype mvwinch_db(WINDOW *, int, int);
CheckInterfacedef(mvwinch,mvwinch_db);
extern int mvwinchnstr_db(WINDOW *, int, int, chtype *, int);
CheckInterfacedef(mvwinchnstr,mvwinchnstr_db);
extern int mvwinchstr_db(WINDOW *, int, int, chtype *);
CheckInterfacedef(mvwinchstr,mvwinchstr_db);
extern int mvwinnstr_db(WINDOW *, int, int, char *, int);
CheckInterfacedef(mvwinnstr,mvwinnstr_db);
extern int mvwinsch_db(WINDOW *, int, int, chtype);
CheckInterfacedef(mvwinsch,mvwinsch_db);
extern int mvwinsnstr_db(WINDOW *, int, int, const char *, int);
CheckInterfacedef(mvwinsnstr,mvwinsnstr_db);
extern int mvwinsstr_db(WINDOW *, int, int, const char *);
CheckInterfacedef(mvwinsstr,mvwinsstr_db);
extern int mvwinstr_db(WINDOW *, int, int, char *);
CheckInterfacedef(mvwinstr,mvwinstr_db);
extern int mvwprintw_db(WINDOW *, int, int, char *, ...);
CheckInterfacedef(mvwprintw,mvwprintw_db);
extern int mvwscanw_db(WINDOW *, int, int, const char *, ...);
CheckInterfacedef(mvwscanw,mvwscanw_db);
extern int mvwvline_db(WINDOW *, int, int, chtype, int);
CheckInterfacedef(mvwvline,mvwvline_db);
extern int napms_db(int);
CheckInterfacedef(napms,napms_db);
extern WINDOW * newpad_db(int, int);
CheckInterfacedef(newpad,newpad_db);
extern SCREEN * newterm_db(const char *, FILE *, FILE *);
CheckInterfacedef(newterm,newterm_db);
extern WINDOW * newwin_db(int, int, int, int);
CheckInterfacedef(newwin,newwin_db);
extern int nl_db(void);
CheckInterfacedef(nl,nl_db);
extern int nocbreak_db(void);
CheckInterfacedef(nocbreak,nocbreak_db);
extern int nodelay_db(WINDOW *, bool);
CheckInterfacedef(nodelay,nodelay_db);
extern int noecho_db(void);
CheckInterfacedef(noecho,noecho_db);
extern int nonl_db(void);
CheckInterfacedef(nonl,nonl_db);
extern void noqiflush_db(void);
CheckInterfacedef(noqiflush,noqiflush_db);
extern int noraw_db(void);
CheckInterfacedef(noraw,noraw_db);
extern int notimeout_db(WINDOW *, bool);
CheckInterfacedef(notimeout,notimeout_db);
extern int overlay_db(const WINDOW *, WINDOW *);
CheckInterfacedef(overlay,overlay_db);
extern int overwrite_db(const WINDOW *, WINDOW *);
CheckInterfacedef(overwrite,overwrite_db);
extern int pair_content_db(short, short *, short *);
CheckInterfacedef(pair_content,pair_content_db);
extern int pechochar_db(WINDOW *, chtype);
CheckInterfacedef(pechochar,pechochar_db);
extern int pnoutrefresh_db(WINDOW *, int, int, int, int, int, int);
CheckInterfacedef(pnoutrefresh,pnoutrefresh_db);
extern int prefresh_db(WINDOW *, int, int, int, int, int, int);
CheckInterfacedef(prefresh,prefresh_db);
extern int printw_db(char *, ...);
CheckInterfacedef(printw,printw_db);
extern int putwin_db(WINDOW *, FILE *);
CheckInterfacedef(putwin,putwin_db);
extern void qiflush_db(void);
CheckInterfacedef(qiflush,qiflush_db);
extern int raw_db(void);
CheckInterfacedef(raw,raw_db);
extern int redrawwin_db(WINDOW *);
CheckInterfacedef(redrawwin,redrawwin_db);
extern int refresh_db(void);
CheckInterfacedef(refresh,refresh_db);
extern int resetty_db(void);
CheckInterfacedef(resetty,resetty_db);
extern int reset_prog_mode_db(void);
CheckInterfacedef(reset_prog_mode,reset_prog_mode_db);
extern int reset_shell_mode_db(void);
CheckInterfacedef(reset_shell_mode,reset_shell_mode_db);
extern int ripoffline_db(int, int(*fptr0)(WINDOW *,int)
);
CheckInterfacedef(ripoffline,ripoffline_db);
extern int savetty_db(void);
CheckInterfacedef(savetty,savetty_db);
extern int scanw_db(const char *, ...);
CheckInterfacedef(scanw,scanw_db);
extern int scr_dump_db(const char *);
CheckInterfacedef(scr_dump,scr_dump_db);
extern int scr_init_db(const char *);
CheckInterfacedef(scr_init,scr_init_db);
extern int scrl_db(int);
CheckInterfacedef(scrl,scrl_db);
extern int scroll_db(WINDOW *);
CheckInterfacedef(scroll,scroll_db);
extern int scrollok_db(WINDOW *, bool);
CheckInterfacedef(scrollok,scrollok_db);
extern int scr_restore_db(const char *);
CheckInterfacedef(scr_restore,scr_restore_db);
extern int scr_set_db(const char *);
CheckInterfacedef(scr_set,scr_set_db);
extern int setscrreg_db(int, int);
CheckInterfacedef(setscrreg,setscrreg_db);
extern SCREEN * set_term_db(SCREEN *);
CheckInterfacedef(set_term,set_term_db);
extern int slk_attroff_db(const chtype);
CheckInterfacedef(slk_attroff,slk_attroff_db);
extern int slk_attron_db(const chtype);
CheckInterfacedef(slk_attron,slk_attron_db);
extern int slk_attrset_db(const chtype);
CheckInterfacedef(slk_attrset,slk_attrset_db);
extern int slk_attr_set_db(const attr_t, short, void *);
CheckInterfacedef(slk_attr_set,slk_attr_set_db);
extern int slk_clear_db(void);
CheckInterfacedef(slk_clear,slk_clear_db);
extern int slk_color_db(short);
CheckInterfacedef(slk_color,slk_color_db);
extern int slk_init_db(int);
CheckInterfacedef(slk_init,slk_init_db);
extern char * slk_label_db(int);
CheckInterfacedef(slk_label,slk_label_db);
extern int slk_noutrefresh_db(void);
CheckInterfacedef(slk_noutrefresh,slk_noutrefresh_db);
extern int slk_refresh_db(void);
CheckInterfacedef(slk_refresh,slk_refresh_db);
extern int slk_restore_db(void);
CheckInterfacedef(slk_restore,slk_restore_db);
extern int slk_set_db(int, const char *, int);
CheckInterfacedef(slk_set,slk_set_db);
extern int slk_touch_db(void);
CheckInterfacedef(slk_touch,slk_touch_db);
extern int standout_db(void);
CheckInterfacedef(standout,standout_db);
extern int standend_db(void);
CheckInterfacedef(standend,standend_db);
extern int start_color_db(void);
CheckInterfacedef(start_color,start_color_db);
extern WINDOW * subpad_db(WINDOW *, int, int, int, int);
CheckInterfacedef(subpad,subpad_db);
extern WINDOW * subwin_db(WINDOW *, int, int, int, int);
CheckInterfacedef(subwin,subwin_db);
extern int syncok_db(WINDOW *, bool);
CheckInterfacedef(syncok,syncok_db);
extern chtype termattrs_db(void);
CheckInterfacedef(termattrs,termattrs_db);
extern char * termname_db(void);
CheckInterfacedef(termname,termname_db);
extern void timeout_db(int);
CheckInterfacedef(timeout,timeout_db);
extern int typeahead_db(int);
CheckInterfacedef(typeahead,typeahead_db);
extern int ungetch_db(int);
CheckInterfacedef(ungetch,ungetch_db);
extern int untouchwin_db(WINDOW *);
CheckInterfacedef(untouchwin,untouchwin_db);
extern void use_env_db(bool);
CheckInterfacedef(use_env,use_env_db);
extern int vidattr_db(chtype);
CheckInterfacedef(vidattr,vidattr_db);
extern int vidputs_db(chtype, int(*fptr1)(int)
);
CheckInterfacedef(vidputs,vidputs_db);
extern int vline_db(chtype, int);
CheckInterfacedef(vline,vline_db);
extern int vwprintw_db(WINDOW *, char *, va_list);
CheckInterfacedef(vwprintw,vwprintw_db);
extern int vw_printw_db(WINDOW *, const char *, va_list);
CheckInterfacedef(vw_printw,vw_printw_db);
extern int vwscanw_db(WINDOW *, const char *, va_list);
CheckInterfacedef(vwscanw,vwscanw_db);
extern int vw_scanw_db(WINDOW *, const char *, va_list);
CheckInterfacedef(vw_scanw,vw_scanw_db);
extern int waddch_db(WINDOW *, const chtype);
CheckInterfacedef(waddch,waddch_db);
extern int waddchnstr_db(WINDOW *, const chtype *, int);
CheckInterfacedef(waddchnstr,waddchnstr_db);
extern int waddchstr_db(WINDOW *, const chtype *);
CheckInterfacedef(waddchstr,waddchstr_db);
extern int waddnstr_db(WINDOW *, const char *, int);
CheckInterfacedef(waddnstr,waddnstr_db);
extern int waddstr_db(WINDOW *, const char *);
CheckInterfacedef(waddstr,waddstr_db);
extern int wattron_db(WINDOW *, int);
CheckInterfacedef(wattron,wattron_db);
extern int wattroff_db(WINDOW *, int);
CheckInterfacedef(wattroff,wattroff_db);
extern int wattrset_db(WINDOW *, int);
CheckInterfacedef(wattrset,wattrset_db);
extern int wattr_get_db(WINDOW *, attr_t *, short *, void *);
CheckInterfacedef(wattr_get,wattr_get_db);
extern int wattr_on_db(WINDOW *, attr_t, void *);
CheckInterfacedef(wattr_on,wattr_on_db);
extern int wattr_off_db(WINDOW *, attr_t, void *);
CheckInterfacedef(wattr_off,wattr_off_db);
extern int wattr_set_db(WINDOW *, attr_t, short, void *);
CheckInterfacedef(wattr_set,wattr_set_db);
extern int wbkgd_db(WINDOW *, chtype);
CheckInterfacedef(wbkgd,wbkgd_db);
extern void wbkgdset_db(WINDOW *, chtype);
CheckInterfacedef(wbkgdset,wbkgdset_db);
extern int wborder_db(WINDOW *, chtype, chtype, chtype, chtype, chtype, chtype, chtype, chtype);
CheckInterfacedef(wborder,wborder_db);
extern int wchgat_db(WINDOW *, int, attr_t, short, const void *);
CheckInterfacedef(wchgat,wchgat_db);
extern int wclear_db(WINDOW *);
CheckInterfacedef(wclear,wclear_db);
extern int wclrtobot_db(WINDOW *);
CheckInterfacedef(wclrtobot,wclrtobot_db);
extern int wclrtoeol_db(WINDOW *);
CheckInterfacedef(wclrtoeol,wclrtoeol_db);
extern int wcolor_set_db(WINDOW *, short, void *);
CheckInterfacedef(wcolor_set,wcolor_set_db);
extern void wcursyncup_db(WINDOW *);
CheckInterfacedef(wcursyncup,wcursyncup_db);
extern int wdelch_db(WINDOW *);
CheckInterfacedef(wdelch,wdelch_db);
extern int wdeleteln_db(WINDOW *);
CheckInterfacedef(wdeleteln,wdeleteln_db);
extern int wechochar_db(WINDOW *, const chtype);
CheckInterfacedef(wechochar,wechochar_db);
extern int werase_db(WINDOW *);
CheckInterfacedef(werase,werase_db);
extern int wgetch_db(WINDOW *);
CheckInterfacedef(wgetch,wgetch_db);
extern int wgetnstr_db(WINDOW *, char *, int);
CheckInterfacedef(wgetnstr,wgetnstr_db);
extern int wgetstr_db(WINDOW *, char *);
CheckInterfacedef(wgetstr,wgetstr_db);
extern int whline_db(WINDOW *, chtype, int);
CheckInterfacedef(whline,whline_db);
extern chtype winch_db(WINDOW *);
CheckInterfacedef(winch,winch_db);
extern int winchnstr_db(WINDOW *, chtype *, int);
CheckInterfacedef(winchnstr,winchnstr_db);
extern int winchstr_db(WINDOW *, chtype *);
CheckInterfacedef(winchstr,winchstr_db);
extern int winnstr_db(WINDOW *, char *, int);
CheckInterfacedef(winnstr,winnstr_db);
extern int winsch_db(WINDOW *, chtype);
CheckInterfacedef(winsch,winsch_db);
extern int winsdelln_db(WINDOW *, int);
CheckInterfacedef(winsdelln,winsdelln_db);
extern int winsertln_db(WINDOW *);
CheckInterfacedef(winsertln,winsertln_db);
extern int winsnstr_db(WINDOW *, const char *, int);
CheckInterfacedef(winsnstr,winsnstr_db);
extern int winsstr_db(WINDOW *, const char *);
CheckInterfacedef(winsstr,winsstr_db);
extern int winstr_db(WINDOW *, char *);
CheckInterfacedef(winstr,winstr_db);
extern int wmove_db(WINDOW *, int, int);
CheckInterfacedef(wmove,wmove_db);
extern int wnoutrefresh_db(WINDOW *);
CheckInterfacedef(wnoutrefresh,wnoutrefresh_db);
extern int wprintw_db(WINDOW *, char *, ...);
CheckInterfacedef(wprintw,wprintw_db);
extern int wredrawln_db(WINDOW *, int, int);
CheckInterfacedef(wredrawln,wredrawln_db);
extern int wrefresh_db(WINDOW *);
CheckInterfacedef(wrefresh,wrefresh_db);
extern int wscanw_db(WINDOW *, const char *, ...);
CheckInterfacedef(wscanw,wscanw_db);
extern int wscrl_db(WINDOW *, int);
CheckInterfacedef(wscrl,wscrl_db);
extern int wsetscrreg_db(WINDOW *, int, int);
CheckInterfacedef(wsetscrreg,wsetscrreg_db);
extern int wstandout_db(WINDOW *);
CheckInterfacedef(wstandout,wstandout_db);
extern int wstandend_db(WINDOW *);
CheckInterfacedef(wstandend,wstandend_db);
extern void wsyncdown_db(WINDOW *);
CheckInterfacedef(wsyncdown,wsyncdown_db);
extern void wsyncup_db(WINDOW *);
CheckInterfacedef(wsyncup,wsyncup_db);
extern void wtimeout_db(WINDOW *, int);
CheckInterfacedef(wtimeout,wtimeout_db);
extern int wtouchln_db(WINDOW *, int, int, int);
CheckInterfacedef(wtouchln,wtouchln_db);
extern int wvline_db(WINDOW *, chtype, int);
CheckInterfacedef(wvline,wvline_db);
extern char * unctrl_db(chtype);
CheckInterfacedef(unctrl,unctrl_db);
extern int touchline_db(WINDOW *, int, int);
CheckInterfacedef(touchline,touchline_db);
extern int touchwin_db(WINDOW *);
CheckInterfacedef(touchwin,touchwin_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in curses.h\n\n",pcnt,cnt);
return cnt;
#endif

}
