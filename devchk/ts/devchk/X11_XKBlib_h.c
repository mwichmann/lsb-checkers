/*
 * Test of X11/XKBlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/XKBlib.h"



#ifdef TET_TEST
void X11_XKBlib_h()
{
#else
int X11_XKBlib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/XKBlib.h\n");
#endif

#ifdef __i386__
CheckTypeSize(XkbInternAtomFunc,4, 9520, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9520,0);
#endif

#ifdef __i386__
CheckTypeSize(XkbGetAtomNameFunc,4, 9522, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9522,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/XKBlib.h\n",cnt);
return cnt;
#endif

}
