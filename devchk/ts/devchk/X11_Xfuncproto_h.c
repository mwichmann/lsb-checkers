/*
 * Test of X11/Xfuncproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xfuncproto.h"



#ifdef TET_TEST
void X11_Xfuncproto_h()
{
#else
int X11_Xfuncproto_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Xfuncproto.h\n");
#endif

printf("Checking data structures in X11/Xfuncproto.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NeedFunctionPrototypes
	CompareConstant(NeedFunctionPrototypes,1,16595,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: NeedFunctionPrototypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NeedVarargsPrototypes
	CompareConstant(NeedVarargsPrototypes,1,16596,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: NeedVarargsPrototypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NeedNestedPrototypes
	CompareConstant(NeedNestedPrototypes,1,16597,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: NeedNestedPrototypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _Xconst */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef NARROWPROTO
Msg( "Error: Constant not found: NARROWPROTO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FUNCPROTO
	CompareConstant(FUNCPROTO,15,16600,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: FUNCPROTO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef NeedWidePrototypes
Msg( "Error: Constant not found: NeedWidePrototypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XFUNCPROTOBEGIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XFUNCPROTOEND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_SENTINEL(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_ATTRIBUTE_PRINTF(x,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_EXPORT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_HIDDEN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_INTERNAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_LIKELY(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_UNLIKELY(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_INLINE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _X_DEPRECATED */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xfuncproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
