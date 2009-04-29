/*
 * Test of err.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <error.h>

#include "err.h"



#ifdef TET_TEST
void err_h()
{
#else
int err_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in err.h\n");
#endif

printf("Checking data structures in err.h\n");
extern void err_db(int, const char *, ...);
CheckInterfacedef(err,err_db);
extern void errx_db(int, const char *, ...);
CheckInterfacedef(errx,errx_db);
extern void warn_db(const char *, ...);
CheckInterfacedef(warn,warn_db);
extern void warnx_db(const char *, ...);
CheckInterfacedef(warnx,warnx_db);
extern void error_db(int, int, const char *, ...);
CheckInterfacedef(error,error_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in err.h\n\n",pcnt,cnt);
return cnt;
#endif

}
