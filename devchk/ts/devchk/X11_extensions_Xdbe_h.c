/*
 * Test of X11/extensions/Xdbe.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/Xdbe.h"



#ifdef TET_TEST
void X11_extensions_Xdbe_h()
{
#else
int X11_extensions_Xdbe_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/extensions/Xdbe.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XdbeBackBuffer,4, 9394, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9394,0);
#endif

#ifdef __i386__
CheckTypeSize(XdbeSwapAction,1, 9395, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9395,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/extensions/Xdbe.h\n",cnt);
return cnt;
#endif

}
