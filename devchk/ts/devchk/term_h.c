/*
 * Test of term.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "term.h"



#ifdef TET_TEST
void term_h()
{
#else
int term_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in term.h\n");
#endif

#ifdef __s390__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10348,0);
Msg("Find size of fptr-putcproc (10348)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in term.h\n",cnt);
return cnt;
#endif

}
