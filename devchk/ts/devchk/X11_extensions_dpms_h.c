/*
 * Test of X11/extensions/dpms.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xfuncproto.h"
#include "X11/Xdefs.h"
#include "X11/Xlib.h"
#include "X11/extensions/dpms.h"



#ifdef TET_TEST
void X11_extensions_dpms_h()
{
#else
int X11_extensions_dpms_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/dpms.h\n");
#endif

printf("Checking data structures in X11/extensions/dpms.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef DPMSModeOn
	CompareConstant(DPMSModeOn,0,2406,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DPMSModeOn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DPMSModeStandby
	CompareConstant(DPMSModeStandby,1,2407,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DPMSModeStandby\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DPMSModeSuspend
	CompareConstant(DPMSModeSuspend,2,2408,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DPMSModeSuspend\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DPMSModeOff
	CompareConstant(DPMSModeOff,3,2409,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DPMSModeOff\n");
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
printf("%d tests passed out of %d tests in X11/extensions/dpms.h\n\n",pcnt,cnt);
return cnt;
#endif

}
