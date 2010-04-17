/*
 * Test of X11/extensions/XKB.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "X11/extensions/XKB.h"



#ifdef TET_TEST
void X11_extensions_XKB_h()
{
#else
int X11_extensions_XKB_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XKB.h\n");
#endif

printf("Checking data structures in X11/extensions/XKB.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef X_kbUseExtension
	CompareConstant(X_kbUseExtension,0,17036,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbUseExtension\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSelectEvents
	CompareConstant(X_kbSelectEvents,1,17037,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSelectEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbBell
	CompareConstant(X_kbBell,3,17038,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetState
	CompareConstant(X_kbGetState,4,17039,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbLatchLockState
	CompareConstant(X_kbLatchLockState,5,17040,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbLatchLockState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetControls
	CompareConstant(X_kbGetControls,6,17041,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetControls\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetControls
	CompareConstant(X_kbSetControls,7,17042,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetControls\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetMap
	CompareConstant(X_kbGetMap,8,17043,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetMap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetMap
	CompareConstant(X_kbSetMap,9,17044,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetMap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetCompatMap
	CompareConstant(X_kbGetCompatMap,10,17045,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetCompatMap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetCompatMap
	CompareConstant(X_kbSetCompatMap,11,17046,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetCompatMap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetIndicatorState
	CompareConstant(X_kbGetIndicatorState,12,17047,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetIndicatorState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetIndicatorMap
	CompareConstant(X_kbGetIndicatorMap,13,17048,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetIndicatorMap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetIndicatorMap
	CompareConstant(X_kbSetIndicatorMap,14,17049,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetIndicatorMap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetNamedIndicator
	CompareConstant(X_kbGetNamedIndicator,15,17050,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetNamedIndicator\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetNamedIndicator
	CompareConstant(X_kbSetNamedIndicator,16,17051,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetNamedIndicator\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetNames
	CompareConstant(X_kbGetNames,17,17052,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetNames\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetNames
	CompareConstant(X_kbSetNames,18,17053,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetNames\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetGeometry
	CompareConstant(X_kbGetGeometry,19,17054,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetGeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetGeometry
	CompareConstant(X_kbSetGeometry,20,17055,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetGeometry\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbPerClientFlags
	CompareConstant(X_kbPerClientFlags,21,17056,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbPerClientFlags\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbListComponents
	CompareConstant(X_kbListComponents,22,17057,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbListComponents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetKbdByName
	CompareConstant(X_kbGetKbdByName,23,17058,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetKbdByName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbGetDeviceInfo
	CompareConstant(X_kbGetDeviceInfo,24,17059,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbGetDeviceInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetDeviceInfo
	CompareConstant(X_kbSetDeviceInfo,25,17060,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetDeviceInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_kbSetDebuggingFlags
	CompareConstant(X_kbSetDebuggingFlags,101,17061,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_kbSetDebuggingFlags\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbEventCode
	CompareConstant(XkbEventCode,0,17062,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbEventCode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNumberEvents
	CompareConstant(XkbNumberEvents,(XkbEventCode+1),17063,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNumberEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNewKeyboardNotify
	CompareConstant(XkbNewKeyboardNotify,0,17064,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNewKeyboardNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMapNotify
	CompareConstant(XkbMapNotify,1,17065,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbStateNotify
	CompareConstant(XkbStateNotify,2,17066,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbStateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbControlsNotify
	CompareConstant(XkbControlsNotify,3,17067,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbControlsNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIndicatorStateNotify
	CompareConstant(XkbIndicatorStateNotify,4,17068,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIndicatorStateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIndicatorMapNotify
	CompareConstant(XkbIndicatorMapNotify,5,17069,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIndicatorMapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNamesNotify
	CompareConstant(XkbNamesNotify,6,17070,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNamesNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbCompatMapNotify
	CompareConstant(XkbCompatMapNotify,7,17071,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbCompatMapNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBellNotify
	CompareConstant(XkbBellNotify,8,17072,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBellNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbActionMessage
	CompareConstant(XkbActionMessage,9,17073,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbActionMessage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAccessXNotify
	CompareConstant(XkbAccessXNotify,10,17074,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAccessXNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExtensionDeviceNotify
	CompareConstant(XkbExtensionDeviceNotify,11,17075,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExtensionDeviceNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNewKeyboardNotifyMask
	CompareLongConstant(XkbNewKeyboardNotifyMask,(1L << 0),17076,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNewKeyboardNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMapNotifyMask
	CompareLongConstant(XkbMapNotifyMask,(1L << 1),17077,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMapNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbStateNotifyMask
	CompareLongConstant(XkbStateNotifyMask,(1L << 2),17078,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbStateNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbControlsNotifyMask
	CompareLongConstant(XkbControlsNotifyMask,(1L << 3),17079,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbControlsNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIndicatorStateNotifyMask
	CompareLongConstant(XkbIndicatorStateNotifyMask,(1L << 4),17080,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIndicatorStateNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIndicatorMapNotifyMask
	CompareLongConstant(XkbIndicatorMapNotifyMask,(1L << 5),17081,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIndicatorMapNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNamesNotifyMask
	CompareLongConstant(XkbNamesNotifyMask,(1L << 6),17082,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNamesNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbCompatMapNotifyMask
	CompareLongConstant(XkbCompatMapNotifyMask,(1L << 7),17083,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbCompatMapNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBellNotifyMask
	CompareLongConstant(XkbBellNotifyMask,(1L << 8),17084,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBellNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbActionMessageMask
	CompareLongConstant(XkbActionMessageMask,(1L << 9),17085,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbActionMessageMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAccessXNotifyMask
	CompareLongConstant(XkbAccessXNotifyMask,(1L << 10),17086,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAccessXNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExtensionDeviceNotifyMask
	CompareLongConstant(XkbExtensionDeviceNotifyMask,(1L << 11),17087,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExtensionDeviceNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllEventsMask
	CompareConstant(XkbAllEventsMask,(0xFFF),17088,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNKN_KeycodesMask
	CompareLongConstant(XkbNKN_KeycodesMask,(1L << 0),17089,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNKN_KeycodesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNKN_GeometryMask
	CompareLongConstant(XkbNKN_GeometryMask,(1L << 1),17090,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNKN_GeometryMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNKN_DeviceIDMask
	CompareLongConstant(XkbNKN_DeviceIDMask,(1L << 2),17091,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNKN_DeviceIDMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllNewKeyboardEventsMask
	CompareConstant(XkbAllNewKeyboardEventsMask,(0x7),17092,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllNewKeyboardEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKPress
	CompareConstant(XkbAXN_SKPress,0,17093,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKAccept
	CompareConstant(XkbAXN_SKAccept,1,17094,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKAccept\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKReject
	CompareConstant(XkbAXN_SKReject,2,17095,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKReject\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKRelease
	CompareConstant(XkbAXN_SKRelease,3,17096,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_BKAccept
	CompareConstant(XkbAXN_BKAccept,4,17097,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_BKAccept\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_BKReject
	CompareConstant(XkbAXN_BKReject,5,17098,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_BKReject\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_AXKWarning
	CompareConstant(XkbAXN_AXKWarning,6,17099,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_AXKWarning\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKPressMask
	CompareLongConstant(XkbAXN_SKPressMask,(1L << 0),17100,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKPressMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKAcceptMask
	CompareLongConstant(XkbAXN_SKAcceptMask,(1L << 1),17101,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKAcceptMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKRejectMask
	CompareLongConstant(XkbAXN_SKRejectMask,(1L << 2),17102,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKRejectMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_SKReleaseMask
	CompareLongConstant(XkbAXN_SKReleaseMask,(1L << 3),17103,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_SKReleaseMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_BKAcceptMask
	CompareLongConstant(XkbAXN_BKAcceptMask,(1L << 4),17104,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_BKAcceptMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_BKRejectMask
	CompareLongConstant(XkbAXN_BKRejectMask,(1L << 5),17105,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_BKRejectMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAXN_AXKWarningMask
	CompareLongConstant(XkbAXN_AXKWarningMask,(1L << 6),17106,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAXN_AXKWarningMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllAccessXEventsMask
	CompareConstant(XkbAllAccessXEventsMask,(0xf),17107,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllAccessXEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllStateEventsMask
	CompareConstant(XkbAllStateEventsMask,XkbAllStateComponentsMask,17108,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllStateEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllMapEventsMask
	CompareConstant(XkbAllMapEventsMask,XkbAllMapComponentsMask,17109,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllMapEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllControlEventsMask
	CompareConstant(XkbAllControlEventsMask,XkbAllControlsMask,17110,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllControlEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllIndicatorEventsMask
	CompareConstant(XkbAllIndicatorEventsMask,XkbAllIndicatorsMask,17111,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllIndicatorEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllNameEventsMask
	CompareConstant(XkbAllNameEventsMask,XkbAllNamesMask,17112,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllNameEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllCompatMapEventsMask
	CompareConstant(XkbAllCompatMapEventsMask,XkbAllCompatMask,17113,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllCompatMapEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllBellEventsMask
	CompareLongConstant(XkbAllBellEventsMask,(1L << 0),17114,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllBellEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllActionMessagesMask
	CompareLongConstant(XkbAllActionMessagesMask,(1L << 0),17115,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllActionMessagesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyboard
	CompareConstant(XkbKeyboard,0,17116,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNumberErrors
	CompareConstant(XkbNumberErrors,1,17117,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNumberErrors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbErr_BadDevice
	CompareConstant(XkbErr_BadDevice,0xff,17118,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbErr_BadDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbErr_BadClass
	CompareConstant(XkbErr_BadClass,0xfe,17119,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbErr_BadClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbErr_BadId
	CompareConstant(XkbErr_BadId,0xfd,17120,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbErr_BadId\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbClientMapMask
	CompareLongConstant(XkbClientMapMask,(1L << 0),17121,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbClientMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbServerMapMask
	CompareLongConstant(XkbServerMapMask,(1L << 1),17122,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbServerMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbCompatMapMask
	CompareLongConstant(XkbCompatMapMask,(1L << 2),17123,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbCompatMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIndicatorMapMask
	CompareLongConstant(XkbIndicatorMapMask,(1L << 3),17124,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIndicatorMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNamesMask
	CompareLongConstant(XkbNamesMask,(1L << 4),17125,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGeometryMask
	CompareLongConstant(XkbGeometryMask,(1L << 5),17126,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGeometryMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbControlsMask
	CompareLongConstant(XkbControlsMask,(1L << 6),17127,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbControlsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllComponentsMask
	CompareConstant(XkbAllComponentsMask,(0x7f),17128,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllComponentsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbModifierStateMask
	CompareLongConstant(XkbModifierStateMask,(1L << 0),17129,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbModifierStateMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbModifierBaseMask
	CompareLongConstant(XkbModifierBaseMask,(1L << 1),17130,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbModifierBaseMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbModifierLatchMask
	CompareLongConstant(XkbModifierLatchMask,(1L << 2),17131,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbModifierLatchMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbModifierLockMask
	CompareLongConstant(XkbModifierLockMask,(1L << 3),17132,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbModifierLockMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroupStateMask
	CompareLongConstant(XkbGroupStateMask,(1L << 4),17133,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroupStateMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroupBaseMask
	CompareLongConstant(XkbGroupBaseMask,(1L << 5),17134,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroupBaseMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroupLatchMask
	CompareLongConstant(XkbGroupLatchMask,(1L << 6),17135,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroupLatchMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroupLockMask
	CompareLongConstant(XkbGroupLockMask,(1L << 7),17136,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroupLockMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbCompatStateMask
	CompareLongConstant(XkbCompatStateMask,(1L << 8),17137,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbCompatStateMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGrabModsMask
	CompareLongConstant(XkbGrabModsMask,(1L << 9),17138,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGrabModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbCompatGrabModsMask
	CompareLongConstant(XkbCompatGrabModsMask,(1L << 10),17139,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbCompatGrabModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLookupModsMask
	CompareLongConstant(XkbLookupModsMask,(1L << 11),17140,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLookupModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbCompatLookupModsMask
	CompareLongConstant(XkbCompatLookupModsMask,(1L << 12),17141,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbCompatLookupModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPointerButtonMask
	CompareLongConstant(XkbPointerButtonMask,(1L << 13),17142,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPointerButtonMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllStateComponentsMask
	CompareConstant(XkbAllStateComponentsMask,(0x3fff),17143,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllStateComponentsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbRepeatKeysMask
	CompareLongConstant(XkbRepeatKeysMask,(1L << 0),17144,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbRepeatKeysMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSlowKeysMask
	CompareLongConstant(XkbSlowKeysMask,(1L << 1),17145,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSlowKeysMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbBounceKeysMask
	CompareLongConstant(XkbBounceKeysMask,(1L << 2),17146,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbBounceKeysMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbStickyKeysMask
	CompareLongConstant(XkbStickyKeysMask,(1L << 3),17147,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbStickyKeysMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMouseKeysMask
	CompareLongConstant(XkbMouseKeysMask,(1L << 4),17148,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMouseKeysMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMouseKeysAccelMask
	CompareLongConstant(XkbMouseKeysAccelMask,(1L << 5),17149,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMouseKeysAccelMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAccessXKeysMask
	CompareLongConstant(XkbAccessXKeysMask,(1L << 6),17150,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAccessXKeysMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAccessXTimeoutMask
	CompareLongConstant(XkbAccessXTimeoutMask,(1L << 7),17151,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAccessXTimeoutMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAccessXFeedbackMask
	CompareLongConstant(XkbAccessXFeedbackMask,(1L << 8),17152,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAccessXFeedbackMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAudibleBellMask
	CompareLongConstant(XkbAudibleBellMask,(1L << 9),17153,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAudibleBellMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOverlay1Mask
	CompareLongConstant(XkbOverlay1Mask,(1L << 10),17154,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOverlay1Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOverlay2Mask
	CompareLongConstant(XkbOverlay2Mask,(1L << 11),17155,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOverlay2Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIgnoreGroupLockMask
	CompareLongConstant(XkbIgnoreGroupLockMask,(1L << 12),17156,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIgnoreGroupLockMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroupsWrapMask
	CompareLongConstant(XkbGroupsWrapMask,(1L << 27),17157,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroupsWrapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbInternalModsMask
	CompareLongConstant(XkbInternalModsMask,(1L << 28),17158,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbInternalModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIgnoreLockModsMask
	CompareLongConstant(XkbIgnoreLockModsMask,(1L << 29),17159,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIgnoreLockModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPerKeyRepeatMask
	CompareLongConstant(XkbPerKeyRepeatMask,(1L << 30),17160,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPerKeyRepeatMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbControlsEnabledMask
	CompareLongConstant(XkbControlsEnabledMask,(1L << 31),17161,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbControlsEnabledMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAccessXOptionsMask
	CompareLongConstant(XkbAccessXOptionsMask,(XkbStickyKeysMask|XkbAccessXFeedbackMask),17162,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAccessXOptionsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllBooleanCtrlsMask
	CompareConstant(XkbAllBooleanCtrlsMask,(0x00001FFF),17163,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllBooleanCtrlsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllControlsMask
	CompareConstant(XkbAllControlsMask,(0xF8001FFF),17164,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllControlsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_SKPressFBMask
	CompareLongConstant(XkbAX_SKPressFBMask,(1L << 0),17165,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_SKPressFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_SKAcceptFBMask
	CompareLongConstant(XkbAX_SKAcceptFBMask,(1L << 1),17166,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_SKAcceptFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_FeatureFBMask
	CompareLongConstant(XkbAX_FeatureFBMask,(1L << 2),17167,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_FeatureFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_SlowWarnFBMask
	CompareLongConstant(XkbAX_SlowWarnFBMask,(1L << 3),17168,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_SlowWarnFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_IndicatorFBMask
	CompareLongConstant(XkbAX_IndicatorFBMask,(1L << 4),17169,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_IndicatorFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_StickyKeysFBMask
	CompareLongConstant(XkbAX_StickyKeysFBMask,(1L << 5),17170,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_StickyKeysFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_TwoKeysMask
	CompareLongConstant(XkbAX_TwoKeysMask,(1L << 6),17171,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_TwoKeysMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_LatchToLockMask
	CompareLongConstant(XkbAX_LatchToLockMask,(1L << 7),17172,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_LatchToLockMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_SKReleaseFBMask
	CompareLongConstant(XkbAX_SKReleaseFBMask,(1L << 8),17173,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_SKReleaseFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_SKRejectFBMask
	CompareLongConstant(XkbAX_SKRejectFBMask,(1L << 9),17174,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_SKRejectFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_BKRejectFBMask
	CompareLongConstant(XkbAX_BKRejectFBMask,(1L << 10),17175,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_BKRejectFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_DumbBellFBMask
	CompareLongConstant(XkbAX_DumbBellFBMask,(1L << 11),17176,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_DumbBellFBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_FBOptionsMask
	CompareConstant(XkbAX_FBOptionsMask,(0xF3F),17177,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_FBOptionsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_SKOptionsMask
	CompareConstant(XkbAX_SKOptionsMask,(0x0C0),17178,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_SKOptionsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAX_AllOptionsMask
	CompareConstant(XkbAX_AllOptionsMask,(0xFFF),17179,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAX_AllOptionsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbUseCoreKbd
	CompareConstant(XkbUseCoreKbd,0x0100,17180,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbUseCoreKbd\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbUseCorePtr
	CompareConstant(XkbUseCorePtr,0x0200,17181,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbUseCorePtr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbDfltXIClass
	CompareConstant(XkbDfltXIClass,0x0300,17182,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbDfltXIClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbDfltXIId
	CompareConstant(XkbDfltXIId,0x0400,17183,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbDfltXIId\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllXIClasses
	CompareConstant(XkbAllXIClasses,0x0500,17184,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllXIClasses\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllXIIds
	CompareConstant(XkbAllXIIds,0x0600,17185,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllXIIds\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXINone
	CompareConstant(XkbXINone,0xff00,17186,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXINone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbLegalXILedClass(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbLegalXIBellClass(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbExplicitXIDevice(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbExplicitXIClass(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbExplicitXIId(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSingleXIClass(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSingleXIId(c) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNoModifier
	CompareConstant(XkbNoModifier,0xff,17194,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNoModifier\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNoShiftLevel
	CompareConstant(XkbNoShiftLevel,0xff,17195,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNoShiftLevel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNoShape
	CompareConstant(XkbNoShape,0xff,17196,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNoShape\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNoIndicator
	CompareConstant(XkbNoIndicator,0xff,17197,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNoIndicator\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNoModifierMask
	CompareConstant(XkbNoModifierMask,0,17198,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNoModifierMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllModifiersMask
	CompareConstant(XkbAllModifiersMask,0xff,17199,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllModifiersMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllVirtualModsMask
	CompareConstant(XkbAllVirtualModsMask,0xffff,17200,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllVirtualModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNumKbdGroups
	CompareConstant(XkbNumKbdGroups,4,17201,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNumKbdGroups\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxKbdGroup
	CompareConstant(XkbMaxKbdGroup,(XkbNumKbdGroups-1),17202,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxKbdGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxMouseKeysBtn
	CompareConstant(XkbMaxMouseKeysBtn,4,17203,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxMouseKeysBtn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup1Index
	CompareConstant(XkbGroup1Index,0,17204,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup1Index\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup2Index
	CompareConstant(XkbGroup2Index,1,17205,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup2Index\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup3Index
	CompareConstant(XkbGroup3Index,2,17206,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup3Index\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup4Index
	CompareConstant(XkbGroup4Index,3,17207,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup4Index\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAnyGroup
	CompareConstant(XkbAnyGroup,254,17208,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAnyGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllGroups
	CompareConstant(XkbAllGroups,255,17209,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllGroups\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup1Mask
	CompareConstant(XkbGroup1Mask,(1<<0),17210,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup1Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup2Mask
	CompareConstant(XkbGroup2Mask,(1<<1),17211,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup2Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup3Mask
	CompareConstant(XkbGroup3Mask,(1<<2),17212,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup3Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroup4Mask
	CompareConstant(XkbGroup4Mask,(1<<3),17213,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroup4Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAnyGroupMask
	CompareConstant(XkbAnyGroupMask,(1<<7),17214,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAnyGroupMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllGroupsMask
	CompareConstant(XkbAllGroupsMask,(0xf),17215,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllGroupsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbBuildCoreState(m,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbGroupForCoreState(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIsLegalGroup(g) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbWrapIntoRange
	CompareConstant(XkbWrapIntoRange,(0x00),17219,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbWrapIntoRange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbClampIntoRange
	CompareConstant(XkbClampIntoRange,(0x40),17220,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbClampIntoRange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbRedirectIntoRange
	CompareConstant(XkbRedirectIntoRange,(0x80),17221,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbRedirectIntoRange\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ClearLocks
	CompareLongConstant(XkbSA_ClearLocks,(1L << 0),17222,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ClearLocks\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LatchToLock
	CompareLongConstant(XkbSA_LatchToLock,(1L << 1),17223,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LatchToLock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LockNoLock
	CompareLongConstant(XkbSA_LockNoLock,(1L << 0),17224,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LockNoLock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LockNoUnlock
	CompareLongConstant(XkbSA_LockNoUnlock,(1L << 1),17225,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LockNoUnlock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_UseModMapMods
	CompareLongConstant(XkbSA_UseModMapMods,(1L << 2),17226,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_UseModMapMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_GroupAbsolute
	CompareLongConstant(XkbSA_GroupAbsolute,(1L << 2),17227,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_GroupAbsolute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_UseDfltButton
	CompareConstant(XkbSA_UseDfltButton,0,17228,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_UseDfltButton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_NoAcceleration
	CompareLongConstant(XkbSA_NoAcceleration,(1L << 0),17229,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_NoAcceleration\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_MoveAbsoluteX
	CompareLongConstant(XkbSA_MoveAbsoluteX,(1L << 1),17230,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_MoveAbsoluteX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_MoveAbsoluteY
	CompareLongConstant(XkbSA_MoveAbsoluteY,(1L << 2),17231,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_MoveAbsoluteY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ISODfltIsGroup
	CompareLongConstant(XkbSA_ISODfltIsGroup,(1L << 7),17232,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ISODfltIsGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ISONoAffectMods
	CompareLongConstant(XkbSA_ISONoAffectMods,(1L << 6),17233,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ISONoAffectMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ISONoAffectGroup
	CompareLongConstant(XkbSA_ISONoAffectGroup,(1L << 5),17234,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ISONoAffectGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ISONoAffectPtr
	CompareLongConstant(XkbSA_ISONoAffectPtr,(1L << 4),17235,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ISONoAffectPtr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ISONoAffectCtrls
	CompareLongConstant(XkbSA_ISONoAffectCtrls,(1L << 3),17236,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ISONoAffectCtrls\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ISOAffectMask
	CompareConstant(XkbSA_ISOAffectMask,(0x78),17237,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ISOAffectMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_MessageOnPress
	CompareLongConstant(XkbSA_MessageOnPress,(1L << 0),17238,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_MessageOnPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_MessageOnRelease
	CompareLongConstant(XkbSA_MessageOnRelease,(1L << 1),17239,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_MessageOnRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_MessageGenKeyEvent
	CompareLongConstant(XkbSA_MessageGenKeyEvent,(1L << 2),17240,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_MessageGenKeyEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_AffectDfltBtn
	CompareConstant(XkbSA_AffectDfltBtn,1,17241,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_AffectDfltBtn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_DfltBtnAbsolute
	CompareLongConstant(XkbSA_DfltBtnAbsolute,(1L << 2),17242,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_DfltBtnAbsolute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SwitchApplication
	CompareLongConstant(XkbSA_SwitchApplication,(1L << 0),17243,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SwitchApplication\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SwitchAbsolute
	CompareLongConstant(XkbSA_SwitchAbsolute,(1L << 2),17244,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SwitchAbsolute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_IgnoreVal
	CompareConstant(XkbSA_IgnoreVal,(0x00),17245,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_IgnoreVal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetValMin
	CompareConstant(XkbSA_SetValMin,(0x10),17246,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetValMin\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetValCenter
	CompareConstant(XkbSA_SetValCenter,(0x20),17247,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetValCenter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetValMax
	CompareConstant(XkbSA_SetValMax,(0x30),17248,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetValMax\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetValRelative
	CompareConstant(XkbSA_SetValRelative,(0x40),17249,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetValRelative\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetValAbsolute
	CompareConstant(XkbSA_SetValAbsolute,(0x50),17250,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetValAbsolute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ValOpMask
	CompareConstant(XkbSA_ValOpMask,(0x70),17251,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ValOpMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ValScaleMask
	CompareConstant(XkbSA_ValScaleMask,(0x07),17252,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ValScaleMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSA_ValOp(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSA_ValScale(a) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_NoAction
	CompareConstant(XkbSA_NoAction,0x00,17255,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_NoAction\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetMods
	CompareConstant(XkbSA_SetMods,0x01,17256,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LatchMods
	CompareConstant(XkbSA_LatchMods,0x02,17257,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LatchMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LockMods
	CompareConstant(XkbSA_LockMods,0x03,17258,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LockMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetGroup
	CompareConstant(XkbSA_SetGroup,0x04,17259,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LatchGroup
	CompareConstant(XkbSA_LatchGroup,0x05,17260,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LatchGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LockGroup
	CompareConstant(XkbSA_LockGroup,0x06,17261,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LockGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_MovePtr
	CompareConstant(XkbSA_MovePtr,0x07,17262,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_MovePtr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_PtrBtn
	CompareConstant(XkbSA_PtrBtn,0x08,17263,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_PtrBtn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LockPtrBtn
	CompareConstant(XkbSA_LockPtrBtn,0x09,17264,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LockPtrBtn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetPtrDflt
	CompareConstant(XkbSA_SetPtrDflt,0x0a,17265,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetPtrDflt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ISOLock
	CompareConstant(XkbSA_ISOLock,0x0b,17266,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ISOLock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_Terminate
	CompareConstant(XkbSA_Terminate,0x0c,17267,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_Terminate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SwitchScreen
	CompareConstant(XkbSA_SwitchScreen,0x0d,17268,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SwitchScreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_SetControls
	CompareConstant(XkbSA_SetControls,0x0e,17269,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_SetControls\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LockControls
	CompareConstant(XkbSA_LockControls,0x0f,17270,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LockControls\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_ActionMessage
	CompareConstant(XkbSA_ActionMessage,0x10,17271,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_ActionMessage\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_RedirectKey
	CompareConstant(XkbSA_RedirectKey,0x11,17272,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_RedirectKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_DeviceBtn
	CompareConstant(XkbSA_DeviceBtn,0x12,17273,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_DeviceBtn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LockDeviceBtn
	CompareConstant(XkbSA_LockDeviceBtn,0x13,17274,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LockDeviceBtn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_DeviceValuator
	CompareConstant(XkbSA_DeviceValuator,0x14,17275,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_DeviceValuator\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_LastAction
	CompareConstant(XkbSA_LastAction,XkbSA_DeviceValuator,17276,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_LastAction\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_NumActions
	CompareConstant(XkbSA_NumActions,(XkbSA_LastAction+1),17277,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_NumActions\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_XFree86Private
	CompareConstant(XkbSA_XFree86Private,0x86,17278,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_XFree86Private\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSA_BreakLatch
	CompareConstant(XkbSA_BreakLatch,((1<<XkbSA_NoAction)|(1<<XkbSA_PtrBtn)|(1<<XkbSA_LockPtrBtn)| (1<<XkbSA_Terminate)|(1<<XkbSA_SwitchScreen)|(1<<XkbSA_SetControls)| (1<<XkbSA_LockControls)|(1<<XkbSA_ActionMessage)| (1<<XkbSA_RedirectKey)|(1<<XkbSA_DeviceBtn)|(1<<XkbSA_LockDeviceBtn)),17279,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSA_BreakLatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIsModAction(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIsGroupAction(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIsPtrAction(a) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_Permanent
	CompareConstant(XkbKB_Permanent,0x80,17283,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_Permanent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_OpMask
	CompareConstant(XkbKB_OpMask,0x7f,17284,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_OpMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_Default
	CompareConstant(XkbKB_Default,0x00,17285,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_Default\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_Lock
	CompareConstant(XkbKB_Lock,0x01,17286,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_Lock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_RadioGroup
	CompareConstant(XkbKB_RadioGroup,0x02,17287,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_RadioGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_Overlay1
	CompareConstant(XkbKB_Overlay1,0x03,17288,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_Overlay1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_Overlay2
	CompareConstant(XkbKB_Overlay2,0x04,17289,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_Overlay2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKB_RGAllowNone
	CompareConstant(XkbKB_RGAllowNone,0x80,17290,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKB_RGAllowNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMinLegalKeyCode
	CompareConstant(XkbMinLegalKeyCode,8,17291,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMinLegalKeyCode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxLegalKeyCode
	CompareConstant(XkbMaxLegalKeyCode,255,17292,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxLegalKeyCode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxKeyCount
	CompareConstant(XkbMaxKeyCount,(XkbMaxLegalKeyCode-XkbMinLegalKeyCode+1),17293,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxKeyCount\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPerKeyBitArraySize
	CompareConstant(XkbPerKeyBitArraySize,((XkbMaxLegalKeyCode+1)/8),17294,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPerKeyBitArraySize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIsLegalKeycode(k) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNumModifiers
	CompareConstant(XkbNumModifiers,8,17296,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNumModifiers\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNumVirtualMods
	CompareConstant(XkbNumVirtualMods,16,17297,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNumVirtualMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNumIndicators
	CompareConstant(XkbNumIndicators,32,17298,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNumIndicators\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllIndicatorsMask
	CompareConstant(XkbAllIndicatorsMask,(0xffffffff),17299,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllIndicatorsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxRadioGroups
	CompareConstant(XkbMaxRadioGroups,32,17300,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxRadioGroups\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllRadioGroupsMask
	CompareConstant(XkbAllRadioGroupsMask,(0xffffffff),17301,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllRadioGroupsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxShiftLevel
	CompareConstant(XkbMaxShiftLevel,63,17302,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxShiftLevel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxSymsPerKey
	CompareConstant(XkbMaxSymsPerKey,(XkbMaxShiftLevel*XkbNumKbdGroups),17303,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxSymsPerKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbRGMaxMembers
	CompareConstant(XkbRGMaxMembers,12,17304,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbRGMaxMembers\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbActionMessageLength
	CompareConstant(XkbActionMessageLength,6,17305,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbActionMessageLength\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyNameLength
	CompareConstant(XkbKeyNameLength,4,17306,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyNameLength\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxRedirectCount
	CompareConstant(XkbMaxRedirectCount,8,17307,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxRedirectCount\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGeomPtsPerMM
	CompareConstant(XkbGeomPtsPerMM,10,17308,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGeomPtsPerMM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGeomMaxColors
	CompareConstant(XkbGeomMaxColors,32,17309,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGeomMaxColors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGeomMaxLabelColors
	CompareConstant(XkbGeomMaxLabelColors,3,17310,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGeomMaxLabelColors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGeomMaxPriority
	CompareConstant(XkbGeomMaxPriority,255,17311,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGeomMaxPriority\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOneLevelIndex
	CompareConstant(XkbOneLevelIndex,0,17312,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOneLevelIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbTwoLevelIndex
	CompareConstant(XkbTwoLevelIndex,1,17313,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbTwoLevelIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAlphabeticIndex
	CompareConstant(XkbAlphabeticIndex,2,17314,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAlphabeticIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeypadIndex
	CompareConstant(XkbKeypadIndex,3,17315,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeypadIndex\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLastRequiredType
	CompareConstant(XkbLastRequiredType,XkbKeypadIndex,17316,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLastRequiredType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbNumRequiredTypes
	CompareConstant(XkbNumRequiredTypes,(XkbLastRequiredType+1),17317,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbNumRequiredTypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMaxKeyTypes
	CompareConstant(XkbMaxKeyTypes,255,17318,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMaxKeyTypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOneLevelMask
	CompareConstant(XkbOneLevelMask,(1<<0),17319,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOneLevelMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbTwoLevelMask
	CompareConstant(XkbTwoLevelMask,(1<<1),17320,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbTwoLevelMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAlphabeticMask
	CompareConstant(XkbAlphabeticMask,(1<<2),17321,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAlphabeticMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeypadMask
	CompareConstant(XkbKeypadMask,(1<<3),17322,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeypadMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllRequiredTypes
	CompareConstant(XkbAllRequiredTypes,(0xf),17323,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllRequiredTypes\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbShiftLevel(n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbShiftLevelMask(n) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbName
	CompareStringConstant(XkbName,"XKEYBOARD",17326,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMajorVersion
	CompareConstant(XkbMajorVersion,1,17327,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMajorVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbMinorVersion
	CompareConstant(XkbMinorVersion,0,17328,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbMinorVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitKeyTypesMask
	CompareConstant(XkbExplicitKeyTypesMask,(0x0f),17329,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitKeyTypesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitKeyType1Mask
	CompareConstant(XkbExplicitKeyType1Mask,(1<<0),17330,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitKeyType1Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitKeyType2Mask
	CompareConstant(XkbExplicitKeyType2Mask,(1<<1),17331,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitKeyType2Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitKeyType3Mask
	CompareConstant(XkbExplicitKeyType3Mask,(1<<2),17332,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitKeyType3Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitKeyType4Mask
	CompareConstant(XkbExplicitKeyType4Mask,(1<<3),17333,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitKeyType4Mask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitInterpretMask
	CompareConstant(XkbExplicitInterpretMask,(1<<4),17334,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitInterpretMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitAutoRepeatMask
	CompareConstant(XkbExplicitAutoRepeatMask,(1<<5),17335,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitAutoRepeatMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitBehaviorMask
	CompareConstant(XkbExplicitBehaviorMask,(1<<6),17336,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitBehaviorMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitVModMapMask
	CompareConstant(XkbExplicitVModMapMask,(1<<7),17337,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitVModMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllExplicitMask
	CompareConstant(XkbAllExplicitMask,(0xff),17338,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllExplicitMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyTypesMask
	CompareConstant(XkbKeyTypesMask,(1<<0),17339,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyTypesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeySymsMask
	CompareConstant(XkbKeySymsMask,(1<<1),17340,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeySymsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbModifierMapMask
	CompareConstant(XkbModifierMapMask,(1<<2),17341,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbModifierMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbExplicitComponentsMask
	CompareConstant(XkbExplicitComponentsMask,(1<<3),17342,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbExplicitComponentsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyActionsMask
	CompareConstant(XkbKeyActionsMask,(1<<4),17343,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyActionsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyBehaviorsMask
	CompareConstant(XkbKeyBehaviorsMask,(1<<5),17344,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyBehaviorsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbVirtualModsMask
	CompareConstant(XkbVirtualModsMask,(1<<6),17345,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbVirtualModsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbVirtualModMapMask
	CompareConstant(XkbVirtualModMapMask,(1<<7),17346,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbVirtualModMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllClientInfoMask
	CompareConstant(XkbAllClientInfoMask,(XkbKeyTypesMask|XkbKeySymsMask|XkbModifierMapMask),17347,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllClientInfoMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllServerInfoMask
	CompareConstant(XkbAllServerInfoMask,(XkbExplicitComponentsMask|XkbKeyActionsMask|XkbKeyBehaviorsMask|XkbVirtualModsMask|XkbVirtualModMapMask),17348,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllServerInfoMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllMapComponentsMask
	CompareConstant(XkbAllMapComponentsMask,(XkbAllClientInfoMask|XkbAllServerInfoMask),17349,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllMapComponentsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_AutoRepeat
	CompareConstant(XkbSI_AutoRepeat,(1<<0),17350,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_AutoRepeat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_LockingKey
	CompareConstant(XkbSI_LockingKey,(1<<1),17351,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_LockingKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_LevelOneOnly
	CompareConstant(XkbSI_LevelOneOnly,(0x80),17352,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_LevelOneOnly\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_OpMask
	CompareConstant(XkbSI_OpMask,(0x7f),17353,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_OpMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_NoneOf
	CompareConstant(XkbSI_NoneOf,(0),17354,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_NoneOf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_AnyOfOrNone
	CompareConstant(XkbSI_AnyOfOrNone,(1),17355,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_AnyOfOrNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_AnyOf
	CompareConstant(XkbSI_AnyOf,(2),17356,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_AnyOf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_AllOf
	CompareConstant(XkbSI_AllOf,(3),17357,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_AllOf\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSI_Exactly
	CompareConstant(XkbSI_Exactly,(4),17358,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSI_Exactly\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_NoExplicit
	CompareLongConstant(XkbIM_NoExplicit,(1L << 7),17359,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_NoExplicit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_NoAutomatic
	CompareLongConstant(XkbIM_NoAutomatic,(1L << 6),17360,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_NoAutomatic\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_LEDDrivesKB
	CompareLongConstant(XkbIM_LEDDrivesKB,(1L << 5),17361,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_LEDDrivesKB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseBase
	CompareLongConstant(XkbIM_UseBase,(1L << 0),17362,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseBase\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseLatched
	CompareLongConstant(XkbIM_UseLatched,(1L << 1),17363,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseLatched\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseLocked
	CompareLongConstant(XkbIM_UseLocked,(1L << 2),17364,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseLocked\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseEffective
	CompareLongConstant(XkbIM_UseEffective,(1L << 3),17365,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseEffective\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseCompat
	CompareLongConstant(XkbIM_UseCompat,(1L << 4),17366,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseCompat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseNone
	CompareConstant(XkbIM_UseNone,0,17367,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseAnyGroup
	CompareLongConstant(XkbIM_UseAnyGroup,(XkbIM_UseBase|XkbIM_UseLatched|XkbIM_UseLocked |XkbIM_UseEffective),17368,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseAnyGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIM_UseAnyMods
	CompareLongConstant(XkbIM_UseAnyMods,(XkbIM_UseAnyGroup|XkbIM_UseCompat),17369,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIM_UseAnyMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSymInterpMask
	CompareConstant(XkbSymInterpMask,(1<<0),17370,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSymInterpMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroupCompatMask
	CompareConstant(XkbGroupCompatMask,(1<<1),17371,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroupCompatMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllCompatMask
	CompareConstant(XkbAllCompatMask,(0x3),17372,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllCompatMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeycodesNameMask
	CompareConstant(XkbKeycodesNameMask,(1<<0),17373,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeycodesNameMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGeometryNameMask
	CompareConstant(XkbGeometryNameMask,(1<<1),17374,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGeometryNameMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbSymbolsNameMask
	CompareConstant(XkbSymbolsNameMask,(1<<2),17375,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbSymbolsNameMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPhysSymbolsNameMask
	CompareConstant(XkbPhysSymbolsNameMask,(1<<3),17376,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPhysSymbolsNameMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbTypesNameMask
	CompareConstant(XkbTypesNameMask,(1<<4),17377,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbTypesNameMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbCompatNameMask
	CompareConstant(XkbCompatNameMask,(1<<5),17378,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbCompatNameMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyTypeNamesMask
	CompareConstant(XkbKeyTypeNamesMask,(1<<6),17379,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyTypeNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKTLevelNamesMask
	CompareConstant(XkbKTLevelNamesMask,(1<<7),17380,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKTLevelNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbIndicatorNamesMask
	CompareConstant(XkbIndicatorNamesMask,(1<<8),17381,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbIndicatorNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyNamesMask
	CompareConstant(XkbKeyNamesMask,(1<<9),17382,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbKeyAliasesMask
	CompareConstant(XkbKeyAliasesMask,(1<<10),17383,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbKeyAliasesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbVirtualModNamesMask
	CompareConstant(XkbVirtualModNamesMask,(1<<11),17384,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbVirtualModNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGroupNamesMask
	CompareConstant(XkbGroupNamesMask,(1<<12),17385,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGroupNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbRGNamesMask
	CompareConstant(XkbRGNamesMask,(1<<13),17386,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbRGNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbComponentNamesMask
	CompareConstant(XkbComponentNamesMask,(0x3f),17387,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbComponentNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllNamesMask
	CompareConstant(XkbAllNamesMask,(0x3fff),17388,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_TypesMask
	CompareLongConstant(XkbGBN_TypesMask,(1L << 0),17389,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_TypesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_CompatMapMask
	CompareLongConstant(XkbGBN_CompatMapMask,(1L << 1),17390,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_CompatMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_ClientSymbolsMask
	CompareLongConstant(XkbGBN_ClientSymbolsMask,(1L << 2),17391,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_ClientSymbolsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_ServerSymbolsMask
	CompareLongConstant(XkbGBN_ServerSymbolsMask,(1L << 3),17392,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_ServerSymbolsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_SymbolsMask
	CompareLongConstant(XkbGBN_SymbolsMask,(XkbGBN_ClientSymbolsMask|XkbGBN_ServerSymbolsMask),17393,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_SymbolsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_IndicatorMapMask
	CompareLongConstant(XkbGBN_IndicatorMapMask,(1L << 4),17394,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_IndicatorMapMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_KeyNamesMask
	CompareLongConstant(XkbGBN_KeyNamesMask,(1L << 5),17395,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_KeyNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_GeometryMask
	CompareLongConstant(XkbGBN_GeometryMask,(1L << 6),17396,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_GeometryMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_OtherNamesMask
	CompareLongConstant(XkbGBN_OtherNamesMask,(1L << 7),17397,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_OtherNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbGBN_AllComponentsMask
	CompareConstant(XkbGBN_AllComponentsMask,(0xff),17398,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbGBN_AllComponentsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_Hidden
	CompareLongConstant(XkbLC_Hidden,(1L << 0),17399,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_Hidden\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_Default
	CompareLongConstant(XkbLC_Default,(1L << 1),17400,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_Default\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_Partial
	CompareLongConstant(XkbLC_Partial,(1L << 2),17401,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_Partial\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_AlphanumericKeys
	CompareLongConstant(XkbLC_AlphanumericKeys,(1L << 8),17402,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_AlphanumericKeys\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_ModifierKeys
	CompareLongConstant(XkbLC_ModifierKeys,(1L << 9),17403,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_ModifierKeys\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_KeypadKeys
	CompareLongConstant(XkbLC_KeypadKeys,(1L << 10),17404,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_KeypadKeys\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_FunctionKeys
	CompareLongConstant(XkbLC_FunctionKeys,(1L << 11),17405,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_FunctionKeys\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_AlternateGroup
	CompareLongConstant(XkbLC_AlternateGroup,(1L << 12),17406,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_AlternateGroup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_KeyboardsMask
	CompareLongConstant(XkbXI_KeyboardsMask,(1L << 0),17407,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_KeyboardsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_ButtonActionsMask
	CompareLongConstant(XkbXI_ButtonActionsMask,(1L << 1),17408,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_ButtonActionsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_IndicatorNamesMask
	CompareLongConstant(XkbXI_IndicatorNamesMask,(1L << 2),17409,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_IndicatorNamesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_IndicatorMapsMask
	CompareLongConstant(XkbXI_IndicatorMapsMask,(1L << 3),17410,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_IndicatorMapsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_IndicatorStateMask
	CompareLongConstant(XkbXI_IndicatorStateMask,(1L << 4),17411,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_IndicatorStateMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_UnsupportedFeatureMask
	CompareLongConstant(XkbXI_UnsupportedFeatureMask,(1L << 15),17412,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_UnsupportedFeatureMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_AllFeaturesMask
	CompareConstant(XkbXI_AllFeaturesMask,(0x001f),17413,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_AllFeaturesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_AllDeviceFeaturesMask
	CompareConstant(XkbXI_AllDeviceFeaturesMask,(0x001e),17414,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_AllDeviceFeaturesMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbXI_IndicatorsMask
	CompareConstant(XkbXI_IndicatorsMask,(0x001c),17415,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbXI_IndicatorsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAllExtensionDeviceEventsMask
	CompareConstant(XkbAllExtensionDeviceEventsMask,(0x801f),17416,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAllExtensionDeviceEventsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPCF_DetectableAutoRepeatMask
	CompareLongConstant(XkbPCF_DetectableAutoRepeatMask,(1L << 0),17417,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPCF_DetectableAutoRepeatMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPCF_GrabsUseXKBStateMask
	CompareLongConstant(XkbPCF_GrabsUseXKBStateMask,(1L << 1),17418,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPCF_GrabsUseXKBStateMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPCF_AutoResetControlsMask
	CompareLongConstant(XkbPCF_AutoResetControlsMask,(1L << 2),17419,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPCF_AutoResetControlsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPCF_LookupStateWhenGrabbed
	CompareLongConstant(XkbPCF_LookupStateWhenGrabbed,(1L << 3),17420,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPCF_LookupStateWhenGrabbed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPCF_SendEventUsesXKBState
	CompareLongConstant(XkbPCF_SendEventUsesXKBState,(1L << 4),17421,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPCF_SendEventUsesXKBState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbPCF_AllFlagsMask
	CompareConstant(XkbPCF_AllFlagsMask,(0x1F),17422,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbPCF_AllFlagsMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbDF_DisableLocks
	CompareConstant(XkbDF_DisableLocks,(1<<0),17423,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbDF_DisableLocks\n");
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
printf("%d tests passed out of %d tests in X11/extensions/XKB.h\n\n",pcnt,cnt);
return cnt;
#endif

}
