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
Msg( "Warning: Constant not found: WA_ATTRIBUTES\n");
#endif

#ifdef WA_NORMAL
	CompareConstant(WA_NORMAL,A_NORMAL)
#else
Msg( "Warning: Constant not found: WA_NORMAL\n");
#endif

#ifdef WA_STANDOUT
	CompareConstant(WA_STANDOUT,A_STANDOUT)
#else
Msg( "Warning: Constant not found: WA_STANDOUT\n");
#endif

#ifdef WA_UNDERLINE
	CompareConstant(WA_UNDERLINE,A_UNDERLINE)
#else
Msg( "Warning: Constant not found: WA_UNDERLINE\n");
#endif

#ifdef WA_REVERSE
	CompareConstant(WA_REVERSE,A_REVERSE)
#else
Msg( "Warning: Constant not found: WA_REVERSE\n");
#endif

#ifdef WA_BLINK
	CompareConstant(WA_BLINK,A_BLINK)
#else
Msg( "Warning: Constant not found: WA_BLINK\n");
#endif

#ifdef WA_DIM
	CompareConstant(WA_DIM,A_DIM)
#else
Msg( "Warning: Constant not found: WA_DIM\n");
#endif

#ifdef WA_BOLD
	CompareConstant(WA_BOLD,A_BOLD)
#else
Msg( "Warning: Constant not found: WA_BOLD\n");
#endif

#ifdef WA_ALTCHARSET
	CompareConstant(WA_ALTCHARSET,A_ALTCHARSET)
#else
Msg( "Warning: Constant not found: WA_ALTCHARSET\n");
#endif

#ifdef WA_INVIS
	CompareConstant(WA_INVIS,A_INVIS)
#else
Msg( "Warning: Constant not found: WA_INVIS\n");
#endif

#ifdef WA_PROTECT
	CompareConstant(WA_PROTECT,A_PROTECT)
#else
Msg( "Warning: Constant not found: WA_PROTECT\n");
#endif

#ifdef WA_HORIZONTAL
	CompareConstant(WA_HORIZONTAL,A_HORIZONTAL)
#else
Msg( "Warning: Constant not found: WA_HORIZONTAL\n");
#endif

#ifdef WA_LEFT
	CompareConstant(WA_LEFT,A_LEFT)
#else
Msg( "Warning: Constant not found: WA_LEFT\n");
#endif

#ifdef WA_LOW
	CompareConstant(WA_LOW,A_LOW)
#else
Msg( "Warning: Constant not found: WA_LOW\n");
#endif

#ifdef WA_RIGHT
	CompareConstant(WA_RIGHT,A_RIGHT)
#else
Msg( "Warning: Constant not found: WA_RIGHT\n");
#endif

#ifdef WA_TOP
	CompareConstant(WA_TOP,A_TOP)
#else
Msg( "Warning: Constant not found: WA_TOP\n");
#endif

#ifdef WA_VERTICAL
	CompareConstant(WA_VERTICAL,A_VERTICAL)
#else
Msg( "Warning: Constant not found: WA_VERTICAL\n");
#endif

#ifdef COLOR_BLACK
	CompareConstant(COLOR_BLACK,0)
#else
Msg( "Warning: Constant not found: COLOR_BLACK\n");
#endif

#ifdef COLOR_RED
	CompareConstant(COLOR_RED,1)
#else
Msg( "Warning: Constant not found: COLOR_RED\n");
#endif

#ifdef COLOR_GREEN
	CompareConstant(COLOR_GREEN,2)
#else
Msg( "Warning: Constant not found: COLOR_GREEN\n");
#endif

#ifdef COLOR_YELLOW
	CompareConstant(COLOR_YELLOW,3)
#else
Msg( "Warning: Constant not found: COLOR_YELLOW\n");
#endif

#ifdef COLOR_BLUE
	CompareConstant(COLOR_BLUE,4)
#else
Msg( "Warning: Constant not found: COLOR_BLUE\n");
#endif

#ifdef COLOR_MAGENTA
	CompareConstant(COLOR_MAGENTA,5)
#else
Msg( "Warning: Constant not found: COLOR_MAGENTA\n");
#endif

#ifdef COLOR_CYAN
	CompareConstant(COLOR_CYAN,6)
#else
Msg( "Warning: Constant not found: COLOR_CYAN\n");
#endif

#ifdef COLOR_WHITE
	CompareConstant(COLOR_WHITE,7)
