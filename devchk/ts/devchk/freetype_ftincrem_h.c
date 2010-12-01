/*
 * Test of freetype/ftincrem.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftincrem.h"



#ifdef TET_TEST
void freetype_ftincrem_h()
{
#else
int freetype_ftincrem_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in freetype/ftincrem.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_PARAM_TAG_INCREMENTAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftincrem.h depends on freetype.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in freetype/ftincrem.h\n\n",pcnt,cnt);
return cnt;
#endif

}
