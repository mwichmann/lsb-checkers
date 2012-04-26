/*
 * Test of X11/extensions/shapeproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <X11/Xmd.h>

#include "X11/extensions/shapeproto.h"



#ifdef TET_TEST
void X11_extensions_shapeproto_h()
{
#else
int X11_extensions_shapeproto_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/extensions/shapeproto.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for X11/extensions/shapeproto.h depends on X11/extensions/shape.h */
#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef _SHAPEPROTO_H_
Msg( "Error: Constant not found: _SHAPEPROTO_H_\n");
#else
pcnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in X11/extensions/shapeproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