#else
Msg( "Warning: Constant not found: COLOR_WHITE\n");
#endif

#ifdef _SUBWIN
	CompareConstant(_SUBWIN,0x01)
#else
Msg( "Warning: Constant not found: _SUBWIN\n");
#endif

#ifdef _ENDLINE
	CompareConstant(_ENDLINE,0x02)
#else
Msg( "Warning: Constant not found: _ENDLINE\n");
#endif

#ifdef _FULLWIN
	CompareConstant(_FULLWIN,0x04)
#else
Msg( "Warning: Constant not found: _FULLWIN\n");
#endif

#ifdef _SCROLLWIN
	CompareConstant(_SCROLLWIN,0x08)
#else
Msg( "Warning: Constant not found: _SCROLLWIN\n");
#endif

#ifdef _ISPAD
	CompareConstant(_ISPAD,0x10)
#else
Msg( "Warning: Constant not found: _ISPAD\n");
#endif

#ifdef _HASMOVED
	CompareConstant(_HASMOVED,0x20)
#else
Msg( "Warning: Constant not found: _HASMOVED\n");
#endif

#ifdef TRACE_MAXIMUM
	CompareConstant(TRACE_MAXIMUM,0xffff)
#else
Msg( "Warning: Constant not found: TRACE_MAXIMUM\n");
#endif

#ifdef KEY_CODE_YES
	CompareConstant(KEY_CODE_YES,0400)
#else
Msg( "Warning: Constant not found: KEY_CODE_YES\n");
#endif

#ifdef KEY_MIN
	CompareConstant(KEY_MIN,0401)
#else
Msg( "Warning: Constant not found: KEY_MIN\n");
#endif

#ifdef KEY_BREAK
	CompareConstant(KEY_BREAK,0401)
#else
Msg( "Warning: Constant not found: KEY_BREAK\n");
#endif

#ifdef KEY_DOWN
	CompareConstant(KEY_DOWN,0402)
#else
Msg( "Warning: Constant not found: KEY_DOWN\n");
#endif

#ifdef KEY_UP
	CompareConstant(KEY_UP,0403)
#else
Msg( "Warning: Constant not found: KEY_UP\n");
#endif

#ifdef KEY_LEFT
	CompareConstant(KEY_LEFT,0404)
#else
Msg( "Warning: Constant not found: KEY_LEFT\n");
#endif

#ifdef KEY_RIGHT
	CompareConstant(KEY_RIGHT,0405)
#else
Msg( "Warning: Constant not found: KEY_RIGHT\n");
#endif

#ifdef KEY_HOME
	CompareConstant(KEY_HOME,0406)
#else
Msg( "Warning: Constant not found: KEY_HOME\n");
#endif

#ifdef KEY_BACKSPACE
	CompareConstant(KEY_BACKSPACE,0407)
#else
Msg( "Warning: Constant not found: KEY_BACKSPACE\n");
#endif

#ifdef KEY_F0
	CompareConstant(KEY_F0,0410)
#else
Msg( "Warning: Constant not found: KEY_F0\n");
#endif

#ifdef KEY_DL
	CompareConstant(KEY_DL,0510)
#else
Msg( "Warning: Constant not found: KEY_DL\n");
#endif

#ifdef KEY_IL
	CompareConstant(KEY_IL,0511)
#else
Msg( "Warning: Constant not found: KEY_IL\n");
#endif

#ifdef KEY_DC
	CompareConstant(KEY_DC,0512)
#else
Msg( "Warning: Constant not found: KEY_DC\n");
#endif

#ifdef KEY_IC
	CompareConstant(KEY_IC,0513)
#else
Msg( "Warning: Constant not found: KEY_IC\n");
#endif

#ifdef KEY_EIC
	CompareConstant(KEY_EIC,0514)
#else
Msg( "Warning: Constant not found: KEY_EIC\n");
#endif

#ifdef KEY_CLEAR
	CompareConstant(KEY_CLEAR,0515)
#else
Msg( "Warning: Constant not found: KEY_CLEAR\n");
#endif

#ifdef KEY_EOS
	CompareConstant(KEY_EOS,0516)
#else
Msg( "Warning: Constant not found: KEY_EOS\n");
#endif

#ifdef KEY_EOL
	CompareConstant(KEY_EOL,0517)
#else
Msg( "Warning: Constant not found: KEY_EOL\n");
#endif

#ifdef KEY_SF
	CompareConstant(KEY_SF,0520)
