/*
 * Test of X11/ResourceI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "X11/IntrinsicP.h"
#include "X11/ResourceI.h"



#ifdef TET_TEST
void X11_ResourceI_h()
{
#else
int X11_ResourceI_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/ResourceI.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef _XtresourceI_h
Msg( "Error: Constant not found: _XtresourceI_h\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for StringToQuark(string) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for StringToName(string) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for StringToClass(string) */
#endif

extern void _XtCopyFromArg_db(XtArgVal, char *, unsigned int);
CheckInterfacedef(_XtCopyFromArg,_XtCopyFromArg_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in X11/ResourceI.h\n\n",pcnt,cnt);
return cnt;
#endif

}
