/*
 * Test of X11/extensions/XKBbells.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xlib.h"
#include "X11/extensions/XKBbells.h"



#ifdef TET_TEST
void X11_extensions_XKBbells_h()
{
#else
int X11_extensions_XKBbells_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XKBbells.h\n");
#endif

printf("Checking data structures in X11/extensions/XKBbells.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Info
	CompareStringConstant(XkbBN_Info,"Info",17428,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Info\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Warning
	CompareStringConstant(XkbBN_Warning,"Warning",17429,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Warning\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_MinorError
	CompareStringConstant(XkbBN_MinorError,"MinorError",17430,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_MinorError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_MajorError
	CompareStringConstant(XkbBN_MajorError,"MajorError",17431,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_MajorError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_BadValue
	CompareStringConstant(XkbBN_BadValue,"BadValue",17432,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_BadValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_InvalidLocation
	CompareStringConstant(XkbBN_InvalidLocation,"InvalidLocation",17433,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_InvalidLocation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Question
	CompareStringConstant(XkbBN_Question,"Question",17434,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Question\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Start
	CompareStringConstant(XkbBN_Start,"Start",17435,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Start\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_End
	CompareStringConstant(XkbBN_End,"End",17436,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Success
	CompareStringConstant(XkbBN_Success,"Success",17437,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Success\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Failure
	CompareStringConstant(XkbBN_Failure,"Failure",17438,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Failure\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Wait
	CompareStringConstant(XkbBN_Wait,"Wait",17439,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Wait\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Proceed
	CompareStringConstant(XkbBN_Proceed,"Proceed",17440,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Proceed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Ignore
	CompareStringConstant(XkbBN_Ignore,"Ignore",17441,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Ignore\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Iconify
	CompareStringConstant(XkbBN_Iconify,"Iconify",17442,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Iconify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Deiconify
	CompareStringConstant(XkbBN_Deiconify,"Deconify",17443,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Deiconify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Open
	CompareStringConstant(XkbBN_Open,"Open",17444,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Open\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_Close
	CompareStringConstant(XkbBN_Close,"Close",17445,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_Close\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_TerminalBell
	CompareStringConstant(XkbBN_TerminalBell,"TerminalBell",17446,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_TerminalBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_MarginBell
	CompareStringConstant(XkbBN_MarginBell,"MarginBell",17447,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_MarginBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_CursorStuck
	CompareStringConstant(XkbBN_CursorStuck,"CursorStuck",17448,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_CursorStuck\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_NewMail
	CompareStringConstant(XkbBN_NewMail,"NewMail",17449,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_NewMail\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_LaunchApp
	CompareStringConstant(XkbBN_LaunchApp,"LaunchApp",17450,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_LaunchApp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AppDeath
	CompareStringConstant(XkbBN_AppDeath,"AppDeath",17451,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AppDeath\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_ImAlive
	CompareStringConstant(XkbBN_ImAlive,"ImAlive",17452,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_ImAlive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_ClockChimeHour
	CompareStringConstant(XkbBN_ClockChimeHour,"ClockChimeHour",17453,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_ClockChimeHour\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_ClockChimeHalf
	CompareStringConstant(XkbBN_ClockChimeHalf,"ClockChimeHalf",17454,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_ClockChimeHalf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_ClockChimeQuarter
	CompareStringConstant(XkbBN_ClockChimeQuarter,"ClockChimeQuarter",17455,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_ClockChimeQuarter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_RepeatingLastBell
	CompareStringConstant(XkbBN_RepeatingLastBell,"RepeatingLastBell",17456,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_RepeatingLastBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_ComposeFail
	CompareStringConstant(XkbBN_ComposeFail,"ComposeFail",17457,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_ComposeFail\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_FeatureOn
	CompareStringConstant(XkbBN_AX_FeatureOn,"AX_FeatureOn",17458,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_FeatureOn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_FeatureOff
	CompareStringConstant(XkbBN_AX_FeatureOff,"AX_FeatureOff",17459,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_FeatureOff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_FeatureChange
	CompareStringConstant(XkbBN_AX_FeatureChange,"AX_FeatureChange",17460,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_FeatureChange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_IndicatorOn
	CompareStringConstant(XkbBN_AX_IndicatorOn,"AX_IndicatorOn",17461,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_IndicatorOn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_IndicatorOff
	CompareStringConstant(XkbBN_AX_IndicatorOff,"AX_IndicatorOff",17462,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_IndicatorOff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_IndicatorChange
	CompareStringConstant(XkbBN_AX_IndicatorChange,"AX_IndicatorChange",17463,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_IndicatorChange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_SlowKeysWarning
	CompareStringConstant(XkbBN_AX_SlowKeysWarning,"AX_SlowKeysWarning",17464,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_SlowKeysWarning\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_SlowKeyPress
	CompareStringConstant(XkbBN_AX_SlowKeyPress,"AX_SlowKeyPress",17465,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_SlowKeyPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_SlowKeyAccept
	CompareStringConstant(XkbBN_AX_SlowKeyAccept,"AX_SlowKeyAccept",17466,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_SlowKeyAccept\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_SlowKeyReject
	CompareStringConstant(XkbBN_AX_SlowKeyReject,"AX_SlowKeyReject",17467,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_SlowKeyReject\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_SlowKeyRelease
	CompareStringConstant(XkbBN_AX_SlowKeyRelease,"AX_SlowKeyRelease",17468,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_SlowKeyRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_BounceKeyReject
	CompareStringConstant(XkbBN_AX_BounceKeyReject,"AX_BounceKeyReject",17469,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_BounceKeyReject\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_StickyLatch
	CompareStringConstant(XkbBN_AX_StickyLatch,"AX_StickyLatch",17470,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_StickyLatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_StickyLock
	CompareStringConstant(XkbBN_AX_StickyLock,"AX_StickyLock",17471,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_StickyLock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBN_AX_StickyUnlock
	CompareStringConstant(XkbBN_AX_StickyUnlock,"AX_StickyUnlock",17472,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBN_AX_StickyUnlock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Info
	CompareConstant(XkbBI_Info,0,17473,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Info\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Warning
	CompareConstant(XkbBI_Warning,1,17474,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Warning\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_MinorError
	CompareConstant(XkbBI_MinorError,2,17475,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_MinorError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_MajorError
	CompareConstant(XkbBI_MajorError,3,17476,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_MajorError\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_BadValue
	CompareConstant(XkbBI_BadValue,4,17477,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_BadValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_InvalidLocation
	CompareConstant(XkbBI_InvalidLocation,5,17478,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_InvalidLocation\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Question
	CompareConstant(XkbBI_Question,6,17479,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Question\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Start
	CompareConstant(XkbBI_Start,7,17480,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Start\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_End
	CompareConstant(XkbBI_End,8,17481,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_End\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Success
	CompareConstant(XkbBI_Success,9,17482,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Success\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Failure
	CompareConstant(XkbBI_Failure,10,17483,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Failure\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Wait
	CompareConstant(XkbBI_Wait,11,17484,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Wait\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Proceed
	CompareConstant(XkbBI_Proceed,12,17485,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Proceed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Ignore
	CompareConstant(XkbBI_Ignore,13,17486,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Ignore\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Iconify
	CompareConstant(XkbBI_Iconify,14,17487,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Iconify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Deiconify
	CompareConstant(XkbBI_Deiconify,15,17488,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Deiconify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Open
	CompareConstant(XkbBI_Open,16,17489,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Open\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_Close
	CompareConstant(XkbBI_Close,17,17490,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_Close\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_TerminalBell
	CompareConstant(XkbBI_TerminalBell,18,17491,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_TerminalBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_MarginBell
	CompareConstant(XkbBI_MarginBell,19,17492,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_MarginBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_CursorStuck
	CompareConstant(XkbBI_CursorStuck,20,17493,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_CursorStuck\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_NewMail
	CompareConstant(XkbBI_NewMail,21,17494,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_NewMail\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_LaunchApp
	CompareConstant(XkbBI_LaunchApp,22,17495,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_LaunchApp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AppDeath
	CompareConstant(XkbBI_AppDeath,23,17496,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AppDeath\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_ImAlive
	CompareConstant(XkbBI_ImAlive,24,17497,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_ImAlive\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_ClockChimeHour
	CompareConstant(XkbBI_ClockChimeHour,25,17498,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_ClockChimeHour\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_ClockChimeHalf
	CompareConstant(XkbBI_ClockChimeHalf,26,17499,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_ClockChimeHalf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_ClockChimeQuarter
	CompareConstant(XkbBI_ClockChimeQuarter,27,17500,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_ClockChimeQuarter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_RepeatingLastBell
	CompareConstant(XkbBI_RepeatingLastBell,28,17501,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_RepeatingLastBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_ComposeFail
	CompareConstant(XkbBI_ComposeFail,29,17502,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_ComposeFail\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_FeatureOn
	CompareConstant(XkbBI_AX_FeatureOn,30,17503,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_FeatureOn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_FeatureOff
	CompareConstant(XkbBI_AX_FeatureOff,31,17504,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_FeatureOff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_FeatureChange
	CompareConstant(XkbBI_AX_FeatureChange,32,17505,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_FeatureChange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_IndicatorOn
	CompareConstant(XkbBI_AX_IndicatorOn,33,17506,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_IndicatorOn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_IndicatorOff
	CompareConstant(XkbBI_AX_IndicatorOff,34,17507,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_IndicatorOff\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_IndicatorChange
	CompareConstant(XkbBI_AX_IndicatorChange,35,17508,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_IndicatorChange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_SlowKeysWarning
	CompareConstant(XkbBI_AX_SlowKeysWarning,36,17509,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_SlowKeysWarning\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_SlowKeyPress
	CompareConstant(XkbBI_AX_SlowKeyPress,37,17510,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_SlowKeyPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_SlowKeyAccept
	CompareConstant(XkbBI_AX_SlowKeyAccept,38,17511,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_SlowKeyAccept\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_SlowKeyReject
	CompareConstant(XkbBI_AX_SlowKeyReject,39,17512,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_SlowKeyReject\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_SlowKeyRelease
	CompareConstant(XkbBI_AX_SlowKeyRelease,40,17513,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_SlowKeyRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_BounceKeyReject
	CompareConstant(XkbBI_AX_BounceKeyReject,41,17514,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_BounceKeyReject\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_StickyLatch
	CompareConstant(XkbBI_AX_StickyLatch,42,17515,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_StickyLatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_StickyLock
	CompareConstant(XkbBI_AX_StickyLock,43,17516,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_StickyLock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_AX_StickyUnlock
	CompareConstant(XkbBI_AX_StickyUnlock,44,17517,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_AX_StickyUnlock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBI_NumBells
	CompareConstant(XkbBI_NumBells,45,17518,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBI_NumBells\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _XKBBELLS_H_
Msg( "Error: Constant not found: _XKBBELLS_H_\n");
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
printf("%d tests passed out of %d tests in X11/extensions/XKBbells.h\n\n",pcnt,cnt);
return cnt;
#endif

}
