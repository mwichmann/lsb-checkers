/*
 * Test of X11/Xarch.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "X11/Xarch.h"



#ifdef TET_TEST
void X11_Xarch_h()
{
#else
int X11_Xarch_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/Xarch.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef _XARCH_H_
Msg( "Error: Constant not found: _XARCH_H_\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xarch.h depends on endian.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X_BYTE_ORDER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X_BIG_ENDIAN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X_LITTLE_ENDIAN */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in X11/Xarch.h\n\n",pcnt,cnt);
return cnt;
#endif

}
