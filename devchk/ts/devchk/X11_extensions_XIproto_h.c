/*
 * Test of X11/extensions/XIproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XIproto.h\n");
#endif

printf("Checking data structures in X11/extensions/XIproto.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef MORE_EVENTS
	CompareConstant(MORE_EVENTS,0x80,16242,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: MORE_EVENTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEVICE_BITS
	CompareConstant(DEVICE_BITS,0x7F,16243,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DEVICE_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef InputClassBits
	CompareConstant(InputClassBits,0x3F,16244,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: InputClassBits\n");
cnt++;
#endif

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
CheckTypeSize(struct _XExtEventInfo,0, 36153, 1, , NULL, 0, NULL)
Msg("Missing member data for _XExtEventInfo on All\n");
CheckOffset(struct _XExtEventInfo,mask,0,1,214309)
CheckOffset(struct _XExtEventInfo,type,0,1,214310)
CheckOffset(struct _XExtEventInfo,word,0,1,214311)
#endif

#if 1
CheckTypeSize(XExtEventInfo,0, 36154, 1, 3.0, NULL, 36153, NULL)
#endif

#if 1
CheckTypeSize(Pointer,0, 36155, 1, 3.0, NULL, 4659, NULL)
#endif

#if 1
CheckTypeSize(xGetExtensionVersionReq,0, 36158, 1, 3.0, NULL, 36157, NULL)
#endif

#if 1
CheckTypeSize(xGetExtensionVersionReply,0, 36160, 1, 3.0, NULL, 36159, NULL)
#endif

#if 1
CheckTypeSize(xListInputDevicesReq,0, 36162, 1, 3.0, NULL, 36161, NULL)
#endif

#if 1
CheckTypeSize(xListInputDevicesReply,0, 36164, 1, 3.0, NULL, 36163, NULL)
#endif

#if 1
CheckTypeSize(xDeviceInfoPtr,0, 36165, 1, 3.0, NULL, 36370, NULL)
#endif

#if 1
CheckTypeSize(xAnyClassPtr,0, 36166, 1, 3.0, NULL, 36366, NULL)
#endif

#if 1
CheckTypeSize(struct _xAnyClassinfo,0, 36167, 1, , NULL, 0, NULL)
Msg("Missing member data for _xAnyClassinfo on All\n");
CheckOffset(struct _xAnyClassinfo,length,0,1,214270)
#endif

#if 1
CheckTypeSize(xAnyClassInfo,0, 36168, 1, 3.0, NULL, 36167, NULL)
#endif

#if 1
CheckTypeSize(struct _xDeviceInfo,0, 36169, 1, , NULL, 0, NULL)
Msg("Missing member data for _xDeviceInfo on All\n");
CheckOffset(struct _xDeviceInfo,type,0,1,214264)
CheckOffset(struct _xDeviceInfo,id,0,1,214265)
CheckOffset(struct _xDeviceInfo,num_classes,0,1,214266)
CheckOffset(struct _xDeviceInfo,use,0,1,214267)
CheckOffset(struct _xDeviceInfo,pad1,0,1,214268)
#endif

#if 1
CheckTypeSize(xDeviceInfo,0, 36170, 1, 3.0, NULL, 36169, NULL)
#endif

#if 1
CheckTypeSize(xKeyInfoPtr,0, 36171, 1, 3.0, NULL, 36373, NULL)
#endif

#if 1
CheckTypeSize(struct _xKeyInfo,0, 36172, 1, , NULL, 0, NULL)
Msg("Missing member data for _xKeyInfo on All\n");
CheckOffset(struct _xKeyInfo,length,0,1,214258)
CheckOffset(struct _xKeyInfo,min_keycode,0,1,214259)
CheckOffset(struct _xKeyInfo,max_keycode,0,1,214260)
CheckOffset(struct _xKeyInfo,num_keys,0,1,214261)
CheckOffset(struct _xKeyInfo,pad1,0,1,214262)
CheckOffset(struct _xKeyInfo,pad2,0,1,214263)
#endif

#if 1
CheckTypeSize(xKeyInfo,0, 36173, 1, 3.0, NULL, 36172, NULL)
#endif

#if 1
CheckTypeSize(xButtonInfoPtr,0, 36174, 1, 3.0, NULL, 36365, NULL)
#endif

#if 1
CheckTypeSize(struct _xButtonInfo,0, 36175, 1, , NULL, 0, NULL)
Msg("Missing member data for _xButtonInfo on All\n");
CheckOffset(struct _xButtonInfo,length,0,1,214255)
CheckOffset(struct _xButtonInfo,num_buttons,0,1,214256)
#endif

#if 1
CheckTypeSize(xButtonInfo,0, 36176, 1, 3.0, NULL, 36175, NULL)
#endif

#if 1
CheckTypeSize(xValuatorInfoPtr,0, 36177, 1, 3.0, NULL, 36369, NULL)
#endif

#if 1
CheckTypeSize(struct _xValuatorInfo,0, 36178, 1, , NULL, 0, NULL)
Msg("Missing member data for _xValuatorInfo on All\n");
CheckOffset(struct _xValuatorInfo,length,0,1,214250)
CheckOffset(struct _xValuatorInfo,num_axes,0,1,214251)
CheckOffset(struct _xValuatorInfo,mode,0,1,214252)
CheckOffset(struct _xValuatorInfo,motion_buffer_size,0,1,214253)
#endif

#if 1
CheckTypeSize(xValuatorInfo,0, 36179, 1, 3.0, NULL, 36178, NULL)
#endif

#if 1
CheckTypeSize(xAxisInfoPtr,0, 36180, 1, 3.0, NULL, 36368, NULL)
#endif

#if 1
CheckTypeSize(struct _xAxisInfo,0, 36181, 1, , NULL, 0, NULL)
Msg("Missing member data for _xAxisInfo on All\n");
CheckOffset(struct _xAxisInfo,resolution,0,1,214246)
CheckOffset(struct _xAxisInfo,min_value,0,1,214247)
CheckOffset(struct _xAxisInfo,max_value,0,1,214248)
#endif

#if 1
CheckTypeSize(xAxisInfo,0, 36182, 1, 3.0, NULL, 36181, NULL)
#endif

#if 1
CheckTypeSize(xOpenDeviceReq,0, 36184, 1, 3.0, NULL, 36183, NULL)
#endif

#if 1
CheckTypeSize(xOpenDeviceReply,0, 36186, 1, 3.0, NULL, 36185, NULL)
#endif

#if 1
CheckTypeSize(xInputClassInfo,0, 36188, 1, 3.0, NULL, 36187, NULL)
#endif

#if 1
CheckTypeSize(xCloseDeviceReq,0, 36190, 1, 3.0, NULL, 36189, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModeReq,0, 36192, 1, 3.0, NULL, 36191, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModeReply,0, 36194, 1, 3.0, NULL, 36193, NULL)
#endif

#if 1
CheckTypeSize(xSelectExtensionEventReq,0, 36196, 1, 3.0, NULL, 36195, NULL)
#endif

#if 1
CheckTypeSize(xGetSelectedExtensionEventsReq,0, 36198, 1, 3.0, NULL, 36197, NULL)
#endif

#if 1
CheckTypeSize(xGetSelectedExtensionEventsReply,0, 36200, 1, 3.0, NULL, 36199, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceDontPropagateListReq,0, 36202, 1, 3.0, NULL, 36201, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceDontPropagateListReq,0, 36204, 1, 3.0, NULL, 36203, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceDontPropagateListReply,0, 36206, 1, 3.0, NULL, 36205, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceMotionEventsReq,0, 36208, 1, 3.0, NULL, 36207, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceMotionEventsReply,0, 36210, 1, 3.0, NULL, 36209, NULL)
#endif

#if 1
CheckTypeSize(xChangeKeyboardDeviceReq,0, 36212, 1, 3.0, NULL, 36211, NULL)
#endif

#if 1
CheckTypeSize(xChangeKeyboardDeviceReply,0, 36214, 1, 3.0, NULL, 36213, NULL)
#endif

#if 1
CheckTypeSize(xChangePointerDeviceReq,0, 36216, 1, 3.0, NULL, 36215, NULL)
#endif

#if 1
CheckTypeSize(xChangePointerDeviceReply,0, 36218, 1, 3.0, NULL, 36217, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceReq,0, 36220, 1, 3.0, NULL, 36219, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceReply,0, 36222, 1, 3.0, NULL, 36221, NULL)
#endif

#if 1
CheckTypeSize(xUngrabDeviceReq,0, 36224, 1, 3.0, NULL, 36223, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceKeyReq,0, 36226, 1, 3.0, NULL, 36225, NULL)
#endif

#if 1
CheckTypeSize(xUngrabDeviceKeyReq,0, 36228, 1, 3.0, NULL, 36227, NULL)
#endif

#if 1
CheckTypeSize(xGrabDeviceButtonReq,0, 36230, 1, 3.0, NULL, 36229, NULL)
#endif

#if 1
CheckTypeSize(xUngrabDeviceButtonReq,0, 36232, 1, 3.0, NULL, 36231, NULL)
#endif

#if 1
CheckTypeSize(xAllowDeviceEventsReq,0, 36234, 1, 3.0, NULL, 36233, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceFocusReq,0, 36236, 1, 3.0, NULL, 36235, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceFocusReply,0, 36238, 1, 3.0, NULL, 36237, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceFocusReq,0, 36240, 1, 3.0, NULL, 36239, NULL)
#endif

#if 1
CheckTypeSize(xGetFeedbackControlReq,0, 36242, 1, 3.0, NULL, 36241, NULL)
#endif

#if 1
CheckTypeSize(xGetFeedbackControlReply,0, 36244, 1, 3.0, NULL, 36243, NULL)
#endif

#if 1
CheckTypeSize(xFeedbackState,0, 36246, 1, 3.0, NULL, 36245, NULL)
#endif

#if 1
CheckTypeSize(xKbdFeedbackState,0, 36248, 1, 3.0, NULL, 36247, NULL)
#endif

#if 1
CheckTypeSize(xPtrFeedbackState,0, 36250, 1, 3.0, NULL, 36249, NULL)
#endif

#if 1
CheckTypeSize(xIntegerFeedbackState,0, 36252, 1, 3.0, NULL, 36251, NULL)
#endif

#if 1
CheckTypeSize(xStringFeedbackState,0, 36254, 1, 3.0, NULL, 36253, NULL)
#endif

#if 1
CheckTypeSize(xBellFeedbackState,0, 36256, 1, 3.0, NULL, 36255, NULL)
#endif

#if 1
CheckTypeSize(xLedFeedbackState,0, 36258, 1, 3.0, NULL, 36257, NULL)
#endif

#if 1
CheckTypeSize(xChangeFeedbackControlReq,0, 36260, 1, 3.0, NULL, 36259, NULL)
#endif

#if 1
CheckTypeSize(xFeedbackCtl,0, 36262, 1, 3.0, NULL, 36261, NULL)
#endif

#if 1
CheckTypeSize(xKbdFeedbackCtl,0, 36264, 1, 3.0, NULL, 36263, NULL)
#endif

#if 1
CheckTypeSize(xPtrFeedbackCtl,0, 36266, 1, 3.0, NULL, 36265, NULL)
#endif

#if 1
CheckTypeSize(xIntegerFeedbackCtl,0, 36268, 1, 3.0, NULL, 36267, NULL)
#endif

#if 1
CheckTypeSize(xStringFeedbackCtl,0, 36270, 1, 3.0, NULL, 36269, NULL)
#endif

#if 1
CheckTypeSize(xBellFeedbackCtl,0, 36272, 1, 3.0, NULL, 36271, NULL)
#endif

#if 1
CheckTypeSize(xLedFeedbackCtl,0, 36274, 1, 3.0, NULL, 36273, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceKeyMappingReq,0, 36276, 1, 3.0, NULL, 36275, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceKeyMappingReply,0, 36278, 1, 3.0, NULL, 36277, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceKeyMappingReq,0, 36280, 1, 3.0, NULL, 36279, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceModifierMappingReq,0, 36282, 1, 3.0, NULL, 36281, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceModifierMappingReply,0, 36284, 1, 3.0, NULL, 36283, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModifierMappingReq,0, 36286, 1, 3.0, NULL, 36285, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceModifierMappingReply,0, 36288, 1, 3.0, NULL, 36287, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceButtonMappingReq,0, 36290, 1, 3.0, NULL, 36289, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceButtonMappingReply,0, 36292, 1, 3.0, NULL, 36291, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceButtonMappingReq,0, 36294, 1, 3.0, NULL, 36293, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceButtonMappingReply,0, 36296, 1, 3.0, NULL, 36295, NULL)
#endif

#if 1
CheckTypeSize(xQueryDeviceStateReq,0, 36298, 1, 3.0, NULL, 36297, NULL)
#endif

#if 1
CheckTypeSize(xQueryDeviceStateReply,0, 36300, 1, 3.0, NULL, 36299, NULL)
#endif

#if 1
CheckTypeSize(xKeyState,0, 36302, 1, 3.0, NULL, 36301, NULL)
#endif

#if 1
CheckTypeSize(xButtonState,0, 36304, 1, 3.0, NULL, 36303, NULL)
#endif

#if 1
CheckTypeSize(xValuatorState,0, 36306, 1, 3.0, NULL, 36305, NULL)
#endif

#if 1
CheckTypeSize(xSendExtensionEventReq,0, 36308, 1, 3.0, NULL, 36307, NULL)
#endif

#if 1
CheckTypeSize(xDeviceBellReq,0, 36310, 1, 3.0, NULL, 36309, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceValuatorsReq,0, 36312, 1, 3.0, NULL, 36311, NULL)
#endif

#if 1
CheckTypeSize(xSetDeviceValuatorsReply,0, 36314, 1, 3.0, NULL, 36313, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceControlReq,0, 36316, 1, 3.0, NULL, 36315, NULL)
#endif

#if 1
CheckTypeSize(xGetDeviceControlReply,0, 36318, 1, 3.0, NULL, 36317, NULL)
#endif

#if 1
CheckTypeSize(xDeviceState,0, 36320, 1, 3.0, NULL, 36319, NULL)
#endif

#if 1
CheckTypeSize(xDeviceResolutionState,0, 36322, 1, 3.0, NULL, 36321, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceControlReq,0, 36332, 1, 3.0, NULL, 36331, NULL)
#endif

#if 1
CheckTypeSize(xChangeDeviceControlReply,0, 36334, 1, 3.0, NULL, 36333, NULL)
#endif

#if 1
CheckTypeSize(xDeviceCtl,0, 36336, 1, 3.0, NULL, 36335, NULL)
#endif

#if 1
CheckTypeSize(xDeviceResolutionCtl,0, 36338, 1, 3.0, NULL, 36337, NULL)
#endif

#if 1
CheckTypeSize(deviceValuator,0, 36348, 1, 3.0, NULL, 36347, NULL)
#endif

#if 1
CheckTypeSize(deviceKeyButtonPointer,0, 36350, 1, 3.0, NULL, 36349, NULL)
#endif

#if 1
CheckTypeSize(deviceFocus,0, 36352, 1, 3.0, NULL, 36351, NULL)
#endif

#if 1
CheckTypeSize(deviceStateNotify,0, 36354, 1, 3.0, NULL, 36353, NULL)
#endif

#if 1
CheckTypeSize(deviceKeyStateNotify,0, 36356, 1, 3.0, NULL, 36355, NULL)
#endif

#if 1
CheckTypeSize(deviceButtonStateNotify,0, 36358, 1, 3.0, NULL, 36357, NULL)
#endif

#if 1
CheckTypeSize(deviceMappingNotify,0, 36360, 1, 3.0, NULL, 36359, NULL)
#endif

#if 1
CheckTypeSize(changeDeviceNotify,0, 36362, 1, 3.0, NULL, 36361, NULL)
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
