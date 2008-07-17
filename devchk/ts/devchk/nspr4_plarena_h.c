/*
 * Test of nspr4/plarena.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/plarena.h"



#ifdef TET_TEST
void nspr4_plarena_h()
{
#else
int nspr4_plarena_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/plarena.h\n");
#endif

printf("Checking data structures in nspr4/plarena.h\n");
#if 1
CheckTypeSize(PLArenaPool,0, 1004248, 1, 4.0, NULL, 1006085, NULL)
#endif

#if 1
CheckTypeSize(struct PLArena,0, 1006084, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for PLArena on All\n");
CheckOffset(struct PLArena,next,0,1,87525)
CheckOffset(struct PLArena,base,0,1,87526)
CheckOffset(struct PLArena,limit,0,1,87527)
CheckOffset(struct PLArena,avail,0,1,87528)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/plarena.h\n\n",pcnt,cnt);
return cnt;
#endif

}