#else
Msg( "Warning: Constant not found: KEY_SF\n");
#endif

#ifdef KEY_SR
	CompareConstant(KEY_SR,0521)
#else
Msg( "Warning: Constant not found: KEY_SR\n");
#endif

#ifdef KEY_NPAGE
	CompareConstant(KEY_NPAGE,0522)
#else
Msg( "Warning: Constant not found: KEY_NPAGE\n");
#endif

#ifdef KEY_PPAGE
	CompareConstant(KEY_PPAGE,0523)
#else
Msg( "Warning: Constant not found: KEY_PPAGE\n");
#endif

#ifdef KEY_STAB
	CompareConstant(KEY_STAB,0524)
#else
Msg( "Warning: Constant not found: KEY_STAB\n");
#endif

#ifdef KEY_CTAB
	CompareConstant(KEY_CTAB,0525)
#else
Msg( "Warning: Constant not found: KEY_CTAB\n");
#endif

#ifdef KEY_CATAB
	CompareConstant(KEY_CATAB,0526)
#else
Msg( "Warning: Constant not found: KEY_CATAB\n");
#endif

#ifdef KEY_ENTER
	CompareConstant(KEY_ENTER,0527)
#else
Msg( "Warning: Constant not found: KEY_ENTER\n");
#endif

#ifdef KEY_SRESET
	CompareConstant(KEY_SRESET,0530)
#else
Msg( "Warning: Constant not found: KEY_SRESET\n");
#endif

#ifdef KEY_RESET
	CompareConstant(KEY_RESET,0531)
#else
Msg( "Warning: Constant not found: KEY_RESET\n");
#endif

#ifdef KEY_PRINT
	CompareConstant(KEY_PRINT,0532)
#else
Msg( "Warning: Constant not found: KEY_PRINT\n");
#endif

#ifdef KEY_LL
	CompareConstant(KEY_LL,0533)
#else
Msg( "Warning: Constant not found: KEY_LL\n");
#endif

#ifdef KEY_A1
	CompareConstant(KEY_A1,0534)
#else
Msg( "Warning: Constant not found: KEY_A1\n");
#endif

#ifdef KEY_A3
	CompareConstant(KEY_A3,0535)
#else
Msg( "Warning: Constant not found: KEY_A3\n");
#endif

#ifdef KEY_B2
	CompareConstant(KEY_B2,0536)
#else
Msg( "Warning: Constant not found: KEY_B2\n");
#endif

#ifdef KEY_C1
	CompareConstant(KEY_C1,0537)
#else
Msg( "Warning: Constant not found: KEY_C1\n");
#endif

#ifdef KEY_C3
	CompareConstant(KEY_C3,0540)
#else
Msg( "Warning: Constant not found: KEY_C3\n");
#endif

#ifdef KEY_BTAB
	CompareConstant(KEY_BTAB,0541)
#else
Msg( "Warning: Constant not found: KEY_BTAB\n");
#endif

#ifdef KEY_BEG
	CompareConstant(KEY_BEG,0542)
#else
Msg( "Warning: Constant not found: KEY_BEG\n");
#endif

#ifdef KEY_CANCEL
	CompareConstant(KEY_CANCEL,0543)
#else
Msg( "Warning: Constant not found: KEY_CANCEL\n");
#endif

#ifdef KEY_CLOSE
	CompareConstant(KEY_CLOSE,0544)
#else
Msg( "Warning: Constant not found: KEY_CLOSE\n");
#endif

#ifdef KEY_COMMAND
	CompareConstant(KEY_COMMAND,0545)
#else
Msg( "Warning: Constant not found: KEY_COMMAND\n");
#endif

#ifdef KEY_COPY
	CompareConstant(KEY_COPY,0546)
#else
Msg( "Warning: Constant not found: KEY_COPY\n");
#endif

#ifdef KEY_CREATE
	CompareConstant(KEY_CREATE,0547)
#else
Msg( "Warning: Constant not found: KEY_CREATE\n");
#endif

#ifdef KEY_END
	CompareConstant(KEY_END,0550)
#else
Msg( "Warning: Constant not found: KEY_END\n");
#endif

#ifdef KEY_EXIT
	CompareConstant(KEY_EXIT,0551)
#else
Msg( "Warning: Constant not found: KEY_EXIT\n");
#endif

#ifdef KEY_FIND
	CompareConstant(KEY_FIND,0552)
