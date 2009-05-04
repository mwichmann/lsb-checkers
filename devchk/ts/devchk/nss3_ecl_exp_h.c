/*
 * Test of nss3/ecl-exp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/ecl-exp.h"



#ifdef TET_TEST
void nss3_ecl_exp_h()
{
#else
int nss3_ecl_exp_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/ecl-exp.h\n");
#endif

printf("Checking data structures in nss3/ecl-exp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_X9_62_PRIME_192V1
	CompareConstant(ECCurve_X9_62_PRIME_192V1,ECCurve_NIST_P192,16164,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_X9_62_PRIME_192V1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_X9_62_PRIME_256V1
	CompareConstant(ECCurve_X9_62_PRIME_256V1,ECCurve_NIST_P256,16165,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_X9_62_PRIME_256V1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_PRIME_192R1
	CompareConstant(ECCurve_SECG_PRIME_192R1,ECCurve_NIST_P192,16166,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_PRIME_192R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_PRIME_224R1
	CompareConstant(ECCurve_SECG_PRIME_224R1,ECCurve_NIST_P224,16167,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_PRIME_224R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_PRIME_256R1
	CompareConstant(ECCurve_SECG_PRIME_256R1,ECCurve_NIST_P256,16168,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_PRIME_256R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_PRIME_384R1
	CompareConstant(ECCurve_SECG_PRIME_384R1,ECCurve_NIST_P384,16169,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_PRIME_384R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_PRIME_521R1
	CompareConstant(ECCurve_SECG_PRIME_521R1,ECCurve_NIST_P521,16170,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_PRIME_521R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_163K1
	CompareConstant(ECCurve_SECG_CHAR2_163K1,ECCurve_NIST_K163,16171,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_163K1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_163R2
	CompareConstant(ECCurve_SECG_CHAR2_163R2,ECCurve_NIST_B163,16172,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_163R2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_233K1
	CompareConstant(ECCurve_SECG_CHAR2_233K1,ECCurve_NIST_K233,16173,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_233K1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_233R1
	CompareConstant(ECCurve_SECG_CHAR2_233R1,ECCurve_NIST_B233,16174,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_233R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_283K1
	CompareConstant(ECCurve_SECG_CHAR2_283K1,ECCurve_NIST_K283,16175,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_283K1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_283R1
	CompareConstant(ECCurve_SECG_CHAR2_283R1,ECCurve_NIST_B283,16176,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_283R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_409K1
	CompareConstant(ECCurve_SECG_CHAR2_409K1,ECCurve_NIST_K409,16177,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_409K1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_409R1
	CompareConstant(ECCurve_SECG_CHAR2_409R1,ECCurve_NIST_B409,16178,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_409R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_571K1
	CompareConstant(ECCurve_SECG_CHAR2_571K1,ECCurve_NIST_K571,16179,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_571K1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_SECG_CHAR2_571R1
	CompareConstant(ECCurve_SECG_CHAR2_571R1,ECCurve_NIST_B571,16180,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_SECG_CHAR2_571R1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_3
	CompareConstant(ECCurve_WTLS_3,ECCurve_NIST_K163,16181,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_4
	CompareConstant(ECCurve_WTLS_4,ECCurve_SECG_CHAR2_113R1,16182,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_5
	CompareConstant(ECCurve_WTLS_5,ECCurve_X9_62_CHAR2_PNB163V1,16183,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_6
	CompareConstant(ECCurve_WTLS_6,ECCurve_SECG_PRIME_112R1,16184,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_7
	CompareConstant(ECCurve_WTLS_7,ECCurve_SECG_PRIME_160R1,16185,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_10
	CompareConstant(ECCurve_WTLS_10,ECCurve_NIST_K233,16186,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_11
	CompareConstant(ECCurve_WTLS_11,ECCurve_NIST_B233,16187,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_11\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ECCurve_WTLS_12
	CompareConstant(ECCurve_WTLS_12,ECCurve_NIST_P224,16188,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ECCurve_WTLS_12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef __ecl_exp_h_
Msg( "Error: Constant not found: __ecl_exp_h_\n");
cnt++;
#endif

#endif

#if 1
CheckEnum("ECField_GFp",ECField_GFp,0,213273)
CheckEnum("ECField_GF2m",ECField_GF2m,(0) + 1,213274)
#endif

#if 1
CheckTypeSize(struct ECCurveParamsStr,0, 36122, 1, , NULL, 0, NULL)
Msg("Missing member data for ECCurveParamsStr on All\n");
CheckOffset(struct ECCurveParamsStr,text,0,1,213263)
CheckOffset(struct ECCurveParamsStr,field,0,1,213264)
CheckOffset(struct ECCurveParamsStr,size,0,1,213265)
CheckOffset(struct ECCurveParamsStr,irr,0,1,213266)
CheckOffset(struct ECCurveParamsStr,curvea,0,1,213267)
CheckOffset(struct ECCurveParamsStr,curveb,0,1,213268)
CheckOffset(struct ECCurveParamsStr,genx,0,1,213269)
CheckOffset(struct ECCurveParamsStr,geny,0,1,213270)
CheckOffset(struct ECCurveParamsStr,order,0,1,213271)
CheckOffset(struct ECCurveParamsStr,cofactor,0,1,213272)
#endif

#if 1
CheckTypeSize(ECCurveParams,0, 36123, 1, 4.0, NULL, 36122, NULL)
#endif

#if 1
CheckEnum("ECCurve_noName",ECCurve_noName,0,213145)
CheckEnum("ECCurve_NIST_P192",ECCurve_NIST_P192,(0) + 1,213146)
CheckEnum("ECCurve_NIST_P224",ECCurve_NIST_P224,((0) + 1) + 1,213147)
CheckEnum("ECCurve_NIST_P256",ECCurve_NIST_P256,(((0) + 1) + 1) + 1,213148)
CheckEnum("ECCurve_NIST_P384",ECCurve_NIST_P384,((((0) + 1) + 1) + 1) + 1,213149)
CheckEnum("ECCurve_NIST_P521",ECCurve_NIST_P521,(((((0) + 1) + 1) + 1) + 1) + 1,213150)
CheckEnum("ECCurve_NIST_K163",ECCurve_NIST_K163,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,213151)
CheckEnum("ECCurve_NIST_B163",ECCurve_NIST_B163,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213152)
CheckEnum("ECCurve_NIST_K233",ECCurve_NIST_K233,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213153)
CheckEnum("ECCurve_NIST_B233",ECCurve_NIST_B233,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213154)
CheckEnum("ECCurve_NIST_K283",ECCurve_NIST_K283,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213155)
CheckEnum("ECCurve_NIST_B283",ECCurve_NIST_B283,(((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213156)
CheckEnum("ECCurve_NIST_K409",ECCurve_NIST_K409,((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213157)
CheckEnum("ECCurve_NIST_B409",ECCurve_NIST_B409,(((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213158)
CheckEnum("ECCurve_NIST_K571",ECCurve_NIST_K571,((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213159)
CheckEnum("ECCurve_NIST_B571",ECCurve_NIST_B571,(((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213160)
CheckEnum("ECCurve_X9_62_PRIME_192V2",ECCurve_X9_62_PRIME_192V2,((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213161)
CheckEnum("ECCurve_X9_62_PRIME_192V3",ECCurve_X9_62_PRIME_192V3,(((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213162)
CheckEnum("ECCurve_X9_62_PRIME_239V1",ECCurve_X9_62_PRIME_239V1,((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213163)
CheckEnum("ECCurve_X9_62_PRIME_239V2",ECCurve_X9_62_PRIME_239V2,(((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213164)
CheckEnum("ECCurve_X9_62_PRIME_239V3",ECCurve_X9_62_PRIME_239V3,((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213165)
CheckEnum("ECCurve_X9_62_CHAR2_PNB163V1",ECCurve_X9_62_CHAR2_PNB163V1,(((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213166)
CheckEnum("ECCurve_X9_62_CHAR2_PNB163V2",ECCurve_X9_62_CHAR2_PNB163V2,((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213167)
CheckEnum("ECCurve_X9_62_CHAR2_PNB163V3",ECCurve_X9_62_CHAR2_PNB163V3,(((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213168)
CheckEnum("ECCurve_X9_62_CHAR2_PNB176V1",ECCurve_X9_62_CHAR2_PNB176V1,((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213169)
CheckEnum("ECCurve_X9_62_CHAR2_TNB191V1",ECCurve_X9_62_CHAR2_TNB191V1,(((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213170)
CheckEnum("ECCurve_X9_62_CHAR2_TNB191V2",ECCurve_X9_62_CHAR2_TNB191V2,((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213171)
CheckEnum("ECCurve_X9_62_CHAR2_TNB191V3",ECCurve_X9_62_CHAR2_TNB191V3,(((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213172)
CheckEnum("ECCurve_X9_62_CHAR2_PNB208W1",ECCurve_X9_62_CHAR2_PNB208W1,((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213173)
CheckEnum("ECCurve_X9_62_CHAR2_TNB239V1",ECCurve_X9_62_CHAR2_TNB239V1,(((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213174)
CheckEnum("ECCurve_X9_62_CHAR2_TNB239V2",ECCurve_X9_62_CHAR2_TNB239V2,((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213175)
CheckEnum("ECCurve_X9_62_CHAR2_TNB239V3",ECCurve_X9_62_CHAR2_TNB239V3,(((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213176)
CheckEnum("ECCurve_X9_62_CHAR2_PNB272W1",ECCurve_X9_62_CHAR2_PNB272W1,((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213177)
CheckEnum("ECCurve_X9_62_CHAR2_PNB304W1",ECCurve_X9_62_CHAR2_PNB304W1,(((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213178)
CheckEnum("ECCurve_X9_62_CHAR2_TNB359V1",ECCurve_X9_62_CHAR2_TNB359V1,((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213179)
CheckEnum("ECCurve_X9_62_CHAR2_PNB368W1",ECCurve_X9_62_CHAR2_PNB368W1,(((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213180)
CheckEnum("ECCurve_X9_62_CHAR2_TNB431R1",ECCurve_X9_62_CHAR2_TNB431R1,((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213181)
CheckEnum("ECCurve_SECG_PRIME_112R1",ECCurve_SECG_PRIME_112R1,(((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213182)
CheckEnum("ECCurve_SECG_PRIME_112R2",ECCurve_SECG_PRIME_112R2,((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213183)
CheckEnum("ECCurve_SECG_PRIME_128R1",ECCurve_SECG_PRIME_128R1,(((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213184)
CheckEnum("ECCurve_SECG_PRIME_128R2",ECCurve_SECG_PRIME_128R2,((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213185)
CheckEnum("ECCurve_SECG_PRIME_160K1",ECCurve_SECG_PRIME_160K1,(((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213186)
CheckEnum("ECCurve_SECG_PRIME_160R1",ECCurve_SECG_PRIME_160R1,((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213187)
CheckEnum("ECCurve_SECG_PRIME_160R2",ECCurve_SECG_PRIME_160R2,(((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213188)
CheckEnum("ECCurve_SECG_PRIME_192K1",ECCurve_SECG_PRIME_192K1,((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213189)
CheckEnum("ECCurve_SECG_PRIME_224K1",ECCurve_SECG_PRIME_224K1,(((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213190)
CheckEnum("ECCurve_SECG_PRIME_256K1",ECCurve_SECG_PRIME_256K1,((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213191)
CheckEnum("ECCurve_SECG_CHAR2_113R1",ECCurve_SECG_CHAR2_113R1,(((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213192)
CheckEnum("ECCurve_SECG_CHAR2_113R2",ECCurve_SECG_CHAR2_113R2,((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213193)
CheckEnum("ECCurve_SECG_CHAR2_131R1",ECCurve_SECG_CHAR2_131R1,(((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213194)
CheckEnum("ECCurve_SECG_CHAR2_131R2",ECCurve_SECG_CHAR2_131R2,((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213195)
CheckEnum("ECCurve_SECG_CHAR2_163R1",ECCurve_SECG_CHAR2_163R1,(((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213196)
CheckEnum("ECCurve_SECG_CHAR2_193R1",ECCurve_SECG_CHAR2_193R1,((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213197)
CheckEnum("ECCurve_SECG_CHAR2_193R2",ECCurve_SECG_CHAR2_193R2,(((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213198)
CheckEnum("ECCurve_SECG_CHAR2_239K1",ECCurve_SECG_CHAR2_239K1,((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213199)
CheckEnum("ECCurve_WTLS_1",ECCurve_WTLS_1,(((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213200)
CheckEnum("ECCurve_WTLS_8",ECCurve_WTLS_8,((((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213201)
CheckEnum("ECCurve_WTLS_9",ECCurve_WTLS_9,(((((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213202)
CheckEnum("ECCurve_pastLastCurve",ECCurve_pastLastCurve,((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,213203)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/ecl-exp.h\n\n",pcnt,cnt);
return cnt;
#endif

}
