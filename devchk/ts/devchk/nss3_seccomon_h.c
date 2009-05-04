/*
 * Test of nss3/seccomon.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/seccomon.h"



#ifdef TET_TEST
void nss3_seccomon_h()
{
#else
int nss3_seccomon_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/seccomon.h\n");
#endif

printf("Checking data structures in nss3/seccomon.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _SECCOMMON_H_
Msg( "Error: Constant not found: _SECCOMMON_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(SECItemType,0, 34911, 1, 4.0, NULL, 33519, NULL)
#endif

#if 1
CheckTypeSize(SECItem,0, 34914, 1, 4.0, NULL, 34919, NULL)
#endif

#if 1
CheckTypeSize(struct SECItemStr,0, 34919, 1, , NULL, 0, NULL)
Msg("Missing member data for SECItemStr on All\n");
CheckOffset(struct SECItemStr,type,0,1,87736)
CheckOffset(struct SECItemStr,data,0,1,87737)
CheckOffset(struct SECItemStr,len,0,1,87738)
#endif

#if 1
CheckTypeSize(SECStatus,0, 34957, 1, 4.0, NULL, 34952, NULL)
#endif

#if 1
CheckTypeSize(SECComparison,0, 34965, 1, 4.0, NULL, 34961, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/seccomon.h\n\n",pcnt,cnt);
return cnt;
#endif

}
