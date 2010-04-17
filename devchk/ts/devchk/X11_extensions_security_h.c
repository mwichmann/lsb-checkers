/*
 * Test of X11/extensions/security.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <stdio.h>
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xauth.h>
#include <X11/Xlib.h>

#include "X11/extensions/security.h"



#ifdef TET_TEST
void X11_extensions_security_h()
{
#else
int X11_extensions_security_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/security.h\n");
#endif

printf("Checking data structures in X11/extensions/security.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XSecurityNumberEvents
	CompareConstant(XSecurityNumberEvents,1,2390,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityNumberEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityNumberErrors
	CompareConstant(XSecurityNumberErrors,2,2391,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityNumberErrors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityBadAuthorization
	CompareConstant(XSecurityBadAuthorization,0,2392,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityBadAuthorization\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityBadAuthorizationProtocol
	CompareConstant(XSecurityBadAuthorizationProtocol,1,2393,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityBadAuthorizationProtocol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityClientTrusted
	CompareConstant(XSecurityClientTrusted,0,2394,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityClientTrusted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityClientUntrusted
	CompareConstant(XSecurityClientUntrusted,1,2395,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityClientUntrusted\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityTimeout
	CompareConstant(XSecurityTimeout,(1<<0),2396,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityTimeout\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityTrustLevel
	CompareConstant(XSecurityTrustLevel,(1<<1),2397,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityTrustLevel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityGroup
	CompareConstant(XSecurityGroup,(1<<2),2398,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityEventMask
	CompareConstant(XSecurityEventMask,(1<<3),2399,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityEventMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityAllAuthorizationAttributes
	CompareConstant(XSecurityAllAuthorizationAttributes,(XSecurityTimeout | XSecurityTrustLevel | XSecurityGroup | XSecurityEventMask),2400,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityAllAuthorizationAttributes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityAuthorizationRevokedMask
	CompareConstant(XSecurityAuthorizationRevokedMask,(1<<0),2401,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityAuthorizationRevokedMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityAllEventMasks
	CompareConstant(XSecurityAllEventMasks,XSecurityAuthorizationRevokedMask,2402,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityAllEventMasks\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityAuthorizationRevoked
	CompareConstant(XSecurityAuthorizationRevoked,0,2403,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityAuthorizationRevoked\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityAuthorizationName
	CompareConstant(XSecurityAuthorizationName,"XC-QUERY-SECURITY-1",2404,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityAuthorizationName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSecurityAuthorizationNameLen
	CompareConstant(XSecurityAuthorizationNameLen,19,2405,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSecurityAuthorizationNameLen\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(XSecurityAuthorization,8, 8596, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSecurityAuthorization,4, 8596, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSecurityAuthorization,4, 8596, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(XSecurityAuthorization,8, 8596, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(XSecurityAuthorization,4, 8596, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of XSecurityAuthorization (8596)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,8596,0);
#endif

#if defined __s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 12, 1.3, NULL, 8597, NULL)
#elif defined __x86_64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 11, 2.0, NULL, 8597, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 10, 1.3, NULL, 8597, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 9, 2.0, NULL, 8597, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 6, 1.2, NULL, 8597, NULL)
#elif defined __ia64__
CheckTypeSize(XSecurityAuthorizationAttributes,24, 8598, 3, 1.3, NULL, 8597, NULL)
#elif defined __i386__
CheckTypeSize(XSecurityAuthorizationAttributes,16, 8598, 2, 1.2, NULL, 8597, NULL)
#else
Msg("Find size of XSecurityAuthorizationAttributes (8598)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8597,NULL);\n",architecture,8598,0);
#endif

#if defined __s390x__
CheckTypeSize(XSecurityAuthorizationRevokedEvent,40, 8602, 12, 1.3, NULL, 8601, NULL)
#elif defined __x86_64__
CheckTypeSize(XSecurityAuthorizationRevokedEvent,40, 8602, 11, 2.0, NULL, 8601, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSecurityAuthorizationRevokedEvent,20, 8602, 10, 1.3, NULL, 8601, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSecurityAuthorizationRevokedEvent,40, 8602, 9, 2.0, NULL, 8601, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSecurityAuthorizationRevokedEvent,20, 8602, 6, 1.2, NULL, 8601, NULL)
#elif defined __ia64__
CheckTypeSize(XSecurityAuthorizationRevokedEvent,40, 8602, 3, 1.3, NULL, 8601, NULL)
#elif defined __i386__
CheckTypeSize(XSecurityAuthorizationRevokedEvent,20, 8602, 2, 1.2, NULL, 8601, NULL)
#else
Msg("Find size of XSecurityAuthorizationRevokedEvent (8602)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8601, NULL);\n",architecture,8602,0);
#endif

extern Xauth * XSecurityAllocXauth_db(void);
CheckInterfacedef(XSecurityAllocXauth,XSecurityAllocXauth_db);
extern void XSecurityFreeXauth_db(Xauth *);
CheckInterfacedef(XSecurityFreeXauth,XSecurityFreeXauth_db);
extern Xauth * XSecurityGenerateAuthorization_db(Display *, Xauth *, unsigned long int, XSecurityAuthorizationAttributes *, XSecurityAuthorization *);
CheckInterfacedef(XSecurityGenerateAuthorization,XSecurityGenerateAuthorization_db);
extern int XSecurityQueryExtension_db(Display *, int *, int *);
CheckInterfacedef(XSecurityQueryExtension,XSecurityQueryExtension_db);
extern int XSecurityRevokeAuthorization_db(Display *, XSecurityAuthorization);
CheckInterfacedef(XSecurityRevokeAuthorization,XSecurityRevokeAuthorization_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/security.h\n\n",pcnt,cnt);
return cnt;
#endif

}
