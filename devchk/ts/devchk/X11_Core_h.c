/*
 * Test of X11/Core.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <X11/Intrinsic.h>
#include "X11/Core.h"



#ifdef TET_TEST
void X11_Core_h()
{
#else
int X11_Core_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Core.h\n");
#endif

printf("Checking data structures in X11/Core.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _XtCore_h
Msg( "Error: Constant not found: _XtCore_h\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(CoreWidgetClass,0, 35941, 1, 1.2, NULL, 35939, NULL)
#endif

#if 1
CheckTypeSize(CoreWidget,0, 35942, 1, 1.2, NULL, 35940, NULL)
#endif

WidgetClass coreWidgetClass_db ;
CheckGlobalVar(coreWidgetClass_db, coreWidgetClass);
WidgetClass widgetClass_db ;
CheckGlobalVar(widgetClass_db, widgetClass);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Core.h\n\n",pcnt,cnt);
return cnt;
#endif

}
