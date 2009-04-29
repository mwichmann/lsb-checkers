/*
 * Test of X11/extensions/XI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/XI.h"



#ifdef TET_TEST
void X11_extensions_XI_h()
{
#else
int X11_extensions_XI_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XI.h\n");
#endif

printf("Checking data structures in X11/extensions/XI.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetExtensionVersionReq
	CompareConstant(sz_xGetExtensionVersionReq,8,15649,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetExtensionVersionReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetExtensionVersionReply
	CompareConstant(sz_xGetExtensionVersionReply,32,15650,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetExtensionVersionReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListInputDevicesReq
	CompareConstant(sz_xListInputDevicesReq,4,15651,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListInputDevicesReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xListInputDevicesReply
	CompareConstant(sz_xListInputDevicesReply,32,15652,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xListInputDevicesReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xOpenDeviceReq
	CompareConstant(sz_xOpenDeviceReq,8,15653,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xOpenDeviceReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xOpenDeviceReply
	CompareConstant(sz_xOpenDeviceReply,32,15654,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xOpenDeviceReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xCloseDeviceReq
	CompareConstant(sz_xCloseDeviceReq,8,15655,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xCloseDeviceReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceModeReq
	CompareConstant(sz_xSetDeviceModeReq,8,15656,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceModeReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceModeReply
	CompareConstant(sz_xSetDeviceModeReply,32,15657,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceModeReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSelectExtensionEventReq
	CompareConstant(sz_xSelectExtensionEventReq,12,15658,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSelectExtensionEventReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetSelectedExtensionEventsReq
	CompareConstant(sz_xGetSelectedExtensionEventsReq,8,15659,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetSelectedExtensionEventsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetSelectedExtensionEventsReply
	CompareConstant(sz_xGetSelectedExtensionEventsReply,32,15660,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetSelectedExtensionEventsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeDeviceDontPropagateListReq
	CompareConstant(sz_xChangeDeviceDontPropagateListReq,12,15661,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeDeviceDontPropagateListReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceDontPropagateListReq
	CompareConstant(sz_xGetDeviceDontPropagateListReq,8,15662,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceDontPropagateListReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceDontPropagateListReply
	CompareConstant(sz_xGetDeviceDontPropagateListReply,32,15663,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceDontPropagateListReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceMotionEventsReq
	CompareConstant(sz_xGetDeviceMotionEventsReq,16,15664,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceMotionEventsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceMotionEventsReply
	CompareConstant(sz_xGetDeviceMotionEventsReply,32,15665,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceMotionEventsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeKeyboardDeviceReq
	CompareConstant(sz_xChangeKeyboardDeviceReq,8,15666,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeKeyboardDeviceReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeKeyboardDeviceReply
	CompareConstant(sz_xChangeKeyboardDeviceReply,32,15667,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeKeyboardDeviceReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangePointerDeviceReq
	CompareConstant(sz_xChangePointerDeviceReq,8,15668,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangePointerDeviceReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangePointerDeviceReply
	CompareConstant(sz_xChangePointerDeviceReply,32,15669,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangePointerDeviceReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabDeviceReq
	CompareConstant(sz_xGrabDeviceReq,20,15670,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabDeviceReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabDeviceReply
	CompareConstant(sz_xGrabDeviceReply,32,15671,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabDeviceReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xUngrabDeviceReq
	CompareConstant(sz_xUngrabDeviceReq,12,15672,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xUngrabDeviceReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabDeviceKeyReq
	CompareConstant(sz_xGrabDeviceKeyReq,20,15673,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabDeviceKeyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabDeviceKeyReply
	CompareConstant(sz_xGrabDeviceKeyReply,32,15674,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabDeviceKeyReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xUngrabDeviceKeyReq
	CompareConstant(sz_xUngrabDeviceKeyReq,16,15675,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xUngrabDeviceKeyReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabDeviceButtonReq
	CompareConstant(sz_xGrabDeviceButtonReq,20,15676,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabDeviceButtonReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGrabDeviceButtonReply
	CompareConstant(sz_xGrabDeviceButtonReply,32,15677,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGrabDeviceButtonReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xUngrabDeviceButtonReq
	CompareConstant(sz_xUngrabDeviceButtonReq,16,15678,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xUngrabDeviceButtonReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xAllowDeviceEventsReq
	CompareConstant(sz_xAllowDeviceEventsReq,12,15679,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xAllowDeviceEventsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceFocusReq
	CompareConstant(sz_xGetDeviceFocusReq,8,15680,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceFocusReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceFocusReply
	CompareConstant(sz_xGetDeviceFocusReply,32,15681,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceFocusReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceFocusReq
	CompareConstant(sz_xSetDeviceFocusReq,16,15682,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceFocusReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetFeedbackControlReq
	CompareConstant(sz_xGetFeedbackControlReq,8,15683,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetFeedbackControlReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetFeedbackControlReply
	CompareConstant(sz_xGetFeedbackControlReply,32,15684,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetFeedbackControlReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeFeedbackControlReq
	CompareConstant(sz_xChangeFeedbackControlReq,12,15685,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeFeedbackControlReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceKeyMappingReq
	CompareConstant(sz_xGetDeviceKeyMappingReq,8,15686,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceKeyMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceKeyMappingReply
	CompareConstant(sz_xGetDeviceKeyMappingReply,32,15687,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceKeyMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeDeviceKeyMappingReq
	CompareConstant(sz_xChangeDeviceKeyMappingReq,8,15688,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeDeviceKeyMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceModifierMappingReq
	CompareConstant(sz_xGetDeviceModifierMappingReq,8,15689,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceModifierMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceModifierMappingReq
	CompareConstant(sz_xSetDeviceModifierMappingReq,8,15690,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceModifierMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceModifierMappingReply
	CompareConstant(sz_xSetDeviceModifierMappingReply,32,15691,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceModifierMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceButtonMappingReq
	CompareConstant(sz_xGetDeviceButtonMappingReq,8,15692,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceButtonMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceButtonMappingReply
	CompareConstant(sz_xGetDeviceButtonMappingReply,32,15693,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceButtonMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceButtonMappingReq
	CompareConstant(sz_xSetDeviceButtonMappingReq,8,15694,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceButtonMappingReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceButtonMappingReply
	CompareConstant(sz_xSetDeviceButtonMappingReply,32,15695,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceButtonMappingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryDeviceStateReq
	CompareConstant(sz_xQueryDeviceStateReq,8,15696,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryDeviceStateReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xQueryDeviceStateReply
	CompareConstant(sz_xQueryDeviceStateReply,32,15697,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xQueryDeviceStateReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSendExtensionEventReq
	CompareConstant(sz_xSendExtensionEventReq,16,15698,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSendExtensionEventReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xDeviceBellReq
	CompareConstant(sz_xDeviceBellReq,8,15699,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xDeviceBellReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceValuatorsReq
	CompareConstant(sz_xSetDeviceValuatorsReq,8,15700,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceValuatorsReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSetDeviceValuatorsReply
	CompareConstant(sz_xSetDeviceValuatorsReply,32,15701,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSetDeviceValuatorsReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceControlReq
	CompareConstant(sz_xGetDeviceControlReq,8,15702,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceControlReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xGetDeviceControlReply
	CompareConstant(sz_xGetDeviceControlReply,32,15703,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xGetDeviceControlReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeDeviceControlReq
	CompareConstant(sz_xChangeDeviceControlReq,8,15704,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeDeviceControlReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xChangeDeviceControlReply
	CompareConstant(sz_xChangeDeviceControlReply,32,15705,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: sz_xChangeDeviceControlReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INAME
	CompareStringConstant(INAME,"XInputExtension",15706,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: INAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_KEYBOARD
	CompareStringConstant(XI_KEYBOARD,"KEYBOARD",15707,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_KEYBOARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_MOUSE
	CompareStringConstant(XI_MOUSE,"MOUSE",15708,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_MOUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_TABLET
	CompareStringConstant(XI_TABLET,"TABLET",15709,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_TABLET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_TOUCHSCREEN
	CompareStringConstant(XI_TOUCHSCREEN,"TOUCHSCREEN",15710,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_TOUCHSCREEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_TOUCHPAD
	CompareStringConstant(XI_TOUCHPAD,"TOUCHPAD",15711,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_TOUCHPAD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_BARCODE
	CompareStringConstant(XI_BARCODE,"BARCODE",15712,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_BARCODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_BUTTONBOX
	CompareStringConstant(XI_BUTTONBOX,"BUTTONBOX",15713,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_BUTTONBOX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_KNOB_BOX
	CompareStringConstant(XI_KNOB_BOX,"KNOB_BOX",15714,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_KNOB_BOX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_ONE_KNOB
	CompareStringConstant(XI_ONE_KNOB,"ONE_KNOB",15715,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_ONE_KNOB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_NINE_KNOB
	CompareStringConstant(XI_NINE_KNOB,"NINE_KNOB",15716,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_NINE_KNOB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_TRACKBALL
	CompareStringConstant(XI_TRACKBALL,"TRACKBALL",15717,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_TRACKBALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_QUADRATURE
	CompareStringConstant(XI_QUADRATURE,"QUADRATURE",15718,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_QUADRATURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_ID_MODULE
	CompareStringConstant(XI_ID_MODULE,"ID_MODULE",15719,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_ID_MODULE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_SPACEBALL
	CompareStringConstant(XI_SPACEBALL,"SPACEBALL",15720,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_SPACEBALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DATAGLOVE
	CompareStringConstant(XI_DATAGLOVE,"DATAGLOVE",15721,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_DATAGLOVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_EYETRACKER
	CompareStringConstant(XI_EYETRACKER,"EYETRACKER",15722,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_EYETRACKER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_CURSORKEYS
	CompareStringConstant(XI_CURSORKEYS,"CURSORKEYS",15723,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_CURSORKEYS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_FOOTMOUSE
	CompareStringConstant(XI_FOOTMOUSE,"FOOTMOUSE",15724,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_FOOTMOUSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Dont_Check
	CompareConstant(Dont_Check,0,15725,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: Dont_Check\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XInput_Initial_Release
	CompareConstant(XInput_Initial_Release,1,15726,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XInput_Initial_Release\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XInput_Add_XDeviceBell
	CompareConstant(XInput_Add_XDeviceBell,2,15727,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XInput_Add_XDeviceBell\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XInput_Add_XSetDeviceValuators
	CompareConstant(XInput_Add_XSetDeviceValuators,3,15728,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XInput_Add_XSetDeviceValuators\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XInput_Add_XChangeDeviceControl
	CompareConstant(XInput_Add_XChangeDeviceControl,4,15729,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XInput_Add_XChangeDeviceControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XInput_Add_DevicePresenceNotify
	CompareConstant(XInput_Add_DevicePresenceNotify,5,15730,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XInput_Add_DevicePresenceNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Absent
	CompareConstant(XI_Absent,0,15731,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Absent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Present
	CompareConstant(XI_Present,1,15732,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Present\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Initial_Release_Major
	CompareConstant(XI_Initial_Release_Major,1,15733,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Initial_Release_Major\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Initial_Release_Minor
	CompareConstant(XI_Initial_Release_Minor,0,15734,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Initial_Release_Minor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_XDeviceBell_Major
	CompareConstant(XI_Add_XDeviceBell_Major,1,15735,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_XDeviceBell_Major\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_XDeviceBell_Minor
	CompareConstant(XI_Add_XDeviceBell_Minor,1,15736,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_XDeviceBell_Minor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_XSetDeviceValuators_Major
	CompareConstant(XI_Add_XSetDeviceValuators_Major,1,15737,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_XSetDeviceValuators_Major\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_XSetDeviceValuators_Minor
	CompareConstant(XI_Add_XSetDeviceValuators_Minor,2,15738,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_XSetDeviceValuators_Minor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_XChangeDeviceControl_Major
	CompareConstant(XI_Add_XChangeDeviceControl_Major,1,15739,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_XChangeDeviceControl_Major\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_XChangeDeviceControl_Minor
	CompareConstant(XI_Add_XChangeDeviceControl_Minor,3,15740,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_XChangeDeviceControl_Minor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_DevicePresenceNotify_Major
	CompareConstant(XI_Add_DevicePresenceNotify_Major,1,15741,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_DevicePresenceNotify_Major\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_Add_DevicePresenceNotify_Minor
	CompareConstant(XI_Add_DevicePresenceNotify_Minor,4,15742,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_Add_DevicePresenceNotify_Minor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEVICE_RESOLUTION
	CompareConstant(DEVICE_RESOLUTION,1,15743,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DEVICE_RESOLUTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEVICE_ABS_CALIB
	CompareConstant(DEVICE_ABS_CALIB,2,15744,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DEVICE_ABS_CALIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEVICE_CORE
	CompareConstant(DEVICE_CORE,3,15745,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DEVICE_CORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEVICE_ENABLE
	CompareConstant(DEVICE_ENABLE,4,15746,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DEVICE_ENABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEVICE_ABS_AREA
	CompareConstant(DEVICE_ABS_AREA,5,15747,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DEVICE_ABS_AREA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NoSuchExtension
	CompareConstant(NoSuchExtension,1,15748,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: NoSuchExtension\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COUNT
	CompareConstant(COUNT,0,15749,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: COUNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CREATE
	CompareConstant(CREATE,1,15750,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: CREATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NewPointer
	CompareConstant(NewPointer,0,15751,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: NewPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NewKeyboard
	CompareConstant(NewKeyboard,1,15752,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: NewKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XPOINTER
	CompareConstant(XPOINTER,0,15753,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XPOINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XKEYBOARD
	CompareConstant(XKEYBOARD,1,15754,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XKEYBOARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UseXKeyboard
	CompareConstant(UseXKeyboard,0xFF,15755,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: UseXKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsXPointer
	CompareConstant(IsXPointer,0,15756,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IsXPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsXKeyboard
	CompareConstant(IsXKeyboard,1,15757,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IsXKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsXExtensionDevice
	CompareConstant(IsXExtensionDevice,2,15758,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IsXExtensionDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsXExtensionKeyboard
	CompareConstant(IsXExtensionKeyboard,3,15759,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IsXExtensionKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IsXExtensionPointer
	CompareConstant(IsXExtensionPointer,4,15760,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IsXExtensionPointer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AsyncThisDevice
	CompareConstant(AsyncThisDevice,0,15761,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: AsyncThisDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SyncThisDevice
	CompareConstant(SyncThisDevice,1,15762,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: SyncThisDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ReplayThisDevice
	CompareConstant(ReplayThisDevice,2,15763,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: ReplayThisDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AsyncOtherDevices
	CompareConstant(AsyncOtherDevices,3,15764,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: AsyncOtherDevices\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AsyncAll
	CompareConstant(AsyncAll,4,15765,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: AsyncAll\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SyncAll
	CompareConstant(SyncAll,5,15766,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: SyncAll\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FollowKeyboard
	CompareConstant(FollowKeyboard,3,15767,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FollowKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RevertToFollowKeyboard
	CompareConstant(RevertToFollowKeyboard,3,15768,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: RevertToFollowKeyboard\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvAccelNum
	CompareConstant(DvAccelNum,(1L << 0),15769,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvAccelNum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvAccelDenom
	CompareConstant(DvAccelDenom,(1L << 1),15770,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvAccelDenom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvThreshold
	CompareConstant(DvThreshold,(1L << 2),15771,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvThreshold\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvKeyClickPercent
	CompareConstant(DvKeyClickPercent,(1L<<0),15772,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvKeyClickPercent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvPercent
	CompareConstant(DvPercent,(1L<<1),15773,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvPercent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvPitch
	CompareConstant(DvPitch,(1L<<2),15774,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvPitch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvDuration
	CompareConstant(DvDuration,(1L<<3),15775,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvDuration\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvLed
	CompareConstant(DvLed,(1L<<4),15776,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvLed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvLedMode
	CompareConstant(DvLedMode,(1L<<5),15777,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvLedMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvKey
	CompareConstant(DvKey,(1L<<6),15778,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvKey\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvAutoRepeatMode
	CompareConstant(DvAutoRepeatMode,(1L<<7),15779,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvAutoRepeatMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvString
	CompareConstant(DvString,(1L << 0),15780,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvString\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DvInteger
	CompareConstant(DvInteger,(1L << 0),15781,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DvInteger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DeviceMode
	CompareConstant(DeviceMode,(1L << 0),15782,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DeviceMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Relative
	CompareConstant(Relative,0,15783,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: Relative\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef Absolute
	CompareConstant(Absolute,1,15784,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: Absolute\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ProximityState
	CompareConstant(ProximityState,(1L << 1),15785,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: ProximityState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef InProximity
	CompareConstant(InProximity,(0L << 1),15786,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: InProximity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OutOfProximity
	CompareConstant(OutOfProximity,(1L << 1),15787,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: OutOfProximity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AddToList
	CompareConstant(AddToList,0,15788,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: AddToList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DeleteFromList
	CompareConstant(DeleteFromList,1,15789,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DeleteFromList\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KeyClass
	CompareConstant(KeyClass,0,15790,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: KeyClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ButtonClass
	CompareConstant(ButtonClass,1,15791,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: ButtonClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ValuatorClass
	CompareConstant(ValuatorClass,2,15792,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: ValuatorClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FeedbackClass
	CompareConstant(FeedbackClass,3,15793,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FeedbackClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ProximityClass
	CompareConstant(ProximityClass,4,15794,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: ProximityClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FocusClass
	CompareConstant(FocusClass,5,15795,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: FocusClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OtherClass
	CompareConstant(OtherClass,6,15796,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: OtherClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KbdFeedbackClass
	CompareConstant(KbdFeedbackClass,0,15797,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: KbdFeedbackClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PtrFeedbackClass
	CompareConstant(PtrFeedbackClass,1,15798,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PtrFeedbackClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef StringFeedbackClass
	CompareConstant(StringFeedbackClass,2,15799,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: StringFeedbackClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IntegerFeedbackClass
	CompareConstant(IntegerFeedbackClass,3,15800,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IntegerFeedbackClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LedFeedbackClass
	CompareConstant(LedFeedbackClass,4,15801,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: LedFeedbackClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BellFeedbackClass
	CompareConstant(BellFeedbackClass,5,15802,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: BellFeedbackClass\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _devicePointerMotionHint
	CompareConstant(_devicePointerMotionHint,0,15803,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _devicePointerMotionHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButton1Motion
	CompareConstant(_deviceButton1Motion,1,15804,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButton1Motion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButton2Motion
	CompareConstant(_deviceButton2Motion,2,15805,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButton2Motion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButton3Motion
	CompareConstant(_deviceButton3Motion,3,15806,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButton3Motion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButton4Motion
	CompareConstant(_deviceButton4Motion,4,15807,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButton4Motion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButton5Motion
	CompareConstant(_deviceButton5Motion,5,15808,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButton5Motion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButtonMotion
	CompareConstant(_deviceButtonMotion,6,15809,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButtonMotion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButtonGrab
	CompareConstant(_deviceButtonGrab,7,15810,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButtonGrab\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceOwnerGrabButton
	CompareConstant(_deviceOwnerGrabButton,8,15811,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceOwnerGrabButton\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _noExtensionEvent
	CompareConstant(_noExtensionEvent,9,15812,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _noExtensionEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _devicePresence
	CompareConstant(_devicePresence,0,15813,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _devicePresence\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DeviceAdded
	CompareConstant(DeviceAdded,0,15814,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DeviceAdded\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DeviceRemoved
	CompareConstant(DeviceRemoved,1,15815,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DeviceRemoved\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DeviceEnabled
	CompareConstant(DeviceEnabled,2,15816,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DeviceEnabled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DeviceDisabled
	CompareConstant(DeviceDisabled,3,15817,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DeviceDisabled\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DeviceUnrecoverable
	CompareConstant(DeviceUnrecoverable,4,15818,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: DeviceUnrecoverable\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_BadDevice
	CompareConstant(XI_BadDevice,0,15819,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_BadDevice\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_BadEvent
	CompareConstant(XI_BadEvent,1,15820,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_BadEvent\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_BadMode
	CompareConstant(XI_BadMode,2,15821,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_BadMode\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_DeviceBusy
	CompareConstant(XI_DeviceBusy,3,15822,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_DeviceBusy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XI_BadClass
	CompareConstant(XI_BadClass,4,15823,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: XI_BadClass\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(XEventClass,0, 35986, 1, 3.0, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XExtensionVersion,0, 35988, 1, 3.0, NULL, 35987, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XI.h\n\n",pcnt,cnt);
return cnt;
#endif

}
