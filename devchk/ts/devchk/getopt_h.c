/*
 * Test of getopt.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "getopt.h"



#ifdef TET_TEST
void getopt_h()
{
#else
int getopt_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in getopt.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct option,16, 10000, 2)
CheckOffset(struct option,name,0,2,32258)
CheckOffset(struct option,has_arg,4,2,32259)
CheckOffset(struct option,flag,8,2,32260)
CheckOffset(struct option,val,12,2,32261)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10000,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in getopt.h\n",cnt);
return cnt;
#endif

}