#else
Msg( "Warning: Constant not found: KEY_FIND\n");
#endif

#ifdef KEY_HELP
	CompareConstant(KEY_HELP,0553)
#else
Msg( "Warning: Constant not found: KEY_HELP\n");
#endif

#ifdef KEY_MARK
	CompareConstant(KEY_MARK,0554)
#else
Msg( "Warning: Constant not found: KEY_MARK\n");
#endif

#ifdef KEY_MESSAGE
	CompareConstant(KEY_MESSAGE,0555)
#else
Msg( "Warning: Constant not found: KEY_MESSAGE\n");
#endif

#ifdef KEY_MOVE
	CompareConstant(KEY_MOVE,0556)
#else
Msg( "Warning: Constant not found: KEY_MOVE\n");
#endif

#ifdef KEY_NEXT
	CompareConstant(KEY_NEXT,0557)
#else
Msg( "Warning: Constant not found: KEY_NEXT\n");
#endif

#ifdef KEY_OPEN
	CompareConstant(KEY_OPEN,0560)
#else
Msg( "Warning: Constant not found: KEY_OPEN\n");
#endif

#ifdef KEY_OPTIONS
	CompareConstant(KEY_OPTIONS,0561)
#else
Msg( "Warning: Constant not found: KEY_OPTIONS\n");
#endif

#ifdef KEY_PREVIOUS
	CompareConstant(KEY_PREVIOUS,0562)
#else
Msg( "Warning: Constant not found: KEY_PREVIOUS\n");
#endif

#ifdef KEY_REDO
	CompareConstant(KEY_REDO,0563)
#else
Msg( "Warning: Constant not found: KEY_REDO\n");
#endif

#ifdef KEY_REFERENCE
	CompareConstant(KEY_REFERENCE,0564)
#else
Msg( "Warning: Constant not found: KEY_REFERENCE\n");
#endif

#ifdef KEY_REFRESH
	CompareConstant(KEY_REFRESH,0565)
#else
Msg( "Warning: Constant not found: KEY_REFRESH\n");
#endif

#ifdef KEY_REPLACE
	CompareConstant(KEY_REPLACE,0566)
#else
Msg( "Warning: Constant not found: KEY_REPLACE\n");
#endif

#ifdef KEY_RESTART
	CompareConstant(KEY_RESTART,0567)
#else
Msg( "Warning: Constant not found: KEY_RESTART\n");
#endif

#ifdef KEY_RESUME
	CompareConstant(KEY_RESUME,0570)
#else
Msg( "Warning: Constant not found: KEY_RESUME\n");
#endif

#ifdef KEY_SAVE
	CompareConstant(KEY_SAVE,0571)
#else
Msg( "Warning: Constant not found: KEY_SAVE\n");
#endif

#ifdef KEY_SBEG
	CompareConstant(KEY_SBEG,0572)
#else
Msg( "Warning: Constant not found: KEY_SBEG\n");
#endif

#ifdef KEY_SCANCEL
	CompareConstant(KEY_SCANCEL,0573)
#else
Msg( "Warning: Constant not found: KEY_SCANCEL\n");
#endif

#ifdef KEY_SCOMMAND
	CompareConstant(KEY_SCOMMAND,0574)
#else
Msg( "Warning: Constant not found: KEY_SCOMMAND\n");
#endif

#ifdef KEY_SCOPY
	CompareConstant(KEY_SCOPY,0575)
#else
Msg( "Warning: Constant not found: KEY_SCOPY\n");
#endif

#ifdef KEY_SCREATE
	CompareConstant(KEY_SCREATE,0576)
#else
Msg( "Warning: Constant not found: KEY_SCREATE\n");
#endif

#ifdef KEY_SDC
	CompareConstant(KEY_SDC,0577)
#else
Msg( "Warning: Constant not found: KEY_SDC\n");
#endif

#ifdef KEY_SDL
	CompareConstant(KEY_SDL,0600)
#else
Msg( "Warning: Constant not found: KEY_SDL\n");
#endif

#ifdef KEY_SELECT
	CompareConstant(KEY_SELECT,0601)
#else
Msg( "Warning: Constant not found: KEY_SELECT\n");
#endif

#ifdef KEY_SEND
	CompareConstant(KEY_SEND,0602)
#else
Msg( "Warning: Constant not found: KEY_SEND\n");
#endif

#ifdef KEY_SEOL
	CompareConstant(KEY_SEOL,0603)
