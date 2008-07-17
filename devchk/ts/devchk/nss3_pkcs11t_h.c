/*
 * Test of nss3/pkcs11t.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#ifdef TET_TEST
Msg("Checking data structures in nss3/pkcs11t.h\n");
#endif

printf("Checking data structures in nss3/pkcs11t.h\n");
#if 1
CheckTypeSize(CK_BYTE,0, 1005776, 1, 4.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(CK_CHAR,0, 1005780, 1, 4.0, NULL, 1005776, NULL)
#endif

#if 1
CheckTypeSize(CK_UTF8CHAR,0, 1005785, 1, 4.0, NULL, 1005776, NULL)
#endif

#if 1
CheckTypeSize(CK_ULONG,0, 1005796, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(CK_FLAGS,0, 1005810, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_VOID_PTR,0, 1005834, 1, 4.0, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(CK_VERSION,0, 1005851, 1, 4.0, NULL, 1005852, NULL)
#endif

#if 1
CheckTypeSize(CK_INFO,0, 1005862, 1, 4.0, NULL, 1005863, NULL)
#endif

#if 1
CheckTypeSize(CK_SLOT_ID,0, 1005871, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_SLOT_INFO,0, 1005881, 1, 4.0, NULL, 1005882, NULL)
#endif

#if 1
CheckTypeSize(CK_TOKEN_INFO,0, 1005906, 1, 4.0, NULL, 1005907, NULL)
#endif

#if 1
CheckTypeSize(CK_SESSION_HANDLE,0, 1005938, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_OBJECT_HANDLE,0, 1005949, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_OBJECT_CLASS,0, 1005953, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_KEY_TYPE,0, 1005961, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_ATTRIBUTE_TYPE,0, 1005978, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_ATTRIBUTE,0, 1005998, 1, 4.0, NULL, 1005999, NULL)
#endif

#if 1
CheckTypeSize(CK_ATTRIBUTE_PTR,0, 1006000, 1, 4.0, NULL, 1001244, NULL)
#endif

#if 1
CheckTypeSize(CK_MECHANISM_TYPE,0, 1006002, 1, 4.0, NULL, 1005796, NULL)
#endif

#if 1
CheckTypeSize(CK_MECHANISM,0, 1006039, 1, 4.0, NULL, 1006040, NULL)
#endif

#if 1
CheckTypeSize(CK_MECHANISM_PTR,0, 1006041, 1, 4.0, NULL, 1005430, NULL)
#endif

#if 1
CheckTypeSize(CK_RV,0, 1006047, 1, 4.0, NULL, 1005796, NULL)
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
