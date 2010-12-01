/*
 * Test of gnu/libc-version.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "gnu/libc-version.h"



#ifdef TET_TEST
void gnu_libc_version_h()
{
#else
int gnu_libc_version_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in gnu/libc-version.h\n");
extern const char * gnu_get_libc_version_db(void);
CheckInterfacedef(gnu_get_libc_version,gnu_get_libc_version_db);
extern const char * gnu_get_libc_release_db(void);
CheckInterfacedef(gnu_get_libc_release,gnu_get_libc_release_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in gnu/libc-version.h\n\n",pcnt,cnt);
return cnt;
#endif

}
