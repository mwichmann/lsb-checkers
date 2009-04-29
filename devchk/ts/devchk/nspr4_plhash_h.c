/*
 * Test of nspr4/plhash.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/plhash.h\n");
#endif

printf("Checking data structures in nspr4/plhash.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef plhash_h___
Msg( "Error: Constant not found: plhash_h___\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PLHashNumber,0, 32594, 1, 4.0, NULL, 33493, NULL)
#endif

#if 1
CheckTypeSize(PLHashComparator,0, 33197, 1, 4.0, NULL, 32683, NULL)
#endif

#if 1
CheckTypeSize(PLHashAllocOps,0, 33599, 1, 4.0, NULL, 35203, NULL)
#endif

#if 1
CheckTypeSize(PLHashFunction,0, 34436, 1, 4.0, NULL, 34018, NULL)
#endif

#if 1
CheckTypeSize(struct PLHashAllocOps,0, 35203, 1, , NULL, 0, NULL)
Msg("Missing member data for PLHashAllocOps on All\n");
CheckOffset(struct PLHashAllocOps,allocTable,0,1,87533)
CheckOffset(struct PLHashAllocOps,freeTable,0,1,87534)
CheckOffset(struct PLHashAllocOps,allocEntry,0,1,87535)
CheckOffset(struct PLHashAllocOps,freeEntry,0,1,87536)
#endif

#if 1
CheckTypeSize(struct PLHashEntry,0, 35204, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for PLHashEntry on All\n");
CheckOffset(struct PLHashEntry,next,0,1,87537)
CheckOffset(struct PLHashEntry,keyHash,0,1,87538)
CheckOffset(struct PLHashEntry,key,0,1,87539)
CheckOffset(struct PLHashEntry,value,0,1,87540)
#endif

#if 1
CheckTypeSize(struct PLHashTable,0, 35205, 1, 4.0, NULL, 0, NULL)
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

#if 1
/* All */
typedef PRIntn (*PLHashComparator_db)(const void *, const void *);
CheckFunctionTypedef(PLHashComparator,PLHashComparator_db);
#endif

#if 1
/* All */
typedef PLHashNumber (*PLHashFunction_db)(const void *);
CheckFunctionTypedef(PLHashFunction,PLHashFunction_db);
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
