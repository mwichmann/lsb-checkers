/*
 * Test of X11/Intrinsic.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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
#elif __ia64__
CheckTypeSize(WidgetClass,8, 9583, 3)
#elif __powerpc__
CheckTypeSize(WidgetClass,4, 9583, 6)
#elif __s390__
CheckTypeSize(WidgetClass,0, 9583, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9583,0);
Msg("Find size of WidgetClass (9583)\n");
#endif

#ifdef __i386__
CheckTypeSize(Cardinal,4, 9608, 2)
#elif __ia64__
CheckTypeSize(Cardinal,4, 9608, 3)
#elif __powerpc__
CheckTypeSize(Cardinal,4, 9608, 6)
#elif __s390__
CheckTypeSize(Cardinal,0, 9608, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9608,0);
Msg("Find size of Cardinal (9608)\n");
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
