/*
 * Test of monetary.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "monetary.h"



#ifdef TET_TEST
void monetary_h()
{
#else
int monetary_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in monetary.h\n");
#endif

printf("Checking data structures in monetary.h\n");
extern ssize_t strfmon_db(char *, size_t, const char *, ...);
CheckInterfacedef(strfmon,strfmon_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in monetary.h\n\n",pcnt,cnt);
return cnt;
#endif

}
