/*
 * Test of X11/Xos.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "X11/Xos.h"



#ifdef TET_TEST
void X11_Xos_h()
{
#else
int X11_Xos_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/Xos.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef _XOS_H_
Msg( "Error: Constant not found: _XOS_H_\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on X11/Xosdefs.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on sys/types.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on string.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on fcntl.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on unistdg.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on sys/time.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on time.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X_GETTIMEOFDAY(t) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/Xos.h depends on X11/Xarch.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in X11/Xos.h\n\n",pcnt,cnt);
return cnt;
#endif

}
