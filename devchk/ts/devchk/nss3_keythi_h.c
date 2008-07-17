/*
 * Test of nss3/keythi.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/keythi.h"



#ifdef TET_TEST
void nss3_keythi_h()
{
#else
int nss3_keythi_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/keythi.h\n");
#endif

printf("Checking data structures in nss3/keythi.h\n");
#if 1
CheckTypeSize(KeyType,0, 1005742, 1, 4.0, NULL, 1005286, NULL)
#endif

#if 1
CheckTypeSize(SECKEYRSAPublicKey,0, 1005798, 1, 4.0, NULL, 1005789, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPQGParams,0, 1005821, 1, 4.0, NULL, 1005813, NULL)
#endif

#if 1
CheckTypeSize(SECKEYDSAPublicKey,0, 1005837, 1, 4.0, NULL, 1005830, NULL)
#endif

#if 1
CheckTypeSize(SECKEYDHParams,0, 1005845, 1, 4.0, NULL, 1005842, NULL)
#endif

#if 1
CheckTypeSize(SECKEYDHPublicKey,0, 1005854, 1, 4.0, NULL, 1005849, NULL)
#endif

#if 1
CheckTypeSize(SECKEYECParams,0, 1005859, 1, 4.0, NULL, 1005797, NULL)
#endif

#if 1
CheckTypeSize(SECKEYECPublicKey,0, 1005869, 1, 4.0, NULL, 1005860, NULL)
#endif

#if 1
CheckTypeSize(SECKEYFortezzaPublicKey,0, 1005878, 1, 4.0, NULL, 1005874, NULL)
#endif

#if 1
CheckTypeSize(SECKEYKEAParams,0, 1005893, 1, 4.0, NULL, 1005892, NULL)
#endif

#if 1
CheckTypeSize(SECKEYKEAPublicKey,0, 1005897, 1, 4.0, NULL, 1005895, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPublicKey,0, 1005908, 1, 4.0, NULL, 1005899, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYPrivateKeyStr,0, 1005913, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for SECKEYPrivateKeyStr on All\n");
CheckOffset(struct SECKEYPrivateKeyStr,arena,0,1,87789)
CheckOffset(struct SECKEYPrivateKeyStr,keyType,0,1,87790)
CheckOffset(struct SECKEYPrivateKeyStr,pkcs11Slot,0,1,87791)
CheckOffset(struct SECKEYPrivateKeyStr,pkcs11ID,0,1,87792)
CheckOffset(struct SECKEYPrivateKeyStr,pkcs11IsTemp,0,1,87793)
CheckOffset(struct SECKEYPrivateKeyStr,wincx,0,1,87794)
CheckOffset(struct SECKEYPrivateKeyStr,staticflags,0,1,87795)
#endif

#if 1
CheckTypeSize(SECKEYPrivateKey,0, 1005916, 1, 4.0, NULL, 1005913, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPrivateKeyListNode,0, 1005920, 1, 4.0, NULL, 1000885, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPrivateKeyList,0, 1005923, 1, 4.0, NULL, 1004923, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPublicKeyList,0, 1005927, 1, 4.0, NULL, 1000482, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/keythi.h\n\n",pcnt,cnt);
return cnt;
#endif

}
