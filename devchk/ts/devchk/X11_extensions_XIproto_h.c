/*
 * Test of X11/extensions/XIproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/XIproto.h"



#ifdef TET_TEST
void X11_extensions_XIproto_h()
{
#else
int X11_extensions_XIproto_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XIproto.h\n");
#endif

printf("Checking data structures in X11/extensions/XIproto.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for MORE_EVENTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DEVICE_BITS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for InputClassBits */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ModeBitsShift
	CompareConstant(ModeBitsShift,6,16245,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: ModeBitsShift\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef numInputClasses
	CompareConstant(numInputClasses,7,16246,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: numInputClasses\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IEVENTS
	CompareConstant(IEVENTS,16,16247,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: IEVENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IERRORS
	CompareConstant(IERRORS,5,16248,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: IERRORS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLIENT_REQ
	CompareConstant(CLIENT_REQ,1,16249,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: CLIENT_REQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XI_DeviceValuator */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceKeyPress
	CompareConstant(XI_DeviceKeyPress,1,16251,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceKeyPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceKeyRelease
	CompareConstant(XI_DeviceKeyRelease,2,16252,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceKeyRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceButtonPress
	CompareConstant(XI_DeviceButtonPress,3,16253,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceButtonPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceButtonRelease
	CompareConstant(XI_DeviceButtonRelease,4,16254,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceButtonRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceMotionNotify
	CompareConstant(XI_DeviceMotionNotify,5,16255,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceMotionNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceFocusIn
	CompareConstant(XI_DeviceFocusIn,6,16256,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceFocusIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceFocusOut
	CompareConstant(XI_DeviceFocusOut,7,16257,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceFocusOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_ProximityIn
	CompareConstant(XI_ProximityIn,8,16258,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_ProximityIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_ProximityOut
	CompareConstant(XI_ProximityOut,9,16259,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_ProximityOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceStateNotify
	CompareConstant(XI_DeviceStateNotify,10,16260,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceStateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceMappingNotify
	CompareConstant(XI_DeviceMappingNotify,11,16261,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceMappingNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_ChangeDeviceNotify
	CompareConstant(XI_ChangeDeviceNotify,12,16262,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_ChangeDeviceNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceKeystateNotify
	CompareConstant(XI_DeviceKeystateNotify,13,16263,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceKeystateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceButtonstateNotify
	CompareConstant(XI_DeviceButtonstateNotify,14,16264,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceButtonstateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DevicePresenceNotify
	CompareConstant(XI_DevicePresenceNotify,15,16265,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XI_DevicePresenceNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetExtensionVersion
	CompareConstant(X_GetExtensionVersion,1,16266,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ListInputDevices
	CompareConstant(X_ListInputDevices,2,16267,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ListInputDevices\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_OpenDevice
	CompareConstant(X_OpenDevice,3,16268,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_OpenDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_CloseDevice
	CompareConstant(X_CloseDevice,4,16269,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_CloseDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetDeviceMode
	CompareConstant(X_SetDeviceMode,5,16270,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetDeviceMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SelectExtensionEvent
	CompareConstant(X_SelectExtensionEvent,6,16271,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SelectExtensionEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetSelectedExtensionEvents
	CompareConstant(X_GetSelectedExtensionEvents,7,16272,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetSelectedExtensionEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeDeviceDontPropagateList
	CompareConstant(X_ChangeDeviceDontPropagateList,8,16273,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeDeviceDontPropagateList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetDeviceDontPropagateList
	CompareConstant(X_GetDeviceDontPropagateList,9,16274,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetDeviceDontPropagateList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetDeviceMotionEvents
	CompareConstant(X_GetDeviceMotionEvents,10,16275,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetDeviceMotionEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeKeyboardDevice
	CompareConstant(X_ChangeKeyboardDevice,11,16276,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeKeyboardDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangePointerDevice
	CompareConstant(X_ChangePointerDevice,12,16277,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangePointerDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabDevice
	CompareConstant(X_GrabDevice,13,16278,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabDevice
	CompareConstant(X_UngrabDevice,14,16279,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabDeviceKey
	CompareConstant(X_GrabDeviceKey,15,16280,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabDeviceKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabDeviceKey
	CompareConstant(X_UngrabDeviceKey,16,16281,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabDeviceKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GrabDeviceButton
	CompareConstant(X_GrabDeviceButton,17,16282,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GrabDeviceButton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_UngrabDeviceButton
	CompareConstant(X_UngrabDeviceButton,18,16283,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_UngrabDeviceButton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_AllowDeviceEvents
	CompareConstant(X_AllowDeviceEvents,19,16284,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_AllowDeviceEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetDeviceFocus
	CompareConstant(X_GetDeviceFocus,20,16285,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetDeviceFocus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetDeviceFocus
	CompareConstant(X_SetDeviceFocus,21,16286,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetDeviceFocus\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetFeedbackControl
	CompareConstant(X_GetFeedbackControl,22,16287,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetFeedbackControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeFeedbackControl
	CompareConstant(X_ChangeFeedbackControl,23,16288,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeFeedbackControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetDeviceKeyMapping
	CompareConstant(X_GetDeviceKeyMapping,24,16289,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetDeviceKeyMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeDeviceKeyMapping
	CompareConstant(X_ChangeDeviceKeyMapping,25,16290,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeDeviceKeyMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetDeviceModifierMapping
	CompareConstant(X_GetDeviceModifierMapping,26,16291,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetDeviceModifierMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetDeviceModifierMapping
	CompareConstant(X_SetDeviceModifierMapping,27,16292,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetDeviceModifierMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetDeviceButtonMapping
	CompareConstant(X_GetDeviceButtonMapping,28,16293,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetDeviceButtonMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetDeviceButtonMapping
	CompareConstant(X_SetDeviceButtonMapping,29,16294,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetDeviceButtonMapping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_QueryDeviceState
	CompareConstant(X_QueryDeviceState,30,16295,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_QueryDeviceState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SendExtensionEvent
	CompareConstant(X_SendExtensionEvent,31,16296,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SendExtensionEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DeviceBell
	CompareConstant(X_DeviceBell,32,16297,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DeviceBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SetDeviceValuators
	CompareConstant(X_SetDeviceValuators,33,16298,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_SetDeviceValuators\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_GetDeviceControl
	CompareConstant(X_GetDeviceControl,34,16299,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_GetDeviceControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_ChangeDeviceControl
	CompareConstant(X_ChangeDeviceControl,35,16300,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_ChangeDeviceControl\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(XExtEventInfo,0, 1008243, 1, 3.0, NULL, 1008242, NULL)
#endif

#if 1
CheckTypeSize(Pointer,0, 1008244, 1, 3.0, NULL, 4659, NULL)
#endif

#if 1
CheckTypeSize(xGetExtensionVersionReq,0, 1008247, 1, 3.0, NULL, 1008246, NULL)
#endif

#if 1
CheckTypeSize(xGetExtensionVersionReply,0, 1008249, 1, 3.0, NULL, 1008248, NULL)
#endif

#if 1
CheckTypeSize(xListInputDevicesReq,0, 1008251, 1, 3.0, NULL, 1008250, NULL)
#endif

#if 1
CheckTypeSize(xListInputDevicesReply,0, 1008253, 1, 3.0, NULL, 1008252, NULL)
#endif

#if 1
CheckTypeSize(xDeviceInfoPtr,0, 1008254, 1, 3.0, NULL, 1008459, NULL)
#endif

#if 1
CheckTypeSize(xAnyClassPtr,0, 1008255, 1, 3.0, NULL, 1008455, NULL)
#endif

#if 1
CheckTypeSize(xAnyClassInfo,0, 1008257, 1, 3.0, NULL, 1008256, NULL)
#endif

#if 1
CheckTypeSize(xDeviceInfo,0, 1008259, 1, 3.0, NULL, 1008258, NULL)
#endif

#if 1
CheckTypeSize(xKeyInfoPtr,0, 1008260, 1, 3.0, NULL, 1008462, NULL)
#endif

#if 1
CheckTypeSize(xKeyInfo,0, 1008262, 1, 3.0, NULL, 1008261, NULL)
#endif

#if 1
CheckTypeSize(xButtonInfoPtr,0, 1008263, 1, 3.0, NULL, 1008454, NULL)
#endif

#if 1
CheckTypeSize(xButtonInfo,0, 1008265, 1, 3.0, NULL, 1008264, NULL)
#endif

#if 1
CheckTypeSize(xValuatorInfoPtr,0, 1008266, 1, 3.0, NULL, 1008458, NULL)
#endif

#if 1
CheckTypeSize(xValuatorInfo,0, 1008268, 1, 3.0, NULL, 1008267, NULL)
#endif

#if 1
CheckTypeSize(xAxisInfoPtr,0, 1008269, 1, 3.0, NULL, 1008457, NULL)
#endif

#if 1
CheckTypeSize(xAxisInfo,0, 1008271, 1, 3.0, NULL, 1008270, NULL)
#endif

#if 1
CheckTypeSize(xOpenDeviceReq,0, 1008273, 1, 3.0, NULL, 1008272, NULL)
#endif

#if 1
CheckTypeSize(xOpenDeviceReply,0, 1008275, 1, 3.0, NULL, 1008274, NULL)
#endif

#if 1
CheckTypeSize(xInputClassInfo,0, 1008277, 1, 3.0, NULL, 1008276, NULL)
#endif

#if 1
CheckTypeSize(xCloseDeviceReq,0, 1008279, 1, 3.0, NULL, 1008278, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModeReq,0, 1008281, 1, 3.0, NULL, 1008280, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModeReply,0, 1008283, 1, 3.0, NULL, 1008282, NULL)
#endif

#if 1
CheckTypeSize(xSelectExtensionEventReq,0, 1008285, 1, 3.0, NULL, 1008284, NULL)
#endif

#if 1
CheckTypeSize(xGetSelectedExtensionEventsReq,0, 1008287, 1, 3.0, NULL, 1008286, NULL)
#endif

#if 1
CheckTypeSize(xGetSelectedExtensionEventsReply,0, 1008289, 1, 3.0, NULL, 1008288, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceDontPropagateListReq,0, 1008291, 1, 3.0, NULL, 1008290, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceDontPropagateListReq,0, 1008293, 1, 3.0, NULL, 1008292, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceDontPropagateListReply,0, 1008295, 1, 3.0, NULL, 1008294, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceMotionEventsReq,0, 1008297, 1, 3.0, NULL, 1008296, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceMotionEventsReply,0, 1008299, 1, 3.0, NULL, 1008298, NULL)
#endif

#if 1
CheckTypeSize(xChangeKeyboardDeviceReq,0, 1008301, 1, 3.0, NULL, 1008300, NULL)
#endif

#if 1
CheckTypeSize(xChangeKeyboardDeviceReply,0, 1008303, 1, 3.0, NULL, 1008302, NULL)
#endif

#if 1
CheckTypeSize(xChangePointerDeviceReq,0, 1008305, 1, 3.0, NULL, 1008304, NULL)
#endif

#if 1
CheckTypeSize(xChangePointerDeviceReply,0, 1008307, 1, 3.0, NULL, 1008306, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceReq,0, 1008309, 1, 3.0, NULL, 1008308, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceReply,0, 1008311, 1, 3.0, NULL, 1008310, NULL)
#endif

#if 1
CheckTypeSize(xUngrabDeviceReq,0, 1008313, 1, 3.0, NULL, 1008312, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceKeyReq,0, 1008315, 1, 3.0, NULL, 1008314, NULL)
#endif

#if 1
CheckTypeSize(xUngrabDeviceKeyReq,0, 1008317, 1, 3.0, NULL, 1008316, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceButtonReq,0, 1008319, 1, 3.0, NULL, 1008318, NULL)
#endif

#if 1
CheckTypeSize(xUngrabDeviceButtonReq,0, 1008321, 1, 3.0, NULL, 1008320, NULL)
#endif

#if 1
CheckTypeSize(xAllowDeviceEventsReq,0, 1008323, 1, 3.0, NULL, 1008322, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceFocusReq,0, 1008325, 1, 3.0, NULL, 1008324, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceFocusReply,0, 1008327, 1, 3.0, NULL, 1008326, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceFocusReq,0, 1008329, 1, 3.0, NULL, 1008328, NULL)
#endif

#if 1
CheckTypeSize(xGetFeedbackControlReq,0, 1008331, 1, 3.0, NULL, 1008330, NULL)
#endif

#if 1
CheckTypeSize(xGetFeedbackControlReply,0, 1008333, 1, 3.0, NULL, 1008332, NULL)
#endif

#if 1
CheckTypeSize(xFeedbackState,0, 1008335, 1, 3.0, NULL, 1008334, NULL)
#endif

#if 1
CheckTypeSize(xKbdFeedbackState,0, 1008337, 1, 3.0, NULL, 1008336, NULL)
#endif

#if 1
CheckTypeSize(xPtrFeedbackState,0, 1008339, 1, 3.0, NULL, 1008338, NULL)
#endif

#if 1
CheckTypeSize(xIntegerFeedbackState,0, 1008341, 1, 3.0, NULL, 1008340, NULL)
#endif

#if 1
CheckTypeSize(xStringFeedbackState,0, 1008343, 1, 3.0, NULL, 1008342, NULL)
#endif

#if 1
CheckTypeSize(xBellFeedbackState,0, 1008345, 1, 3.0, NULL, 1008344, NULL)
#endif

#if 1
CheckTypeSize(xLedFeedbackState,0, 1008347, 1, 3.0, NULL, 1008346, NULL)
#endif

#if 1
CheckTypeSize(xChangeFeedbackControlReq,0, 1008349, 1, 3.0, NULL, 1008348, NULL)
#endif

#if 1
CheckTypeSize(xFeedbackCtl,0, 1008351, 1, 3.0, NULL, 1008350, NULL)
#endif

#if 1
CheckTypeSize(xKbdFeedbackCtl,0, 1008353, 1, 3.0, NULL, 1008352, NULL)
#endif

#if 1
CheckTypeSize(xPtrFeedbackCtl,0, 1008355, 1, 3.0, NULL, 1008354, NULL)
#endif

#if 1
CheckTypeSize(xIntegerFeedbackCtl,0, 1008357, 1, 3.0, NULL, 1008356, NULL)
#endif

#if 1
CheckTypeSize(xStringFeedbackCtl,0, 1008359, 1, 3.0, NULL, 1008358, NULL)
#endif

#if 1
CheckTypeSize(xBellFeedbackCtl,0, 1008361, 1, 3.0, NULL, 1008360, NULL)
#endif

#if 1
CheckTypeSize(xLedFeedbackCtl,0, 1008363, 1, 3.0, NULL, 1008362, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceKeyMappingReq,0, 1008365, 1, 3.0, NULL, 1008364, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceKeyMappingReply,0, 1008367, 1, 3.0, NULL, 1008366, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceKeyMappingReq,0, 1008369, 1, 3.0, NULL, 1008368, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceModifierMappingReq,0, 1008371, 1, 3.0, NULL, 1008370, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceModifierMappingReply,0, 1008373, 1, 3.0, NULL, 1008372, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModifierMappingReq,0, 1008375, 1, 3.0, NULL, 1008374, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModifierMappingReply,0, 1008377, 1, 3.0, NULL, 1008376, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceButtonMappingReq,0, 1008379, 1, 3.0, NULL, 1008378, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceButtonMappingReply,0, 1008381, 1, 3.0, NULL, 1008380, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceButtonMappingReq,0, 1008383, 1, 3.0, NULL, 1008382, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceButtonMappingReply,0, 1008385, 1, 3.0, NULL, 1008384, NULL)
#endif

#if 1
CheckTypeSize(xQueryDeviceStateReq,0, 1008387, 1, 3.0, NULL, 1008386, NULL)
#endif

#if 1
CheckTypeSize(xQueryDeviceStateReply,0, 1008389, 1, 3.0, NULL, 1008388, NULL)
#endif

#if 1
CheckTypeSize(xKeyState,0, 1008391, 1, 3.0, NULL, 1008390, NULL)
#endif

#if 1
CheckTypeSize(xButtonState,0, 1008393, 1, 3.0, NULL, 1008392, NULL)
#endif

#if 1
CheckTypeSize(xValuatorState,0, 1008395, 1, 3.0, NULL, 1008394, NULL)
#endif

#if 1
CheckTypeSize(xSendExtensionEventReq,0, 1008397, 1, 3.0, NULL, 1008396, NULL)
#endif

#if 1
CheckTypeSize(xDeviceBellReq,0, 1008399, 1, 3.0, NULL, 1008398, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceValuatorsReq,0, 1008401, 1, 3.0, NULL, 1008400, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceValuatorsReply,0, 1008403, 1, 3.0, NULL, 1008402, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceControlReq,0, 1008405, 1, 3.0, NULL, 1008404, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceControlReply,0, 1008407, 1, 3.0, NULL, 1008406, NULL)
#endif

#if 1
CheckTypeSize(xDeviceState,0, 1008409, 1, 3.0, NULL, 1008408, NULL)
#endif

#if 1
CheckTypeSize(xDeviceResolutionState,0, 1008411, 1, 3.0, NULL, 1008410, NULL)
#endif

#if 1
CheckTypeSize(xDeviceAbsCalibState,0, 1008413, 1, 3.0, NULL, 1008412, NULL)
#endif

#if 1
CheckTypeSize(xDeviceAbsAreaState,0, 1008415, 1, 3.0, NULL, 1008414, NULL)
#endif

#if 1
CheckTypeSize(xDeviceCoreState,0, 1008417, 1, 3.0, NULL, 1008416, NULL)
#endif

#if 1
CheckTypeSize(xDeviceEnableState,0, 1008419, 1, 3.0, NULL, 1008418, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceControlReq,0, 1008421, 1, 3.0, NULL, 1008420, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceControlReply,0, 1008423, 1, 3.0, NULL, 1008422, NULL)
#endif

#if 1
CheckTypeSize(xDeviceCtl,0, 1008425, 1, 3.0, NULL, 1008424, NULL)
#endif

#if 1
CheckTypeSize(xDeviceResolutionCtl,0, 1008427, 1, 3.0, NULL, 1008426, NULL)
#endif

#if 1
CheckTypeSize(xDeviceAbsCalibCtl,0, 1008429, 1, 3.0, NULL, 1008428, NULL)
#endif

#if 1
CheckTypeSize(xDeviceAbsAreaCtl,0, 1008431, 1, 3.0, NULL, 1008430, NULL)
#endif

#if 1
CheckTypeSize(xDeviceCoreCtl,0, 1008433, 1, 3.0, NULL, 1008432, NULL)
#endif

#if 1
CheckTypeSize(xDeviceEnableCtl,0, 1008435, 1, 3.0, NULL, 1008434, NULL)
#endif

#if 1
CheckTypeSize(deviceValuator,0, 1008437, 1, 3.0, NULL, 1008436, NULL)
#endif

#if 1
CheckTypeSize(deviceKeyButtonPointer,0, 1008439, 1, 3.0, NULL, 1008438, NULL)
#endif

#if 1
CheckTypeSize(deviceFocus,0, 1008441, 1, 3.0, NULL, 1008440, NULL)
#endif

#if 1
CheckTypeSize(deviceStateNotify,0, 1008443, 1, 3.0, NULL, 1008442, NULL)
#endif

#if 1
CheckTypeSize(deviceKeyStateNotify,0, 1008445, 1, 3.0, NULL, 1008444, NULL)
#endif

#if 1
CheckTypeSize(deviceButtonStateNotify,0, 1008447, 1, 3.0, NULL, 1008446, NULL)
#endif

#if 1
CheckTypeSize(deviceMappingNotify,0, 1008449, 1, 3.0, NULL, 1008448, NULL)
#endif

#if 1
CheckTypeSize(changeDeviceNotify,0, 1008451, 1, 3.0, NULL, 1008450, NULL)
#endif

#if 1
CheckTypeSize(devicePresenceNotify,0, 1008453, 1, 3.0, NULL, 1008452, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XIproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
