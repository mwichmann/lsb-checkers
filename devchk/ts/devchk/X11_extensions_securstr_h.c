/*
 * Test of X11/extensions/securstr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <X11/X.h>
#include <X11/Xauth.h>
#include <X11/Xlib.h>
#include <X11/Xmd.h>
#include "X11/extensions/securstr.h"



#ifdef TET_TEST
void X11_extensions_securstr_h()
{
#else
int X11_extensions_securstr_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/securstr.h\n");
#endif

printf("Checking data structures in X11/extensions/securstr.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SECURITY_EXTENSION_NAME
	CompareStringConstant(SECURITY_EXTENSION_NAME,"SECURITY",19720,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECURITY_EXTENSION_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECURITY_MAJOR_VERSION
	CompareConstant(SECURITY_MAJOR_VERSION,1,19721,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECURITY_MAJOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SECURITY_MINOR_VERSION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X_SecurityQueryVersion */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SecurityGenerateAuthorization
	CompareConstant(X_SecurityGenerateAuthorization,1,19724,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_SecurityGenerateAuthorization\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SecurityRevokeAuthorization
	CompareConstant(X_SecurityRevokeAuthorization,2,19725,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_SecurityRevokeAuthorization\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSecurityQueryVersionReq
	CompareConstant(sz_xSecurityQueryVersionReq,8,19726,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSecurityQueryVersionReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSecurityQueryVersionReply
	CompareConstant(sz_xSecurityQueryVersionReply,32,19727,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSecurityQueryVersionReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSecurityGenerateAuthorizationReq
	CompareConstant(sz_xSecurityGenerateAuthorizationReq,12,19728,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSecurityGenerateAuthorizationReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSecurityGenerateAuthorizationReply
	CompareConstant(sz_xSecurityGenerateAuthorizationReply,32,19729,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSecurityGenerateAuthorizationReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSecurityRevokeAuthorizationReq
	CompareConstant(sz_xSecurityRevokeAuthorizationReq,8,19730,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSecurityRevokeAuthorizationReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSecurityAuthorizationRevokedEvent
	CompareConstant(sz_xSecurityAuthorizationRevokedEvent,32,19731,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSecurityAuthorizationRevokedEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _SECURSTR_H
Msg( "Error: Constant not found: _SECURSTR_H\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/extensions/securstr.h depends on X11/extensions/security.h */
#endif

#if 1
CheckTypeSize(xSecurityQueryVersionReq,0, 39733, 1, 4.0, NULL, 39732, NULL)
#endif

#if 1
CheckTypeSize(xSecurityQueryVersionReply,0, 39735, 1, 4.0, NULL, 39734, NULL)
#endif

#if 1
CheckTypeSize(xSecurityGenerateAuthorizationReq,0, 39737, 1, 4.0, NULL, 39736, NULL)
#endif

#if 1
CheckTypeSize(xSecurityGenerateAuthorizationReply,0, 39739, 1, 4.0, NULL, 39738, NULL)
#endif

#if 1
CheckTypeSize(xSecurityRevokeAuthorizationReq,0, 39741, 1, 4.0, NULL, 39740, NULL)
#endif

#if 1
CheckTypeSize(struct _xSecurityAuthorizationRevokedEvent,0, 39742, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSecurityAuthorizationRevokedEvent on All\n");
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,type,0,1,218848)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,detail,0,1,218849)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,sequenceNumber,0,1,218850)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,authId,0,1,218851)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,pad0,0,1,218852)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,pad1,0,1,218853)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,pad2,0,1,218854)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,pad3,0,1,218855)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,pad4,0,1,218856)
CheckOffset(struct _xSecurityAuthorizationRevokedEvent,pad5,0,1,218857)
#endif

#if 1
CheckTypeSize(xSecurityAuthorizationRevokedEvent,0, 39743, 1, 4.0, NULL, 39742, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/securstr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
