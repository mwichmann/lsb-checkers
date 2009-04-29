/*
 * Test of nspr4/plarena.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/plarena.h\n");
#endif

printf("Checking data structures in nspr4/plarena.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef plarena_h___
Msg( "Error: Constant not found: plarena_h___\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PLArenaPool,0, 34181, 1, 4.0, NULL, 35202, NULL)
#endif

#if 1
CheckTypeSize(struct PLArena,0, 35201, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for PLArena on All\n");
CheckOffset(struct PLArena,next,0,1,87525)
CheckOffset(struct PLArena,base,0,1,87526)
CheckOffset(struct PLArena,limit,0,1,87527)
CheckOffset(struct PLArena,avail,0,1,87528)
#endif

#if 1
CheckTypeSize(struct PLArenaPool,0, 35202, 1, , NULL, 0, NULL)
Msg("Missing member data for PLArenaPool on All\n");
CheckOffset(struct PLArenaPool,first,0,1,87529)
CheckOffset(struct PLArenaPool,current,0,1,87530)
CheckOffset(struct PLArenaPool,arenasize,0,1,87531)
CheckOffset(struct PLArenaPool,mask,0,1,87532)
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
