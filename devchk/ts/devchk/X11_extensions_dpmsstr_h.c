/*
 * Test of X11/extensions/dpmsstr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/dpmsstr.h"



#ifdef TET_TEST
void X11_extensions_dpmsstr_h()
{
#else
int X11_extensions_dpmsstr_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/dpmsstr.h\n");
#endif

printf("Checking data structures in X11/extensions/dpmsstr.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for X_DPMSGetVersion */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DPMSCapable
	CompareConstant(X_DPMSCapable,1,17686,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_DPMSCapable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DPMSGetTimeouts
	CompareConstant(X_DPMSGetTimeouts,2,17687,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_DPMSGetTimeouts\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DPMSSetTimeouts
	CompareConstant(X_DPMSSetTimeouts,3,17688,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_DPMSSetTimeouts\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DPMSEnable
	CompareConstant(X_DPMSEnable,4,17689,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_DPMSEnable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DPMSDisable
	CompareConstant(X_DPMSDisable,5,17690,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_DPMSDisable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DPMSForceLevel
	CompareConstant(X_DPMSForceLevel,6,17691,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_DPMSForceLevel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DPMSInfo
	CompareConstant(X_DPMSInfo,7,17692,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_DPMSInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for DPMSNumberEvents */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DPMSNumberErrors */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef DPMSMajorVersion
	CompareConstant(DPMSMajorVersion,1,17695,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DPMSMajorVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DPMSMinorVersion
	CompareConstant(DPMSMinorVersion,1,17696,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DPMSMinorVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DPMSExtensionName
	CompareStringConstant(DPMSExtensionName,"DPMS",17697,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DPMSExtensionName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSGetVersionReq
	CompareConstant(sz_xDPMSGetVersionReq,8,17698,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSGetVersionReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSGetVersionReply
	CompareConstant(sz_xDPMSGetVersionReply,32,17699,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSGetVersionReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSCapableReq
	CompareConstant(sz_xDPMSCapableReq,4,17700,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSCapableReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSCapableReply
	CompareConstant(sz_xDPMSCapableReply,32,17701,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSCapableReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSGetTimeoutsReq
	CompareConstant(sz_xDPMSGetTimeoutsReq,4,17702,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSGetTimeoutsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSGetTimeoutsReply
	CompareConstant(sz_xDPMSGetTimeoutsReply,32,17703,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSGetTimeoutsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSSetTimeoutsReq
	CompareConstant(sz_xDPMSSetTimeoutsReq,12,17704,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSSetTimeoutsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSEnableReq
	CompareConstant(sz_xDPMSEnableReq,4,17705,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSEnableReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSDisableReq
	CompareConstant(sz_xDPMSDisableReq,4,17706,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSDisableReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSForceLevelReq
	CompareConstant(sz_xDPMSForceLevelReq,8,17707,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSForceLevelReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSInfoReq
	CompareConstant(sz_xDPMSInfoReq,4,17708,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSInfoReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDPMSInfoReply
	CompareConstant(sz_xDPMSInfoReply,32,17709,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDPMSInfoReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _DPMSSTR_H_
Msg( "Error: Constant not found: _DPMSSTR_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(xDPMSGetVersionReq,0, 39709, 1, 4.0, NULL, 39708, NULL)
#endif

#if 1
CheckTypeSize(xDPMSGetVersionReply,0, 39711, 1, 4.0, NULL, 39710, NULL)
#endif

#if 1
CheckTypeSize(xDPMSCapableReq,0, 39713, 1, 4.0, NULL, 39712, NULL)
#endif

#if 1
CheckTypeSize(xDPMSCapableReply,0, 39715, 1, 4.0, NULL, 39714, NULL)
#endif

#if 1
CheckTypeSize(xDPMSGetTimeoutsReq,0, 39717, 1, 4.0, NULL, 39716, NULL)
#endif

#if 1
CheckTypeSize(xDPMSGetTimeoutsReply,0, 39719, 1, 4.0, NULL, 39718, NULL)
#endif

#if 1
CheckTypeSize(xDPMSSetTimeoutsReq,0, 39721, 1, 4.0, NULL, 39720, NULL)
#endif

#if 1
CheckTypeSize(xDPMSEnableReq,0, 39723, 1, 4.0, NULL, 39722, NULL)
#endif

#if 1
CheckTypeSize(xDPMSDisableReq,0, 39725, 1, 4.0, NULL, 39724, NULL)
#endif

#if 1
CheckTypeSize(xDPMSForceLevelReq,0, 39727, 1, 4.0, NULL, 39726, NULL)
#endif

#if 1
CheckTypeSize(xDPMSInfoReq,0, 39729, 1, 4.0, NULL, 39728, NULL)
#endif

#if 1
CheckTypeSize(xDPMSInfoReply,0, 39731, 1, 4.0, NULL, 39730, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/dpmsstr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
