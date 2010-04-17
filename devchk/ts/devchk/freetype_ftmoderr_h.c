/*
 * Test of freetype/ftmoderr.h
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

#include "freetype/ftmoderr.h"



#ifdef TET_TEST
void freetype_ftmoderr_h()
{
#else
int freetype_ftmoderr_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/ftmoderr.h\n");
#endif

printf("Checking data structures in freetype/ftmoderr.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_MODERRDEF(e,v,s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MODERR_END_LIST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MODERR_START_LIST */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftmoderr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
