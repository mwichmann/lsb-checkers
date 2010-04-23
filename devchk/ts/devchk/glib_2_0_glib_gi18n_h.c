/*
 * Test of glib-2.0/glib/gi18n.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "glib-2.0/glib/gi18n.h"



#ifdef TET_TEST
void glib_2_0_glib_gi18n_h()
{
#else
int glib_2_0_glib_gi18n_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in glib-2.0/glib/gi18n.h\n");
#endif

printf("Checking data structures in glib-2.0/glib/gi18n.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for _(String) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Q_(String) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for N_(String) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for NC_(Context,String) */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef __G_I18N_H__
Msg( "Error: Constant not found: __G_I18N_H__\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in glib-2.0/glib/gi18n.h\n\n",pcnt,cnt);
return cnt;
#endif

}
