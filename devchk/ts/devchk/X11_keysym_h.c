/*
 * Test of X11/keysym.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "X11/keysym.h"



#ifdef TET_TEST
void X11_keysym_h()
{
#else
int X11_keysym_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/keysym.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_XKB_KEYS
Msg( "Error: Constant not found: XK_XKB_KEYS\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_LATIN1
Msg( "Error: Constant not found: XK_LATIN1\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_LATIN2
Msg( "Error: Constant not found: XK_LATIN2\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_LATIN3
Msg( "Error: Constant not found: XK_LATIN3\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_LATIN4
Msg( "Error: Constant not found: XK_LATIN4\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_LATIN8
Msg( "Error: Constant not found: XK_LATIN8\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_LATIN9
Msg( "Error: Constant not found: XK_LATIN9\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_CAUCASUS
Msg( "Error: Constant not found: XK_CAUCASUS\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_GREEK
Msg( "Error: Constant not found: XK_GREEK\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_KATAKANA
Msg( "Error: Constant not found: XK_KATAKANA\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_ARABIC
Msg( "Error: Constant not found: XK_ARABIC\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_CYRILLIC
Msg( "Error: Constant not found: XK_CYRILLIC\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_HEBREW
Msg( "Error: Constant not found: XK_HEBREW\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_THAI
Msg( "Error: Constant not found: XK_THAI\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_KOREAN
Msg( "Error: Constant not found: XK_KOREAN\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_ARMENIAN
Msg( "Error: Constant not found: XK_ARMENIAN\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_GEORGIAN
Msg( "Error: Constant not found: XK_GEORGIAN\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_VIETNAMESE
Msg( "Error: Constant not found: XK_VIETNAMESE\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_CURRENCY
Msg( "Error: Constant not found: XK_CURRENCY\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_MATHEMATICAL
Msg( "Error: Constant not found: XK_MATHEMATICAL\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_BRAILLE
Msg( "Error: Constant not found: XK_BRAILLE\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/keysym.h depends on X11/keysymdef.h */
#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_MISCELLANY
Msg( "Error: Constant not found: XK_MISCELLANY\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_TECHNICAL
Msg( "Error: Constant not found: XK_TECHNICAL\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_SPECIAL
Msg( "Error: Constant not found: XK_SPECIAL\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_APL
Msg( "Error: Constant not found: XK_APL\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef XK_PUBLISHING
Msg( "Error: Constant not found: XK_PUBLISHING\n");
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
Msg("%d tests passed out of %d tests in X11/keysym.h\n\n",pcnt,cnt);
return cnt;
#endif

}
