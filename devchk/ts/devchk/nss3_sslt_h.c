/*
 * Test of nss3/sslt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "nss3/sslt.h"



#ifdef TET_TEST
void nss3_sslt_h()
{
#else
int nss3_sslt_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in nss3/sslt.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef __sslt_h_
Msg( "Error: Constant not found: __sslt_h_\n");
#else
pcnt++;
#endif

#endif

#if 1
CheckTypeSize(SSLKEAType,0, 35789, 1, 4.0, NULL, 35264, NULL)
#endif

#if 1
CheckTypeSize(SSLSignType,0, 35791, 1, 4.0, NULL, 35478, NULL)
#endif

#if 1
CheckTypeSize(SSLAuthType,0, 35793, 1, 4.0, NULL, 35315, NULL)
#endif

#if 1
CheckTypeSize(SSLCipherAlgorithm,0, 35794, 1, 4.0, NULL, 35508, NULL)
#endif

#if 1
CheckTypeSize(SSLMACAlgorithm,0, 35796, 1, 4.0, NULL, 35423, NULL)
#endif

#if 1
CheckTypeSize(struct SSLChannelInfoStr,0, 35797, 1, , NULL, 0, NULL)
Msg("Missing member data for SSLChannelInfoStr on All\n");
CheckOffset(struct SSLChannelInfoStr,length,0,1,203295)
CheckOffset(struct SSLChannelInfoStr,protocolVersion,0,1,203296)
CheckOffset(struct SSLChannelInfoStr,cipherSuite,0,1,203297)
CheckOffset(struct SSLChannelInfoStr,authKeyBits,0,1,203298)
CheckOffset(struct SSLChannelInfoStr,keaKeyBits,0,1,203299)
CheckOffset(struct SSLChannelInfoStr,creationTime,0,1,203300)
CheckOffset(struct SSLChannelInfoStr,lastAccessTime,0,1,203301)
CheckOffset(struct SSLChannelInfoStr,expirationTime,0,1,203302)
CheckOffset(struct SSLChannelInfoStr,sessionIDLength,0,1,203303)
CheckOffset(struct SSLChannelInfoStr,sessionID,0,1,203304)
#endif

#if 1
CheckTypeSize(SSLChannelInfo,0, 35798, 1, 4.0, NULL, 35797, NULL)
#endif

#if 1
CheckTypeSize(struct SSLCipherSuiteInfoStr,0, 35799, 1, , NULL, 0, NULL)
CheckBitField(struct SSLCipherSuiteInfoStr,isFIPS,1,1,203322)
CheckBitField(struct SSLCipherSuiteInfoStr,isExportable,1,1,203323)
CheckBitField(struct SSLCipherSuiteInfoStr,nonStandard,1,1,203324)
CheckBitField(struct SSLCipherSuiteInfoStr,reservedBits,29,1,203325)
#endif

#if 1
CheckTypeSize(SSLCipherSuiteInfo,0, 35801, 1, 4.0, NULL, 35799, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in nss3/sslt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
