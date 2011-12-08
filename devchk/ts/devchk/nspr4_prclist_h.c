/*
 * Test of nspr4/prclist.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "nspr4/prclist.h"



#ifdef TET_TEST
void nspr4_prclist_h()
{
#else
int nspr4_prclist_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in nspr4/prclist.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef prclist_h___
Msg( "Error: Constant not found: prclist_h___\n");
#else
pcnt++;
#endif

#endif

#if 1
CheckTypeSize(struct PRCListStr,0, 32906, 1, , NULL, 0, NULL)
Msg("Missing member data for PRCListStr on All\n");
CheckOffset(struct PRCListStr,next,0,1,87557)
CheckOffset(struct PRCListStr,prev,0,1,87558)
#endif

#if 1
CheckTypeSize(PRCList,0, 33973, 1, 4.0, NULL, 32906, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in nspr4/prclist.h\n\n",pcnt,cnt);
return cnt;
#endif

}
