/*
 * Test of X11/Intrinsic.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/Intrinsic.h"



#ifdef TET_TEST
void X11_Intrinsic_h()
{
#else
int X11_Intrinsic_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Intrinsic.h\n");
#endif

#ifdef __i386__
CheckTypeSize(WidgetClass,4, 9583, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9583,0);
#endif

#ifdef __i386__
CheckTypeSize(Cardinal,4, 9608, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9608,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Intrinsic.h\n",cnt);
return cnt;
#endif

}
