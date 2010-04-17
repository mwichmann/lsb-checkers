/*
 * Test of libgen.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "libgen.h"



#ifdef TET_TEST
void libgen_h()
{
#else
int libgen_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in libgen.h\n");
#endif

printf("Checking data structures in libgen.h\n");
extern char * basename_db(const char *);
CheckInterfacedef(basename,basename_db);
extern char * dirname_db(char *);
CheckInterfacedef(dirname,dirname_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in libgen.h\n\n",pcnt,cnt);
return cnt;
#endif

}
