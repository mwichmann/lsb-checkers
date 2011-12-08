/*
 * Test of nss3/secdert.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "nss3/secdert.h"



#ifdef TET_TEST
void nss3_secdert_h()
{
#else
int nss3_secdert_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in nss3/secdert.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef _SECDERT_H_
Msg( "Error: Constant not found: _SECDERT_H_\n");
#else
pcnt++;
#endif

#endif

#if 1
CheckTypeSize(DERTemplate,0, 34853, 1, 4.0, NULL, 34868, NULL)
#endif

#if 1
CheckTypeSize(struct DERTemplateStr,0, 34868, 1, , NULL, 0, NULL)
Msg("Missing member data for DERTemplateStr on All\n");
CheckOffset(struct DERTemplateStr,kind,0,1,86803)
CheckOffset(struct DERTemplateStr,offset,0,1,86804)
CheckOffset(struct DERTemplateStr,sub,0,1,86805)
CheckOffset(struct DERTemplateStr,arg,0,1,86806)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in nss3/secdert.h\n\n",pcnt,cnt);
return cnt;
#endif

}
