/*
 * Test of X11/keysym.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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

#ifdef TET_TEST
Msg("Checking data structures in X11/keysym.h\n");
#endif

printf("Checking data structures in X11/keysym.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef XK_XKB_KEYS
Msg( "Error: Constant not found: XK_XKB_KEYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_LATIN1
Msg( "Error: Constant not found: XK_LATIN1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_LATIN2
Msg( "Error: Constant not found: XK_LATIN2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_LATIN3
Msg( "Error: Constant not found: XK_LATIN3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_LATIN4
Msg( "Error: Constant not found: XK_LATIN4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_LATIN8
Msg( "Error: Constant not found: XK_LATIN8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_LATIN9
Msg( "Error: Constant not found: XK_LATIN9\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_CAUCASUS
Msg( "Error: Constant not found: XK_CAUCASUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_GREEK
Msg( "Error: Constant not found: XK_GREEK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_KATAKANA
Msg( "Error: Constant not found: XK_KATAKANA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_ARABIC
Msg( "Error: Constant not found: XK_ARABIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_CYRILLIC
Msg( "Error: Constant not found: XK_CYRILLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_HEBREW
Msg( "Error: Constant not found: XK_HEBREW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_THAI
Msg( "Error: Constant not found: XK_THAI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_KOREAN
Msg( "Error: Constant not found: XK_KOREAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_ARMENIAN
Msg( "Error: Constant not found: XK_ARMENIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_GEORGIAN
Msg( "Error: Constant not found: XK_GEORGIAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_VIETNAMESE
Msg( "Error: Constant not found: XK_VIETNAMESE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_CURRENCY
Msg( "Error: Constant not found: XK_CURRENCY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_MATHEMATICAL
Msg( "Error: Constant not found: XK_MATHEMATICAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef XK_BRAILLE
Msg( "Error: Constant not found: XK_BRAILLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/keysym.h depends on X11/keysymdef.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/keysym.h\n\n",pcnt,cnt);
return cnt;
#endif

}
