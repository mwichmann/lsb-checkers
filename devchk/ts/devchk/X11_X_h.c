/*
 * Test of X11/X.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/X.h"



#ifdef TET_TEST
void X11_X_h()
{
#else
int X11_X_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/X.h\n");
#endif

#ifdef __i386__
CheckTypeSize(Window,4)
#elif __ia64__
CheckTypeSize(Window,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8176,0);
#endif

#ifdef __i386__
CheckTypeSize(Font,4)
#elif __ia64__
CheckTypeSize(Font,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8177,0);
#endif

#ifdef __i386__
CheckTypeSize(Pixmap,4)
#elif __ia64__
CheckTypeSize(Pixmap,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8178,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/X.h\n",cnt);
return cnt;
#endif

}
