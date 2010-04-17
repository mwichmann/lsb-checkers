/*
 * Test of nss3/secdigt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "nss3/secdigt.h"



#ifdef TET_TEST
void nss3_secdigt_h()
{
#else
int nss3_secdigt_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/secdigt.h\n");
#endif

printf("Checking data structures in nss3/secdigt.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _SECDIGT_H_
Msg( "Error: Constant not found: _SECDIGT_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct SGNDigestInfoStr,0, 34858, 1, , NULL, 0, NULL)
Msg("Missing member data for SGNDigestInfoStr on All\n");
CheckOffset(struct SGNDigestInfoStr,arena,0,1,87881)
CheckOffset(struct SGNDigestInfoStr,digestAlgorithm,0,1,87882)
CheckOffset(struct SGNDigestInfoStr,digest,0,1,87883)
#endif

#if 1
CheckTypeSize(SGNDigestInfo,0, 34862, 1, 4.0, NULL, 34858, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secdigt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
