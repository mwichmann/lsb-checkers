/*
 * Test of curses.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef WA_ATTRIBUTES
	CompareConstant(WA_ATTRIBUTES,A_ATTRIBUTES)
#else
Msg( "Error: Constant not found: WA_ATTRIBUTES\n");
cnt++;
#endif

#ifdef WA_NORMAL
	CompareConstant(WA_NORMAL,A_NORMAL)
#else
Msg( "Error: Constant not found: WA_NORMAL\n");
cnt++;
#endif

#ifdef WA_STANDOUT
	CompareConstant(WA_STANDOUT,A_STANDOUT)
#else
Msg( "Error: Constant not found: WA_STANDOUT\n");
cnt++;
#endif

#ifdef WA_UNDERLINE
	CompareConstant(WA_UNDERLINE,A_UNDERLINE)
#else
Msg( "Error: Constant not found: WA_UNDERLINE\n");
cnt++;
#endif

#ifdef WA_REVERSE
	CompareConstant(WA_REVERSE,A_REVERSE)
#else
Msg( "Error: Constant not found: WA_REVERSE\n");
cnt++;
#endif

#ifdef WA_BLINK
	CompareConstant(WA_BLINK,A_BLINK)
#else
Msg( "Error: Constant not found: WA_BLINK\n");
cnt++;
#endif

#ifdef WA_DIM
	CompareConstant(WA_DIM,A_DIM)
#else
Msg( "Error: Constant not found: WA_DIM\n");
cnt++;
#endif

#ifdef WA_BOLD
	CompareConstant(WA_BOLD,A_BOLD)
#else
Msg( "Error: Constant not found: WA_BOLD\n");
cnt++;
#endif

#ifdef WA_ALTCHARSET
	CompareConstant(WA_ALTCHARSET,A_ALTCHARSET)
#else
Msg( "Error: Constant not found: WA_ALTCHARSET\n");
cnt++;
#endif

#ifdef WA_INVIS
	CompareConstant(WA_INVIS,A_INVIS)
#else
Msg( "Error: Constant not found: WA_INVIS\n");
cnt++;
#endif

#ifdef WA_PROTECT
	CompareConstant(WA_PROTECT,A_PROTECT)
#else
Msg( "Error: Constant not found: WA_PROTECT\n");
cnt++;
#endif

#ifdef WA_HORIZONTAL
	CompareConstant(WA_HORIZONTAL,A_HORIZONTAL)
#else
Msg( "Error: Constant not found: WA_HORIZONTAL\n");
cnt++;
#endif

#ifdef WA_LEFT
	CompareConstant(WA_LEFT,A_LEFT)
#else
Msg( "Error: Constant not found: WA_LEFT\n");
cnt++;
#endif

#ifdef WA_LOW
	CompareConstant(WA_LOW,A_LOW)
#else
Msg( "Error: Constant not found: WA_LOW\n");
cnt++;
#endif

#ifdef WA_RIGHT
	CompareConstant(WA_RIGHT,A_RIGHT)
#else
Msg( "Error: Constant not found: WA_RIGHT\n");
cnt++;
#endif

#ifdef WA_TOP
	CompareConstant(WA_TOP,A_TOP)
#else
Msg( "Error: Constant not found: WA_TOP\n");
cnt++;
#endif

#ifdef WA_VERTICAL
	CompareConstant(WA_VERTICAL,A_VERTICAL)
#else
Msg( "Error: Constant not found: WA_VERTICAL\n");
cnt++;
#endif

#ifdef COLOR_BLACK
	CompareConstant(COLOR_BLACK,0)
#else
Msg( "Error: Constant not found: COLOR_BLACK\n");
cnt++;
#endif

#ifdef COLOR_RED
	CompareConstant(COLOR_RED,1)
#else
Msg( "Error: Constant not found: COLOR_RED\n");
cnt++;
#endif

#ifdef COLOR_GREEN
	CompareConstant(COLOR_GREEN,2)
#else
Msg( "Error: Constant not found: COLOR_GREEN\n");
cnt++;
#endif

#ifdef COLOR_YELLOW
	CompareConstant(COLOR_YELLOW,3)
#else
Msg( "Error: Constant not found: COLOR_YELLOW\n");
cnt++;
#endif

#ifdef COLOR_BLUE
	CompareConstant(COLOR_BLUE,4)
#else
Msg( "Error: Constant not found: COLOR_BLUE\n");
cnt++;
#endif

#ifdef COLOR_MAGENTA
	CompareConstant(COLOR_MAGENTA,5)
#else
Msg( "Error: Constant not found: COLOR_MAGENTA\n");
cnt++;
#endif

#ifdef COLOR_CYAN
	CompareConstant(COLOR_CYAN,6)
#else
Msg( "Error: Constant not found: COLOR_CYAN\n");
cnt++;
#endif

#ifdef COLOR_WHITE
	CompareConstant(COLOR_WHITE,7)
#else
Msg( "Error: Constant not found: COLOR_WHITE\n");
cnt++;
#endif

#ifdef _SUBWIN
	CompareConstant(_SUBWIN,0x01)
#else
Msg( "Error: Constant not found: _SUBWIN\n");
cnt++;
#endif

#ifdef _ENDLINE
	CompareConstant(_ENDLINE,0x02)
#else
Msg( "Error: Constant not found: _ENDLINE\n");
cnt++;
#endif

#ifdef _FULLWIN
	CompareConstant(_FULLWIN,0x04)
#else
Msg( "Error: Constant not found: _FULLWIN\n");
cnt++;
#endif

#ifdef _ISPAD
	CompareConstant(_ISPAD,0x10)
#else
Msg( "Error: Constant not found: _ISPAD\n");
cnt++;
#endif

#ifdef _HASMOVED
	CompareConstant(_HASMOVED,0x20)
#else
Msg( "Error: Constant not found: _HASMOVED\n");
cnt++;
#endif

#ifdef TRACE_MAXIMUM
	CompareConstant(TRACE_MAXIMUM,0xffff)
#else
Msg( "Error: Constant not found: TRACE_MAXIMUM\n");
cnt++;
#endif

#ifdef KEY_CODE_YES
	CompareConstant(KEY_CODE_YES,0400)
#else
Msg( "Error: Constant not found: KEY_CODE_YES\n");
cnt++;
#endif

#ifdef KEY_MIN
	CompareConstant(KEY_MIN,0401)
#else
Msg( "Error: Constant not found: KEY_MIN\n");
cnt++;
#endif

#ifdef KEY_BREAK
	CompareConstant(KEY_BREAK,0401)
#else
Msg( "Error: Constant not found: KEY_BREAK\n");
cnt++;
#endif

#ifdef KEY_DOWN
	CompareConstant(KEY_DOWN,0402)
#else
Msg( "Error: Constant not found: KEY_DOWN\n");
cnt++;
#endif

#ifdef KEY_UP
	CompareConstant(KEY_UP,0403)
#else
Msg( "Error: Constant not found: KEY_UP\n");
cnt++;
#endif

#ifdef KEY_LEFT
	CompareConstant(KEY_LEFT,0404)
#else
Msg( "Error: Constant not found: KEY_LEFT\n");
cnt++;
#endif

#ifdef KEY_RIGHT
	CompareConstant(KEY_RIGHT,0405)
#else
Msg( "Error: Constant not found: KEY_RIGHT\n");
cnt++;
#endif

#ifdef KEY_HOME
	CompareConstant(KEY_HOME,0406)
#else
Msg( "Error: Constant not found: KEY_HOME\n");
cnt++;
#endif

#ifdef KEY_BACKSPACE
	CompareConstant(KEY_BACKSPACE,0407)
#else
Msg( "Error: Constant not found: KEY_BACKSPACE\n");
cnt++;
#endif

#ifdef KEY_F0
	CompareConstant(KEY_F0,0410)
#else
Msg( "Error: Constant not found: KEY_F0\n");
cnt++;
#endif

#ifdef KEY_DL
	CompareConstant(KEY_DL,0510)
#else
Msg( "Error: Constant not found: KEY_DL\n");
cnt++;
#endif

#ifdef KEY_IL
	CompareConstant(KEY_IL,0511)
#else
Msg( "Error: Constant not found: KEY_IL\n");
cnt++;
#endif

#ifdef KEY_DC
	CompareConstant(KEY_DC,0512)
#else
Msg( "Error: Constant not found: KEY_DC\n");
cnt++;
#endif

#ifdef KEY_IC
	CompareConstant(KEY_IC,0513)
#else
Msg( "Error: Constant not found: KEY_IC\n");
cnt++;
#endif

#ifdef KEY_EIC
	CompareConstant(KEY_EIC,0514)
#else
Msg( "Error: Constant not found: KEY_EIC\n");
cnt++;
#endif

#ifdef KEY_CLEAR
	CompareConstant(KEY_CLEAR,0515)
#else
Msg( "Error: Constant not found: KEY_CLEAR\n");
cnt++;
#endif

#ifdef KEY_EOS
	CompareConstant(KEY_EOS,0516)
#else
Msg( "Error: Constant not found: KEY_EOS\n");
cnt++;
#endif

#ifdef KEY_EOL
	CompareConstant(KEY_EOL,0517)
#else
Msg( "Error: Constant not found: KEY_EOL\n");
cnt++;
#endif

#ifdef KEY_SF
	CompareConstant(KEY_SF,0520)
#else
Msg( "Error: Constant not found: KEY_SF\n");
cnt++;
#endif

#ifdef KEY_SR
	CompareConstant(KEY_SR,0521)
#else
Msg( "Error: Constant not found: KEY_SR\n");
cnt++;
#endif

#ifdef KEY_NPAGE
	CompareConstant(KEY_NPAGE,0522)
#else
Msg( "Error: Constant not found: KEY_NPAGE\n");
cnt++;
#endif

#ifdef KEY_PPAGE
	CompareConstant(KEY_PPAGE,0523)
#else
Msg( "Error: Constant not found: KEY_PPAGE\n");
cnt++;
#endif

#ifdef KEY_STAB
	CompareConstant(KEY_STAB,0524)
#else
Msg( "Error: Constant not found: KEY_STAB\n");
cnt++;
#endif

#ifdef KEY_CTAB
	CompareConstant(KEY_CTAB,0525)
#else
Msg( "Error: Constant not found: KEY_CTAB\n");
cnt++;
#endif

#ifdef KEY_CATAB
	CompareConstant(KEY_CATAB,0526)
#else
Msg( "Error: Constant not found: KEY_CATAB\n");
cnt++;
#endif

#ifdef KEY_ENTER
	CompareConstant(KEY_ENTER,0527)
#else
Msg( "Error: Constant not found: KEY_ENTER\n");
cnt++;
#endif

#ifdef KEY_SRESET
	CompareConstant(KEY_SRESET,0530)
#else
Msg( "Error: Constant not found: KEY_SRESET\n");
cnt++;
#endif

#ifdef KEY_RESET
	CompareConstant(KEY_RESET,0531)
#else
Msg( "Error: Constant not found: KEY_RESET\n");
cnt++;
#endif

#ifdef KEY_PRINT
	CompareConstant(KEY_PRINT,0532)
#else
Msg( "Error: Constant not found: KEY_PRINT\n");
cnt++;
#endif

#ifdef KEY_LL
	CompareConstant(KEY_LL,0533)
#else
Msg( "Error: Constant not found: KEY_LL\n");
cnt++;
#endif

#ifdef KEY_A1
	CompareConstant(KEY_A1,0534)
#else
Msg( "Error: Constant not found: KEY_A1\n");
cnt++;
#endif

#ifdef KEY_A3
	CompareConstant(KEY_A3,0535)
#else
Msg( "Error: Constant not found: KEY_A3\n");
cnt++;
#endif

#ifdef KEY_B2
	CompareConstant(KEY_B2,0536)
#else
Msg( "Error: Constant not found: KEY_B2\n");
cnt++;
#endif

#ifdef KEY_C1
	CompareConstant(KEY_C1,0537)
#else
Msg( "Error: Constant not found: KEY_C1\n");
cnt++;
#endif

#ifdef KEY_C3
	CompareConstant(KEY_C3,0540)
#else
Msg( "Error: Constant not found: KEY_C3\n");
cnt++;
#endif

#ifdef KEY_BTAB
	CompareConstant(KEY_BTAB,0541)
#else
Msg( "Error: Constant not found: KEY_BTAB\n");
cnt++;
#endif

#ifdef KEY_BEG
	CompareConstant(KEY_BEG,0542)
#else
Msg( "Error: Constant not found: KEY_BEG\n");
cnt++;
#endif

#ifdef KEY_CANCEL
	CompareConstant(KEY_CANCEL,0543)
#else
Msg( "Error: Constant not found: KEY_CANCEL\n");
cnt++;
#endif

#ifdef KEY_CLOSE
	CompareConstant(KEY_CLOSE,0544)
#else
Msg( "Error: Constant not found: KEY_CLOSE\n");
cnt++;
#endif

#ifdef KEY_COMMAND
	CompareConstant(KEY_COMMAND,0545)
#else
Msg( "Error: Constant not found: KEY_COMMAND\n");
cnt++;
#endif

#ifdef KEY_COPY
	CompareConstant(KEY_COPY,0546)
#else
Msg( "Error: Constant not found: KEY_COPY\n");
cnt++;
#endif

#ifdef KEY_CREATE
	CompareConstant(KEY_CREATE,0547)
#else
Msg( "Error: Constant not found: KEY_CREATE\n");
cnt++;
#endif

#ifdef KEY_END
	CompareConstant(KEY_END,0550)
#else
Msg( "Error: Constant not found: KEY_END\n");
cnt++;
#endif

#ifdef KEY_EXIT
	CompareConstant(KEY_EXIT,0551)
#else
Msg( "Error: Constant not found: KEY_EXIT\n");
cnt++;
#endif

#ifdef KEY_FIND
	CompareConstant(KEY_FIND,0552)
#else
Msg( "Error: Constant not found: KEY_FIND\n");
cnt++;
#endif

#ifdef KEY_HELP
	CompareConstant(KEY_HELP,0553)
#else
Msg( "Error: Constant not found: KEY_HELP\n");
cnt++;
#endif

#ifdef KEY_MARK
	CompareConstant(KEY_MARK,0554)
#else
Msg( "Error: Constant not found: KEY_MARK\n");
cnt++;
#endif

#ifdef KEY_MESSAGE
	CompareConstant(KEY_MESSAGE,0555)
#else
Msg( "Error: Constant not found: KEY_MESSAGE\n");
cnt++;
#endif

#ifdef KEY_MOVE
	CompareConstant(KEY_MOVE,0556)
#else
Msg( "Error: Constant not found: KEY_MOVE\n");
cnt++;
#endif

#ifdef KEY_NEXT
	CompareConstant(KEY_NEXT,0557)
#else
Msg( "Error: Constant not found: KEY_NEXT\n");
cnt++;
#endif

#ifdef KEY_OPEN
	CompareConstant(KEY_OPEN,0560)
#else
Msg( "Error: Constant not found: KEY_OPEN\n");
cnt++;
#endif

#ifdef KEY_OPTIONS
	CompareConstant(KEY_OPTIONS,0561)
#else
Msg( "Error: Constant not found: KEY_OPTIONS\n");
cnt++;
#endif

#ifdef KEY_PREVIOUS
	CompareConstant(KEY_PREVIOUS,0562)
#else
Msg( "Error: Constant not found: KEY_PREVIOUS\n");
cnt++;
#endif

#ifdef KEY_REDO
	CompareConstant(KEY_REDO,0563)
#else
Msg( "Error: Constant not found: KEY_REDO\n");
cnt++;
#endif

#ifdef KEY_REFERENCE
	CompareConstant(KEY_REFERENCE,0564)
#else
Msg( "Error: Constant not found: KEY_REFERENCE\n");
cnt++;
#endif

#ifdef KEY_REFRESH
	CompareConstant(KEY_REFRESH,0565)
#else
Msg( "Error: Constant not found: KEY_REFRESH\n");
cnt++;
#endif

#ifdef KEY_REPLACE
	CompareConstant(KEY_REPLACE,0566)
#else
Msg( "Error: Constant not found: KEY_REPLACE\n");
cnt++;
#endif

#ifdef KEY_RESTART
	CompareConstant(KEY_RESTART,0567)
#else
Msg( "Error: Constant not found: KEY_RESTART\n");
cnt++;
#endif

#ifdef KEY_RESUME
	CompareConstant(KEY_RESUME,0570)
#else
Msg( "Error: Constant not found: KEY_RESUME\n");
cnt++;
#endif

#ifdef KEY_SAVE
	CompareConstant(KEY_SAVE,0571)
#else
Msg( "Error: Constant not found: KEY_SAVE\n");
cnt++;
#endif

#ifdef KEY_SBEG
	CompareConstant(KEY_SBEG,0572)
#else
Msg( "Error: Constant not found: KEY_SBEG\n");
cnt++;
#endif

#ifdef KEY_SCANCEL
	CompareConstant(KEY_SCANCEL,0573)
#else
Msg( "Error: Constant not found: KEY_SCANCEL\n");
cnt++;
#endif

#ifdef KEY_SCOMMAND
	CompareConstant(KEY_SCOMMAND,0574)
#else
Msg( "Error: Constant not found: KEY_SCOMMAND\n");
cnt++;
#endif

#ifdef KEY_SCOPY
	CompareConstant(KEY_SCOPY,0575)
#else
Msg( "Error: Constant not found: KEY_SCOPY\n");
cnt++;
#endif

#ifdef KEY_SCREATE
	CompareConstant(KEY_SCREATE,0576)
#else
Msg( "Error: Constant not found: KEY_SCREATE\n");
cnt++;
#endif

#ifdef KEY_SDC
	CompareConstant(KEY_SDC,0577)
#else
Msg( "Error: Constant not found: KEY_SDC\n");
cnt++;
#endif

#ifdef KEY_SDL
	CompareConstant(KEY_SDL,0600)
#else
Msg( "Error: Constant not found: KEY_SDL\n");
cnt++;
#endif

#ifdef KEY_SELECT
	CompareConstant(KEY_SELECT,0601)
#else
Msg( "Error: Constant not found: KEY_SELECT\n");
cnt++;
#endif

#ifdef KEY_SEND
	CompareConstant(KEY_SEND,0602)
#else
Msg( "Error: Constant not found: KEY_SEND\n");
cnt++;
#endif

#ifdef KEY_SEOL
	CompareConstant(KEY_SEOL,0603)
#else
Msg( "Error: Constant not found: KEY_SEOL\n");
cnt++;
#endif

#ifdef KEY_SEXIT
	CompareConstant(KEY_SEXIT,0604)
#else
Msg( "Error: Constant not found: KEY_SEXIT\n");
cnt++;
#endif

#ifdef KEY_SFIND
	CompareConstant(KEY_SFIND,0605)
#else
Msg( "Error: Constant not found: KEY_SFIND\n");
cnt++;
#endif

#ifdef KEY_SHELP
	CompareConstant(KEY_SHELP,0606)
#else
Msg( "Error: Constant not found: KEY_SHELP\n");
cnt++;
#endif

#ifdef KEY_SHOME
	CompareConstant(KEY_SHOME,0607)
#else
Msg( "Error: Constant not found: KEY_SHOME\n");
cnt++;
#endif

#ifdef KEY_SIC
	CompareConstant(KEY_SIC,0610)
#else
Msg( "Error: Constant not found: KEY_SIC\n");
cnt++;
#endif

#ifdef KEY_SLEFT
	CompareConstant(KEY_SLEFT,0611)
#else
Msg( "Error: Constant not found: KEY_SLEFT\n");
cnt++;
#endif

#ifdef KEY_SMESSAGE
	CompareConstant(KEY_SMESSAGE,0612)
#else
Msg( "Error: Constant not found: KEY_SMESSAGE\n");
cnt++;
#endif

#ifdef KEY_SMOVE
	CompareConstant(KEY_SMOVE,0613)
#else
Msg( "Error: Constant not found: KEY_SMOVE\n");
cnt++;
#endif

#ifdef KEY_SNEXT
	CompareConstant(KEY_SNEXT,0614)
#else
Msg( "Error: Constant not found: KEY_SNEXT\n");
cnt++;
#endif

#ifdef KEY_SOPTIONS
	CompareConstant(KEY_SOPTIONS,0615)
#else
Msg( "Error: Constant not found: KEY_SOPTIONS\n");
cnt++;
#endif

#ifdef KEY_SPREVIOUS
	CompareConstant(KEY_SPREVIOUS,0616)
#else
Msg( "Error: Constant not found: KEY_SPREVIOUS\n");
cnt++;
#endif

#ifdef KEY_SPRINT
	CompareConstant(KEY_SPRINT,0617)
#else
Msg( "Error: Constant not found: KEY_SPRINT\n");
cnt++;
#endif

#ifdef KEY_SREDO
	CompareConstant(KEY_SREDO,0620)
#else
Msg( "Error: Constant not found: KEY_SREDO\n");
cnt++;
#endif

#ifdef KEY_SREPLACE
	CompareConstant(KEY_SREPLACE,0621)
#else
Msg( "Error: Constant not found: KEY_SREPLACE\n");
cnt++;
#endif

#ifdef KEY_SRIGHT
	CompareConstant(KEY_SRIGHT,0622)
#else
Msg( "Error: Constant not found: KEY_SRIGHT\n");
cnt++;
#endif

#ifdef KEY_SRSUME
	CompareConstant(KEY_SRSUME,0623)
#else
Msg( "Error: Constant not found: KEY_SRSUME\n");
cnt++;
#endif

#ifdef KEY_SSAVE
	CompareConstant(KEY_SSAVE,0624)
#else
Msg( "Error: Constant not found: KEY_SSAVE\n");
cnt++;
#endif

#ifdef KEY_SSUSPEND
	CompareConstant(KEY_SSUSPEND,0625)
#else
Msg( "Error: Constant not found: KEY_SSUSPEND\n");
cnt++;
#endif

#ifdef KEY_SUNDO
	CompareConstant(KEY_SUNDO,0626)
#else
Msg( "Error: Constant not found: KEY_SUNDO\n");
cnt++;
#endif

#ifdef KEY_SUSPEND
	CompareConstant(KEY_SUSPEND,0627)
#else
Msg( "Error: Constant not found: KEY_SUSPEND\n");
cnt++;
#endif

#ifdef KEY_UNDO
	CompareConstant(KEY_UNDO,0630)
#else
Msg( "Error: Constant not found: KEY_UNDO\n");
cnt++;
#endif

#ifdef KEY_MOUSE
	CompareConstant(KEY_MOUSE,0631)
#else
Msg( "Error: Constant not found: KEY_MOUSE\n");
cnt++;
#endif

#ifdef KEY_RESIZE
	CompareConstant(KEY_RESIZE,0632)
#else
Msg( "Error: Constant not found: KEY_RESIZE\n");
cnt++;
#endif

#ifdef KEY_MAX
	CompareConstant(KEY_MAX,0777)
#else
Msg( "Error: Constant not found: KEY_MAX\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(chtype,4, 8650, 2)
#elif __ia64__
CheckTypeSize(chtype,8, 8650, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8650,0);
#endif

#ifdef __i386__
CheckTypeSize(bool,1, 8651, 2)
#elif __ia64__
CheckTypeSize(bool,4, 8651, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8651,0);
#endif

#ifdef __i386__
CheckTypeSize(SCREEN,0, 8653, 2)
#elif __ia64__
CheckTypeSize(SCREEN,0, 8653, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8653,0);
#endif

#ifdef __i386__
CheckTypeSize(WINDOW,100, 8655, 2)
#elif __ia64__
CheckTypeSize(WINDOW,152, 8655, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8655,0);
#endif

#ifdef __i386__
CheckTypeSize(attr_t,4, 8656, 2)
#elif __ia64__
CheckTypeSize(attr_t,8, 8656, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8656,0);
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
