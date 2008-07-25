/*
 * Test of nss3/sslproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/sslproto.h"



#ifdef TET_TEST
void nss3_sslproto_h()
{
#else
int nss3_sslproto_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/sslproto.h\n");
#endif

printf("Checking data structures in nss3/sslproto.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for __sslproto_h_ */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_LIBRARY_VERSION_2
	CompareConstant(SSL_LIBRARY_VERSION_2,0x0002,15899,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_LIBRARY_VERSION_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_LIBRARY_VERSION_3_0
	CompareConstant(SSL_LIBRARY_VERSION_3_0,0x0300,15900,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_LIBRARY_VERSION_3_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_LIBRARY_VERSION_3_1_TLS
	CompareConstant(SSL_LIBRARY_VERSION_3_1_TLS,0x0301,15901,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_LIBRARY_VERSION_3_1_TLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_ERROR_HBYTES
	CompareConstant(SSL_HL_ERROR_HBYTES,3,15902,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_ERROR_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_CLIENT_HELLO_HBYTES
	CompareConstant(SSL_HL_CLIENT_HELLO_HBYTES,9,15903,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_CLIENT_HELLO_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_CLIENT_MASTER_KEY_HBYTES
	CompareConstant(SSL_HL_CLIENT_MASTER_KEY_HBYTES,10,15904,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_CLIENT_MASTER_KEY_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_CLIENT_FINISHED_HBYTES
	CompareConstant(SSL_HL_CLIENT_FINISHED_HBYTES,1,15905,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_CLIENT_FINISHED_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_SERVER_HELLO_HBYTES
	CompareConstant(SSL_HL_SERVER_HELLO_HBYTES,11,15906,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_SERVER_HELLO_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_SERVER_VERIFY_HBYTES
	CompareConstant(SSL_HL_SERVER_VERIFY_HBYTES,1,15907,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_SERVER_VERIFY_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_SERVER_FINISHED_HBYTES
	CompareConstant(SSL_HL_SERVER_FINISHED_HBYTES,1,15908,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_SERVER_FINISHED_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_REQUEST_CERTIFICATE_HBYTES
	CompareConstant(SSL_HL_REQUEST_CERTIFICATE_HBYTES,2,15909,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_REQUEST_CERTIFICATE_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_HL_CLIENT_CERTIFICATE_HBYTES
	CompareConstant(SSL_HL_CLIENT_CERTIFICATE_HBYTES,6,15910,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_HL_CLIENT_CERTIFICATE_HBYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_ERROR
	CompareConstant(SSL_MT_ERROR,0,15911,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_CLIENT_HELLO
	CompareConstant(SSL_MT_CLIENT_HELLO,1,15912,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_CLIENT_HELLO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_CLIENT_MASTER_KEY
	CompareConstant(SSL_MT_CLIENT_MASTER_KEY,2,15913,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_CLIENT_MASTER_KEY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_CLIENT_FINISHED
	CompareConstant(SSL_MT_CLIENT_FINISHED,3,15914,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_CLIENT_FINISHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_SERVER_HELLO
	CompareConstant(SSL_MT_SERVER_HELLO,4,15915,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_SERVER_HELLO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_SERVER_VERIFY
	CompareConstant(SSL_MT_SERVER_VERIFY,5,15916,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_SERVER_VERIFY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_SERVER_FINISHED
	CompareConstant(SSL_MT_SERVER_FINISHED,6,15917,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_SERVER_FINISHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_REQUEST_CERTIFICATE
	CompareConstant(SSL_MT_REQUEST_CERTIFICATE,7,15918,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_REQUEST_CERTIFICATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_MT_CLIENT_CERTIFICATE
	CompareConstant(SSL_MT_CLIENT_CERTIFICATE,8,15919,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_MT_CLIENT_CERTIFICATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CT_X509_CERTIFICATE
	CompareConstant(SSL_CT_X509_CERTIFICATE,0x01,15920,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CT_X509_CERTIFICATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_AT_MD5_WITH_RSA_ENCRYPTION
	CompareConstant(SSL_AT_MD5_WITH_RSA_ENCRYPTION,0x01,15921,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_AT_MD5_WITH_RSA_ENCRYPTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_PE_NO_CYPHERS
	CompareConstant(SSL_PE_NO_CYPHERS,0x0001,15922,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_PE_NO_CYPHERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_PE_NO_CERTIFICATE
	CompareConstant(SSL_PE_NO_CERTIFICATE,0x0002,15923,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_PE_NO_CERTIFICATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_PE_BAD_CERTIFICATE
	CompareConstant(SSL_PE_BAD_CERTIFICATE,0x0004,15924,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_PE_BAD_CERTIFICATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_PE_UNSUPPORTED_CERTIFICATE_TYPE
	CompareConstant(SSL_PE_UNSUPPORTED_CERTIFICATE_TYPE,0x0006,15925,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_PE_UNSUPPORTED_CERTIFICATE_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CK_RC4_128_WITH_MD5
	CompareConstant(SSL_CK_RC4_128_WITH_MD5,0x01,15926,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CK_RC4_128_WITH_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CK_RC4_128_EXPORT40_WITH_MD5
	CompareConstant(SSL_CK_RC4_128_EXPORT40_WITH_MD5,0x02,15927,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CK_RC4_128_EXPORT40_WITH_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CK_RC2_128_CBC_WITH_MD5
	CompareConstant(SSL_CK_RC2_128_CBC_WITH_MD5,0x03,15928,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CK_RC2_128_CBC_WITH_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CK_RC2_128_CBC_EXPORT40_WITH_MD5
	CompareConstant(SSL_CK_RC2_128_CBC_EXPORT40_WITH_MD5,0x04,15929,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CK_RC2_128_CBC_EXPORT40_WITH_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CK_IDEA_128_CBC_WITH_MD5
	CompareConstant(SSL_CK_IDEA_128_CBC_WITH_MD5,0x05,15930,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CK_IDEA_128_CBC_WITH_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CK_DES_64_CBC_WITH_MD5
	CompareConstant(SSL_CK_DES_64_CBC_WITH_MD5,0x06,15931,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CK_DES_64_CBC_WITH_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_CK_DES_192_EDE3_CBC_WITH_MD5
	CompareConstant(SSL_CK_DES_192_EDE3_CBC_WITH_MD5,0x07,15932,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_CK_DES_192_EDE3_CBC_WITH_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_NULL_WITH_NULL_NULL
	CompareConstant(SSL_NULL_WITH_NULL_NULL,0x0000,15933,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_NULL_WITH_NULL_NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_WITH_NULL_MD5
	CompareConstant(SSL_RSA_WITH_NULL_MD5,0x0001,15934,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_WITH_NULL_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_WITH_NULL_SHA
	CompareConstant(SSL_RSA_WITH_NULL_SHA,0x0002,15935,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_WITH_NULL_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_EXPORT_WITH_RC4_40_MD5
	CompareConstant(SSL_RSA_EXPORT_WITH_RC4_40_MD5,0x0003,15936,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_EXPORT_WITH_RC4_40_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_WITH_RC4_128_MD5
	CompareConstant(SSL_RSA_WITH_RC4_128_MD5,0x0004,15937,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_WITH_RC4_128_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_WITH_RC4_128_SHA
	CompareConstant(SSL_RSA_WITH_RC4_128_SHA,0x0005,15938,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_EXPORT_WITH_RC2_CBC_40_MD5
	CompareConstant(SSL_RSA_EXPORT_WITH_RC2_CBC_40_MD5,0x0006,15939,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_EXPORT_WITH_RC2_CBC_40_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_WITH_IDEA_CBC_SHA
	CompareConstant(SSL_RSA_WITH_IDEA_CBC_SHA,0x0007,15940,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_WITH_IDEA_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_EXPORT_WITH_DES40_CBC_SHA
	CompareConstant(SSL_RSA_EXPORT_WITH_DES40_CBC_SHA,0x0008,15941,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_EXPORT_WITH_DES40_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_WITH_DES_CBC_SHA
	CompareConstant(SSL_RSA_WITH_DES_CBC_SHA,0x0009,15942,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_RSA_WITH_3DES_EDE_CBC_SHA,0x000a,15943,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_DSS_EXPORT_WITH_DES40_CBC_SHA
	CompareConstant(SSL_DH_DSS_EXPORT_WITH_DES40_CBC_SHA,0x000b,15944,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_DSS_EXPORT_WITH_DES40_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_DSS_WITH_DES_CBC_SHA
	CompareConstant(SSL_DH_DSS_WITH_DES_CBC_SHA,0x000c,15945,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_DSS_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_DSS_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_DH_DSS_WITH_3DES_EDE_CBC_SHA,0x000d,15946,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_DSS_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_RSA_EXPORT_WITH_DES40_CBC_SHA
	CompareConstant(SSL_DH_RSA_EXPORT_WITH_DES40_CBC_SHA,0x000e,15947,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_RSA_EXPORT_WITH_DES40_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_RSA_WITH_DES_CBC_SHA
	CompareConstant(SSL_DH_RSA_WITH_DES_CBC_SHA,0x000f,15948,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_RSA_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_RSA_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_DH_RSA_WITH_3DES_EDE_CBC_SHA,0x0010,15949,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_RSA_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA
	CompareConstant(SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA,0x0011,15950,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DHE_DSS_WITH_DES_CBC_SHA
	CompareConstant(SSL_DHE_DSS_WITH_DES_CBC_SHA,0x0012,15951,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DHE_DSS_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA,0x0013,15952,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA
	CompareConstant(SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA,0x0014,15953,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DHE_RSA_WITH_DES_CBC_SHA
	CompareConstant(SSL_DHE_RSA_WITH_DES_CBC_SHA,0x0015,15954,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DHE_RSA_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA,0x0016,15955,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_ANON_EXPORT_WITH_RC4_40_MD5
	CompareConstant(SSL_DH_ANON_EXPORT_WITH_RC4_40_MD5,0x0017,15956,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_ANON_EXPORT_WITH_RC4_40_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_ANON_WITH_RC4_128_MD5
	CompareConstant(SSL_DH_ANON_WITH_RC4_128_MD5,0x0018,15957,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_ANON_WITH_RC4_128_MD5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_ANON_EXPORT_WITH_DES40_CBC_SHA
	CompareConstant(SSL_DH_ANON_EXPORT_WITH_DES40_CBC_SHA,0x0019,15958,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_ANON_EXPORT_WITH_DES40_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_ANON_WITH_DES_CBC_SHA
	CompareConstant(SSL_DH_ANON_WITH_DES_CBC_SHA,0x001a,15959,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_ANON_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_DH_ANON_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_DH_ANON_WITH_3DES_EDE_CBC_SHA,0x001b,15960,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_DH_ANON_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_FORTEZZA_DMS_WITH_NULL_SHA
	CompareConstant(SSL_FORTEZZA_DMS_WITH_NULL_SHA,0x001c,15961,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_FORTEZZA_DMS_WITH_NULL_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_FORTEZZA_DMS_WITH_FORTEZZA_CBC_SHA
	CompareConstant(SSL_FORTEZZA_DMS_WITH_FORTEZZA_CBC_SHA,0x001d,15962,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_FORTEZZA_DMS_WITH_FORTEZZA_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_FORTEZZA_DMS_WITH_RC4_128_SHA
	CompareConstant(SSL_FORTEZZA_DMS_WITH_RC4_128_SHA,0x001e,15963,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_FORTEZZA_DMS_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_RSA_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_RSA_WITH_AES_128_CBC_SHA,0x002F,15964,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_RSA_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DH_DSS_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_DH_DSS_WITH_AES_128_CBC_SHA,0x0030,15965,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DH_DSS_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DH_RSA_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_DH_RSA_WITH_AES_128_CBC_SHA,0x0031,15966,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DH_RSA_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DHE_DSS_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_DHE_DSS_WITH_AES_128_CBC_SHA,0x0032,15967,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DHE_DSS_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DHE_RSA_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_DHE_RSA_WITH_AES_128_CBC_SHA,0x0033,15968,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DHE_RSA_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DH_ANON_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_DH_ANON_WITH_AES_128_CBC_SHA,0x0034,15969,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DH_ANON_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_RSA_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_RSA_WITH_AES_256_CBC_SHA,0x0035,15970,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_RSA_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DH_DSS_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_DH_DSS_WITH_AES_256_CBC_SHA,0x0036,15971,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DH_DSS_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DH_RSA_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_DH_RSA_WITH_AES_256_CBC_SHA,0x0037,15972,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DH_RSA_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DHE_DSS_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_DHE_DSS_WITH_AES_256_CBC_SHA,0x0038,15973,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DHE_DSS_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DHE_RSA_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_DHE_RSA_WITH_AES_256_CBC_SHA,0x0039,15974,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DHE_RSA_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DH_ANON_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_DH_ANON_WITH_AES_256_CBC_SHA,0x003A,15975,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DH_ANON_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_RSA_EXPORT1024_WITH_DES_CBC_SHA
	CompareConstant(TLS_RSA_EXPORT1024_WITH_DES_CBC_SHA,0x0062,15976,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_RSA_EXPORT1024_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_RSA_EXPORT1024_WITH_RC4_56_SHA
	CompareConstant(TLS_RSA_EXPORT1024_WITH_RC4_56_SHA,0x0064,15977,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_RSA_EXPORT1024_WITH_RC4_56_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DHE_DSS_EXPORT1024_WITH_DES_CBC_SHA
	CompareConstant(TLS_DHE_DSS_EXPORT1024_WITH_DES_CBC_SHA,0x0063,15978,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DHE_DSS_EXPORT1024_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DHE_DSS_EXPORT1024_WITH_RC4_56_SHA
	CompareConstant(TLS_DHE_DSS_EXPORT1024_WITH_RC4_56_SHA,0x0065,15979,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DHE_DSS_EXPORT1024_WITH_RC4_56_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_DHE_DSS_WITH_RC4_128_SHA
	CompareConstant(TLS_DHE_DSS_WITH_RC4_128_SHA,0x0066,15980,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_DHE_DSS_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_ECDSA_WITH_NULL_SHA
	CompareConstant(TLS_ECDH_ECDSA_WITH_NULL_SHA,0xC001,15981,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_ECDSA_WITH_NULL_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_ECDSA_WITH_RC4_128_SHA
	CompareConstant(TLS_ECDH_ECDSA_WITH_RC4_128_SHA,0xC002,15982,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_ECDSA_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA
	CompareConstant(TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA,0xC003,15983,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA,0xC004,15984,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA,0xC005,15985,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_ECDSA_WITH_NULL_SHA
	CompareConstant(TLS_ECDHE_ECDSA_WITH_NULL_SHA,0xC006,15986,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_ECDSA_WITH_NULL_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_ECDSA_WITH_RC4_128_SHA
	CompareConstant(TLS_ECDHE_ECDSA_WITH_RC4_128_SHA,0xC007,15987,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_ECDSA_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA
	CompareConstant(TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA,0xC008,15988,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA,0xC009,15989,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA,0xC00A,15990,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_RSA_WITH_NULL_SHA
	CompareConstant(TLS_ECDH_RSA_WITH_NULL_SHA,0xC00B,15991,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_RSA_WITH_NULL_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_RSA_WITH_RC4_128_SHA
	CompareConstant(TLS_ECDH_RSA_WITH_RC4_128_SHA,0xC00C,15992,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_RSA_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA
	CompareConstant(TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA,0xC00D,15993,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_RSA_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_ECDH_RSA_WITH_AES_128_CBC_SHA,0xC00E,15994,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_RSA_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_RSA_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_ECDH_RSA_WITH_AES_256_CBC_SHA,0xC00F,15995,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_RSA_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_RSA_WITH_NULL_SHA
	CompareConstant(TLS_ECDHE_RSA_WITH_NULL_SHA,0xC010,15996,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_RSA_WITH_NULL_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_RSA_WITH_RC4_128_SHA
	CompareConstant(TLS_ECDHE_RSA_WITH_RC4_128_SHA,0xC011,15997,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_RSA_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA
	CompareConstant(TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA,0xC012,15998,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA,0xC013,15999,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA,0xC014,16000,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_anon_WITH_NULL_SHA
	CompareConstant(TLS_ECDH_anon_WITH_NULL_SHA,0xC015,16001,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_anon_WITH_NULL_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_anon_WITH_RC4_128_SHA
	CompareConstant(TLS_ECDH_anon_WITH_RC4_128_SHA,0xC016,16002,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_anon_WITH_RC4_128_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA
	CompareConstant(TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA,0xC017,16003,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_anon_WITH_AES_128_CBC_SHA
	CompareConstant(TLS_ECDH_anon_WITH_AES_128_CBC_SHA,0xC018,16004,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_anon_WITH_AES_128_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TLS_ECDH_anon_WITH_AES_256_CBC_SHA
	CompareConstant(TLS_ECDH_anon_WITH_AES_256_CBC_SHA,0xC019,16005,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TLS_ECDH_anon_WITH_AES_256_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_OLDFIPS_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_RSA_OLDFIPS_WITH_3DES_EDE_CBC_SHA,0xffe0,16006,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_OLDFIPS_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_OLDFIPS_WITH_DES_CBC_SHA
	CompareConstant(SSL_RSA_OLDFIPS_WITH_DES_CBC_SHA,0xffe1,16007,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_OLDFIPS_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_FIPS_WITH_3DES_EDE_CBC_SHA
	CompareConstant(SSL_RSA_FIPS_WITH_3DES_EDE_CBC_SHA,0xfeff,16008,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_FIPS_WITH_3DES_EDE_CBC_SHA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_RSA_FIPS_WITH_DES_CBC_SHA
	CompareConstant(SSL_RSA_FIPS_WITH_DES_CBC_SHA,0xfefe,16009,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_RSA_FIPS_WITH_DES_CBC_SHA\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/sslproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
