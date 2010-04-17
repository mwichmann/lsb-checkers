/*
 * Test of nss3/pkcs11t.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "nss3/pkcs11t.h"



#ifdef TET_TEST
void nss3_pkcs11t_h()
{
#else
int nss3_pkcs11t_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/pkcs11t.h\n");
#endif

printf("Checking data structures in nss3/pkcs11t.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _PKCS11T_H_
Msg( "Error: Constant not found: _PKCS11T_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(CK_BYTE,0, 34893, 1, 4.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(CK_CHAR,0, 34897, 1, 4.0, NULL, 34893, NULL)
#endif

#if 1
CheckTypeSize(CK_UTF8CHAR,0, 34902, 1, 4.0, NULL, 34893, NULL)
#endif

#if 1
CheckTypeSize(CK_ULONG,0, 34913, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(CK_FLAGS,0, 34927, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_VOID_PTR,0, 34951, 1, 4.0, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(CK_VERSION,0, 34968, 1, 4.0, NULL, 34969, NULL)
#endif

#if 1
CheckTypeSize(struct CK_VERSION,0, 34969, 1, , NULL, 0, NULL)
Msg("Missing member data for CK_VERSION on All\n");
CheckOffset(struct CK_VERSION,major,0,1,86769)
CheckOffset(struct CK_VERSION,minor,0,1,86770)
#endif

#if 1
CheckTypeSize(CK_INFO,0, 34979, 1, 4.0, NULL, 34980, NULL)
#endif

#if 1
CheckTypeSize(struct CK_INFO,0, 34980, 1, , NULL, 0, NULL)
Msg("Missing member data for CK_INFO on All\n");
CheckOffset(struct CK_INFO,cryptokiVersion,0,1,86702)
CheckOffset(struct CK_INFO,manufacturerID,0,1,86703)
CheckOffset(struct CK_INFO,flags,0,1,86704)
CheckOffset(struct CK_INFO,libraryDescription,0,1,86705)
CheckOffset(struct CK_INFO,libraryVersion,0,1,86706)
#endif

#if 1
CheckTypeSize(CK_SLOT_ID,0, 34988, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_SLOT_INFO,0, 34998, 1, 4.0, NULL, 34999, NULL)
#endif

#if 1
CheckTypeSize(struct CK_SLOT_INFO,0, 34999, 1, , NULL, 0, NULL)
Msg("Missing member data for CK_SLOT_INFO on All\n");
CheckOffset(struct CK_SLOT_INFO,slotDescription,0,1,86746)
CheckOffset(struct CK_SLOT_INFO,manufacturerID,0,1,86747)
CheckOffset(struct CK_SLOT_INFO,flags,0,1,86748)
CheckOffset(struct CK_SLOT_INFO,hardwareVersion,0,1,86749)
CheckOffset(struct CK_SLOT_INFO,firmwareVersion,0,1,86750)
#endif

#if 1
CheckTypeSize(CK_TOKEN_INFO,0, 35023, 1, 4.0, NULL, 35024, NULL)
#endif

#if 1
CheckTypeSize(struct CK_TOKEN_INFO,0, 35024, 1, , NULL, 0, NULL)
Msg("Missing member data for CK_TOKEN_INFO on All\n");
CheckOffset(struct CK_TOKEN_INFO,label,0,1,86751)
CheckOffset(struct CK_TOKEN_INFO,manufacturerID,0,1,86752)
CheckOffset(struct CK_TOKEN_INFO,model,0,1,86753)
CheckOffset(struct CK_TOKEN_INFO,serialNumber,0,1,86754)
CheckOffset(struct CK_TOKEN_INFO,flags,0,1,86755)
CheckOffset(struct CK_TOKEN_INFO,ulMaxSessionCount,0,1,86756)
CheckOffset(struct CK_TOKEN_INFO,ulSessionCount,0,1,86757)
CheckOffset(struct CK_TOKEN_INFO,ulMaxRwSessionCount,0,1,86758)
CheckOffset(struct CK_TOKEN_INFO,ulRwSessionCount,0,1,86759)
CheckOffset(struct CK_TOKEN_INFO,ulMaxPinLen,0,1,86760)
CheckOffset(struct CK_TOKEN_INFO,ulMinPinLen,0,1,86761)
CheckOffset(struct CK_TOKEN_INFO,ulTotalPublicMemory,0,1,86762)
CheckOffset(struct CK_TOKEN_INFO,ulFreePublicMemory,0,1,86763)
CheckOffset(struct CK_TOKEN_INFO,ulTotalPrivateMemory,0,1,86764)
CheckOffset(struct CK_TOKEN_INFO,ulFreePrivateMemory,0,1,86765)
CheckOffset(struct CK_TOKEN_INFO,hardwareVersion,0,1,86766)
CheckOffset(struct CK_TOKEN_INFO,firmwareVersion,0,1,86767)
CheckOffset(struct CK_TOKEN_INFO,utcTime,0,1,86768)
#endif

#if 1
CheckTypeSize(CK_SESSION_HANDLE,0, 35055, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_OBJECT_HANDLE,0, 35066, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_OBJECT_CLASS,0, 35070, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_KEY_TYPE,0, 35078, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_ATTRIBUTE_TYPE,0, 35095, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_ATTRIBUTE,0, 35115, 1, 4.0, NULL, 35116, NULL)
#endif

#if 1
CheckTypeSize(struct CK_ATTRIBUTE,0, 35116, 1, , NULL, 0, NULL)
Msg("Missing member data for CK_ATTRIBUTE on All\n");
CheckOffset(struct CK_ATTRIBUTE,type,0,1,86618)
CheckOffset(struct CK_ATTRIBUTE,pValue,0,1,86619)
CheckOffset(struct CK_ATTRIBUTE,ulValueLen,0,1,86620)
#endif

#if 1
CheckTypeSize(CK_ATTRIBUTE_PTR,0, 35117, 1, 4.0, NULL, 32900, NULL)
#endif

#if 1
CheckTypeSize(CK_MECHANISM_TYPE,0, 35119, 1, 4.0, NULL, 34913, NULL)
#endif

#if 1
CheckTypeSize(CK_MECHANISM,0, 35156, 1, 4.0, NULL, 35157, NULL)
#endif

#if 1
CheckTypeSize(struct CK_MECHANISM,0, 35157, 1, , NULL, 0, NULL)
Msg("Missing member data for CK_MECHANISM on All\n");
CheckOffset(struct CK_MECHANISM,mechanism,0,1,86713)
CheckOffset(struct CK_MECHANISM,pParameter,0,1,86714)
CheckOffset(struct CK_MECHANISM,ulParameterLen,0,1,86715)
#endif

#if 1
CheckTypeSize(CK_MECHANISM_PTR,0, 35158, 1, 4.0, NULL, 34716, NULL)
#endif

#if 1
CheckTypeSize(CK_RV,0, 35164, 1, 4.0, NULL, 34913, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/pkcs11t.h\n\n",pcnt,cnt);
return cnt;
#endif

}