#else
Msg( "Warning: Constant not found: KEY_SEOL\n");
#endif

#ifdef KEY_SEXIT
	CompareConstant(KEY_SEXIT,0604)
#else
Msg( "Warning: Constant not found: KEY_SEXIT\n");
#endif

#ifdef KEY_SFIND
	CompareConstant(KEY_SFIND,0605)
#else
Msg( "Warning: Constant not found: KEY_SFIND\n");
#endif

#ifdef KEY_SHELP
	CompareConstant(KEY_SHELP,0606)
#else
Msg( "Warning: Constant not found: KEY_SHELP\n");
#endif

#ifdef KEY_SHOME
	CompareConstant(KEY_SHOME,0607)
#else
Msg( "Warning: Constant not found: KEY_SHOME\n");
#endif

#ifdef KEY_SIC
	CompareConstant(KEY_SIC,0610)
#else
Msg( "Warning: Constant not found: KEY_SIC\n");
#endif

#ifdef KEY_SLEFT
	CompareConstant(KEY_SLEFT,0611)
#else
Msg( "Warning: Constant not found: KEY_SLEFT\n");
#endif

#ifdef KEY_SMESSAGE
	CompareConstant(KEY_SMESSAGE,0612)
#else
Msg( "Warning: Constant not found: KEY_SMESSAGE\n");
#endif

#ifdef KEY_SMOVE
	CompareConstant(KEY_SMOVE,0613)
#else
Msg( "Warning: Constant not found: KEY_SMOVE\n");
#endif

#ifdef KEY_SNEXT
	CompareConstant(KEY_SNEXT,0614)
#else
Msg( "Warning: Constant not found: KEY_SNEXT\n");
#endif

#ifdef KEY_SOPTIONS
	CompareConstant(KEY_SOPTIONS,0615)
#else
Msg( "Warning: Constant not found: KEY_SOPTIONS\n");
#endif

#ifdef KEY_SPREVIOUS
	CompareConstant(KEY_SPREVIOUS,0616)
#else
Msg( "Warning: Constant not found: KEY_SPREVIOUS\n");
#endif

#ifdef KEY_SPRINT
	CompareConstant(KEY_SPRINT,0617)
#else
Msg( "Warning: Constant not found: KEY_SPRINT\n");
#endif

#ifdef KEY_SREDO
	CompareConstant(KEY_SREDO,0620)
#else
Msg( "Warning: Constant not found: KEY_SREDO\n");
#endif

#ifdef KEY_SREPLACE
	CompareConstant(KEY_SREPLACE,0621)
#else
Msg( "Warning: Constant not found: KEY_SREPLACE\n");
#endif

#ifdef KEY_SRIGHT
	CompareConstant(KEY_SRIGHT,0622)
#else
Msg( "Warning: Constant not found: KEY_SRIGHT\n");
#endif

#ifdef KEY_SRSUME
	CompareConstant(KEY_SRSUME,0623)
#else
Msg( "Warning: Constant not found: KEY_SRSUME\n");
#endif

#ifdef KEY_SSAVE
	CompareConstant(KEY_SSAVE,0624)
#else
Msg( "Warning: Constant not found: KEY_SSAVE\n");
#endif

#ifdef KEY_SSUSPEND
	CompareConstant(KEY_SSUSPEND,0625)
#else
Msg( "Warning: Constant not found: KEY_SSUSPEND\n");
#endif

#ifdef KEY_SUNDO
	CompareConstant(KEY_SUNDO,0626)
#else
Msg( "Warning: Constant not found: KEY_SUNDO\n");
#endif

#ifdef KEY_SUSPEND
	CompareConstant(KEY_SUSPEND,0627)
#else
Msg( "Warning: Constant not found: KEY_SUSPEND\n");
#endif

#ifdef KEY_UNDO
	CompareConstant(KEY_UNDO,0630)
#else
Msg( "Warning: Constant not found: KEY_UNDO\n");
#endif

#ifdef KEY_MOUSE
	CompareConstant(KEY_MOUSE,0631)
#else
Msg( "Warning: Constant not found: KEY_MOUSE\n");
#endif

#ifdef KEY_RESIZE
	CompareConstant(KEY_RESIZE,0632)
#else
Msg( "Warning: Constant not found: KEY_RESIZE\n");
#endif

#ifdef KEY_MAX
	CompareConstant(KEY_MAX,0777)
#else
Msg( "Warning: Constant not found: KEY_MAX\n");
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
