/*
 * Test of X11/extensions/XInput.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
/* No test for BadDevice(dpy,error) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BadClass(dpy,error) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BadEvent(dpy,error) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for BadMode(dpy,error) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for DeviceBusy(dpy,error) */
#endif

#if 1
CheckTypeSize(XInputClassInfo,2, 1000038, 1, 3.0, NULL, 1000037, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XDevice,0, 1000046, 12, 3.0, NULL, 1000045, NULL)
#elif defined __x86_64__
CheckTypeSize(XDevice,24, 1000046, 11, 3.0, NULL, 1000045, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XDevice,0, 1000046, 10, 3.0, NULL, 1000045, NULL)
#elif defined __powerpc64__
CheckTypeSize(XDevice,0, 1000046, 9, 3.0, NULL, 1000045, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XDevice,0, 1000046, 6, 3.0, NULL, 1000045, NULL)
#elif defined __ia64__
CheckTypeSize(XDevice,0, 1000046, 3, 3.0, NULL, 1000045, NULL)
#elif defined __i386__
CheckTypeSize(XDevice,12, 1000046, 2, 3.0, NULL, 1000045, NULL)
#else
Msg("Find size of XDevice (1000046)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.0""',NULL,1000045,NULL);\n",architecture,1000046,0);
#endif

#if 1
CheckTypeSize(XDeviceKeyEvent,0, 1008078, 1, 3.0, NULL, 1008077, NULL)
#endif

#if 1
CheckTypeSize(XDeviceKeyPressedEvent,0, 1008079, 1, 3.0, NULL, 1008078, NULL)
#endif

#if 1
CheckTypeSize(XDeviceKeyReleasedEvent,0, 1008080, 1, 3.0, NULL, 1008078, NULL)
#endif

#if 1
CheckTypeSize(XDeviceButtonEvent,0, 1008082, 1, 3.0, NULL, 1008081, NULL)
#endif

#if 1
CheckTypeSize(XDeviceButtonPressedEvent,0, 1008083, 1, 3.0, NULL, 1008082, NULL)
#endif

#if 1
CheckTypeSize(XDeviceButtonReleasedEvent,0, 1008084, 1, 3.0, NULL, 1008082, NULL)
#endif

#if 1
CheckTypeSize(XDeviceMotionEvent,0, 1008086, 1, 3.0, NULL, 1008085, NULL)
#endif

#if 1
CheckTypeSize(XDeviceFocusChangeEvent,0, 1008088, 1, 3.0, NULL, 1008087, NULL)
#endif

#if 1
CheckTypeSize(XDeviceFocusInEvent,0, 1008089, 1, 3.0, NULL, 1008088, NULL)
#endif

#if 1
CheckTypeSize(XDeviceFocusOutEvent,0, 1008090, 1, 3.0, NULL, 1008088, NULL)
#endif

#if 1
CheckTypeSize(XProximityNotifyEvent,0, 1008092, 1, 3.0, NULL, 1008091, NULL)
#endif

#if 1
CheckTypeSize(XProximityInEvent,0, 1008093, 1, 3.0, NULL, 1008092, NULL)
#endif

#if 1
CheckTypeSize(XProximityOutEvent,0, 1008094, 1, 3.0, NULL, 1008092, NULL)
#endif

#if 1
CheckTypeSize(XInputClass,0, 1008096, 1, 3.0, NULL, 1008095, NULL)
#endif

#if 1
CheckTypeSize(XDeviceStateNotifyEvent,0, 1008098, 1, 3.0, NULL, 1008097, NULL)
#endif

#if 1
CheckTypeSize(XValuatorStatus,0, 1008100, 1, 3.0, NULL, 1008099, NULL)
#endif

#if 1
CheckTypeSize(XKeyStatus,0, 1008102, 1, 3.0, NULL, 1008101, NULL)
#endif

#if 1
CheckTypeSize(XButtonStatus,0, 1008104, 1, 3.0, NULL, 1008103, NULL)
#endif

#if 1
CheckTypeSize(XDeviceMappingEvent,0, 1008106, 1, 3.0, NULL, 1008105, NULL)
#endif

#if 1
CheckTypeSize(XChangeDeviceNotifyEvent,0, 1008108, 1, 3.0, NULL, 1008107, NULL)
#endif

#if 1
CheckTypeSize(XFeedbackState,0, 1008112, 1, 3.0, NULL, 1008111, NULL)
#endif

#if 1
CheckTypeSize(XKbdFeedbackState,0, 1008114, 1, 3.0, NULL, 1008113, NULL)
#endif

#if 1
CheckTypeSize(XPtrFeedbackState,0, 1008116, 1, 3.0, NULL, 1008115, NULL)
#endif

