/*
 * Test of nss3/keythi.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/keythi.h\n");
#endif

printf("Checking data structures in nss3/keythi.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _KEYTHI_H_
Msg( "Error: Constant not found: _KEYTHI_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(KeyType,0, 34859, 1, 4.0, NULL, 34649, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYRSAPublicKeyStr,0, 34906, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYRSAPublicKeyStr on All\n");
CheckOffset(struct SECKEYRSAPublicKeyStr,arena,0,1,87811)
CheckOffset(struct SECKEYRSAPublicKeyStr,modulus,0,1,87812)
CheckOffset(struct SECKEYRSAPublicKeyStr,publicExponent,0,1,87813)
#endif

#if 1
CheckTypeSize(SECKEYRSAPublicKey,0, 34915, 1, 4.0, NULL, 34906, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYPQGParamsStr,0, 34930, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYPQGParamsStr on All\n");
CheckOffset(struct SECKEYPQGParamsStr,arena,0,1,87780)
CheckOffset(struct SECKEYPQGParamsStr,prime,0,1,87781)
CheckOffset(struct SECKEYPQGParamsStr,subPrime,0,1,87782)
CheckOffset(struct SECKEYPQGParamsStr,base,0,1,87783)
#endif

#if 1
CheckTypeSize(SECKEYPQGParams,0, 34938, 1, 4.0, NULL, 34930, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYDSAPublicKeyStr,0, 34947, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYDSAPublicKeyStr on All\n");
CheckOffset(struct SECKEYDSAPublicKeyStr,params,0,1,87754)
CheckOffset(struct SECKEYDSAPublicKeyStr,publicValue,0,1,87755)
#endif

#if 1
CheckTypeSize(SECKEYDSAPublicKey,0, 34954, 1, 4.0, NULL, 34947, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYDHParamsStr,0, 34959, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYDHParamsStr on All\n");
CheckOffset(struct SECKEYDHParamsStr,arena,0,1,87741)
CheckOffset(struct SECKEYDHParamsStr,prime,0,1,87742)
CheckOffset(struct SECKEYDHParamsStr,base,0,1,87743)
#endif

#if 1
CheckTypeSize(SECKEYDHParams,0, 34962, 1, 4.0, NULL, 34959, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYDHPublicKeyStr,0, 34966, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYDHPublicKeyStr on All\n");
CheckOffset(struct SECKEYDHPublicKeyStr,arena,0,1,87748)
CheckOffset(struct SECKEYDHPublicKeyStr,prime,0,1,87749)
CheckOffset(struct SECKEYDHPublicKeyStr,base,0,1,87750)
CheckOffset(struct SECKEYDHPublicKeyStr,publicValue,0,1,87751)
#endif

#if 1
CheckTypeSize(SECKEYDHPublicKey,0, 34971, 1, 4.0, NULL, 34966, NULL)
#endif

#if 1
CheckTypeSize(SECKEYECParams,0, 34976, 1, 4.0, NULL, 34914, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYECPublicKeyStr,0, 34977, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYECPublicKeyStr on All\n");
CheckOffset(struct SECKEYECPublicKeyStr,DEREncodedParams,0,1,87758)
CheckOffset(struct SECKEYECPublicKeyStr,size,0,1,87759)
CheckOffset(struct SECKEYECPublicKeyStr,publicValue,0,1,87760)
#endif

#if 1
CheckTypeSize(SECKEYECPublicKey,0, 34986, 1, 4.0, NULL, 34977, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYFortezzaPublicKeyStr,0, 34991, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYFortezzaPublicKeyStr on All\n");
CheckOffset(struct SECKEYFortezzaPublicKeyStr,KEAversion,0,1,87764)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,DSSversion,0,1,87765)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,KMID,0,1,87766)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,clearance,0,1,87767)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,KEApriviledge,0,1,87768)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,DSSpriviledge,0,1,87769)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,KEAKey,0,1,87770)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,DSSKey,0,1,87771)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,params,0,1,87772)
CheckOffset(struct SECKEYFortezzaPublicKeyStr,keaParams,0,1,87773)
#endif

#if 1
CheckTypeSize(SECKEYFortezzaPublicKey,0, 34995, 1, 4.0, NULL, 34991, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYKEAParamsStr,0, 35009, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYKEAParamsStr on All\n");
CheckOffset(struct SECKEYKEAParamsStr,arena,0,1,87774)
CheckOffset(struct SECKEYKEAParamsStr,hash,0,1,87775)
#endif

#if 1
CheckTypeSize(SECKEYKEAParams,0, 35010, 1, 4.0, NULL, 35009, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYKEAPublicKeyStr,0, 35012, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYKEAPublicKeyStr on All\n");
CheckOffset(struct SECKEYKEAPublicKeyStr,params,0,1,87776)
CheckOffset(struct SECKEYKEAPublicKeyStr,publicValue,0,1,87777)
#endif

#if 1
CheckTypeSize(SECKEYKEAPublicKey,0, 35014, 1, 4.0, NULL, 35012, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYPublicKeyStr,0, 35016, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYPublicKeyStr on All\n");
CheckOffset(struct SECKEYPublicKeyStr,arena,0,1,87796)
CheckOffset(struct SECKEYPublicKeyStr,keyType,0,1,87797)
CheckOffset(struct SECKEYPublicKeyStr,pkcs11Slot,0,1,87798)
CheckOffset(struct SECKEYPublicKeyStr,pkcs11ID,0,1,87799)
CheckOffset(struct SECKEYPublicKeyStr,u,0,1,87800)
#endif

#if 1
CheckTypeSize(SECKEYPublicKey,0, 35025, 1, 4.0, NULL, 35016, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYPrivateKeyStr,0, 35030, 1, 4.0, NULL, 0, NULL)
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
CheckTypeSize(SECKEYPrivateKey,0, 35033, 1, 4.0, NULL, 35030, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPrivateKeyListNode,0, 35037, 1, 4.0, NULL, 32761, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPrivateKeyList,0, 35040, 1, 4.0, NULL, 34480, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPublicKeyList,0, 35044, 1, 4.0, NULL, 32607, NULL)
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
