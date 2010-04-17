/*
 * Test of nss3/secoidt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "nss3/secoidt.h"



#ifdef TET_TEST
void nss3_secoidt_h()
{
#else
int nss3_secoidt_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/secoidt.h\n");
#endif

printf("Checking data structures in nss3/secoidt.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _SECOIDT_H_
Msg( "Error: Constant not found: _SECOIDT_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(SECOidData,0, 34855, 1, 4.0, NULL, 35099, NULL)
#endif

#if 1
CheckTypeSize(SECAlgorithmID,0, 34857, 1, 4.0, NULL, 34861, NULL)
#endif

#if 1
CheckTypeSize(struct SECAlgorithmIDStr,0, 34861, 1, , NULL, 0, NULL)
Msg("Missing member data for SECAlgorithmIDStr on All\n");
CheckOffset(struct SECAlgorithmIDStr,algorithm,0,1,87709)
CheckOffset(struct SECAlgorithmIDStr,parameters,0,1,87710)
#endif

#if 1
CheckTypeSize(SECOidTag,0, 35094, 1, 4.0, NULL, 33826, NULL)
#endif

#if 1
CheckTypeSize(SECSupportExtenTag,0, 35098, 1, 4.0, NULL, 33353, NULL)
#endif

#if 1
CheckTypeSize(struct SECOidDataStr,0, 35099, 1, , NULL, 0, NULL)
Msg("Missing member data for SECOidDataStr on All\n");
CheckOffset(struct SECOidDataStr,oid,0,1,87846)
CheckOffset(struct SECOidDataStr,offset,0,1,87847)
CheckOffset(struct SECOidDataStr,desc,0,1,87848)
CheckOffset(struct SECOidDataStr,mechanism,0,1,87849)
CheckOffset(struct SECOidDataStr,supportedExtension,0,1,87850)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secoidt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
