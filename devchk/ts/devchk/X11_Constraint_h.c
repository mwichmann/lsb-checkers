/*
 * Test of X11/Constraint.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
#include <X11/CoreP.h>
#include "X11/Constraint.h"



#ifdef TET_TEST
void X11_Constraint_h()
{
#else
int X11_Constraint_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Constraint.h\n");
#endif

#ifdef __ia64__
CheckTypeSize(ConstraintWidgetClass,8, 10260, 3)
#elif __i386__
CheckTypeSize(ConstraintWidgetClass,4, 10260, 2)
#elif __powerpc__
CheckTypeSize(ConstraintWidgetClass,4, 10260, 6)
#elif __s390__
CheckTypeSize(ConstraintWidgetClass,0, 10260, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10260,0);
Msg("Find size of ConstraintWidgetClass (10260)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Constraint.h\n",cnt);
return cnt;
#endif

}