#if 1
CheckTypeSize(XIntegerFeedbackState,0, 1008118, 1, 3.0, NULL, 1008117, NULL)
#endif

#if 1
CheckTypeSize(XStringFeedbackState,0, 1008120, 1, 3.0, NULL, 1008119, NULL)
#endif

#if 1
CheckTypeSize(XBellFeedbackState,0, 1008122, 1, 3.0, NULL, 1008121, NULL)
#endif

#if 1
CheckTypeSize(XLedFeedbackState,0, 1008124, 1, 3.0, NULL, 1008123, NULL)
#endif

#if 1
CheckTypeSize(XFeedbackControl,0, 1008126, 1, 3.0, NULL, 1008125, NULL)
#endif

#if 1
CheckTypeSize(XPtrFeedbackControl,0, 1008128, 1, 3.0, NULL, 1008127, NULL)
#endif

#if 1
CheckTypeSize(XKbdFeedbackControl,0, 1008130, 1, 3.0, NULL, 1008129, NULL)
#endif

#if 1
CheckTypeSize(XStringFeedbackControl,0, 1008132, 1, 3.0, NULL, 1008131, NULL)
#endif

#if 1
CheckTypeSize(XIntegerFeedbackControl,0, 1008134, 1, 3.0, NULL, 1008133, NULL)
#endif

#if 1
CheckTypeSize(XBellFeedbackControl,0, 1008136, 1, 3.0, NULL, 1008135, NULL)
#endif

#if 1
CheckTypeSize(XLedFeedbackControl,0, 1008138, 1, 3.0, NULL, 1008137, NULL)
#endif

#if 1
CheckTypeSize(XDeviceControl,0, 1008140, 1, 3.0, NULL, 1008139, NULL)
#endif

#if 1
CheckTypeSize(XDeviceResolutionControl,0, 1008142, 1, 3.0, NULL, 1008141, NULL)
#endif

#if 1
CheckTypeSize(XDeviceResolutionState,0, 1008144, 1, 3.0, NULL, 1008143, NULL)
#endif

#if 1
CheckTypeSize(XAnyClassPtr,0, 1008158, 1, 3.0, NULL, 1008193, NULL)
#endif

#if 1
CheckTypeSize(XAnyClassInfo,0, 1008160, 1, 3.0, NULL, 1008159, NULL)
#endif

#if 1
CheckTypeSize(XDeviceInfoPtr,0, 1008161, 1, 3.0, NULL, 1008196, NULL)
#endif

#if 1
CheckTypeSize(XDeviceInfo,0, 1008163, 1, 3.0, NULL, 1008162, NULL)
#endif

#if 1
CheckTypeSize(XKeyInfoPtr,0, 1008164, 1, 3.0, NULL, 1008195, NULL)
#endif

#if 1
CheckTypeSize(XKeyInfo,0, 1008166, 1, 3.0, NULL, 1008165, NULL)
#endif

#if 1
CheckTypeSize(XButtonInfoPtr,0, 1008167, 1, 3.0, NULL, 1008199, NULL)
#endif

#if 1
CheckTypeSize(XButtonInfo,0, 1008169, 1, 3.0, NULL, 1008168, NULL)
#endif

#if 1
CheckTypeSize(XAxisInfoPtr,0, 1008170, 1, 3.0, NULL, 1008201, NULL)
#endif

#if 1
CheckTypeSize(XAxisInfo,0, 1008172, 1, 3.0, NULL, 1008171, NULL)
#endif

#if 1
CheckTypeSize(XValuatorInfoPtr,0, 1008173, 1, 3.0, NULL, 1008192, NULL)
#endif

#if 1
CheckTypeSize(XValuatorInfo,0, 1008175, 1, 3.0, NULL, 1008174, NULL)
#endif

#if 1
CheckTypeSize(XEventList,0, 1008178, 1, 3.0, NULL, 1008177, NULL)
#endif

#if 1
CheckTypeSize(XDeviceTimeCoord,0, 1008180, 1, 3.0, NULL, 1008179, NULL)
#endif

#if 1
CheckTypeSize(XDeviceState,0, 1008182, 1, 3.0, NULL, 1008181, NULL)
#endif

#if 1
CheckTypeSize(XValuatorState,0, 1008184, 1, 3.0, NULL, 1008183, NULL)
#endif

#if 1
CheckTypeSize(XKeyState,0, 1008186, 1, 3.0, NULL, 1008185, NULL)
#endif

#if 1
CheckTypeSize(XButtonState,0, 1008188, 1, 3.0, NULL, 1008187, NULL)
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
extern KeySym * XGetDeviceKeyMapping_db(Display *, XDevice *, KeyCode, int, int *);
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
