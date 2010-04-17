/*
 * Test of X11/Constraint.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Constraint.h\n");
#endif

printf("Checking data structures in X11/Constraint.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _XtConstraint_h
Msg( "Error: Constant not found: _XtConstraint_h\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(ConstraintWidgetClass,8, 32198, 12, 1.3, NULL, 32197, NULL)
#elif defined __x86_64__
CheckTypeSize(ConstraintWidgetClass,8, 32198, 11, 2.0, NULL, 32197, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ConstraintWidgetClass,4, 32198, 10, 1.3, NULL, 32197, NULL)
#elif defined __powerpc64__
CheckTypeSize(ConstraintWidgetClass,8, 32198, 9, 2.0, NULL, 32197, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ConstraintWidgetClass,4, 32198, 6, 1.2, NULL, 32197, NULL)
#elif defined __ia64__
CheckTypeSize(ConstraintWidgetClass,8, 32198, 3, 1.3, NULL, 32197, NULL)
#elif defined __i386__
CheckTypeSize(ConstraintWidgetClass,4, 32198, 2, 1.2, NULL, 32197, NULL)
#else
Msg("Find size of ConstraintWidgetClass (32198)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,32197, NULL);\n",architecture,32198,0);
#endif

WidgetClass constraintWidgetClass_db ;
CheckGlobalVar(constraintWidgetClass_db, constraintWidgetClass);
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
