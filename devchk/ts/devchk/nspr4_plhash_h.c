/*
 * Test of nspr4/plhash.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/plhash.h"



#ifdef TET_TEST
void nspr4_plhash_h()
{
#else
int nspr4_plhash_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/plhash.h\n");
#endif

printf("Checking data structures in nspr4/plhash.h\n");
#if 1
CheckTypeSize(PLHashNumber,0, 1000448, 1, 4.0, NULL, 1002647, NULL)
#endif

#if 1
CheckTypeSize(PLHashComparator,0, 1001902, 1, 4.0, NULL, 1000708, NULL)
#endif

#if 1
CheckTypeSize(PLHashAllocOps,0, 1002885, 1, 4.0, NULL, 1006086, NULL)
#endif

#if 1
CheckTypeSize(PLHashFunction,0, 1004827, 1, 4.0, NULL, 1003861, NULL)
#endif

#if 1
CheckTypeSize(struct PLHashEntry,0, 1006087, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for PLHashEntry on All\n");
CheckOffset(struct PLHashEntry,next,0,1,87537)
CheckOffset(struct PLHashEntry,keyHash,0,1,87538)
CheckOffset(struct PLHashEntry,key,0,1,87539)
CheckOffset(struct PLHashEntry,value,0,1,87540)
#endif

#if 1
CheckTypeSize(struct PLHashTable,0, 1006088, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for PLHashTable on All\n");
CheckOffset(struct PLHashTable,buckets,0,1,87541)
CheckOffset(struct PLHashTable,nentries,0,1,87542)
CheckOffset(struct PLHashTable,shift,0,1,87543)
CheckOffset(struct PLHashTable,keyHash,0,1,87544)
CheckOffset(struct PLHashTable,keyCompare,0,1,87545)
CheckOffset(struct PLHashTable,valueCompare,0,1,87546)
CheckOffset(struct PLHashTable,allocOps,0,1,87547)
CheckOffset(struct PLHashTable,allocPriv,0,1,87548)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/plhash.h\n\n",pcnt,cnt);
return cnt;
#endif

}
