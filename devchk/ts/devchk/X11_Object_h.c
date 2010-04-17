/*
 * Test of X11/Object.h
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
#include "X11/Object.h"



#ifdef TET_TEST
void X11_Object_h()
{
#else
int X11_Object_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Object.h\n");
#endif

printf("Checking data structures in X11/Object.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _XtObject_h
Msg( "Error: Constant not found: _XtObject_h\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(ObjectClass,0, 35947, 1, 1.2, NULL, 35945, NULL)
#endif

#if 1
CheckTypeSize(Object,0, 35948, 1, 1.2, NULL, 35946, NULL)
#endif

WidgetClass objectClass_db ;
CheckGlobalVar(objectClass_db, objectClass);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Object.h\n\n",pcnt,cnt);
return cnt;
#endif

}
