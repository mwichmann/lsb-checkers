/*
 * Test of zconf.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "zconf.h"



#ifdef TET_TEST
void zconf_h()
{
#else
int zconf_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in zconf.h\n");
#endif

printf("Checking data structures in zconf.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for OF(args) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ZEXTERN
	CompareMacro(ZEXTERN,extern,extern,20212,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: ZEXTERN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ZEXPORT
	CompareMacro(ZEXPORT,,,20213,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: ZEXPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ZEXPORTVA
	CompareMacro(ZEXPORTVA,,,20214,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: ZEXPORTVA\n");
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
printf("%d tests passed out of %d tests in zconf.h\n\n",pcnt,cnt);
return cnt;
#endif

}
