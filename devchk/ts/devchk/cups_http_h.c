/*
 * Test of cups/http.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "cups/http.h"



#ifdef TET_TEST
void cups_http_h()
{
#else
int cups_http_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in cups/http.h\n");
#endif

printf("Checking data structures in cups/http.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef HTTP_MAX_URI
	CompareConstant(HTTP_MAX_URI,1024,20207,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: HTTP_MAX_URI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HTTP_MAX_HOST
	CompareConstant(HTTP_MAX_HOST,256,20208,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: HTTP_MAX_HOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HTTP_MAX_BUFFER
	CompareConstant(HTTP_MAX_BUFFER,2048,20209,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: HTTP_MAX_BUFFER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HTTP_MAX_VALUE
	CompareConstant(HTTP_MAX_VALUE,256,20210,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: HTTP_MAX_VALUE\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(http_auth_t,0, 40010, 1, 4.1, NULL, 40009, NULL)
#endif

#if 1
CheckTypeSize(http_field_t,0, 40014, 1, 4.1, NULL, 40013, NULL)
#endif

#if 1
CheckTypeSize(http_uri_status_t,0, 40019, 1, 4.1, NULL, 40018, NULL)
#endif

#if 1
CheckTypeSize(http_uri_coding_t,0, 40021, 1, 4.1, NULL, 40020, NULL)
#endif

#if 1
CheckTypeSize(union _http_addr_u,0, 40023, 1, , NULL, 0, NULL)
Msg("Missing member data for _http_addr_u on All\n");
CheckOffset(union _http_addr_u,addr,0,1,219690)
CheckOffset(union _http_addr_u,ipv4,0,1,219691)
CheckOffset(union _http_addr_u,ipv6,0,1,219692)
CheckOffset(union _http_addr_u,un,0,1,219693)
CheckOffset(union _http_addr_u,pad,0,1,219694)
#endif

#if 1
CheckTypeSize(http_addr_t,0, 40024, 1, 4.1, NULL, 40023, NULL)
#endif

#if 1
CheckTypeSize(struct http_addrlist_s,0, 40026, 1, , NULL, 0, NULL)
Msg("Missing member data for http_addrlist_s on All\n");
CheckOffset(struct http_addrlist_s,next,0,1,219695)
CheckOffset(struct http_addrlist_s,addr,0,1,219696)
#endif

#if 1
CheckTypeSize(http_addrlist_t,0, 40027, 1, 4.1, NULL, 40026, NULL)
#endif

extern void httpBlocking_db(http_t *, int);
CheckInterfacedef(httpBlocking,httpBlocking_db);
extern int httpCheck_db(http_t *);
CheckInterfacedef(httpCheck,httpCheck_db);
extern void httpClearFields_db(http_t *);
CheckInterfacedef(httpClearFields,httpClearFields_db);
extern void httpClose_db(http_t *);
CheckInterfacedef(httpClose,httpClose_db);
extern http_t * httpConnect_db(const char *, int);
CheckInterfacedef(httpConnect,httpConnect_db);
extern http_t * httpConnectEncrypt_db(const char *, int, http_encryption_t);
CheckInterfacedef(httpConnectEncrypt,httpConnectEncrypt_db);
extern int httpDelete_db(http_t *, const char *);
CheckInterfacedef(httpDelete,httpDelete_db);
extern int httpEncryption_db(http_t *, http_encryption_t);
CheckInterfacedef(httpEncryption,httpEncryption_db);
extern int httpError_db(http_t *);
CheckInterfacedef(httpError,httpError_db);
extern void httpFlush_db(http_t *);
CheckInterfacedef(httpFlush,httpFlush_db);
extern int httpGet_db(http_t *, const char *);
CheckInterfacedef(httpGet,httpGet_db);
extern char * httpGets_db(char *, int, http_t *);
CheckInterfacedef(httpGets,httpGets_db);
extern const char * httpGetDateString_db(time_t);
CheckInterfacedef(httpGetDateString,httpGetDateString_db);
extern time_t httpGetDateTime_db(const char *);
CheckInterfacedef(httpGetDateTime,httpGetDateTime_db);
extern const char * httpGetField_db(http_t *, http_field_t);
CheckInterfacedef(httpGetField,httpGetField_db);
extern struct hostent * httpGetHostByName_db(const char *);
CheckInterfacedef(httpGetHostByName,httpGetHostByName_db);
extern char * httpGetSubField_db(http_t *, http_field_t, const char *, char *);
CheckInterfacedef(httpGetSubField,httpGetSubField_db);
extern int httpHead_db(http_t *, const char *);
CheckInterfacedef(httpHead,httpHead_db);
extern void httpInitialize_db(void);
CheckInterfacedef(httpInitialize,httpInitialize_db);
extern int httpOptions_db(http_t *, const char *);
CheckInterfacedef(httpOptions,httpOptions_db);
extern int httpPost_db(http_t *, const char *);
CheckInterfacedef(httpPost,httpPost_db);
extern int httpPut_db(http_t *, const char *);
CheckInterfacedef(httpPut,httpPut_db);
extern int httpReconnect_db(http_t *);
CheckInterfacedef(httpReconnect,httpReconnect_db);
extern void httpSetField_db(http_t *, http_field_t, const char *);
CheckInterfacedef(httpSetField,httpSetField_db);
extern const char * httpStatus_db(http_status_t);
CheckInterfacedef(httpStatus,httpStatus_db);
extern int httpTrace_db(http_t *, const char *);
CheckInterfacedef(httpTrace,httpTrace_db);
extern http_status_t httpUpdate_db(http_t *);
CheckInterfacedef(httpUpdate,httpUpdate_db);
extern char * httpMD5_db(const char *, const char *, const char *, char *);
CheckInterfacedef(httpMD5,httpMD5_db);
extern char * httpMD5Final_db(const char *, const char *, const char *, char *);
CheckInterfacedef(httpMD5Final,httpMD5Final_db);
extern char * httpMD5String_db(const unsigned char *, char *);
CheckInterfacedef(httpMD5String,httpMD5String_db);
extern void httpClearCookie_db(http_t *);
CheckInterfacedef(httpClearCookie,httpClearCookie_db);
extern const char * httpGetCookie_db(http_t *);
CheckInterfacedef(httpGetCookie,httpGetCookie_db);
extern void httpSetCookie_db(http_t *, const char *);
CheckInterfacedef(httpSetCookie,httpSetCookie_db);
extern int httpWait_db(http_t *, int);
CheckInterfacedef(httpWait,httpWait_db);
extern char * httpDecode64_2_db(char *, int *, const char *);
CheckInterfacedef(httpDecode64_2,httpDecode64_2_db);
extern char * httpEncode64_2_db(char *, int, const char *, int);
CheckInterfacedef(httpEncode64_2,httpEncode64_2_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cups/http.h\n\n",pcnt,cnt);
return cnt;
#endif

}
