/*
 * Test of X11/Constraint.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Constraint.h\n");
#endif

printf("Checking data structures in X11/Constraint.h\n");
#if defined __ia64__
CheckTypeSize(ConstraintWidgetClass,8, 10260, 3, 1.3, NULL, 10259, NULL)
#elif defined __i386__
CheckTypeSize(ConstraintWidgetClass,4, 10260, 2, 1.2, NULL, 10259, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ConstraintWidgetClass,4, 10260, 6, 1.2, NULL, 10259, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ConstraintWidgetClass,4, 10260, 10, 1.3, NULL, 10259, NULL)
#elif defined __powerpc64__
CheckTypeSize(ConstraintWidgetClass,8, 10260, 9, 2.0, NULL, 10259, NULL)
#elif defined __s390x__
CheckTypeSize(ConstraintWidgetClass,8, 10260, 12, 1.3, NULL, 10259, NULL)
#elif defined __x86_64__
CheckTypeSize(ConstraintWidgetClass,8, 10260, 11, 2.0, NULL, 10259, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10259, NULL);\n",architecture,10260,0);
Msg("Find size of ConstraintWidgetClass (10260)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Constraint.h\n\n",pcnt,cnt);
return cnt;
#endif

}
