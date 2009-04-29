/*
 * Test of nss3/secasn1t.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#include "nspr4/prtypes.h"
#endif
#include "nss3/secasn1t.h"



#ifdef TET_TEST
void nss3_secasn1t_h()
{
#else
int nss3_secasn1t_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/secasn1t.h\n");
#endif

printf("Checking data structures in nss3/secasn1t.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _SECASN1T_H_
Msg( "Error: Constant not found: _SECASN1T_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct sec_ASN1Template_struct,0, 34865, 1, , NULL, 0, NULL)
Msg("Missing member data for sec_ASN1Template_struct on All\n");
CheckOffset(struct sec_ASN1Template_struct,kind,0,1,200575)
CheckOffset(struct sec_ASN1Template_struct,offset,0,1,200576)
CheckOffset(struct sec_ASN1Template_struct,sub,0,1,200577)
CheckOffset(struct sec_ASN1Template_struct,size,0,1,200578)
#endif

#if 1
CheckTypeSize(SEC_ASN1Template,0, 34928, 1, 4.0, NULL, 34865, NULL)
#endif

#if 1
CheckTypeSize(SEC_ASN1EncodingPart,0, 35045, 1, 4.0, NULL, 33227, NULL)
#endif

#if 1
CheckTypeSize(SEC_ASN1NotifyProc,0, 35046, 1, 4.0, NULL, 32844, NULL)
#endif

#if 1
CheckTypeSize(SEC_ASN1WriteProc,0, 35054, 1, 4.0, NULL, 32910, NULL)
#endif

#if 1
/* All */
typedef void (*SEC_ASN1NotifyProc_db)(void *, PRBool, void *, int);
CheckFunctionTypedef(SEC_ASN1NotifyProc,SEC_ASN1NotifyProc_db);
#endif

#if 1
/* All */
typedef void (*SEC_ASN1WriteProc_db)(void *, const char *, unsigned long int, int, SEC_ASN1EncodingPart);
CheckFunctionTypedef(SEC_ASN1WriteProc,SEC_ASN1WriteProc_db);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secasn1t.h\n\n",pcnt,cnt);
return cnt;
#endif

}
