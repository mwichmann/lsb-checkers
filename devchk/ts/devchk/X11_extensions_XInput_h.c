/*
 * Test of X11/extensions/XInput.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#define NeedWidePrototypes 1
#include "X11/extensions/XInput.h"



#ifdef TET_TEST
void X11_extensions_XInput_h()
{
#else
int X11_extensions_XInput_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XInput.h\n");
#endif

printf("Checking data structures in X11/extensions/XInput.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef _deviceKeyPress
	CompareConstant(_deviceKeyPress,0,15824,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceKeyPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceKeyRelease
	CompareConstant(_deviceKeyRelease,1,15825,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceKeyRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButtonPress
	CompareConstant(_deviceButtonPress,0,15826,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButtonPress\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceButtonRelease
	CompareConstant(_deviceButtonRelease,1,15827,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceButtonRelease\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceMotionNotify
	CompareConstant(_deviceMotionNotify,0,15828,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceMotionNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceFocusIn
	CompareConstant(_deviceFocusIn,0,15829,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceFocusIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceFocusOut
	CompareConstant(_deviceFocusOut,1,15830,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceFocusOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _proximityIn
	CompareConstant(_proximityIn,0,15831,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _proximityIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _proximityOut
	CompareConstant(_proximityOut,1,15832,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _proximityOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceStateNotify
	CompareConstant(_deviceStateNotify,0,15833,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceStateNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _deviceMappingNotify
	CompareConstant(_deviceMappingNotify,1,15834,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _deviceMappingNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _changeDeviceNotify
	CompareConstant(_changeDeviceNotify,2,15835,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: _changeDeviceNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FindTypeAndClass(d,type,_class,classid,offset) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceKeyPress(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceKeyRelease(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButtonPress(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButtonRelease(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceMotionNotify(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceFocusIn(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceFocusOut(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ProximityIn(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ProximityOut(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceStateNotify(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceMappingNotify(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ChangeDeviceNotify(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DevicePointerMotionHint(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButton1Motion(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButton2Motion(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButton3Motion(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButton5Motion(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceOwnerGrabButton(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButtonPressGrab(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for NoExtensionEvent(d,type,_class) */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef _XINPUT_H_
