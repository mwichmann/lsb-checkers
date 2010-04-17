/*
 * Test of X11/RectObj.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <stdio.h>
#ifndef LSBCC_MODE
#include <X11/Intrinsic.h>
#endif
#include "X11/RectObj.h"



#ifdef TET_TEST
void X11_RectObj_h()
{
#else
int X11_RectObj_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/RectObj.h\n");
#endif

printf("Checking data structures in X11/RectObj.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for X11/RectObj.h depends on X11/Constraint.h */
#endif

#if 1
CheckTypeSize(RectObj,0, 39368, 1, 1.0, NULL, 39367, NULL)
#endif

#if 1
CheckTypeSize(RectObjClass,0, 39370, 1, 1.0, NULL, 39369, NULL)
#endif

WidgetClass rectObjClass_db ;
CheckGlobalVar(rectObjClass_db, rectObjClass);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/RectObj.h\n\n",pcnt,cnt);
return cnt;
#endif

}
