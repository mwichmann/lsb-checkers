/*
 * Test of X11/extensions/dbeproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <X11/Xmd.h>

#include "X11/extensions/dbeproto.h"



#ifdef TET_TEST
void X11_extensions_dbeproto_h()
{
#else
int X11_extensions_dbeproto_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/extensions/dbeproto.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for X11/extensions/dbeproto.h depends on X11/extensions/Xdbeproto.h */
#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef DBE_PROTO_H
Msg( "Error: Constant not found: DBE_PROTO_H\n");
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
Msg("%d tests passed out of %d tests in X11/extensions/dbeproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