Msg( "Error: Constant not found: _XINPUT_H_\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for DevicePresence(dpy, type, _class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButton4Motion(d,type, _class) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceButtonMotion(d,type, _class) */
#endif

#if 1
CheckTypeSize(XInputClassInfo,2, 32299, 1, 3.0, NULL, 32298, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XDevice,0, 32307, 12, 3.0, NULL, 32306, NULL)
#elif defined __x86_64__
CheckTypeSize(XDevice,24, 32307, 11, 3.0, NULL, 32306, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XDevice,0, 32307, 10, 3.0, NULL, 32306, NULL)
#elif defined __powerpc64__
CheckTypeSize(XDevice,0, 32307, 9, 3.0, NULL, 32306, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XDevice,0, 32307, 6, 3.0, NULL, 32306, NULL)
#elif defined __ia64__
CheckTypeSize(XDevice,0, 32307, 3, 3.0, NULL, 32306, NULL)
#elif defined __i386__
CheckTypeSize(XDevice,12, 32307, 2, 3.0, NULL, 32306, NULL)
#else
Msg("Find size of XDevice (32307)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.0""',NULL,32306,NULL);\n",architecture,32307,0);
#endif

#if 1
CheckTypeSize(XDeviceKeyEvent,0, 35990, 1, 3.0, NULL, 35989, NULL)
#endif

#if 1
CheckTypeSize(XDeviceKeyPressedEvent,0, 35991, 1, 3.0, NULL, 35990, NULL)
#endif

#if 1
CheckTypeSize(XDeviceKeyReleasedEvent,0, 35992, 1, 3.0, NULL, 35990, NULL)
#endif

#if 1
CheckTypeSize(XDeviceButtonEvent,0, 35994, 1, 3.0, NULL, 35993, NULL)
#endif

#if 1
CheckTypeSize(XDeviceButtonPressedEvent,0, 35995, 1, 3.0, NULL, 35994, NULL)
#endif

#if 1
CheckTypeSize(XDeviceButtonReleasedEvent,0, 35996, 1, 3.0, NULL, 35994, NULL)
#endif

#if 1
CheckTypeSize(XDeviceMotionEvent,0, 35998, 1, 3.0, NULL, 35997, NULL)
#endif

#if 1
CheckTypeSize(XDeviceFocusChangeEvent,0, 36000, 1, 3.0, NULL, 35999, NULL)
#endif

#if 1
CheckTypeSize(XDeviceFocusInEvent,0, 36001, 1, 3.0, NULL, 36000, NULL)
#endif

#if 1
CheckTypeSize(XDeviceFocusOutEvent,0, 36002, 1, 3.0, NULL, 36000, NULL)
#endif

#if 1
CheckTypeSize(XProximityNotifyEvent,0, 36004, 1, 3.0, NULL, 36003, NULL)
#endif

#if 1
CheckTypeSize(XProximityInEvent,0, 36005, 1, 3.0, NULL, 36004, NULL)
#endif

#if 1
CheckTypeSize(XProximityOutEvent,0, 36006, 1, 3.0, NULL, 36004, NULL)
#endif

#if 1
CheckTypeSize(XInputClass,0, 36008, 1, 3.0, NULL, 36007, NULL)
#endif

#if 1
CheckTypeSize(XDeviceStateNotifyEvent,0, 36010, 1, 3.0, NULL, 36009, NULL)
#endif

#if 1
CheckTypeSize(XValuatorStatus,0, 36012, 1, 3.0, NULL, 36011, NULL)
#endif

#if 1
CheckTypeSize(XKeyStatus,0, 36014, 1, 3.0, NULL, 36013, NULL)
#endif

#if 1
CheckTypeSize(XButtonStatus,0, 36016, 1, 3.0, NULL, 36015, NULL)
#endif

#if 1
CheckTypeSize(XDeviceMappingEvent,0, 36018, 1, 3.0, NULL, 36017, NULL)
#endif

#if 1
CheckTypeSize(XChangeDeviceNotifyEvent,0, 36020, 1, 3.0, NULL, 36019, NULL)
#endif

#if 1
CheckTypeSize(XFeedbackState,0, 36024, 1, 3.0, NULL, 36023, NULL)
#endif

#if 1
CheckTypeSize(XKbdFeedbackState,0, 36026, 1, 3.0, NULL, 36025, NULL)
#endif

#if 1
CheckTypeSize(XPtrFeedbackState,0, 36028, 1, 3.0, NULL, 36027, NULL)
#endif

#if 1
CheckTypeSize(XIntegerFeedbackState,0, 36030, 1, 3.0, NULL, 36029, NULL)
#endif

#if 1
CheckTypeSize(XStringFeedbackState,0, 36032, 1, 3.0, NULL, 36031, NULL)
#endif

#if 1
CheckTypeSize(XBellFeedbackState,0, 36034, 1, 3.0, NULL, 36033, NULL)
#endif

#if 1
CheckTypeSize(XLedFeedbackState,0, 36036, 1, 3.0, NULL, 36035, NULL)
#endif

#if 1
CheckTypeSize(XFeedbackControl,0, 36038, 1, 3.0, NULL, 36037, NULL)
#endif

#if 1
CheckTypeSize(XPtrFeedbackControl,0, 36040, 1, 3.0, NULL, 36039, NULL)
#endif

#if 1
CheckTypeSize(XKbdFeedbackControl,0, 36042, 1, 3.0, NULL, 36041, NULL)
#endif

#if 1
CheckTypeSize(XStringFeedbackControl,0, 36044, 1, 3.0, NULL, 36043, NULL)
#endif

#if 1
CheckTypeSize(XIntegerFeedbackControl,0, 36046, 1, 3.0, NULL, 36045, NULL)
#endif

#if 1
CheckTypeSize(XBellFeedbackControl,0, 36048, 1, 3.0, NULL, 36047, NULL)
#endif

#if 1
CheckTypeSize(XLedFeedbackControl,0, 36050, 1, 3.0, NULL, 36049, NULL)
#endif

#if 1
CheckTypeSize(XDeviceControl,0, 36052, 1, 3.0, NULL, 36051, NULL)
#endif

#if 1
CheckTypeSize(XDeviceResolutionControl,0, 36054, 1, 3.0, NULL, 36053, NULL)
#endif

#if 1
CheckTypeSize(XDeviceResolutionState,0, 36056, 1, 3.0, NULL, 36055, NULL)
#endif

#if 1
CheckTypeSize(XAnyClassPtr,0, 36070, 1, 3.0, NULL, 36104, NULL)
#endif

#if 1
CheckTypeSize(struct _XAnyClassinfo,0, 36071, 1, , NULL, 0, NULL)
Msg("Missing member data for _XAnyClassinfo on All\n");
CheckOffset(struct _XAnyClassinfo,length,0,1,212911)
#endif

#if 1
CheckTypeSize(XAnyClassInfo,0, 36072, 1, 3.0, NULL, 36071, NULL)
#endif

#if 1
CheckTypeSize(XDeviceInfoPtr,0, 36073, 1, 3.0, NULL, 36107, NULL)
#endif

#if 1
CheckTypeSize(struct _XDeviceInfo,0, 36074, 1, , NULL, 0, NULL)
Msg("Missing member data for _XDeviceInfo on All\n");
CheckOffset(struct _XDeviceInfo,id,0,1,212890)
CheckOffset(struct _XDeviceInfo,type,0,1,212891)
CheckOffset(struct _XDeviceInfo,name,0,1,212892)
CheckOffset(struct _XDeviceInfo,num_classes,0,1,212893)
CheckOffset(struct _XDeviceInfo,use,0,1,212894)
CheckOffset(struct _XDeviceInfo,inputclassinfo,0,1,212895)
#endif

#if 1
CheckTypeSize(XDeviceInfo,0, 36075, 1, 3.0, NULL, 36074, NULL)
#endif

#if 1
CheckTypeSize(XKeyInfoPtr,0, 36076, 1, 3.0, NULL, 36106, NULL)
#endif

#if 1
CheckTypeSize(struct _XKeyInfo,0, 36077, 1, , NULL, 0, NULL)
Msg("Missing member data for _XKeyInfo on All\n");
CheckOffset(struct _XKeyInfo,length,0,1,212913)
CheckOffset(struct _XKeyInfo,min_keycode,0,1,212914)
CheckOffset(struct _XKeyInfo,max_keycode,0,1,212915)
CheckOffset(struct _XKeyInfo,num_keys,0,1,212916)
#endif

#if 1
CheckTypeSize(XKeyInfo,0, 36078, 1, 3.0, NULL, 36077, NULL)
#endif

#if 1
CheckTypeSize(XButtonInfoPtr,0, 36079, 1, 3.0, NULL, 36110, NULL)
#endif

#if 1
CheckTypeSize(struct _XButtonInfo,0, 36080, 1, , NULL, 0, NULL)
Msg("Missing member data for _XButtonInfo on All\n");
CheckOffset(struct _XButtonInfo,length,0,1,212897)
CheckOffset(struct _XButtonInfo,num_buttons,0,1,212898)
#endif

#if 1
CheckTypeSize(XButtonInfo,0, 36081, 1, 3.0, NULL, 36080, NULL)
#endif

#if 1
CheckTypeSize(XAxisInfoPtr,0, 36082, 1, 3.0, NULL, 36112, NULL)
#endif

#if 1
CheckTypeSize(struct _XAxisInfo,0, 36083, 1, , NULL, 0, NULL)
Msg("Missing member data for _XAxisInfo on All\n");
CheckOffset(struct _XAxisInfo,resolution,0,1,212881)
CheckOffset(struct _XAxisInfo,min_value,0,1,212882)
CheckOffset(struct _XAxisInfo,max_value,0,1,212883)
#endif

#if 1
CheckTypeSize(XAxisInfo,0, 36084, 1, 3.0, NULL, 36083, NULL)
#endif

#if 1
CheckTypeSize(XValuatorInfoPtr,0, 36085, 1, 3.0, NULL, 36103, NULL)
#endif

#if 1
CheckTypeSize(struct _XValuatorInfo,0, 36086, 1, , NULL, 0, NULL)
Msg("Missing member data for _XValuatorInfo on All\n");
CheckOffset(struct _XValuatorInfo,length,0,1,212860)
CheckOffset(struct _XValuatorInfo,num_axes,0,1,212861)
CheckOffset(struct _XValuatorInfo,mode,0,1,212862)
CheckOffset(struct _XValuatorInfo,motion_buffer,0,1,212863)
CheckOffset(struct _XValuatorInfo,axes,0,1,212864)
#endif

#if 1
CheckTypeSize(XValuatorInfo,0, 36087, 1, 3.0, NULL, 36086, NULL)
#endif

#if 1
CheckTypeSize(XEventList,0, 36089, 1, 3.0, NULL, 36088, NULL)
#endif

#if 1
CheckTypeSize(XDeviceTimeCoord,0, 36091, 1, 3.0, NULL, 36090, NULL)
#endif

#if 1
CheckTypeSize(XDeviceState,0, 36093, 1, 3.0, NULL, 36092, NULL)
#endif

#if 1
CheckTypeSize(XValuatorState,0, 36095, 1, 3.0, NULL, 36094, NULL)
#endif

#if 1
CheckTypeSize(XKeyState,0, 36097, 1, 3.0, NULL, 36096, NULL)
#endif

#if 1
CheckTypeSize(XButtonState,0, 36099, 1, 3.0, NULL, 36098, NULL)
#endif

extern int XAllowDeviceEvents_db(Display *, XDevice *, int, Time);
CheckInterfacedef(XAllowDeviceEvents,XAllowDeviceEvents_db);
extern int XChangeDeviceControl_db(Display *, XDevice *, int, XDeviceControl *);
CheckInterfacedef(XChangeDeviceControl,XChangeDeviceControl_db);
extern int XChangeDeviceDontPropagateList_db(Display *, Window, int, XEventClass *, int);
CheckInterfacedef(XChangeDeviceDontPropagateList,XChangeDeviceDontPropagateList_db);
extern int XChangeDeviceKeyMapping_db(Display *, XDevice *, int, int, KeySym *, int);
CheckInterfacedef(XChangeDeviceKeyMapping,XChangeDeviceKeyMapping_db);
extern int XChangeFeedbackControl_db(Display *, XDevice *, unsigned long int, XFeedbackControl *);
CheckInterfacedef(XChangeFeedbackControl,XChangeFeedbackControl_db);
extern int XChangeKeyboardDevice_db(Display *, XDevice *);
CheckInterfacedef(XChangeKeyboardDevice,XChangeKeyboardDevice_db);
extern int XChangePointerDevice_db(Display *, XDevice *, int, int);
CheckInterfacedef(XChangePointerDevice,XChangePointerDevice_db);
extern int XCloseDevice_db(Display *, XDevice *);
CheckInterfacedef(XCloseDevice,XCloseDevice_db);
extern int XDeviceBell_db(Display *, XDevice *, XID, XID, int);
CheckInterfacedef(XDeviceBell,XDeviceBell_db);
extern void XFreeDeviceControl_db(XDeviceControl *);
CheckInterfacedef(XFreeDeviceControl,XFreeDeviceControl_db);
extern void XFreeDeviceList_db(XDeviceInfo *);
CheckInterfacedef(XFreeDeviceList,XFreeDeviceList_db);
extern void XFreeDeviceMotionEvents_db(XDeviceTimeCoord *);
CheckInterfacedef(XFreeDeviceMotionEvents,XFreeDeviceMotionEvents_db);
extern void XFreeDeviceState_db(XDeviceState *);
CheckInterfacedef(XFreeDeviceState,XFreeDeviceState_db);
extern void XFreeFeedbackList_db(XFeedbackState *);
CheckInterfacedef(XFreeFeedbackList,XFreeFeedbackList_db);
extern int XGetDeviceButtonMapping_db(Display *, XDevice *, unsigned char *, unsigned int);
CheckInterfacedef(XGetDeviceButtonMapping,XGetDeviceButtonMapping_db);
extern XDeviceControl * XGetDeviceControl_db(Display *, XDevice *, int);
CheckInterfacedef(XGetDeviceControl,XGetDeviceControl_db);
extern XEventClass * XGetDeviceDontPropagateList_db(Display *, Window, int *);
CheckInterfacedef(XGetDeviceDontPropagateList,XGetDeviceDontPropagateList_db);
extern int XGetDeviceFocus_db(Display *, XDevice *, Window *, int *, Time *);
CheckInterfacedef(XGetDeviceFocus,XGetDeviceFocus_db);
extern KeySym * XGetDeviceKeyMapping_db(Display *, XDevice *, unsigned int, int, int *);
CheckInterfacedef(XGetDeviceKeyMapping,XGetDeviceKeyMapping_db);
extern XModifierKeymap * XGetDeviceModifierMapping_db(Display *, XDevice *);
CheckInterfacedef(XGetDeviceModifierMapping,XGetDeviceModifierMapping_db);
extern XDeviceTimeCoord * XGetDeviceMotionEvents_db(Display *, XDevice *, Time, Time, int *, int *, int *);
CheckInterfacedef(XGetDeviceMotionEvents,XGetDeviceMotionEvents_db);
extern XExtensionVersion * XGetExtensionVersion_db(Display *, const char *);
CheckInterfacedef(XGetExtensionVersion,XGetExtensionVersion_db);
extern XFeedbackState * XGetFeedbackControl_db(Display *, XDevice *, int *);
CheckInterfacedef(XGetFeedbackControl,XGetFeedbackControl_db);
extern int XGetSelectedExtensionEvents_db(Display *, Window, int *, XEventClass * *, int *, XEventClass * *);
CheckInterfacedef(XGetSelectedExtensionEvents,XGetSelectedExtensionEvents_db);
extern int XGrabDevice_db(Display *, XDevice *, Window, int, int, XEventClass *, int, int, Time);
CheckInterfacedef(XGrabDevice,XGrabDevice_db);
extern int XGrabDeviceButton_db(Display *, XDevice *, unsigned int, unsigned int, XDevice *, Window, int, unsigned int, XEventClass *, int, int);
CheckInterfacedef(XGrabDeviceButton,XGrabDeviceButton_db);
extern int XGrabDeviceKey_db(Display *, XDevice *, unsigned int, unsigned int, XDevice *, Window, int, unsigned int, XEventClass *, int, int);
CheckInterfacedef(XGrabDeviceKey,XGrabDeviceKey_db);
extern XDeviceInfo * XListInputDevices_db(Display *, int *);
CheckInterfacedef(XListInputDevices,XListInputDevices_db);
extern XDevice * XOpenDevice_db(Display *, XID);
CheckInterfacedef(XOpenDevice,XOpenDevice_db);
extern XDeviceState * XQueryDeviceState_db(Display *, XDevice *);
CheckInterfacedef(XQueryDeviceState,XQueryDeviceState_db);
extern int XSelectExtensionEvent_db(Display *, Window, XEventClass *, int);
CheckInterfacedef(XSelectExtensionEvent,XSelectExtensionEvent_db);
extern int XSendExtensionEvent_db(Display *, XDevice *, Window, int, int, XEventClass *, XEvent *);
CheckInterfacedef(XSendExtensionEvent,XSendExtensionEvent_db);
extern int XSetDeviceButtonMapping_db(Display *, XDevice *, unsigned char *, int);
CheckInterfacedef(XSetDeviceButtonMapping,XSetDeviceButtonMapping_db);
extern int XSetDeviceFocus_db(Display *, XDevice *, Window, int, Time);
CheckInterfacedef(XSetDeviceFocus,XSetDeviceFocus_db);
extern int XSetDeviceMode_db(Display *, XDevice *, int);
CheckInterfacedef(XSetDeviceMode,XSetDeviceMode_db);
extern int XSetDeviceModifierMapping_db(Display *, XDevice *, XModifierKeymap *);
CheckInterfacedef(XSetDeviceModifierMapping,XSetDeviceModifierMapping_db);
extern int XSetDeviceValuators_db(Display *, XDevice *, int *, int, int);
CheckInterfacedef(XSetDeviceValuators,XSetDeviceValuators_db);
extern int XUngrabDevice_db(Display *, XDevice *, Time);
CheckInterfacedef(XUngrabDevice,XUngrabDevice_db);
extern int XUngrabDeviceButton_db(Display *, XDevice *, unsigned int, unsigned int, XDevice *, Window);
CheckInterfacedef(XUngrabDeviceButton,XUngrabDeviceButton_db);
extern int XUngrabDeviceKey_db(Display *, XDevice *, unsigned int, unsigned int, XDevice *, Window);
CheckInterfacedef(XUngrabDeviceKey,XUngrabDeviceKey_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XInput.h\n\n",pcnt,cnt);
return cnt;
#endif

}
