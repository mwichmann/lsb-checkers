/*
 * Test of X11/Shell.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Shell.h"



#ifdef TET_TEST
void X11_Shell_h()
{
#else
int X11_Shell_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Shell.h\n");
#endif

printf("Checking data structures in X11/Shell.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for _XtShell_h */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconName
	CompareConstant(XtNiconName,((char*)&XtShellStrings[0]),4030,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconName
	CompareConstant(XtCIconName,((char*)&XtShellStrings[9]),4031,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconPixmap
	CompareConstant(XtNiconPixmap,((char*)&XtShellStrings[18]),4032,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconPixmap
	CompareConstant(XtCIconPixmap,((char*)&XtShellStrings[29]),4033,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconPixmap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconWindow
	CompareConstant(XtNiconWindow,((char*)&XtShellStrings[40]),4034,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconWindow
	CompareConstant(XtCIconWindow,((char*)&XtShellStrings[51]),4035,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconWindow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconMask
	CompareConstant(XtNiconMask,((char*)&XtShellStrings[62]),4036,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconMask
	CompareConstant(XtCIconMask,((char*)&XtShellStrings[71]),4037,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwindowGroup
	CompareConstant(XtNwindowGroup,((char*)&XtShellStrings[80]),4038,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNwindowGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWindowGroup
	CompareConstant(XtCWindowGroup,((char*)&XtShellStrings[92]),4039,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCWindowGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNvisual
	CompareConstant(XtNvisual,((char*)&XtShellStrings[104]),4040,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNvisual\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCVisual
	CompareConstant(XtCVisual,((char*)&XtShellStrings[111]),4041,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCVisual\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtitleEncoding
	CompareConstant(XtNtitleEncoding,((char*)&XtShellStrings[118]),4042,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNtitleEncoding\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTitleEncoding
	CompareConstant(XtCTitleEncoding,((char*)&XtShellStrings[132]),4043,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCTitleEncoding\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNsaveUnder
	CompareConstant(XtNsaveUnder,((char*)&XtShellStrings[146]),4044,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNsaveUnder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCSaveUnder
	CompareConstant(XtCSaveUnder,((char*)&XtShellStrings[156]),4045,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCSaveUnder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtransient
	CompareConstant(XtNtransient,((char*)&XtShellStrings[166]),4046,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNtransient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTransient
	CompareConstant(XtCTransient,((char*)&XtShellStrings[176]),4047,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCTransient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNoverrideRedirect
	CompareConstant(XtNoverrideRedirect,((char*)&XtShellStrings[186]),4048,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNoverrideRedirect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCOverrideRedirect
	CompareConstant(XtCOverrideRedirect,((char*)&XtShellStrings[203]),4049,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCOverrideRedirect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtransientFor
	CompareConstant(XtNtransientFor,((char*)&XtShellStrings[220]),4050,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNtransientFor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTransientFor
	CompareConstant(XtCTransientFor,((char*)&XtShellStrings[233]),4051,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCTransientFor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconNameEncoding
	CompareConstant(XtNiconNameEncoding,((char*)&XtShellStrings[246]),4052,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconNameEncoding\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconNameEncoding
	CompareConstant(XtCIconNameEncoding,((char*)&XtShellStrings[263]),4053,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconNameEncoding\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNallowShellResize
	CompareConstant(XtNallowShellResize,((char*)&XtShellStrings[280]),4054,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNallowShellResize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCAllowShellResize
	CompareConstant(XtCAllowShellResize,((char*)&XtShellStrings[297]),4055,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCAllowShellResize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNcreatePopupChildProc
	CompareConstant(XtNcreatePopupChildProc,((char*)&XtShellStrings[314]),4056,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNcreatePopupChildProc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCCreatePopupChildProc
	CompareConstant(XtCCreatePopupChildProc,((char*)&XtShellStrings[335]),4057,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCCreatePopupChildProc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNtitle
	CompareConstant(XtNtitle,((char*)&XtShellStrings[356]),4058,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNtitle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCTitle
	CompareConstant(XtCTitle,((char*)&XtShellStrings[362]),4059,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCTitle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNargc
	CompareConstant(XtNargc,((char*)&XtShellStrings[373]),4060,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNargc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCArgc
	CompareConstant(XtCArgc,((char*)&XtShellStrings[378]),4061,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCArgc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNargv
	CompareConstant(XtNargv,((char*)&XtShellStrings[383]),4062,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNargv\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCArgv
	CompareConstant(XtCArgv,((char*)&XtShellStrings[388]),4063,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCArgv\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconX
	CompareConstant(XtNiconX,((char*)&XtShellStrings[393]),4064,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconX
	CompareConstant(XtCIconX,((char*)&XtShellStrings[399]),4065,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconY
	CompareConstant(XtNiconY,((char*)&XtShellStrings[405]),4066,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconY
	CompareConstant(XtCIconY,((char*)&XtShellStrings[411]),4067,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinput
	CompareConstant(XtNinput,((char*)&XtShellStrings[417]),4068,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNinput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCInput
	CompareConstant(XtCInput,((char*)&XtShellStrings[423]),4069,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCInput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNiconic
	CompareConstant(XtNiconic,((char*)&XtShellStrings[429]),4070,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNiconic\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCIconic
	CompareConstant(XtCIconic,((char*)&XtShellStrings[436]),4071,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCIconic\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinitialState
	CompareConstant(XtNinitialState,((char*)&XtShellStrings[443]),4072,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNinitialState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCInitialState
	CompareConstant(XtCInitialState,((char*)&XtShellStrings[456]),4073,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCInitialState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNgeometry
	CompareConstant(XtNgeometry,((char*)&XtShellStrings[469]),4074,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNgeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCGeometry
	CompareConstant(XtCGeometry,((char*)&XtShellStrings[478]),4075,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCGeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNbaseWidth
	CompareConstant(XtNbaseWidth,((char*)&XtShellStrings[487]),4076,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNbaseWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCBaseWidth
	CompareConstant(XtCBaseWidth,((char*)&XtShellStrings[497]),4077,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCBaseWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNbaseHeight
	CompareConstant(XtNbaseHeight,((char*)&XtShellStrings[507]),4078,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNbaseHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCBaseHeight
	CompareConstant(XtCBaseHeight,((char*)&XtShellStrings[518]),4079,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCBaseHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwinGravity
	CompareConstant(XtNwinGravity,((char*)&XtShellStrings[529]),4080,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNwinGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWinGravity
	CompareConstant(XtCWinGravity,((char*)&XtShellStrings[540]),4081,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCWinGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNminWidth
	CompareConstant(XtNminWidth,((char*)&XtShellStrings[551]),4082,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNminWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMinWidth
	CompareConstant(XtCMinWidth,((char*)&XtShellStrings[560]),4083,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMinWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNminHeight
	CompareConstant(XtNminHeight,((char*)&XtShellStrings[569]),4084,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNminHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMinHeight
	CompareConstant(XtCMinHeight,((char*)&XtShellStrings[579]),4085,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMinHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNmaxWidth
	CompareConstant(XtNmaxWidth,((char*)&XtShellStrings[589]),4086,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNmaxWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMaxWidth
	CompareConstant(XtCMaxWidth,((char*)&XtShellStrings[598]),4087,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMaxWidth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNmaxHeight
	CompareConstant(XtNmaxHeight,((char*)&XtShellStrings[607]),4088,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNmaxHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMaxHeight
	CompareConstant(XtCMaxHeight,((char*)&XtShellStrings[617]),4089,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMaxHeight\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwidthInc
	CompareConstant(XtNwidthInc,((char*)&XtShellStrings[627]),4090,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNwidthInc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWidthInc
	CompareConstant(XtCWidthInc,((char*)&XtShellStrings[636]),4091,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCWidthInc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNheightInc
	CompareConstant(XtNheightInc,((char*)&XtShellStrings[645]),4092,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNheightInc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCHeightInc
	CompareConstant(XtCHeightInc,((char*)&XtShellStrings[655]),4093,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCHeightInc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNminAspectY
	CompareConstant(XtNminAspectY,((char*)&XtShellStrings[665]),4094,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNminAspectY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMinAspectY
	CompareConstant(XtCMinAspectY,((char*)&XtShellStrings[676]),4095,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMinAspectY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNmaxAspectY
	CompareConstant(XtNmaxAspectY,((char*)&XtShellStrings[687]),4096,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNmaxAspectY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMaxAspectY
	CompareConstant(XtCMaxAspectY,((char*)&XtShellStrings[698]),4097,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMaxAspectY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNminAspectX
	CompareConstant(XtNminAspectX,((char*)&XtShellStrings[709]),4098,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNminAspectX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMinAspectX
	CompareConstant(XtCMinAspectX,((char*)&XtShellStrings[720]),4099,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMinAspectX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNmaxAspectX
	CompareConstant(XtNmaxAspectX,((char*)&XtShellStrings[731]),4100,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNmaxAspectX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCMaxAspectX
	CompareConstant(XtCMaxAspectX,((char*)&XtShellStrings[742]),4101,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCMaxAspectX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwmTimeout
	CompareConstant(XtNwmTimeout,((char*)&XtShellStrings[753]),4102,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNwmTimeout\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWmTimeout
	CompareConstant(XtCWmTimeout,((char*)&XtShellStrings[763]),4103,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCWmTimeout\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwaitForWm
	CompareConstant(XtNwaitForWm,((char*)&XtShellStrings[773]),4104,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNwaitForWm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWaitForWm
	CompareConstant(XtCWaitForWm,((char*)&XtShellStrings[783]),4105,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCWaitForWm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwaitforwm
	CompareConstant(XtNwaitforwm,((char*)&XtShellStrings[793]),4106,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNwaitforwm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWaitforwm
	CompareConstant(XtCWaitforwm,((char*)&XtShellStrings[803]),4107,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCWaitforwm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNclientLeader
	CompareConstant(XtNclientLeader,((char*)&XtShellStrings[813]),4108,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNclientLeader\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCClientLeader
	CompareConstant(XtCClientLeader,((char*)&XtShellStrings[826]),4109,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCClientLeader\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNwindowRole
	CompareConstant(XtNwindowRole,((char*)&XtShellStrings[839]),4110,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNwindowRole\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCWindowRole
	CompareConstant(XtCWindowRole,((char*)&XtShellStrings[850]),4111,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCWindowRole\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNurgency
	CompareConstant(XtNurgency,((char*)&XtShellStrings[861]),4112,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNurgency\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCUrgency
	CompareConstant(XtCUrgency,((char*)&XtShellStrings[869]),4113,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCUrgency\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNcancelCallback
	CompareConstant(XtNcancelCallback,((char*)&XtShellStrings[877]),4114,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNcancelCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNcloneCommand
	CompareConstant(XtNcloneCommand,((char*)&XtShellStrings[892]),4115,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNcloneCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCCloneCommand
	CompareConstant(XtCCloneCommand,((char*)&XtShellStrings[905]),4116,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCCloneCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNconnection
	CompareConstant(XtNconnection,((char*)&XtShellStrings[918]),4117,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNconnection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCConnection
	CompareConstant(XtCConnection,((char*)&XtShellStrings[929]),4118,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCConnection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNcurrentDirectory
	CompareConstant(XtNcurrentDirectory,((char*)&XtShellStrings[940]),4119,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNcurrentDirectory\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCCurrentDirectory
	CompareConstant(XtCCurrentDirectory,((char*)&XtShellStrings[957]),4120,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCCurrentDirectory\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNdieCallback
	CompareConstant(XtNdieCallback,((char*)&XtShellStrings[974]),4121,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNdieCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNdiscardCommand
	CompareConstant(XtNdiscardCommand,((char*)&XtShellStrings[986]),4122,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNdiscardCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCDiscardCommand
	CompareConstant(XtCDiscardCommand,((char*)&XtShellStrings[1001]),4123,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCDiscardCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNenvironment
	CompareConstant(XtNenvironment,((char*)&XtShellStrings[1016]),4124,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNenvironment\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCEnvironment
	CompareConstant(XtCEnvironment,((char*)&XtShellStrings[1028]),4125,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCEnvironment\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNinteractCallback
	CompareConstant(XtNinteractCallback,((char*)&XtShellStrings[1040]),4126,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNinteractCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNjoinSession
	CompareConstant(XtNjoinSession,((char*)&XtShellStrings[1057]),4127,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNjoinSession\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCJoinSession
	CompareConstant(XtCJoinSession,((char*)&XtShellStrings[1069]),4128,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCJoinSession\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNprogramPath
	CompareConstant(XtNprogramPath,((char*)&XtShellStrings[1081]),4129,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNprogramPath\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCProgramPath
	CompareConstant(XtCProgramPath,((char*)&XtShellStrings[1093]),4130,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCProgramPath\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNresignCommand
	CompareConstant(XtNresignCommand,((char*)&XtShellStrings[1105]),4131,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNresignCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCResignCommand
	CompareConstant(XtCResignCommand,((char*)&XtShellStrings[1119]),4132,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCResignCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNrestartCommand
	CompareConstant(XtNrestartCommand,((char*)&XtShellStrings[1133]),4133,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNrestartCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCRestartCommand
	CompareConstant(XtCRestartCommand,((char*)&XtShellStrings[1148]),4134,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCRestartCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNrestartStyle
	CompareConstant(XtNrestartStyle,((char*)&XtShellStrings[1163]),4135,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNrestartStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCRestartStyle
	CompareConstant(XtCRestartStyle,((char*)&XtShellStrings[1176]),4136,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCRestartStyle\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNsaveCallback
	CompareConstant(XtNsaveCallback,((char*)&XtShellStrings[1189]),4137,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNsaveCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNsaveCompleteCallback
	CompareConstant(XtNsaveCompleteCallback,((char*)&XtShellStrings[1202]),4138,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNsaveCompleteCallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNsessionID
	CompareConstant(XtNsessionID,((char*)&XtShellStrings[1223]),4139,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNsessionID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCSessionID
	CompareConstant(XtCSessionID,((char*)&XtShellStrings[1233]),4140,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCSessionID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNshutdownCommand
	CompareConstant(XtNshutdownCommand,((char*)&XtShellStrings[1243]),4141,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNshutdownCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtCShutdownCommand
	CompareConstant(XtCShutdownCommand,((char*)&XtShellStrings[1259]),4142,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtCShutdownCommand\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XtNerrorCallback
	CompareConstant(XtNerrorCallback,((char*)&XtShellStrings[1275]),4143,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtNerrorCallback\n");
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
printf("%d tests passed out of %d tests in X11/Shell.h\n\n",pcnt,cnt);
return cnt;
#endif

}
