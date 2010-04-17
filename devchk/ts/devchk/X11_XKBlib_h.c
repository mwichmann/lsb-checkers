/*
 * Test of X11/XKBlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#define NeedWidePrototypes 1
#include "X11/XKBlib.h"



#ifdef TET_TEST
void X11_XKBlib_h()
{
#else
int X11_XKBlib_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/XKBlib.h\n");
#endif

printf("Checking data structures in X11/XKBlib.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _XKBLIB_H_
Msg( "Error: Constant not found: _XKBLIB_H_\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOD_Success
	CompareConstant(XkbOD_Success,0,3675,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOD_Success\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOD_BadLibraryVersion
	CompareConstant(XkbOD_BadLibraryVersion,1,3676,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOD_BadLibraryVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOD_ConnectionRefused
	CompareConstant(XkbOD_ConnectionRefused,2,3677,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOD_ConnectionRefused\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOD_NonXkbServer
	CompareConstant(XkbOD_NonXkbServer,3,3678,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOD_NonXkbServer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbOD_BadServerVersion
	CompareConstant(XkbOD_BadServerVersion,4,3679,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbOD_BadServerVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_ForceLatin1Lookup
	CompareConstant(XkbLC_ForceLatin1Lookup,(1<<0),3680,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_ForceLatin1Lookup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_ConsumeLookupMods
	CompareConstant(XkbLC_ConsumeLookupMods,(1<<1),3681,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_ConsumeLookupMods\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_AlwaysConsumeShiftAndLock
	CompareConstant(XkbLC_AlwaysConsumeShiftAndLock,(1<<2),3682,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_AlwaysConsumeShiftAndLock\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_IgnoreNewKeyboards
	CompareConstant(XkbLC_IgnoreNewKeyboards,(1<<3),3683,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_IgnoreNewKeyboards\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_ControlFallback
	CompareConstant(XkbLC_ControlFallback,(1<<4),3684,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_ControlFallback\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_ConsumeKeysOnComposeFail
	CompareConstant(XkbLC_ConsumeKeysOnComposeFail,(1<<29),3685,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_ConsumeKeysOnComposeFail\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_ComposeLED
	CompareConstant(XkbLC_ComposeLED,(1<<30),3686,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_ComposeLED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_BeepOnComposeFail
	CompareConstant(XkbLC_BeepOnComposeFail,(1<<31),3687,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_BeepOnComposeFail\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_AllComposeControls
	CompareConstant(XkbLC_AllComposeControls,(0xc0000000),3688,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_AllComposeControls\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbLC_AllControls
	CompareConstant(XkbLC_AllControls,(0xc000001f),3689,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbLC_AllControls\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbNoteIndicatorMapChanges(o,n,w) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbNoteIndicatorStateChanges(o,n,w) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbGetIndicatorMapChanges(d,x,c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbChangeIndicatorMaps(d,x,c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbGetControlsChanges(d,x,c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbChangeControls(d,x,c) */
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbAnyEvent,48, 9489, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyEvent,serial,8,12,31392)
CheckOffset(struct _XkbAnyEvent,serial,8,12,31392)
CheckMemberSize(struct _XkbAnyEvent,send_event,4,12,31393)
CheckOffset(struct _XkbAnyEvent,send_event,16,12,31393)
CheckMemberSize(struct _XkbAnyEvent,display,8,12,31394)
CheckOffset(struct _XkbAnyEvent,display,24,12,31394)
CheckMemberSize(struct _XkbAnyEvent,time,8,12,31395)
CheckOffset(struct _XkbAnyEvent,time,32,12,31395)
CheckMemberSize(struct _XkbAnyEvent,xkb_type,4,12,31396)
CheckOffset(struct _XkbAnyEvent,xkb_type,40,12,31396)
CheckMemberSize(struct _XkbAnyEvent,device,4,12,31397)
CheckOffset(struct _XkbAnyEvent,device,44,12,31397)
#elif defined __x86_64__
CheckTypeSize(struct _XkbAnyEvent,48, 9489, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyEvent,serial,8,11,31392)
CheckOffset(struct _XkbAnyEvent,serial,8,11,31392)
CheckMemberSize(struct _XkbAnyEvent,send_event,4,11,31393)
CheckOffset(struct _XkbAnyEvent,send_event,16,11,31393)
CheckMemberSize(struct _XkbAnyEvent,display,8,11,31394)
CheckOffset(struct _XkbAnyEvent,display,24,11,31394)
CheckMemberSize(struct _XkbAnyEvent,time,8,11,31395)
CheckOffset(struct _XkbAnyEvent,time,32,11,31395)
CheckMemberSize(struct _XkbAnyEvent,xkb_type,4,11,31396)
CheckOffset(struct _XkbAnyEvent,xkb_type,40,11,31396)
CheckMemberSize(struct _XkbAnyEvent,device,4,11,31397)
CheckOffset(struct _XkbAnyEvent,device,44,11,31397)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbAnyEvent,28, 9489, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyEvent,serial,4,10,31392)
CheckOffset(struct _XkbAnyEvent,serial,4,10,31392)
CheckMemberSize(struct _XkbAnyEvent,send_event,4,10,31393)
CheckOffset(struct _XkbAnyEvent,send_event,8,10,31393)
CheckMemberSize(struct _XkbAnyEvent,display,4,10,31394)
CheckOffset(struct _XkbAnyEvent,display,12,10,31394)
CheckMemberSize(struct _XkbAnyEvent,time,4,10,31395)
CheckOffset(struct _XkbAnyEvent,time,16,10,31395)
CheckMemberSize(struct _XkbAnyEvent,xkb_type,4,10,31396)
CheckOffset(struct _XkbAnyEvent,xkb_type,20,10,31396)
CheckMemberSize(struct _XkbAnyEvent,device,4,10,31397)
CheckOffset(struct _XkbAnyEvent,device,24,10,31397)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbAnyEvent,48, 9489, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyEvent,serial,8,9,31392)
CheckOffset(struct _XkbAnyEvent,serial,8,9,31392)
CheckMemberSize(struct _XkbAnyEvent,send_event,4,9,31393)
CheckOffset(struct _XkbAnyEvent,send_event,16,9,31393)
CheckMemberSize(struct _XkbAnyEvent,display,8,9,31394)
CheckOffset(struct _XkbAnyEvent,display,24,9,31394)
CheckMemberSize(struct _XkbAnyEvent,time,8,9,31395)
CheckOffset(struct _XkbAnyEvent,time,32,9,31395)
CheckMemberSize(struct _XkbAnyEvent,xkb_type,4,9,31396)
CheckOffset(struct _XkbAnyEvent,xkb_type,40,9,31396)
CheckMemberSize(struct _XkbAnyEvent,device,4,9,31397)
CheckOffset(struct _XkbAnyEvent,device,44,9,31397)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbAnyEvent,28, 9489, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyEvent,serial,4,6,31392)
CheckOffset(struct _XkbAnyEvent,serial,4,6,31392)
CheckMemberSize(struct _XkbAnyEvent,send_event,4,6,31393)
CheckOffset(struct _XkbAnyEvent,send_event,8,6,31393)
CheckMemberSize(struct _XkbAnyEvent,display,4,6,31394)
CheckOffset(struct _XkbAnyEvent,display,12,6,31394)
CheckMemberSize(struct _XkbAnyEvent,time,4,6,31395)
CheckOffset(struct _XkbAnyEvent,time,16,6,31395)
CheckMemberSize(struct _XkbAnyEvent,xkb_type,4,6,31396)
CheckOffset(struct _XkbAnyEvent,xkb_type,20,6,31396)
CheckMemberSize(struct _XkbAnyEvent,device,4,6,31397)
CheckOffset(struct _XkbAnyEvent,device,24,6,31397)
#elif defined __ia64__
CheckTypeSize(struct _XkbAnyEvent,48, 9489, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyEvent,serial,8,3,31392)
CheckOffset(struct _XkbAnyEvent,serial,8,3,31392)
CheckMemberSize(struct _XkbAnyEvent,send_event,4,3,31393)
CheckOffset(struct _XkbAnyEvent,send_event,16,3,31393)
CheckMemberSize(struct _XkbAnyEvent,display,8,3,31394)
CheckOffset(struct _XkbAnyEvent,display,24,3,31394)
CheckMemberSize(struct _XkbAnyEvent,time,8,3,31395)
CheckOffset(struct _XkbAnyEvent,time,32,3,31395)
CheckMemberSize(struct _XkbAnyEvent,xkb_type,4,3,31396)
CheckOffset(struct _XkbAnyEvent,xkb_type,40,3,31396)
CheckMemberSize(struct _XkbAnyEvent,device,4,3,31397)
CheckOffset(struct _XkbAnyEvent,device,44,3,31397)
#elif defined __i386__
CheckTypeSize(struct _XkbAnyEvent,28, 9489, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAnyEvent,serial,4,2,31392)
CheckOffset(struct _XkbAnyEvent,serial,4,2,31392)
CheckMemberSize(struct _XkbAnyEvent,send_event,4,2,31393)
CheckOffset(struct _XkbAnyEvent,send_event,8,2,31393)
CheckMemberSize(struct _XkbAnyEvent,display,4,2,31394)
CheckOffset(struct _XkbAnyEvent,display,12,2,31394)
CheckMemberSize(struct _XkbAnyEvent,time,4,2,31395)
CheckOffset(struct _XkbAnyEvent,time,16,2,31395)
CheckMemberSize(struct _XkbAnyEvent,xkb_type,4,2,31396)
CheckOffset(struct _XkbAnyEvent,xkb_type,20,2,31396)
CheckMemberSize(struct _XkbAnyEvent,device,4,2,31397)
CheckOffset(struct _XkbAnyEvent,device,24,2,31397)
#else
Msg("Find size of _XkbAnyEvent (9489)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9489,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbAnyEvent,48, 9490, 12, 1.3, NULL, 9489, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbAnyEvent,48, 9490, 11, 2.0, NULL, 9489, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbAnyEvent,28, 9490, 10, 1.3, NULL, 9489, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbAnyEvent,48, 9490, 9, 2.0, NULL, 9489, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbAnyEvent,28, 9490, 6, 1.2, NULL, 9489, NULL)
#elif defined __ia64__
CheckTypeSize(XkbAnyEvent,48, 9490, 3, 1.3, NULL, 9489, NULL)
#elif defined __i386__
CheckTypeSize(XkbAnyEvent,28, 9490, 2, 1.2, NULL, 9489, NULL)
#else
Msg("Find size of XkbAnyEvent (9490)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9489,NULL);\n",architecture,9490,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbNewKeyboardNotify,80, 9491, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbNewKeyboardNotify,serial,8,12,31399)
CheckOffset(struct _XkbNewKeyboardNotify,serial,8,12,31399)
CheckMemberSize(struct _XkbNewKeyboardNotify,send_event,4,12,31400)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,16,12,31400)
CheckMemberSize(struct _XkbNewKeyboardNotify,display,8,12,31401)
CheckOffset(struct _XkbNewKeyboardNotify,display,24,12,31401)
CheckMemberSize(struct _XkbNewKeyboardNotify,time,8,12,31402)
CheckOffset(struct _XkbNewKeyboardNotify,time,32,12,31402)
CheckMemberSize(struct _XkbNewKeyboardNotify,xkb_type,4,12,31403)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,40,12,31403)
CheckMemberSize(struct _XkbNewKeyboardNotify,device,4,12,31404)
CheckOffset(struct _XkbNewKeyboardNotify,device,44,12,31404)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_device,4,12,31405)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,48,12,31405)
CheckMemberSize(struct _XkbNewKeyboardNotify,min_key_code,4,12,31406)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,52,12,31406)
CheckMemberSize(struct _XkbNewKeyboardNotify,max_key_code,4,12,31407)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,56,12,31407)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_min_key_code,4,12,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,60,12,31408)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_max_key_code,4,12,31409)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,64,12,31409)
CheckMemberSize(struct _XkbNewKeyboardNotify,changed,4,12,31410)
CheckOffset(struct _XkbNewKeyboardNotify,changed,68,12,31410)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_major,1,12,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,72,12,31411)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_minor,1,12,31412)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,73,12,31412)
#elif defined __x86_64__
CheckTypeSize(struct _XkbNewKeyboardNotify,80, 9491, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbNewKeyboardNotify,serial,8,11,31399)
CheckOffset(struct _XkbNewKeyboardNotify,serial,8,11,31399)
CheckMemberSize(struct _XkbNewKeyboardNotify,send_event,4,11,31400)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,16,11,31400)
CheckMemberSize(struct _XkbNewKeyboardNotify,display,8,11,31401)
CheckOffset(struct _XkbNewKeyboardNotify,display,24,11,31401)
CheckMemberSize(struct _XkbNewKeyboardNotify,time,8,11,31402)
CheckOffset(struct _XkbNewKeyboardNotify,time,32,11,31402)
CheckMemberSize(struct _XkbNewKeyboardNotify,xkb_type,4,11,31403)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,40,11,31403)
CheckMemberSize(struct _XkbNewKeyboardNotify,device,4,11,31404)
CheckOffset(struct _XkbNewKeyboardNotify,device,44,11,31404)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_device,4,11,31405)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,48,11,31405)
CheckMemberSize(struct _XkbNewKeyboardNotify,min_key_code,4,11,31406)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,52,11,31406)
CheckMemberSize(struct _XkbNewKeyboardNotify,max_key_code,4,11,31407)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,56,11,31407)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_min_key_code,4,11,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,60,11,31408)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_max_key_code,4,11,31409)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,64,11,31409)
CheckMemberSize(struct _XkbNewKeyboardNotify,changed,4,11,31410)
CheckOffset(struct _XkbNewKeyboardNotify,changed,68,11,31410)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_major,1,11,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,72,11,31411)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_minor,1,11,31412)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,73,11,31412)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbNewKeyboardNotify,56, 9491, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbNewKeyboardNotify,serial,4,10,31399)
CheckOffset(struct _XkbNewKeyboardNotify,serial,4,10,31399)
CheckMemberSize(struct _XkbNewKeyboardNotify,send_event,4,10,31400)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,8,10,31400)
CheckMemberSize(struct _XkbNewKeyboardNotify,display,4,10,31401)
CheckOffset(struct _XkbNewKeyboardNotify,display,12,10,31401)
CheckMemberSize(struct _XkbNewKeyboardNotify,time,4,10,31402)
CheckOffset(struct _XkbNewKeyboardNotify,time,16,10,31402)
CheckMemberSize(struct _XkbNewKeyboardNotify,xkb_type,4,10,31403)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,20,10,31403)
CheckMemberSize(struct _XkbNewKeyboardNotify,device,4,10,31404)
CheckOffset(struct _XkbNewKeyboardNotify,device,24,10,31404)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_device,4,10,31405)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,28,10,31405)
CheckMemberSize(struct _XkbNewKeyboardNotify,min_key_code,4,10,31406)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,32,10,31406)
CheckMemberSize(struct _XkbNewKeyboardNotify,max_key_code,4,10,31407)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,36,10,31407)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_min_key_code,4,10,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,40,10,31408)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_max_key_code,4,10,31409)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,44,10,31409)
CheckMemberSize(struct _XkbNewKeyboardNotify,changed,4,10,31410)
CheckOffset(struct _XkbNewKeyboardNotify,changed,48,10,31410)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_major,1,10,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,52,10,31411)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_minor,1,10,31412)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,53,10,31412)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbNewKeyboardNotify,80, 9491, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbNewKeyboardNotify,serial,8,9,31399)
CheckOffset(struct _XkbNewKeyboardNotify,serial,8,9,31399)
CheckMemberSize(struct _XkbNewKeyboardNotify,send_event,4,9,31400)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,16,9,31400)
CheckMemberSize(struct _XkbNewKeyboardNotify,display,8,9,31401)
CheckOffset(struct _XkbNewKeyboardNotify,display,24,9,31401)
CheckMemberSize(struct _XkbNewKeyboardNotify,time,8,9,31402)
CheckOffset(struct _XkbNewKeyboardNotify,time,32,9,31402)
CheckMemberSize(struct _XkbNewKeyboardNotify,xkb_type,4,9,31403)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,40,9,31403)
CheckMemberSize(struct _XkbNewKeyboardNotify,device,4,9,31404)
CheckOffset(struct _XkbNewKeyboardNotify,device,44,9,31404)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_device,4,9,31405)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,48,9,31405)
CheckMemberSize(struct _XkbNewKeyboardNotify,min_key_code,4,9,31406)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,52,9,31406)
CheckMemberSize(struct _XkbNewKeyboardNotify,max_key_code,4,9,31407)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,56,9,31407)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_min_key_code,4,9,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,60,9,31408)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_max_key_code,4,9,31409)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,64,9,31409)
CheckMemberSize(struct _XkbNewKeyboardNotify,changed,4,9,31410)
CheckOffset(struct _XkbNewKeyboardNotify,changed,68,9,31410)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_major,1,9,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,72,9,31411)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_minor,1,9,31412)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,73,9,31412)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbNewKeyboardNotify,56, 9491, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbNewKeyboardNotify,serial,4,6,31399)
CheckOffset(struct _XkbNewKeyboardNotify,serial,4,6,31399)
CheckMemberSize(struct _XkbNewKeyboardNotify,send_event,4,6,31400)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,8,6,31400)
CheckMemberSize(struct _XkbNewKeyboardNotify,display,4,6,31401)
CheckOffset(struct _XkbNewKeyboardNotify,display,12,6,31401)
CheckMemberSize(struct _XkbNewKeyboardNotify,time,4,6,31402)
CheckOffset(struct _XkbNewKeyboardNotify,time,16,6,31402)
CheckMemberSize(struct _XkbNewKeyboardNotify,xkb_type,4,6,31403)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,20,6,31403)
CheckMemberSize(struct _XkbNewKeyboardNotify,device,4,6,31404)
CheckOffset(struct _XkbNewKeyboardNotify,device,24,6,31404)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_device,4,6,31405)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,28,6,31405)
CheckMemberSize(struct _XkbNewKeyboardNotify,min_key_code,4,6,31406)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,32,6,31406)
CheckMemberSize(struct _XkbNewKeyboardNotify,max_key_code,4,6,31407)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,36,6,31407)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_min_key_code,4,6,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,40,6,31408)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_max_key_code,4,6,31409)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,44,6,31409)
CheckMemberSize(struct _XkbNewKeyboardNotify,changed,4,6,31410)
CheckOffset(struct _XkbNewKeyboardNotify,changed,48,6,31410)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_major,1,6,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,52,6,31411)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_minor,1,6,31412)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,53,6,31412)
#elif defined __ia64__
CheckTypeSize(struct _XkbNewKeyboardNotify,80, 9491, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbNewKeyboardNotify,serial,8,3,31399)
CheckOffset(struct _XkbNewKeyboardNotify,serial,8,3,31399)
CheckMemberSize(struct _XkbNewKeyboardNotify,send_event,4,3,31400)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,16,3,31400)
CheckMemberSize(struct _XkbNewKeyboardNotify,display,8,3,31401)
CheckOffset(struct _XkbNewKeyboardNotify,display,24,3,31401)
CheckMemberSize(struct _XkbNewKeyboardNotify,time,8,3,31402)
CheckOffset(struct _XkbNewKeyboardNotify,time,32,3,31402)
CheckMemberSize(struct _XkbNewKeyboardNotify,xkb_type,4,3,31403)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,40,3,31403)
CheckMemberSize(struct _XkbNewKeyboardNotify,device,4,3,31404)
CheckOffset(struct _XkbNewKeyboardNotify,device,44,3,31404)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_device,4,3,31405)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,48,3,31405)
CheckMemberSize(struct _XkbNewKeyboardNotify,min_key_code,4,3,31406)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,52,3,31406)
CheckMemberSize(struct _XkbNewKeyboardNotify,max_key_code,4,3,31407)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,56,3,31407)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_min_key_code,4,3,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,60,3,31408)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_max_key_code,4,3,31409)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,64,3,31409)
CheckMemberSize(struct _XkbNewKeyboardNotify,changed,4,3,31410)
CheckOffset(struct _XkbNewKeyboardNotify,changed,68,3,31410)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_major,1,3,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,72,3,31411)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_minor,1,3,31412)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,73,3,31412)
#elif defined __i386__
CheckTypeSize(struct _XkbNewKeyboardNotify,56, 9491, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbNewKeyboardNotify,serial,4,2,31399)
CheckOffset(struct _XkbNewKeyboardNotify,serial,4,2,31399)
CheckMemberSize(struct _XkbNewKeyboardNotify,send_event,4,2,31400)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,8,2,31400)
CheckMemberSize(struct _XkbNewKeyboardNotify,display,4,2,31401)
CheckOffset(struct _XkbNewKeyboardNotify,display,12,2,31401)
CheckMemberSize(struct _XkbNewKeyboardNotify,time,4,2,31402)
CheckOffset(struct _XkbNewKeyboardNotify,time,16,2,31402)
CheckMemberSize(struct _XkbNewKeyboardNotify,xkb_type,4,2,31403)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,20,2,31403)
CheckMemberSize(struct _XkbNewKeyboardNotify,device,4,2,31404)
CheckOffset(struct _XkbNewKeyboardNotify,device,24,2,31404)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_device,4,2,31405)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,28,2,31405)
CheckMemberSize(struct _XkbNewKeyboardNotify,min_key_code,4,2,31406)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,32,2,31406)
CheckMemberSize(struct _XkbNewKeyboardNotify,max_key_code,4,2,31407)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,36,2,31407)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_min_key_code,4,2,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,40,2,31408)
CheckMemberSize(struct _XkbNewKeyboardNotify,old_max_key_code,4,2,31409)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,44,2,31409)
CheckMemberSize(struct _XkbNewKeyboardNotify,changed,4,2,31410)
CheckOffset(struct _XkbNewKeyboardNotify,changed,48,2,31410)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_major,1,2,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,52,2,31411)
CheckMemberSize(struct _XkbNewKeyboardNotify,req_minor,1,2,31412)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,53,2,31412)
#else
Msg("Find size of _XkbNewKeyboardNotify (9491)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9491,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbNewKeyboardNotifyEvent,80, 9492, 12, 1.3, NULL, 9491, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbNewKeyboardNotifyEvent,80, 9492, 11, 2.0, NULL, 9491, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbNewKeyboardNotifyEvent,56, 9492, 10, 1.3, NULL, 9491, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbNewKeyboardNotifyEvent,80, 9492, 9, 2.0, NULL, 9491, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbNewKeyboardNotifyEvent,56, 9492, 6, 1.2, NULL, 9491, NULL)
#elif defined __ia64__
CheckTypeSize(XkbNewKeyboardNotifyEvent,80, 9492, 3, 1.3, NULL, 9491, NULL)
#elif defined __i386__
CheckTypeSize(XkbNewKeyboardNotifyEvent,56, 9492, 2, 1.2, NULL, 9491, NULL)
#else
Msg("Find size of XkbNewKeyboardNotifyEvent (9492)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9491,NULL);\n",architecture,9492,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbMapNotifyEvent,104, 9493, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbMapNotifyEvent,serial,8,12,31414)
CheckOffset(struct _XkbMapNotifyEvent,serial,8,12,31414)
CheckMemberSize(struct _XkbMapNotifyEvent,send_event,4,12,31415)
CheckOffset(struct _XkbMapNotifyEvent,send_event,16,12,31415)
CheckMemberSize(struct _XkbMapNotifyEvent,display,8,12,31416)
CheckOffset(struct _XkbMapNotifyEvent,display,24,12,31416)
CheckMemberSize(struct _XkbMapNotifyEvent,time,8,12,31417)
CheckOffset(struct _XkbMapNotifyEvent,time,32,12,31417)
CheckMemberSize(struct _XkbMapNotifyEvent,xkb_type,4,12,31418)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,40,12,31418)
CheckMemberSize(struct _XkbMapNotifyEvent,device,4,12,31419)
CheckOffset(struct _XkbMapNotifyEvent,device,44,12,31419)
CheckMemberSize(struct _XkbMapNotifyEvent,changed,4,12,31420)
CheckOffset(struct _XkbMapNotifyEvent,changed,48,12,31420)
CheckMemberSize(struct _XkbMapNotifyEvent,flags,4,12,31421)
CheckOffset(struct _XkbMapNotifyEvent,flags,52,12,31421)
CheckMemberSize(struct _XkbMapNotifyEvent,first_type,4,12,31422)
CheckOffset(struct _XkbMapNotifyEvent,first_type,56,12,31422)
CheckMemberSize(struct _XkbMapNotifyEvent,num_types,4,12,31423)
CheckOffset(struct _XkbMapNotifyEvent,num_types,60,12,31423)
CheckMemberSize(struct _XkbMapNotifyEvent,min_key_code,1,12,31424)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,64,12,31424)
CheckMemberSize(struct _XkbMapNotifyEvent,max_key_code,1,12,31425)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,65,12,31425)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_sym,1,12,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,66,12,31426)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_act,1,12,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,67,12,31427)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_behavior,1,12,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,68,12,31428)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_explicit,1,12,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,69,12,31429)
CheckMemberSize(struct _XkbMapNotifyEvent,first_modmap_key,1,12,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,70,12,31430)
CheckMemberSize(struct _XkbMapNotifyEvent,first_vmodmap_key,1,12,31431)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,71,12,31431)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_syms,4,12,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,72,12,31432)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_acts,4,12,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,76,12,31433)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_behaviors,4,12,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,80,12,31434)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_explicit,4,12,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,84,12,31435)
CheckMemberSize(struct _XkbMapNotifyEvent,num_modmap_keys,4,12,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,88,12,31436)
CheckMemberSize(struct _XkbMapNotifyEvent,num_vmodmap_keys,4,12,31437)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,92,12,31437)
CheckMemberSize(struct _XkbMapNotifyEvent,vmods,4,12,31438)
CheckOffset(struct _XkbMapNotifyEvent,vmods,96,12,31438)
#elif defined __x86_64__
CheckTypeSize(struct _XkbMapNotifyEvent,104, 9493, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbMapNotifyEvent,serial,8,11,31414)
CheckOffset(struct _XkbMapNotifyEvent,serial,8,11,31414)
CheckMemberSize(struct _XkbMapNotifyEvent,send_event,4,11,31415)
CheckOffset(struct _XkbMapNotifyEvent,send_event,16,11,31415)
CheckMemberSize(struct _XkbMapNotifyEvent,display,8,11,31416)
CheckOffset(struct _XkbMapNotifyEvent,display,24,11,31416)
CheckMemberSize(struct _XkbMapNotifyEvent,time,8,11,31417)
CheckOffset(struct _XkbMapNotifyEvent,time,32,11,31417)
CheckMemberSize(struct _XkbMapNotifyEvent,xkb_type,4,11,31418)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,40,11,31418)
CheckMemberSize(struct _XkbMapNotifyEvent,device,4,11,31419)
CheckOffset(struct _XkbMapNotifyEvent,device,44,11,31419)
CheckMemberSize(struct _XkbMapNotifyEvent,changed,4,11,31420)
CheckOffset(struct _XkbMapNotifyEvent,changed,48,11,31420)
CheckMemberSize(struct _XkbMapNotifyEvent,flags,4,11,31421)
CheckOffset(struct _XkbMapNotifyEvent,flags,52,11,31421)
CheckMemberSize(struct _XkbMapNotifyEvent,first_type,4,11,31422)
CheckOffset(struct _XkbMapNotifyEvent,first_type,56,11,31422)
CheckMemberSize(struct _XkbMapNotifyEvent,num_types,4,11,31423)
CheckOffset(struct _XkbMapNotifyEvent,num_types,60,11,31423)
CheckMemberSize(struct _XkbMapNotifyEvent,min_key_code,1,11,31424)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,64,11,31424)
CheckMemberSize(struct _XkbMapNotifyEvent,max_key_code,1,11,31425)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,65,11,31425)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_sym,1,11,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,66,11,31426)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_act,1,11,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,67,11,31427)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_behavior,1,11,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,68,11,31428)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_explicit,1,11,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,69,11,31429)
CheckMemberSize(struct _XkbMapNotifyEvent,first_modmap_key,1,11,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,70,11,31430)
CheckMemberSize(struct _XkbMapNotifyEvent,first_vmodmap_key,1,11,31431)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,71,11,31431)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_syms,4,11,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,72,11,31432)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_acts,4,11,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,76,11,31433)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_behaviors,4,11,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,80,11,31434)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_explicit,4,11,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,84,11,31435)
CheckMemberSize(struct _XkbMapNotifyEvent,num_modmap_keys,4,11,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,88,11,31436)
CheckMemberSize(struct _XkbMapNotifyEvent,num_vmodmap_keys,4,11,31437)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,92,11,31437)
CheckMemberSize(struct _XkbMapNotifyEvent,vmods,4,11,31438)
CheckOffset(struct _XkbMapNotifyEvent,vmods,96,11,31438)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbMapNotifyEvent,80, 9493, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbMapNotifyEvent,serial,4,10,31414)
CheckOffset(struct _XkbMapNotifyEvent,serial,4,10,31414)
CheckMemberSize(struct _XkbMapNotifyEvent,send_event,4,10,31415)
CheckOffset(struct _XkbMapNotifyEvent,send_event,8,10,31415)
CheckMemberSize(struct _XkbMapNotifyEvent,display,4,10,31416)
CheckOffset(struct _XkbMapNotifyEvent,display,12,10,31416)
CheckMemberSize(struct _XkbMapNotifyEvent,time,4,10,31417)
CheckOffset(struct _XkbMapNotifyEvent,time,16,10,31417)
CheckMemberSize(struct _XkbMapNotifyEvent,xkb_type,4,10,31418)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,20,10,31418)
CheckMemberSize(struct _XkbMapNotifyEvent,device,4,10,31419)
CheckOffset(struct _XkbMapNotifyEvent,device,24,10,31419)
CheckMemberSize(struct _XkbMapNotifyEvent,changed,4,10,31420)
CheckOffset(struct _XkbMapNotifyEvent,changed,28,10,31420)
CheckMemberSize(struct _XkbMapNotifyEvent,flags,4,10,31421)
CheckOffset(struct _XkbMapNotifyEvent,flags,32,10,31421)
CheckMemberSize(struct _XkbMapNotifyEvent,first_type,4,10,31422)
CheckOffset(struct _XkbMapNotifyEvent,first_type,36,10,31422)
CheckMemberSize(struct _XkbMapNotifyEvent,num_types,4,10,31423)
CheckOffset(struct _XkbMapNotifyEvent,num_types,40,10,31423)
CheckMemberSize(struct _XkbMapNotifyEvent,min_key_code,1,10,31424)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,44,10,31424)
CheckMemberSize(struct _XkbMapNotifyEvent,max_key_code,1,10,31425)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,45,10,31425)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_sym,1,10,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,46,10,31426)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_act,1,10,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,47,10,31427)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_behavior,1,10,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,48,10,31428)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_explicit,1,10,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,49,10,31429)
CheckMemberSize(struct _XkbMapNotifyEvent,first_modmap_key,1,10,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,50,10,31430)
CheckMemberSize(struct _XkbMapNotifyEvent,first_vmodmap_key,1,10,31431)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,51,10,31431)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_syms,4,10,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,52,10,31432)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_acts,4,10,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,56,10,31433)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_behaviors,4,10,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,60,10,31434)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_explicit,4,10,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,64,10,31435)
CheckMemberSize(struct _XkbMapNotifyEvent,num_modmap_keys,4,10,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,68,10,31436)
CheckMemberSize(struct _XkbMapNotifyEvent,num_vmodmap_keys,4,10,31437)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,72,10,31437)
CheckMemberSize(struct _XkbMapNotifyEvent,vmods,4,10,31438)
CheckOffset(struct _XkbMapNotifyEvent,vmods,76,10,31438)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbMapNotifyEvent,104, 9493, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbMapNotifyEvent,serial,8,9,31414)
CheckOffset(struct _XkbMapNotifyEvent,serial,8,9,31414)
CheckMemberSize(struct _XkbMapNotifyEvent,send_event,4,9,31415)
CheckOffset(struct _XkbMapNotifyEvent,send_event,16,9,31415)
CheckMemberSize(struct _XkbMapNotifyEvent,display,8,9,31416)
CheckOffset(struct _XkbMapNotifyEvent,display,24,9,31416)
CheckMemberSize(struct _XkbMapNotifyEvent,time,8,9,31417)
CheckOffset(struct _XkbMapNotifyEvent,time,32,9,31417)
CheckMemberSize(struct _XkbMapNotifyEvent,xkb_type,4,9,31418)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,40,9,31418)
CheckMemberSize(struct _XkbMapNotifyEvent,device,4,9,31419)
CheckOffset(struct _XkbMapNotifyEvent,device,44,9,31419)
CheckMemberSize(struct _XkbMapNotifyEvent,changed,4,9,31420)
CheckOffset(struct _XkbMapNotifyEvent,changed,48,9,31420)
CheckMemberSize(struct _XkbMapNotifyEvent,flags,4,9,31421)
CheckOffset(struct _XkbMapNotifyEvent,flags,52,9,31421)
CheckMemberSize(struct _XkbMapNotifyEvent,first_type,4,9,31422)
CheckOffset(struct _XkbMapNotifyEvent,first_type,56,9,31422)
CheckMemberSize(struct _XkbMapNotifyEvent,num_types,4,9,31423)
CheckOffset(struct _XkbMapNotifyEvent,num_types,60,9,31423)
CheckMemberSize(struct _XkbMapNotifyEvent,min_key_code,1,9,31424)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,64,9,31424)
CheckMemberSize(struct _XkbMapNotifyEvent,max_key_code,1,9,31425)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,65,9,31425)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_sym,1,9,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,66,9,31426)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_act,1,9,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,67,9,31427)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_behavior,1,9,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,68,9,31428)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_explicit,1,9,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,69,9,31429)
CheckMemberSize(struct _XkbMapNotifyEvent,first_modmap_key,1,9,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,70,9,31430)
CheckMemberSize(struct _XkbMapNotifyEvent,first_vmodmap_key,1,9,31431)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,71,9,31431)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_syms,4,9,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,72,9,31432)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_acts,4,9,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,76,9,31433)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_behaviors,4,9,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,80,9,31434)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_explicit,4,9,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,84,9,31435)
CheckMemberSize(struct _XkbMapNotifyEvent,num_modmap_keys,4,9,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,88,9,31436)
CheckMemberSize(struct _XkbMapNotifyEvent,num_vmodmap_keys,4,9,31437)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,92,9,31437)
CheckMemberSize(struct _XkbMapNotifyEvent,vmods,4,9,31438)
CheckOffset(struct _XkbMapNotifyEvent,vmods,96,9,31438)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbMapNotifyEvent,80, 9493, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbMapNotifyEvent,serial,4,6,31414)
CheckOffset(struct _XkbMapNotifyEvent,serial,4,6,31414)
CheckMemberSize(struct _XkbMapNotifyEvent,send_event,4,6,31415)
CheckOffset(struct _XkbMapNotifyEvent,send_event,8,6,31415)
CheckMemberSize(struct _XkbMapNotifyEvent,display,4,6,31416)
CheckOffset(struct _XkbMapNotifyEvent,display,12,6,31416)
CheckMemberSize(struct _XkbMapNotifyEvent,time,4,6,31417)
CheckOffset(struct _XkbMapNotifyEvent,time,16,6,31417)
CheckMemberSize(struct _XkbMapNotifyEvent,xkb_type,4,6,31418)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,20,6,31418)
CheckMemberSize(struct _XkbMapNotifyEvent,device,4,6,31419)
CheckOffset(struct _XkbMapNotifyEvent,device,24,6,31419)
CheckMemberSize(struct _XkbMapNotifyEvent,changed,4,6,31420)
CheckOffset(struct _XkbMapNotifyEvent,changed,28,6,31420)
CheckMemberSize(struct _XkbMapNotifyEvent,flags,4,6,31421)
CheckOffset(struct _XkbMapNotifyEvent,flags,32,6,31421)
CheckMemberSize(struct _XkbMapNotifyEvent,first_type,4,6,31422)
CheckOffset(struct _XkbMapNotifyEvent,first_type,36,6,31422)
CheckMemberSize(struct _XkbMapNotifyEvent,num_types,4,6,31423)
CheckOffset(struct _XkbMapNotifyEvent,num_types,40,6,31423)
CheckMemberSize(struct _XkbMapNotifyEvent,min_key_code,1,6,31424)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,44,6,31424)
CheckMemberSize(struct _XkbMapNotifyEvent,max_key_code,1,6,31425)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,45,6,31425)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_sym,1,6,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,46,6,31426)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_act,1,6,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,47,6,31427)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_behavior,1,6,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,48,6,31428)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_explicit,1,6,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,49,6,31429)
CheckMemberSize(struct _XkbMapNotifyEvent,first_modmap_key,1,6,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,50,6,31430)
CheckMemberSize(struct _XkbMapNotifyEvent,first_vmodmap_key,1,6,31431)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,51,6,31431)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_syms,4,6,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,52,6,31432)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_acts,4,6,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,56,6,31433)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_behaviors,4,6,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,60,6,31434)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_explicit,4,6,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,64,6,31435)
CheckMemberSize(struct _XkbMapNotifyEvent,num_modmap_keys,4,6,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,68,6,31436)
CheckMemberSize(struct _XkbMapNotifyEvent,num_vmodmap_keys,4,6,31437)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,72,6,31437)
CheckMemberSize(struct _XkbMapNotifyEvent,vmods,4,6,31438)
CheckOffset(struct _XkbMapNotifyEvent,vmods,76,6,31438)
#elif defined __ia64__
CheckTypeSize(struct _XkbMapNotifyEvent,104, 9493, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbMapNotifyEvent,serial,8,3,31414)
CheckOffset(struct _XkbMapNotifyEvent,serial,8,3,31414)
CheckMemberSize(struct _XkbMapNotifyEvent,send_event,4,3,31415)
CheckOffset(struct _XkbMapNotifyEvent,send_event,16,3,31415)
CheckMemberSize(struct _XkbMapNotifyEvent,display,8,3,31416)
CheckOffset(struct _XkbMapNotifyEvent,display,24,3,31416)
CheckMemberSize(struct _XkbMapNotifyEvent,time,8,3,31417)
CheckOffset(struct _XkbMapNotifyEvent,time,32,3,31417)
CheckMemberSize(struct _XkbMapNotifyEvent,xkb_type,4,3,31418)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,40,3,31418)
CheckMemberSize(struct _XkbMapNotifyEvent,device,4,3,31419)
CheckOffset(struct _XkbMapNotifyEvent,device,44,3,31419)
CheckMemberSize(struct _XkbMapNotifyEvent,changed,4,3,31420)
CheckOffset(struct _XkbMapNotifyEvent,changed,48,3,31420)
CheckMemberSize(struct _XkbMapNotifyEvent,flags,4,3,31421)
CheckOffset(struct _XkbMapNotifyEvent,flags,52,3,31421)
CheckMemberSize(struct _XkbMapNotifyEvent,first_type,4,3,31422)
CheckOffset(struct _XkbMapNotifyEvent,first_type,56,3,31422)
CheckMemberSize(struct _XkbMapNotifyEvent,num_types,4,3,31423)
CheckOffset(struct _XkbMapNotifyEvent,num_types,60,3,31423)
CheckMemberSize(struct _XkbMapNotifyEvent,min_key_code,1,3,31424)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,64,3,31424)
CheckMemberSize(struct _XkbMapNotifyEvent,max_key_code,1,3,31425)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,65,3,31425)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_sym,1,3,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,66,3,31426)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_act,1,3,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,67,3,31427)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_behavior,1,3,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,68,3,31428)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_explicit,1,3,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,69,3,31429)
CheckMemberSize(struct _XkbMapNotifyEvent,first_modmap_key,1,3,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,70,3,31430)
CheckMemberSize(struct _XkbMapNotifyEvent,first_vmodmap_key,1,3,31431)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,71,3,31431)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_syms,4,3,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,72,3,31432)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_acts,4,3,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,76,3,31433)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_behaviors,4,3,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,80,3,31434)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_explicit,4,3,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,84,3,31435)
CheckMemberSize(struct _XkbMapNotifyEvent,num_modmap_keys,4,3,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,88,3,31436)
CheckMemberSize(struct _XkbMapNotifyEvent,num_vmodmap_keys,4,3,31437)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,92,3,31437)
CheckMemberSize(struct _XkbMapNotifyEvent,vmods,4,3,31438)
CheckOffset(struct _XkbMapNotifyEvent,vmods,96,3,31438)
#elif defined __i386__
CheckTypeSize(struct _XkbMapNotifyEvent,80, 9493, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbMapNotifyEvent,serial,4,2,31414)
CheckOffset(struct _XkbMapNotifyEvent,serial,4,2,31414)
CheckMemberSize(struct _XkbMapNotifyEvent,send_event,4,2,31415)
CheckOffset(struct _XkbMapNotifyEvent,send_event,8,2,31415)
CheckMemberSize(struct _XkbMapNotifyEvent,display,4,2,31416)
CheckOffset(struct _XkbMapNotifyEvent,display,12,2,31416)
CheckMemberSize(struct _XkbMapNotifyEvent,time,4,2,31417)
CheckOffset(struct _XkbMapNotifyEvent,time,16,2,31417)
CheckMemberSize(struct _XkbMapNotifyEvent,xkb_type,4,2,31418)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,20,2,31418)
CheckMemberSize(struct _XkbMapNotifyEvent,device,4,2,31419)
CheckOffset(struct _XkbMapNotifyEvent,device,24,2,31419)
CheckMemberSize(struct _XkbMapNotifyEvent,changed,4,2,31420)
CheckOffset(struct _XkbMapNotifyEvent,changed,28,2,31420)
CheckMemberSize(struct _XkbMapNotifyEvent,flags,4,2,31421)
CheckOffset(struct _XkbMapNotifyEvent,flags,32,2,31421)
CheckMemberSize(struct _XkbMapNotifyEvent,first_type,4,2,31422)
CheckOffset(struct _XkbMapNotifyEvent,first_type,36,2,31422)
CheckMemberSize(struct _XkbMapNotifyEvent,num_types,4,2,31423)
CheckOffset(struct _XkbMapNotifyEvent,num_types,40,2,31423)
CheckMemberSize(struct _XkbMapNotifyEvent,min_key_code,1,2,31424)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,44,2,31424)
CheckMemberSize(struct _XkbMapNotifyEvent,max_key_code,1,2,31425)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,45,2,31425)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_sym,1,2,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,46,2,31426)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_act,1,2,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,47,2,31427)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_behavior,1,2,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,48,2,31428)
CheckMemberSize(struct _XkbMapNotifyEvent,first_key_explicit,1,2,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,49,2,31429)
CheckMemberSize(struct _XkbMapNotifyEvent,first_modmap_key,1,2,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,50,2,31430)
CheckMemberSize(struct _XkbMapNotifyEvent,first_vmodmap_key,1,2,31431)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,51,2,31431)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_syms,4,2,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,52,2,31432)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_acts,4,2,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,56,2,31433)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_behaviors,4,2,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,60,2,31434)
CheckMemberSize(struct _XkbMapNotifyEvent,num_key_explicit,4,2,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,64,2,31435)
CheckMemberSize(struct _XkbMapNotifyEvent,num_modmap_keys,4,2,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,68,2,31436)
CheckMemberSize(struct _XkbMapNotifyEvent,num_vmodmap_keys,4,2,31437)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,72,2,31437)
CheckMemberSize(struct _XkbMapNotifyEvent,vmods,4,2,31438)
CheckOffset(struct _XkbMapNotifyEvent,vmods,76,2,31438)
#else
Msg("Find size of _XkbMapNotifyEvent (9493)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9493,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbMapNotifyEvent,104, 9494, 12, 1.3, NULL, 9493, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbMapNotifyEvent,104, 9494, 11, 2.0, NULL, 9493, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbMapNotifyEvent,80, 9494, 10, 1.3, NULL, 9493, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbMapNotifyEvent,104, 9494, 9, 2.0, NULL, 9493, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbMapNotifyEvent,80, 9494, 6, 1.2, NULL, 9493, NULL)
#elif defined __ia64__
CheckTypeSize(XkbMapNotifyEvent,104, 9494, 3, 1.3, NULL, 9493, NULL)
#elif defined __i386__
CheckTypeSize(XkbMapNotifyEvent,80, 9494, 2, 1.2, NULL, 9493, NULL)
#else
Msg("Find size of XkbMapNotifyEvent (9494)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9493,NULL);\n",architecture,9494,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbStateNotifyEvent,104, 9495, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbStateNotifyEvent,serial,8,12,31440)
CheckOffset(struct _XkbStateNotifyEvent,serial,8,12,31440)
CheckMemberSize(struct _XkbStateNotifyEvent,send_event,4,12,31441)
CheckOffset(struct _XkbStateNotifyEvent,send_event,16,12,31441)
CheckMemberSize(struct _XkbStateNotifyEvent,display,8,12,31442)
CheckOffset(struct _XkbStateNotifyEvent,display,24,12,31442)
CheckMemberSize(struct _XkbStateNotifyEvent,time,8,12,31443)
CheckOffset(struct _XkbStateNotifyEvent,time,32,12,31443)
CheckMemberSize(struct _XkbStateNotifyEvent,xkb_type,4,12,31444)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,40,12,31444)
CheckMemberSize(struct _XkbStateNotifyEvent,device,4,12,31445)
CheckOffset(struct _XkbStateNotifyEvent,device,44,12,31445)
CheckMemberSize(struct _XkbStateNotifyEvent,changed,4,12,31446)
CheckOffset(struct _XkbStateNotifyEvent,changed,48,12,31446)
CheckMemberSize(struct _XkbStateNotifyEvent,group,4,12,31447)
CheckOffset(struct _XkbStateNotifyEvent,group,52,12,31447)
CheckMemberSize(struct _XkbStateNotifyEvent,base_group,4,12,31448)
CheckOffset(struct _XkbStateNotifyEvent,base_group,56,12,31448)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_group,4,12,31449)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,60,12,31449)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_group,4,12,31450)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,64,12,31450)
CheckMemberSize(struct _XkbStateNotifyEvent,mods,4,12,31451)
CheckOffset(struct _XkbStateNotifyEvent,mods,68,12,31451)
CheckMemberSize(struct _XkbStateNotifyEvent,base_mods,4,12,31452)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,72,12,31452)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_mods,4,12,31453)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,76,12,31453)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_mods,4,12,31454)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,80,12,31454)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_state,4,12,31455)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,84,12,31455)
CheckMemberSize(struct _XkbStateNotifyEvent,grab_mods,1,12,31456)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,88,12,31456)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_grab_mods,1,12,31457)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,89,12,31457)
CheckMemberSize(struct _XkbStateNotifyEvent,lookup_mods,1,12,31458)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,90,12,31458)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_lookup_mods,1,12,31459)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,91,12,31459)
CheckMemberSize(struct _XkbStateNotifyEvent,ptr_buttons,4,12,31460)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,92,12,31460)
CheckMemberSize(struct _XkbStateNotifyEvent,keycode,1,12,31461)
CheckOffset(struct _XkbStateNotifyEvent,keycode,96,12,31461)
CheckMemberSize(struct _XkbStateNotifyEvent,event_type,1,12,31462)
CheckOffset(struct _XkbStateNotifyEvent,event_type,97,12,31462)
CheckMemberSize(struct _XkbStateNotifyEvent,req_major,1,12,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_major,98,12,31463)
CheckMemberSize(struct _XkbStateNotifyEvent,req_minor,1,12,31464)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,99,12,31464)
#elif defined __x86_64__
CheckTypeSize(struct _XkbStateNotifyEvent,104, 9495, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbStateNotifyEvent,serial,8,11,31440)
CheckOffset(struct _XkbStateNotifyEvent,serial,8,11,31440)
CheckMemberSize(struct _XkbStateNotifyEvent,send_event,4,11,31441)
CheckOffset(struct _XkbStateNotifyEvent,send_event,16,11,31441)
CheckMemberSize(struct _XkbStateNotifyEvent,display,8,11,31442)
CheckOffset(struct _XkbStateNotifyEvent,display,24,11,31442)
CheckMemberSize(struct _XkbStateNotifyEvent,time,8,11,31443)
CheckOffset(struct _XkbStateNotifyEvent,time,32,11,31443)
CheckMemberSize(struct _XkbStateNotifyEvent,xkb_type,4,11,31444)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,40,11,31444)
CheckMemberSize(struct _XkbStateNotifyEvent,device,4,11,31445)
CheckOffset(struct _XkbStateNotifyEvent,device,44,11,31445)
CheckMemberSize(struct _XkbStateNotifyEvent,changed,4,11,31446)
CheckOffset(struct _XkbStateNotifyEvent,changed,48,11,31446)
CheckMemberSize(struct _XkbStateNotifyEvent,group,4,11,31447)
CheckOffset(struct _XkbStateNotifyEvent,group,52,11,31447)
CheckMemberSize(struct _XkbStateNotifyEvent,base_group,4,11,31448)
CheckOffset(struct _XkbStateNotifyEvent,base_group,56,11,31448)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_group,4,11,31449)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,60,11,31449)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_group,4,11,31450)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,64,11,31450)
CheckMemberSize(struct _XkbStateNotifyEvent,mods,4,11,31451)
CheckOffset(struct _XkbStateNotifyEvent,mods,68,11,31451)
CheckMemberSize(struct _XkbStateNotifyEvent,base_mods,4,11,31452)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,72,11,31452)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_mods,4,11,31453)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,76,11,31453)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_mods,4,11,31454)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,80,11,31454)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_state,4,11,31455)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,84,11,31455)
CheckMemberSize(struct _XkbStateNotifyEvent,grab_mods,1,11,31456)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,88,11,31456)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_grab_mods,1,11,31457)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,89,11,31457)
CheckMemberSize(struct _XkbStateNotifyEvent,lookup_mods,1,11,31458)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,90,11,31458)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_lookup_mods,1,11,31459)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,91,11,31459)
CheckMemberSize(struct _XkbStateNotifyEvent,ptr_buttons,4,11,31460)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,92,11,31460)
CheckMemberSize(struct _XkbStateNotifyEvent,keycode,1,11,31461)
CheckOffset(struct _XkbStateNotifyEvent,keycode,96,11,31461)
CheckMemberSize(struct _XkbStateNotifyEvent,event_type,1,11,31462)
CheckOffset(struct _XkbStateNotifyEvent,event_type,97,11,31462)
CheckMemberSize(struct _XkbStateNotifyEvent,req_major,1,11,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_major,98,11,31463)
CheckMemberSize(struct _XkbStateNotifyEvent,req_minor,1,11,31464)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,99,11,31464)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbStateNotifyEvent,80, 9495, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbStateNotifyEvent,serial,4,10,31440)
CheckOffset(struct _XkbStateNotifyEvent,serial,4,10,31440)
CheckMemberSize(struct _XkbStateNotifyEvent,send_event,4,10,31441)
CheckOffset(struct _XkbStateNotifyEvent,send_event,8,10,31441)
CheckMemberSize(struct _XkbStateNotifyEvent,display,4,10,31442)
CheckOffset(struct _XkbStateNotifyEvent,display,12,10,31442)
CheckMemberSize(struct _XkbStateNotifyEvent,time,4,10,31443)
CheckOffset(struct _XkbStateNotifyEvent,time,16,10,31443)
CheckMemberSize(struct _XkbStateNotifyEvent,xkb_type,4,10,31444)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,20,10,31444)
CheckMemberSize(struct _XkbStateNotifyEvent,device,4,10,31445)
CheckOffset(struct _XkbStateNotifyEvent,device,24,10,31445)
CheckMemberSize(struct _XkbStateNotifyEvent,changed,4,10,31446)
CheckOffset(struct _XkbStateNotifyEvent,changed,28,10,31446)
CheckMemberSize(struct _XkbStateNotifyEvent,group,4,10,31447)
CheckOffset(struct _XkbStateNotifyEvent,group,32,10,31447)
CheckMemberSize(struct _XkbStateNotifyEvent,base_group,4,10,31448)
CheckOffset(struct _XkbStateNotifyEvent,base_group,36,10,31448)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_group,4,10,31449)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,40,10,31449)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_group,4,10,31450)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,44,10,31450)
CheckMemberSize(struct _XkbStateNotifyEvent,mods,4,10,31451)
CheckOffset(struct _XkbStateNotifyEvent,mods,48,10,31451)
CheckMemberSize(struct _XkbStateNotifyEvent,base_mods,4,10,31452)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,52,10,31452)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_mods,4,10,31453)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,56,10,31453)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_mods,4,10,31454)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,60,10,31454)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_state,4,10,31455)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,64,10,31455)
CheckMemberSize(struct _XkbStateNotifyEvent,grab_mods,1,10,31456)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,68,10,31456)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_grab_mods,1,10,31457)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,69,10,31457)
CheckMemberSize(struct _XkbStateNotifyEvent,lookup_mods,1,10,31458)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,70,10,31458)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_lookup_mods,1,10,31459)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,71,10,31459)
CheckMemberSize(struct _XkbStateNotifyEvent,ptr_buttons,4,10,31460)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,72,10,31460)
CheckMemberSize(struct _XkbStateNotifyEvent,keycode,1,10,31461)
CheckOffset(struct _XkbStateNotifyEvent,keycode,76,10,31461)
CheckMemberSize(struct _XkbStateNotifyEvent,event_type,1,10,31462)
CheckOffset(struct _XkbStateNotifyEvent,event_type,77,10,31462)
CheckMemberSize(struct _XkbStateNotifyEvent,req_major,1,10,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_major,78,10,31463)
CheckMemberSize(struct _XkbStateNotifyEvent,req_minor,1,10,31464)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,79,10,31464)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbStateNotifyEvent,104, 9495, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbStateNotifyEvent,serial,8,9,31440)
CheckOffset(struct _XkbStateNotifyEvent,serial,8,9,31440)
CheckMemberSize(struct _XkbStateNotifyEvent,send_event,4,9,31441)
CheckOffset(struct _XkbStateNotifyEvent,send_event,16,9,31441)
CheckMemberSize(struct _XkbStateNotifyEvent,display,8,9,31442)
CheckOffset(struct _XkbStateNotifyEvent,display,24,9,31442)
CheckMemberSize(struct _XkbStateNotifyEvent,time,8,9,31443)
CheckOffset(struct _XkbStateNotifyEvent,time,32,9,31443)
CheckMemberSize(struct _XkbStateNotifyEvent,xkb_type,4,9,31444)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,40,9,31444)
CheckMemberSize(struct _XkbStateNotifyEvent,device,4,9,31445)
CheckOffset(struct _XkbStateNotifyEvent,device,44,9,31445)
CheckMemberSize(struct _XkbStateNotifyEvent,changed,4,9,31446)
CheckOffset(struct _XkbStateNotifyEvent,changed,48,9,31446)
CheckMemberSize(struct _XkbStateNotifyEvent,group,4,9,31447)
CheckOffset(struct _XkbStateNotifyEvent,group,52,9,31447)
CheckMemberSize(struct _XkbStateNotifyEvent,base_group,4,9,31448)
CheckOffset(struct _XkbStateNotifyEvent,base_group,56,9,31448)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_group,4,9,31449)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,60,9,31449)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_group,4,9,31450)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,64,9,31450)
CheckMemberSize(struct _XkbStateNotifyEvent,mods,4,9,31451)
CheckOffset(struct _XkbStateNotifyEvent,mods,68,9,31451)
CheckMemberSize(struct _XkbStateNotifyEvent,base_mods,4,9,31452)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,72,9,31452)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_mods,4,9,31453)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,76,9,31453)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_mods,4,9,31454)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,80,9,31454)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_state,4,9,31455)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,84,9,31455)
CheckMemberSize(struct _XkbStateNotifyEvent,grab_mods,1,9,31456)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,88,9,31456)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_grab_mods,1,9,31457)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,89,9,31457)
CheckMemberSize(struct _XkbStateNotifyEvent,lookup_mods,1,9,31458)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,90,9,31458)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_lookup_mods,1,9,31459)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,91,9,31459)
CheckMemberSize(struct _XkbStateNotifyEvent,ptr_buttons,4,9,31460)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,92,9,31460)
CheckMemberSize(struct _XkbStateNotifyEvent,keycode,1,9,31461)
CheckOffset(struct _XkbStateNotifyEvent,keycode,96,9,31461)
CheckMemberSize(struct _XkbStateNotifyEvent,event_type,1,9,31462)
CheckOffset(struct _XkbStateNotifyEvent,event_type,97,9,31462)
CheckMemberSize(struct _XkbStateNotifyEvent,req_major,1,9,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_major,98,9,31463)
CheckMemberSize(struct _XkbStateNotifyEvent,req_minor,1,9,31464)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,99,9,31464)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbStateNotifyEvent,80, 9495, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbStateNotifyEvent,serial,4,6,31440)
CheckOffset(struct _XkbStateNotifyEvent,serial,4,6,31440)
CheckMemberSize(struct _XkbStateNotifyEvent,send_event,4,6,31441)
CheckOffset(struct _XkbStateNotifyEvent,send_event,8,6,31441)
CheckMemberSize(struct _XkbStateNotifyEvent,display,4,6,31442)
CheckOffset(struct _XkbStateNotifyEvent,display,12,6,31442)
CheckMemberSize(struct _XkbStateNotifyEvent,time,4,6,31443)
CheckOffset(struct _XkbStateNotifyEvent,time,16,6,31443)
CheckMemberSize(struct _XkbStateNotifyEvent,xkb_type,4,6,31444)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,20,6,31444)
CheckMemberSize(struct _XkbStateNotifyEvent,device,4,6,31445)
CheckOffset(struct _XkbStateNotifyEvent,device,24,6,31445)
CheckMemberSize(struct _XkbStateNotifyEvent,changed,4,6,31446)
CheckOffset(struct _XkbStateNotifyEvent,changed,28,6,31446)
CheckMemberSize(struct _XkbStateNotifyEvent,group,4,6,31447)
CheckOffset(struct _XkbStateNotifyEvent,group,32,6,31447)
CheckMemberSize(struct _XkbStateNotifyEvent,base_group,4,6,31448)
CheckOffset(struct _XkbStateNotifyEvent,base_group,36,6,31448)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_group,4,6,31449)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,40,6,31449)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_group,4,6,31450)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,44,6,31450)
CheckMemberSize(struct _XkbStateNotifyEvent,mods,4,6,31451)
CheckOffset(struct _XkbStateNotifyEvent,mods,48,6,31451)
CheckMemberSize(struct _XkbStateNotifyEvent,base_mods,4,6,31452)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,52,6,31452)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_mods,4,6,31453)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,56,6,31453)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_mods,4,6,31454)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,60,6,31454)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_state,4,6,31455)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,64,6,31455)
CheckMemberSize(struct _XkbStateNotifyEvent,grab_mods,1,6,31456)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,68,6,31456)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_grab_mods,1,6,31457)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,69,6,31457)
CheckMemberSize(struct _XkbStateNotifyEvent,lookup_mods,1,6,31458)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,70,6,31458)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_lookup_mods,1,6,31459)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,71,6,31459)
CheckMemberSize(struct _XkbStateNotifyEvent,ptr_buttons,4,6,31460)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,72,6,31460)
CheckMemberSize(struct _XkbStateNotifyEvent,keycode,1,6,31461)
CheckOffset(struct _XkbStateNotifyEvent,keycode,76,6,31461)
CheckMemberSize(struct _XkbStateNotifyEvent,event_type,1,6,31462)
CheckOffset(struct _XkbStateNotifyEvent,event_type,77,6,31462)
CheckMemberSize(struct _XkbStateNotifyEvent,req_major,1,6,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_major,78,6,31463)
CheckMemberSize(struct _XkbStateNotifyEvent,req_minor,1,6,31464)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,79,6,31464)
#elif defined __ia64__
CheckTypeSize(struct _XkbStateNotifyEvent,104, 9495, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbStateNotifyEvent,serial,8,3,31440)
CheckOffset(struct _XkbStateNotifyEvent,serial,8,3,31440)
CheckMemberSize(struct _XkbStateNotifyEvent,send_event,4,3,31441)
CheckOffset(struct _XkbStateNotifyEvent,send_event,16,3,31441)
CheckMemberSize(struct _XkbStateNotifyEvent,display,8,3,31442)
CheckOffset(struct _XkbStateNotifyEvent,display,24,3,31442)
CheckMemberSize(struct _XkbStateNotifyEvent,time,8,3,31443)
CheckOffset(struct _XkbStateNotifyEvent,time,32,3,31443)
CheckMemberSize(struct _XkbStateNotifyEvent,xkb_type,4,3,31444)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,40,3,31444)
CheckMemberSize(struct _XkbStateNotifyEvent,device,4,3,31445)
CheckOffset(struct _XkbStateNotifyEvent,device,44,3,31445)
CheckMemberSize(struct _XkbStateNotifyEvent,changed,4,3,31446)
CheckOffset(struct _XkbStateNotifyEvent,changed,48,3,31446)
CheckMemberSize(struct _XkbStateNotifyEvent,group,4,3,31447)
CheckOffset(struct _XkbStateNotifyEvent,group,52,3,31447)
CheckMemberSize(struct _XkbStateNotifyEvent,base_group,4,3,31448)
CheckOffset(struct _XkbStateNotifyEvent,base_group,56,3,31448)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_group,4,3,31449)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,60,3,31449)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_group,4,3,31450)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,64,3,31450)
CheckMemberSize(struct _XkbStateNotifyEvent,mods,4,3,31451)
CheckOffset(struct _XkbStateNotifyEvent,mods,68,3,31451)
CheckMemberSize(struct _XkbStateNotifyEvent,base_mods,4,3,31452)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,72,3,31452)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_mods,4,3,31453)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,76,3,31453)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_mods,4,3,31454)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,80,3,31454)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_state,4,3,31455)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,84,3,31455)
CheckMemberSize(struct _XkbStateNotifyEvent,grab_mods,1,3,31456)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,88,3,31456)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_grab_mods,1,3,31457)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,89,3,31457)
CheckMemberSize(struct _XkbStateNotifyEvent,lookup_mods,1,3,31458)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,90,3,31458)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_lookup_mods,1,3,31459)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,91,3,31459)
CheckMemberSize(struct _XkbStateNotifyEvent,ptr_buttons,4,3,31460)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,92,3,31460)
CheckMemberSize(struct _XkbStateNotifyEvent,keycode,1,3,31461)
CheckOffset(struct _XkbStateNotifyEvent,keycode,96,3,31461)
CheckMemberSize(struct _XkbStateNotifyEvent,event_type,1,3,31462)
CheckOffset(struct _XkbStateNotifyEvent,event_type,97,3,31462)
CheckMemberSize(struct _XkbStateNotifyEvent,req_major,1,3,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_major,98,3,31463)
CheckMemberSize(struct _XkbStateNotifyEvent,req_minor,1,3,31464)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,99,3,31464)
#elif defined __i386__
CheckTypeSize(struct _XkbStateNotifyEvent,80, 9495, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbStateNotifyEvent,serial,4,2,31440)
CheckOffset(struct _XkbStateNotifyEvent,serial,4,2,31440)
CheckMemberSize(struct _XkbStateNotifyEvent,send_event,4,2,31441)
CheckOffset(struct _XkbStateNotifyEvent,send_event,8,2,31441)
CheckMemberSize(struct _XkbStateNotifyEvent,display,4,2,31442)
CheckOffset(struct _XkbStateNotifyEvent,display,12,2,31442)
CheckMemberSize(struct _XkbStateNotifyEvent,time,4,2,31443)
CheckOffset(struct _XkbStateNotifyEvent,time,16,2,31443)
CheckMemberSize(struct _XkbStateNotifyEvent,xkb_type,4,2,31444)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,20,2,31444)
CheckMemberSize(struct _XkbStateNotifyEvent,device,4,2,31445)
CheckOffset(struct _XkbStateNotifyEvent,device,24,2,31445)
CheckMemberSize(struct _XkbStateNotifyEvent,changed,4,2,31446)
CheckOffset(struct _XkbStateNotifyEvent,changed,28,2,31446)
CheckMemberSize(struct _XkbStateNotifyEvent,group,4,2,31447)
CheckOffset(struct _XkbStateNotifyEvent,group,32,2,31447)
CheckMemberSize(struct _XkbStateNotifyEvent,base_group,4,2,31448)
CheckOffset(struct _XkbStateNotifyEvent,base_group,36,2,31448)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_group,4,2,31449)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,40,2,31449)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_group,4,2,31450)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,44,2,31450)
CheckMemberSize(struct _XkbStateNotifyEvent,mods,4,2,31451)
CheckOffset(struct _XkbStateNotifyEvent,mods,48,2,31451)
CheckMemberSize(struct _XkbStateNotifyEvent,base_mods,4,2,31452)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,52,2,31452)
CheckMemberSize(struct _XkbStateNotifyEvent,latched_mods,4,2,31453)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,56,2,31453)
CheckMemberSize(struct _XkbStateNotifyEvent,locked_mods,4,2,31454)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,60,2,31454)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_state,4,2,31455)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,64,2,31455)
CheckMemberSize(struct _XkbStateNotifyEvent,grab_mods,1,2,31456)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,68,2,31456)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_grab_mods,1,2,31457)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,69,2,31457)
CheckMemberSize(struct _XkbStateNotifyEvent,lookup_mods,1,2,31458)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,70,2,31458)
CheckMemberSize(struct _XkbStateNotifyEvent,compat_lookup_mods,1,2,31459)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,71,2,31459)
CheckMemberSize(struct _XkbStateNotifyEvent,ptr_buttons,4,2,31460)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,72,2,31460)
CheckMemberSize(struct _XkbStateNotifyEvent,keycode,1,2,31461)
CheckOffset(struct _XkbStateNotifyEvent,keycode,76,2,31461)
CheckMemberSize(struct _XkbStateNotifyEvent,event_type,1,2,31462)
CheckOffset(struct _XkbStateNotifyEvent,event_type,77,2,31462)
CheckMemberSize(struct _XkbStateNotifyEvent,req_major,1,2,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_major,78,2,31463)
CheckMemberSize(struct _XkbStateNotifyEvent,req_minor,1,2,31464)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,79,2,31464)
#else
Msg("Find size of _XkbStateNotifyEvent (9495)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9495,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbStateNotifyEvent,104, 9496, 12, 1.3, NULL, 9495, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbStateNotifyEvent,104, 9496, 11, 2.0, NULL, 9495, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbStateNotifyEvent,80, 9496, 10, 1.3, NULL, 9495, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbStateNotifyEvent,104, 9496, 9, 2.0, NULL, 9495, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbStateNotifyEvent,80, 9496, 6, 1.2, NULL, 9495, NULL)
#elif defined __ia64__
CheckTypeSize(XkbStateNotifyEvent,104, 9496, 3, 1.3, NULL, 9495, NULL)
#elif defined __i386__
CheckTypeSize(XkbStateNotifyEvent,80, 9496, 2, 1.2, NULL, 9495, NULL)
#else
Msg("Find size of XkbStateNotifyEvent (9496)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9495,NULL);\n",architecture,9496,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbControlsNotify,72, 9497, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbControlsNotify,serial,8,12,31466)
CheckOffset(struct _XkbControlsNotify,serial,8,12,31466)
CheckMemberSize(struct _XkbControlsNotify,send_event,4,12,31467)
CheckOffset(struct _XkbControlsNotify,send_event,16,12,31467)
CheckMemberSize(struct _XkbControlsNotify,display,8,12,31468)
CheckOffset(struct _XkbControlsNotify,display,24,12,31468)
CheckMemberSize(struct _XkbControlsNotify,time,8,12,31469)
CheckOffset(struct _XkbControlsNotify,time,32,12,31469)
CheckMemberSize(struct _XkbControlsNotify,xkb_type,4,12,31470)
CheckOffset(struct _XkbControlsNotify,xkb_type,40,12,31470)
CheckMemberSize(struct _XkbControlsNotify,device,4,12,31471)
CheckOffset(struct _XkbControlsNotify,device,44,12,31471)
CheckMemberSize(struct _XkbControlsNotify,changed_ctrls,4,12,31472)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,48,12,31472)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrls,4,12,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,52,12,31473)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrl_changes,4,12,31474)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,56,12,31474)
CheckMemberSize(struct _XkbControlsNotify,num_groups,4,12,31475)
CheckOffset(struct _XkbControlsNotify,num_groups,60,12,31475)
CheckMemberSize(struct _XkbControlsNotify,keycode,1,12,31476)
CheckOffset(struct _XkbControlsNotify,keycode,64,12,31476)
CheckMemberSize(struct _XkbControlsNotify,event_type,1,12,31477)
CheckOffset(struct _XkbControlsNotify,event_type,65,12,31477)
CheckMemberSize(struct _XkbControlsNotify,req_major,1,12,31478)
CheckOffset(struct _XkbControlsNotify,req_major,66,12,31478)
CheckMemberSize(struct _XkbControlsNotify,req_minor,1,12,31479)
CheckOffset(struct _XkbControlsNotify,req_minor,67,12,31479)
#elif defined __x86_64__
CheckTypeSize(struct _XkbControlsNotify,72, 9497, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbControlsNotify,serial,8,11,31466)
CheckOffset(struct _XkbControlsNotify,serial,8,11,31466)
CheckMemberSize(struct _XkbControlsNotify,send_event,4,11,31467)
CheckOffset(struct _XkbControlsNotify,send_event,16,11,31467)
CheckMemberSize(struct _XkbControlsNotify,display,8,11,31468)
CheckOffset(struct _XkbControlsNotify,display,24,11,31468)
CheckMemberSize(struct _XkbControlsNotify,time,8,11,31469)
CheckOffset(struct _XkbControlsNotify,time,32,11,31469)
CheckMemberSize(struct _XkbControlsNotify,xkb_type,4,11,31470)
CheckOffset(struct _XkbControlsNotify,xkb_type,40,11,31470)
CheckMemberSize(struct _XkbControlsNotify,device,4,11,31471)
CheckOffset(struct _XkbControlsNotify,device,44,11,31471)
CheckMemberSize(struct _XkbControlsNotify,changed_ctrls,4,11,31472)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,48,11,31472)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrls,4,11,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,52,11,31473)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrl_changes,4,11,31474)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,56,11,31474)
CheckMemberSize(struct _XkbControlsNotify,num_groups,4,11,31475)
CheckOffset(struct _XkbControlsNotify,num_groups,60,11,31475)
CheckMemberSize(struct _XkbControlsNotify,keycode,1,11,31476)
CheckOffset(struct _XkbControlsNotify,keycode,64,11,31476)
CheckMemberSize(struct _XkbControlsNotify,event_type,1,11,31477)
CheckOffset(struct _XkbControlsNotify,event_type,65,11,31477)
CheckMemberSize(struct _XkbControlsNotify,req_major,1,11,31478)
CheckOffset(struct _XkbControlsNotify,req_major,66,11,31478)
CheckMemberSize(struct _XkbControlsNotify,req_minor,1,11,31479)
CheckOffset(struct _XkbControlsNotify,req_minor,67,11,31479)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbControlsNotify,48, 9497, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbControlsNotify,serial,4,10,31466)
CheckOffset(struct _XkbControlsNotify,serial,4,10,31466)
CheckMemberSize(struct _XkbControlsNotify,send_event,4,10,31467)
CheckOffset(struct _XkbControlsNotify,send_event,8,10,31467)
CheckMemberSize(struct _XkbControlsNotify,display,4,10,31468)
CheckOffset(struct _XkbControlsNotify,display,12,10,31468)
CheckMemberSize(struct _XkbControlsNotify,time,4,10,31469)
CheckOffset(struct _XkbControlsNotify,time,16,10,31469)
CheckMemberSize(struct _XkbControlsNotify,xkb_type,4,10,31470)
CheckOffset(struct _XkbControlsNotify,xkb_type,20,10,31470)
CheckMemberSize(struct _XkbControlsNotify,device,4,10,31471)
CheckOffset(struct _XkbControlsNotify,device,24,10,31471)
CheckMemberSize(struct _XkbControlsNotify,changed_ctrls,4,10,31472)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,28,10,31472)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrls,4,10,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,32,10,31473)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrl_changes,4,10,31474)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,36,10,31474)
CheckMemberSize(struct _XkbControlsNotify,num_groups,4,10,31475)
CheckOffset(struct _XkbControlsNotify,num_groups,40,10,31475)
CheckMemberSize(struct _XkbControlsNotify,keycode,1,10,31476)
CheckOffset(struct _XkbControlsNotify,keycode,44,10,31476)
CheckMemberSize(struct _XkbControlsNotify,event_type,1,10,31477)
CheckOffset(struct _XkbControlsNotify,event_type,45,10,31477)
CheckMemberSize(struct _XkbControlsNotify,req_major,1,10,31478)
CheckOffset(struct _XkbControlsNotify,req_major,46,10,31478)
CheckMemberSize(struct _XkbControlsNotify,req_minor,1,10,31479)
CheckOffset(struct _XkbControlsNotify,req_minor,47,10,31479)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbControlsNotify,72, 9497, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbControlsNotify,serial,8,9,31466)
CheckOffset(struct _XkbControlsNotify,serial,8,9,31466)
CheckMemberSize(struct _XkbControlsNotify,send_event,4,9,31467)
CheckOffset(struct _XkbControlsNotify,send_event,16,9,31467)
CheckMemberSize(struct _XkbControlsNotify,display,8,9,31468)
CheckOffset(struct _XkbControlsNotify,display,24,9,31468)
CheckMemberSize(struct _XkbControlsNotify,time,8,9,31469)
CheckOffset(struct _XkbControlsNotify,time,32,9,31469)
CheckMemberSize(struct _XkbControlsNotify,xkb_type,4,9,31470)
CheckOffset(struct _XkbControlsNotify,xkb_type,40,9,31470)
CheckMemberSize(struct _XkbControlsNotify,device,4,9,31471)
CheckOffset(struct _XkbControlsNotify,device,44,9,31471)
CheckMemberSize(struct _XkbControlsNotify,changed_ctrls,4,9,31472)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,48,9,31472)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrls,4,9,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,52,9,31473)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrl_changes,4,9,31474)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,56,9,31474)
CheckMemberSize(struct _XkbControlsNotify,num_groups,4,9,31475)
CheckOffset(struct _XkbControlsNotify,num_groups,60,9,31475)
CheckMemberSize(struct _XkbControlsNotify,keycode,1,9,31476)
CheckOffset(struct _XkbControlsNotify,keycode,64,9,31476)
CheckMemberSize(struct _XkbControlsNotify,event_type,1,9,31477)
CheckOffset(struct _XkbControlsNotify,event_type,65,9,31477)
CheckMemberSize(struct _XkbControlsNotify,req_major,1,9,31478)
CheckOffset(struct _XkbControlsNotify,req_major,66,9,31478)
CheckMemberSize(struct _XkbControlsNotify,req_minor,1,9,31479)
CheckOffset(struct _XkbControlsNotify,req_minor,67,9,31479)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbControlsNotify,48, 9497, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbControlsNotify,serial,4,6,31466)
CheckOffset(struct _XkbControlsNotify,serial,4,6,31466)
CheckMemberSize(struct _XkbControlsNotify,send_event,4,6,31467)
CheckOffset(struct _XkbControlsNotify,send_event,8,6,31467)
CheckMemberSize(struct _XkbControlsNotify,display,4,6,31468)
CheckOffset(struct _XkbControlsNotify,display,12,6,31468)
CheckMemberSize(struct _XkbControlsNotify,time,4,6,31469)
CheckOffset(struct _XkbControlsNotify,time,16,6,31469)
CheckMemberSize(struct _XkbControlsNotify,xkb_type,4,6,31470)
CheckOffset(struct _XkbControlsNotify,xkb_type,20,6,31470)
CheckMemberSize(struct _XkbControlsNotify,device,4,6,31471)
CheckOffset(struct _XkbControlsNotify,device,24,6,31471)
CheckMemberSize(struct _XkbControlsNotify,changed_ctrls,4,6,31472)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,28,6,31472)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrls,4,6,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,32,6,31473)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrl_changes,4,6,31474)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,36,6,31474)
CheckMemberSize(struct _XkbControlsNotify,num_groups,4,6,31475)
CheckOffset(struct _XkbControlsNotify,num_groups,40,6,31475)
CheckMemberSize(struct _XkbControlsNotify,keycode,1,6,31476)
CheckOffset(struct _XkbControlsNotify,keycode,44,6,31476)
CheckMemberSize(struct _XkbControlsNotify,event_type,1,6,31477)
CheckOffset(struct _XkbControlsNotify,event_type,45,6,31477)
CheckMemberSize(struct _XkbControlsNotify,req_major,1,6,31478)
CheckOffset(struct _XkbControlsNotify,req_major,46,6,31478)
CheckMemberSize(struct _XkbControlsNotify,req_minor,1,6,31479)
CheckOffset(struct _XkbControlsNotify,req_minor,47,6,31479)
#elif defined __ia64__
CheckTypeSize(struct _XkbControlsNotify,72, 9497, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbControlsNotify,serial,8,3,31466)
CheckOffset(struct _XkbControlsNotify,serial,8,3,31466)
CheckMemberSize(struct _XkbControlsNotify,send_event,4,3,31467)
CheckOffset(struct _XkbControlsNotify,send_event,16,3,31467)
CheckMemberSize(struct _XkbControlsNotify,display,8,3,31468)
CheckOffset(struct _XkbControlsNotify,display,24,3,31468)
CheckMemberSize(struct _XkbControlsNotify,time,8,3,31469)
CheckOffset(struct _XkbControlsNotify,time,32,3,31469)
CheckMemberSize(struct _XkbControlsNotify,xkb_type,4,3,31470)
CheckOffset(struct _XkbControlsNotify,xkb_type,40,3,31470)
CheckMemberSize(struct _XkbControlsNotify,device,4,3,31471)
CheckOffset(struct _XkbControlsNotify,device,44,3,31471)
CheckMemberSize(struct _XkbControlsNotify,changed_ctrls,4,3,31472)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,48,3,31472)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrls,4,3,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,52,3,31473)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrl_changes,4,3,31474)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,56,3,31474)
CheckMemberSize(struct _XkbControlsNotify,num_groups,4,3,31475)
CheckOffset(struct _XkbControlsNotify,num_groups,60,3,31475)
CheckMemberSize(struct _XkbControlsNotify,keycode,1,3,31476)
CheckOffset(struct _XkbControlsNotify,keycode,64,3,31476)
CheckMemberSize(struct _XkbControlsNotify,event_type,1,3,31477)
CheckOffset(struct _XkbControlsNotify,event_type,65,3,31477)
CheckMemberSize(struct _XkbControlsNotify,req_major,1,3,31478)
CheckOffset(struct _XkbControlsNotify,req_major,66,3,31478)
CheckMemberSize(struct _XkbControlsNotify,req_minor,1,3,31479)
CheckOffset(struct _XkbControlsNotify,req_minor,67,3,31479)
#elif defined __i386__
CheckTypeSize(struct _XkbControlsNotify,48, 9497, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbControlsNotify,serial,4,2,31466)
CheckOffset(struct _XkbControlsNotify,serial,4,2,31466)
CheckMemberSize(struct _XkbControlsNotify,send_event,4,2,31467)
CheckOffset(struct _XkbControlsNotify,send_event,8,2,31467)
CheckMemberSize(struct _XkbControlsNotify,display,4,2,31468)
CheckOffset(struct _XkbControlsNotify,display,12,2,31468)
CheckMemberSize(struct _XkbControlsNotify,time,4,2,31469)
CheckOffset(struct _XkbControlsNotify,time,16,2,31469)
CheckMemberSize(struct _XkbControlsNotify,xkb_type,4,2,31470)
CheckOffset(struct _XkbControlsNotify,xkb_type,20,2,31470)
CheckMemberSize(struct _XkbControlsNotify,device,4,2,31471)
CheckOffset(struct _XkbControlsNotify,device,24,2,31471)
CheckMemberSize(struct _XkbControlsNotify,changed_ctrls,4,2,31472)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,28,2,31472)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrls,4,2,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,32,2,31473)
CheckMemberSize(struct _XkbControlsNotify,enabled_ctrl_changes,4,2,31474)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,36,2,31474)
CheckMemberSize(struct _XkbControlsNotify,num_groups,4,2,31475)
CheckOffset(struct _XkbControlsNotify,num_groups,40,2,31475)
CheckMemberSize(struct _XkbControlsNotify,keycode,1,2,31476)
CheckOffset(struct _XkbControlsNotify,keycode,44,2,31476)
CheckMemberSize(struct _XkbControlsNotify,event_type,1,2,31477)
CheckOffset(struct _XkbControlsNotify,event_type,45,2,31477)
CheckMemberSize(struct _XkbControlsNotify,req_major,1,2,31478)
CheckOffset(struct _XkbControlsNotify,req_major,46,2,31478)
CheckMemberSize(struct _XkbControlsNotify,req_minor,1,2,31479)
CheckOffset(struct _XkbControlsNotify,req_minor,47,2,31479)
#else
Msg("Find size of _XkbControlsNotify (9497)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9497,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbControlsNotifyEvent,72, 9498, 12, 1.3, NULL, 9497, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbControlsNotifyEvent,72, 9498, 11, 2.0, NULL, 9497, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbControlsNotifyEvent,48, 9498, 10, 1.3, NULL, 9497, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbControlsNotifyEvent,72, 9498, 9, 2.0, NULL, 9497, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbControlsNotifyEvent,48, 9498, 6, 1.2, NULL, 9497, NULL)
#elif defined __ia64__
CheckTypeSize(XkbControlsNotifyEvent,72, 9498, 3, 1.3, NULL, 9497, NULL)
#elif defined __i386__
CheckTypeSize(XkbControlsNotifyEvent,48, 9498, 2, 1.2, NULL, 9497, NULL)
#else
Msg("Find size of XkbControlsNotifyEvent (9498)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9497,NULL);\n",architecture,9498,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbIndicatorNotify,56, 9499, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorNotify,serial,8,12,31481)
CheckOffset(struct _XkbIndicatorNotify,serial,8,12,31481)
CheckMemberSize(struct _XkbIndicatorNotify,send_event,4,12,31482)
CheckOffset(struct _XkbIndicatorNotify,send_event,16,12,31482)
CheckMemberSize(struct _XkbIndicatorNotify,display,8,12,31483)
CheckOffset(struct _XkbIndicatorNotify,display,24,12,31483)
CheckMemberSize(struct _XkbIndicatorNotify,time,8,12,31484)
CheckOffset(struct _XkbIndicatorNotify,time,32,12,31484)
CheckMemberSize(struct _XkbIndicatorNotify,xkb_type,4,12,31485)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,40,12,31485)
CheckMemberSize(struct _XkbIndicatorNotify,device,4,12,31486)
CheckOffset(struct _XkbIndicatorNotify,device,44,12,31486)
CheckMemberSize(struct _XkbIndicatorNotify,changed,4,12,31487)
CheckOffset(struct _XkbIndicatorNotify,changed,48,12,31487)
CheckMemberSize(struct _XkbIndicatorNotify,state,4,12,31488)
CheckOffset(struct _XkbIndicatorNotify,state,52,12,31488)
#elif defined __x86_64__
CheckTypeSize(struct _XkbIndicatorNotify,56, 9499, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorNotify,serial,8,11,31481)
CheckOffset(struct _XkbIndicatorNotify,serial,8,11,31481)
CheckMemberSize(struct _XkbIndicatorNotify,send_event,4,11,31482)
CheckOffset(struct _XkbIndicatorNotify,send_event,16,11,31482)
CheckMemberSize(struct _XkbIndicatorNotify,display,8,11,31483)
CheckOffset(struct _XkbIndicatorNotify,display,24,11,31483)
CheckMemberSize(struct _XkbIndicatorNotify,time,8,11,31484)
CheckOffset(struct _XkbIndicatorNotify,time,32,11,31484)
CheckMemberSize(struct _XkbIndicatorNotify,xkb_type,4,11,31485)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,40,11,31485)
CheckMemberSize(struct _XkbIndicatorNotify,device,4,11,31486)
CheckOffset(struct _XkbIndicatorNotify,device,44,11,31486)
CheckMemberSize(struct _XkbIndicatorNotify,changed,4,11,31487)
CheckOffset(struct _XkbIndicatorNotify,changed,48,11,31487)
CheckMemberSize(struct _XkbIndicatorNotify,state,4,11,31488)
CheckOffset(struct _XkbIndicatorNotify,state,52,11,31488)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbIndicatorNotify,36, 9499, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorNotify,serial,4,10,31481)
CheckOffset(struct _XkbIndicatorNotify,serial,4,10,31481)
CheckMemberSize(struct _XkbIndicatorNotify,send_event,4,10,31482)
CheckOffset(struct _XkbIndicatorNotify,send_event,8,10,31482)
CheckMemberSize(struct _XkbIndicatorNotify,display,4,10,31483)
CheckOffset(struct _XkbIndicatorNotify,display,12,10,31483)
CheckMemberSize(struct _XkbIndicatorNotify,time,4,10,31484)
CheckOffset(struct _XkbIndicatorNotify,time,16,10,31484)
CheckMemberSize(struct _XkbIndicatorNotify,xkb_type,4,10,31485)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,20,10,31485)
CheckMemberSize(struct _XkbIndicatorNotify,device,4,10,31486)
CheckOffset(struct _XkbIndicatorNotify,device,24,10,31486)
CheckMemberSize(struct _XkbIndicatorNotify,changed,4,10,31487)
CheckOffset(struct _XkbIndicatorNotify,changed,28,10,31487)
CheckMemberSize(struct _XkbIndicatorNotify,state,4,10,31488)
CheckOffset(struct _XkbIndicatorNotify,state,32,10,31488)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbIndicatorNotify,56, 9499, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorNotify,serial,8,9,31481)
CheckOffset(struct _XkbIndicatorNotify,serial,8,9,31481)
CheckMemberSize(struct _XkbIndicatorNotify,send_event,4,9,31482)
CheckOffset(struct _XkbIndicatorNotify,send_event,16,9,31482)
CheckMemberSize(struct _XkbIndicatorNotify,display,8,9,31483)
CheckOffset(struct _XkbIndicatorNotify,display,24,9,31483)
CheckMemberSize(struct _XkbIndicatorNotify,time,8,9,31484)
CheckOffset(struct _XkbIndicatorNotify,time,32,9,31484)
CheckMemberSize(struct _XkbIndicatorNotify,xkb_type,4,9,31485)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,40,9,31485)
CheckMemberSize(struct _XkbIndicatorNotify,device,4,9,31486)
CheckOffset(struct _XkbIndicatorNotify,device,44,9,31486)
CheckMemberSize(struct _XkbIndicatorNotify,changed,4,9,31487)
CheckOffset(struct _XkbIndicatorNotify,changed,48,9,31487)
CheckMemberSize(struct _XkbIndicatorNotify,state,4,9,31488)
CheckOffset(struct _XkbIndicatorNotify,state,52,9,31488)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbIndicatorNotify,36, 9499, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorNotify,serial,4,6,31481)
CheckOffset(struct _XkbIndicatorNotify,serial,4,6,31481)
CheckMemberSize(struct _XkbIndicatorNotify,send_event,4,6,31482)
CheckOffset(struct _XkbIndicatorNotify,send_event,8,6,31482)
CheckMemberSize(struct _XkbIndicatorNotify,display,4,6,31483)
CheckOffset(struct _XkbIndicatorNotify,display,12,6,31483)
CheckMemberSize(struct _XkbIndicatorNotify,time,4,6,31484)
CheckOffset(struct _XkbIndicatorNotify,time,16,6,31484)
CheckMemberSize(struct _XkbIndicatorNotify,xkb_type,4,6,31485)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,20,6,31485)
CheckMemberSize(struct _XkbIndicatorNotify,device,4,6,31486)
CheckOffset(struct _XkbIndicatorNotify,device,24,6,31486)
CheckMemberSize(struct _XkbIndicatorNotify,changed,4,6,31487)
CheckOffset(struct _XkbIndicatorNotify,changed,28,6,31487)
CheckMemberSize(struct _XkbIndicatorNotify,state,4,6,31488)
CheckOffset(struct _XkbIndicatorNotify,state,32,6,31488)
#elif defined __ia64__
CheckTypeSize(struct _XkbIndicatorNotify,56, 9499, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorNotify,serial,8,3,31481)
CheckOffset(struct _XkbIndicatorNotify,serial,8,3,31481)
CheckMemberSize(struct _XkbIndicatorNotify,send_event,4,3,31482)
CheckOffset(struct _XkbIndicatorNotify,send_event,16,3,31482)
CheckMemberSize(struct _XkbIndicatorNotify,display,8,3,31483)
CheckOffset(struct _XkbIndicatorNotify,display,24,3,31483)
CheckMemberSize(struct _XkbIndicatorNotify,time,8,3,31484)
CheckOffset(struct _XkbIndicatorNotify,time,32,3,31484)
CheckMemberSize(struct _XkbIndicatorNotify,xkb_type,4,3,31485)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,40,3,31485)
CheckMemberSize(struct _XkbIndicatorNotify,device,4,3,31486)
CheckOffset(struct _XkbIndicatorNotify,device,44,3,31486)
CheckMemberSize(struct _XkbIndicatorNotify,changed,4,3,31487)
CheckOffset(struct _XkbIndicatorNotify,changed,48,3,31487)
CheckMemberSize(struct _XkbIndicatorNotify,state,4,3,31488)
CheckOffset(struct _XkbIndicatorNotify,state,52,3,31488)
#elif defined __i386__
CheckTypeSize(struct _XkbIndicatorNotify,36, 9499, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbIndicatorNotify,serial,4,2,31481)
CheckOffset(struct _XkbIndicatorNotify,serial,4,2,31481)
CheckMemberSize(struct _XkbIndicatorNotify,send_event,4,2,31482)
CheckOffset(struct _XkbIndicatorNotify,send_event,8,2,31482)
CheckMemberSize(struct _XkbIndicatorNotify,display,4,2,31483)
CheckOffset(struct _XkbIndicatorNotify,display,12,2,31483)
CheckMemberSize(struct _XkbIndicatorNotify,time,4,2,31484)
CheckOffset(struct _XkbIndicatorNotify,time,16,2,31484)
CheckMemberSize(struct _XkbIndicatorNotify,xkb_type,4,2,31485)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,20,2,31485)
CheckMemberSize(struct _XkbIndicatorNotify,device,4,2,31486)
CheckOffset(struct _XkbIndicatorNotify,device,24,2,31486)
CheckMemberSize(struct _XkbIndicatorNotify,changed,4,2,31487)
CheckOffset(struct _XkbIndicatorNotify,changed,28,2,31487)
CheckMemberSize(struct _XkbIndicatorNotify,state,4,2,31488)
CheckOffset(struct _XkbIndicatorNotify,state,32,2,31488)
#else
Msg("Find size of _XkbIndicatorNotify (9499)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9499,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbIndicatorNotifyEvent,56, 9500, 12, 1.3, NULL, 9499, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbIndicatorNotifyEvent,56, 9500, 11, 2.0, NULL, 9499, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbIndicatorNotifyEvent,36, 9500, 10, 1.3, NULL, 9499, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbIndicatorNotifyEvent,56, 9500, 9, 2.0, NULL, 9499, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbIndicatorNotifyEvent,36, 9500, 6, 1.2, NULL, 9499, NULL)
#elif defined __ia64__
CheckTypeSize(XkbIndicatorNotifyEvent,56, 9500, 3, 1.3, NULL, 9499, NULL)
#elif defined __i386__
CheckTypeSize(XkbIndicatorNotifyEvent,36, 9500, 2, 1.2, NULL, 9499, NULL)
#else
Msg("Find size of XkbIndicatorNotifyEvent (9500)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9499,NULL);\n",architecture,9500,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbNamesNotify,96, 9501, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbNamesNotify,serial,8,12,31490)
CheckOffset(struct _XkbNamesNotify,serial,8,12,31490)
CheckMemberSize(struct _XkbNamesNotify,send_event,4,12,31491)
CheckOffset(struct _XkbNamesNotify,send_event,16,12,31491)
CheckMemberSize(struct _XkbNamesNotify,display,8,12,31492)
CheckOffset(struct _XkbNamesNotify,display,24,12,31492)
CheckMemberSize(struct _XkbNamesNotify,time,8,12,31493)
CheckOffset(struct _XkbNamesNotify,time,32,12,31493)
CheckMemberSize(struct _XkbNamesNotify,xkb_type,4,12,31494)
CheckOffset(struct _XkbNamesNotify,xkb_type,40,12,31494)
CheckMemberSize(struct _XkbNamesNotify,device,4,12,31495)
CheckOffset(struct _XkbNamesNotify,device,44,12,31495)
CheckMemberSize(struct _XkbNamesNotify,changed,4,12,31496)
CheckOffset(struct _XkbNamesNotify,changed,48,12,31496)
CheckMemberSize(struct _XkbNamesNotify,first_type,4,12,31497)
CheckOffset(struct _XkbNamesNotify,first_type,52,12,31497)
CheckMemberSize(struct _XkbNamesNotify,num_types,4,12,31498)
CheckOffset(struct _XkbNamesNotify,num_types,56,12,31498)
CheckMemberSize(struct _XkbNamesNotify,first_lvl,4,12,31499)
CheckOffset(struct _XkbNamesNotify,first_lvl,60,12,31499)
CheckMemberSize(struct _XkbNamesNotify,num_lvls,4,12,31500)
CheckOffset(struct _XkbNamesNotify,num_lvls,64,12,31500)
CheckMemberSize(struct _XkbNamesNotify,num_aliases,4,12,31501)
CheckOffset(struct _XkbNamesNotify,num_aliases,68,12,31501)
CheckMemberSize(struct _XkbNamesNotify,num_radio_groups,4,12,31502)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,72,12,31502)
CheckMemberSize(struct _XkbNamesNotify,changed_vmods,4,12,31503)
CheckOffset(struct _XkbNamesNotify,changed_vmods,76,12,31503)
CheckMemberSize(struct _XkbNamesNotify,changed_groups,4,12,31504)
CheckOffset(struct _XkbNamesNotify,changed_groups,80,12,31504)
CheckMemberSize(struct _XkbNamesNotify,changed_indicators,4,12,31505)
CheckOffset(struct _XkbNamesNotify,changed_indicators,84,12,31505)
CheckMemberSize(struct _XkbNamesNotify,first_key,4,12,31506)
CheckOffset(struct _XkbNamesNotify,first_key,88,12,31506)
CheckMemberSize(struct _XkbNamesNotify,num_keys,4,12,31507)
CheckOffset(struct _XkbNamesNotify,num_keys,92,12,31507)
#elif defined __x86_64__
CheckTypeSize(struct _XkbNamesNotify,96, 9501, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbNamesNotify,serial,8,11,31490)
CheckOffset(struct _XkbNamesNotify,serial,8,11,31490)
CheckMemberSize(struct _XkbNamesNotify,send_event,4,11,31491)
CheckOffset(struct _XkbNamesNotify,send_event,16,11,31491)
CheckMemberSize(struct _XkbNamesNotify,display,8,11,31492)
CheckOffset(struct _XkbNamesNotify,display,24,11,31492)
CheckMemberSize(struct _XkbNamesNotify,time,8,11,31493)
CheckOffset(struct _XkbNamesNotify,time,32,11,31493)
CheckMemberSize(struct _XkbNamesNotify,xkb_type,4,11,31494)
CheckOffset(struct _XkbNamesNotify,xkb_type,40,11,31494)
CheckMemberSize(struct _XkbNamesNotify,device,4,11,31495)
CheckOffset(struct _XkbNamesNotify,device,44,11,31495)
CheckMemberSize(struct _XkbNamesNotify,changed,4,11,31496)
CheckOffset(struct _XkbNamesNotify,changed,48,11,31496)
CheckMemberSize(struct _XkbNamesNotify,first_type,4,11,31497)
CheckOffset(struct _XkbNamesNotify,first_type,52,11,31497)
CheckMemberSize(struct _XkbNamesNotify,num_types,4,11,31498)
CheckOffset(struct _XkbNamesNotify,num_types,56,11,31498)
CheckMemberSize(struct _XkbNamesNotify,first_lvl,4,11,31499)
CheckOffset(struct _XkbNamesNotify,first_lvl,60,11,31499)
CheckMemberSize(struct _XkbNamesNotify,num_lvls,4,11,31500)
CheckOffset(struct _XkbNamesNotify,num_lvls,64,11,31500)
CheckMemberSize(struct _XkbNamesNotify,num_aliases,4,11,31501)
CheckOffset(struct _XkbNamesNotify,num_aliases,68,11,31501)
CheckMemberSize(struct _XkbNamesNotify,num_radio_groups,4,11,31502)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,72,11,31502)
CheckMemberSize(struct _XkbNamesNotify,changed_vmods,4,11,31503)
CheckOffset(struct _XkbNamesNotify,changed_vmods,76,11,31503)
CheckMemberSize(struct _XkbNamesNotify,changed_groups,4,11,31504)
CheckOffset(struct _XkbNamesNotify,changed_groups,80,11,31504)
CheckMemberSize(struct _XkbNamesNotify,changed_indicators,4,11,31505)
CheckOffset(struct _XkbNamesNotify,changed_indicators,84,11,31505)
CheckMemberSize(struct _XkbNamesNotify,first_key,4,11,31506)
CheckOffset(struct _XkbNamesNotify,first_key,88,11,31506)
CheckMemberSize(struct _XkbNamesNotify,num_keys,4,11,31507)
CheckOffset(struct _XkbNamesNotify,num_keys,92,11,31507)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbNamesNotify,76, 9501, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbNamesNotify,serial,4,10,31490)
CheckOffset(struct _XkbNamesNotify,serial,4,10,31490)
CheckMemberSize(struct _XkbNamesNotify,send_event,4,10,31491)
CheckOffset(struct _XkbNamesNotify,send_event,8,10,31491)
CheckMemberSize(struct _XkbNamesNotify,display,4,10,31492)
CheckOffset(struct _XkbNamesNotify,display,12,10,31492)
CheckMemberSize(struct _XkbNamesNotify,time,4,10,31493)
CheckOffset(struct _XkbNamesNotify,time,16,10,31493)
CheckMemberSize(struct _XkbNamesNotify,xkb_type,4,10,31494)
CheckOffset(struct _XkbNamesNotify,xkb_type,20,10,31494)
CheckMemberSize(struct _XkbNamesNotify,device,4,10,31495)
CheckOffset(struct _XkbNamesNotify,device,24,10,31495)
CheckMemberSize(struct _XkbNamesNotify,changed,4,10,31496)
CheckOffset(struct _XkbNamesNotify,changed,28,10,31496)
CheckMemberSize(struct _XkbNamesNotify,first_type,4,10,31497)
CheckOffset(struct _XkbNamesNotify,first_type,32,10,31497)
CheckMemberSize(struct _XkbNamesNotify,num_types,4,10,31498)
CheckOffset(struct _XkbNamesNotify,num_types,36,10,31498)
CheckMemberSize(struct _XkbNamesNotify,first_lvl,4,10,31499)
CheckOffset(struct _XkbNamesNotify,first_lvl,40,10,31499)
CheckMemberSize(struct _XkbNamesNotify,num_lvls,4,10,31500)
CheckOffset(struct _XkbNamesNotify,num_lvls,44,10,31500)
CheckMemberSize(struct _XkbNamesNotify,num_aliases,4,10,31501)
CheckOffset(struct _XkbNamesNotify,num_aliases,48,10,31501)
CheckMemberSize(struct _XkbNamesNotify,num_radio_groups,4,10,31502)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,52,10,31502)
CheckMemberSize(struct _XkbNamesNotify,changed_vmods,4,10,31503)
CheckOffset(struct _XkbNamesNotify,changed_vmods,56,10,31503)
CheckMemberSize(struct _XkbNamesNotify,changed_groups,4,10,31504)
CheckOffset(struct _XkbNamesNotify,changed_groups,60,10,31504)
CheckMemberSize(struct _XkbNamesNotify,changed_indicators,4,10,31505)
CheckOffset(struct _XkbNamesNotify,changed_indicators,64,10,31505)
CheckMemberSize(struct _XkbNamesNotify,first_key,4,10,31506)
CheckOffset(struct _XkbNamesNotify,first_key,68,10,31506)
CheckMemberSize(struct _XkbNamesNotify,num_keys,4,10,31507)
CheckOffset(struct _XkbNamesNotify,num_keys,72,10,31507)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbNamesNotify,96, 9501, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbNamesNotify,serial,8,9,31490)
CheckOffset(struct _XkbNamesNotify,serial,8,9,31490)
CheckMemberSize(struct _XkbNamesNotify,send_event,4,9,31491)
CheckOffset(struct _XkbNamesNotify,send_event,16,9,31491)
CheckMemberSize(struct _XkbNamesNotify,display,8,9,31492)
CheckOffset(struct _XkbNamesNotify,display,24,9,31492)
CheckMemberSize(struct _XkbNamesNotify,time,8,9,31493)
CheckOffset(struct _XkbNamesNotify,time,32,9,31493)
CheckMemberSize(struct _XkbNamesNotify,xkb_type,4,9,31494)
CheckOffset(struct _XkbNamesNotify,xkb_type,40,9,31494)
CheckMemberSize(struct _XkbNamesNotify,device,4,9,31495)
CheckOffset(struct _XkbNamesNotify,device,44,9,31495)
CheckMemberSize(struct _XkbNamesNotify,changed,4,9,31496)
CheckOffset(struct _XkbNamesNotify,changed,48,9,31496)
CheckMemberSize(struct _XkbNamesNotify,first_type,4,9,31497)
CheckOffset(struct _XkbNamesNotify,first_type,52,9,31497)
CheckMemberSize(struct _XkbNamesNotify,num_types,4,9,31498)
CheckOffset(struct _XkbNamesNotify,num_types,56,9,31498)
CheckMemberSize(struct _XkbNamesNotify,first_lvl,4,9,31499)
CheckOffset(struct _XkbNamesNotify,first_lvl,60,9,31499)
CheckMemberSize(struct _XkbNamesNotify,num_lvls,4,9,31500)
CheckOffset(struct _XkbNamesNotify,num_lvls,64,9,31500)
CheckMemberSize(struct _XkbNamesNotify,num_aliases,4,9,31501)
CheckOffset(struct _XkbNamesNotify,num_aliases,68,9,31501)
CheckMemberSize(struct _XkbNamesNotify,num_radio_groups,4,9,31502)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,72,9,31502)
CheckMemberSize(struct _XkbNamesNotify,changed_vmods,4,9,31503)
CheckOffset(struct _XkbNamesNotify,changed_vmods,76,9,31503)
CheckMemberSize(struct _XkbNamesNotify,changed_groups,4,9,31504)
CheckOffset(struct _XkbNamesNotify,changed_groups,80,9,31504)
CheckMemberSize(struct _XkbNamesNotify,changed_indicators,4,9,31505)
CheckOffset(struct _XkbNamesNotify,changed_indicators,84,9,31505)
CheckMemberSize(struct _XkbNamesNotify,first_key,4,9,31506)
CheckOffset(struct _XkbNamesNotify,first_key,88,9,31506)
CheckMemberSize(struct _XkbNamesNotify,num_keys,4,9,31507)
CheckOffset(struct _XkbNamesNotify,num_keys,92,9,31507)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbNamesNotify,76, 9501, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbNamesNotify,serial,4,6,31490)
CheckOffset(struct _XkbNamesNotify,serial,4,6,31490)
CheckMemberSize(struct _XkbNamesNotify,send_event,4,6,31491)
CheckOffset(struct _XkbNamesNotify,send_event,8,6,31491)
CheckMemberSize(struct _XkbNamesNotify,display,4,6,31492)
CheckOffset(struct _XkbNamesNotify,display,12,6,31492)
CheckMemberSize(struct _XkbNamesNotify,time,4,6,31493)
CheckOffset(struct _XkbNamesNotify,time,16,6,31493)
CheckMemberSize(struct _XkbNamesNotify,xkb_type,4,6,31494)
CheckOffset(struct _XkbNamesNotify,xkb_type,20,6,31494)
CheckMemberSize(struct _XkbNamesNotify,device,4,6,31495)
CheckOffset(struct _XkbNamesNotify,device,24,6,31495)
CheckMemberSize(struct _XkbNamesNotify,changed,4,6,31496)
CheckOffset(struct _XkbNamesNotify,changed,28,6,31496)
CheckMemberSize(struct _XkbNamesNotify,first_type,4,6,31497)
CheckOffset(struct _XkbNamesNotify,first_type,32,6,31497)
CheckMemberSize(struct _XkbNamesNotify,num_types,4,6,31498)
CheckOffset(struct _XkbNamesNotify,num_types,36,6,31498)
CheckMemberSize(struct _XkbNamesNotify,first_lvl,4,6,31499)
CheckOffset(struct _XkbNamesNotify,first_lvl,40,6,31499)
CheckMemberSize(struct _XkbNamesNotify,num_lvls,4,6,31500)
CheckOffset(struct _XkbNamesNotify,num_lvls,44,6,31500)
CheckMemberSize(struct _XkbNamesNotify,num_aliases,4,6,31501)
CheckOffset(struct _XkbNamesNotify,num_aliases,48,6,31501)
CheckMemberSize(struct _XkbNamesNotify,num_radio_groups,4,6,31502)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,52,6,31502)
CheckMemberSize(struct _XkbNamesNotify,changed_vmods,4,6,31503)
CheckOffset(struct _XkbNamesNotify,changed_vmods,56,6,31503)
CheckMemberSize(struct _XkbNamesNotify,changed_groups,4,6,31504)
CheckOffset(struct _XkbNamesNotify,changed_groups,60,6,31504)
CheckMemberSize(struct _XkbNamesNotify,changed_indicators,4,6,31505)
CheckOffset(struct _XkbNamesNotify,changed_indicators,64,6,31505)
CheckMemberSize(struct _XkbNamesNotify,first_key,4,6,31506)
CheckOffset(struct _XkbNamesNotify,first_key,68,6,31506)
CheckMemberSize(struct _XkbNamesNotify,num_keys,4,6,31507)
CheckOffset(struct _XkbNamesNotify,num_keys,72,6,31507)
#elif defined __ia64__
CheckTypeSize(struct _XkbNamesNotify,96, 9501, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbNamesNotify,serial,8,3,31490)
CheckOffset(struct _XkbNamesNotify,serial,8,3,31490)
CheckMemberSize(struct _XkbNamesNotify,send_event,4,3,31491)
CheckOffset(struct _XkbNamesNotify,send_event,16,3,31491)
CheckMemberSize(struct _XkbNamesNotify,display,8,3,31492)
CheckOffset(struct _XkbNamesNotify,display,24,3,31492)
CheckMemberSize(struct _XkbNamesNotify,time,8,3,31493)
CheckOffset(struct _XkbNamesNotify,time,32,3,31493)
CheckMemberSize(struct _XkbNamesNotify,xkb_type,4,3,31494)
CheckOffset(struct _XkbNamesNotify,xkb_type,40,3,31494)
CheckMemberSize(struct _XkbNamesNotify,device,4,3,31495)
CheckOffset(struct _XkbNamesNotify,device,44,3,31495)
CheckMemberSize(struct _XkbNamesNotify,changed,4,3,31496)
CheckOffset(struct _XkbNamesNotify,changed,48,3,31496)
CheckMemberSize(struct _XkbNamesNotify,first_type,4,3,31497)
CheckOffset(struct _XkbNamesNotify,first_type,52,3,31497)
CheckMemberSize(struct _XkbNamesNotify,num_types,4,3,31498)
CheckOffset(struct _XkbNamesNotify,num_types,56,3,31498)
CheckMemberSize(struct _XkbNamesNotify,first_lvl,4,3,31499)
CheckOffset(struct _XkbNamesNotify,first_lvl,60,3,31499)
CheckMemberSize(struct _XkbNamesNotify,num_lvls,4,3,31500)
CheckOffset(struct _XkbNamesNotify,num_lvls,64,3,31500)
CheckMemberSize(struct _XkbNamesNotify,num_aliases,4,3,31501)
CheckOffset(struct _XkbNamesNotify,num_aliases,68,3,31501)
CheckMemberSize(struct _XkbNamesNotify,num_radio_groups,4,3,31502)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,72,3,31502)
CheckMemberSize(struct _XkbNamesNotify,changed_vmods,4,3,31503)
CheckOffset(struct _XkbNamesNotify,changed_vmods,76,3,31503)
CheckMemberSize(struct _XkbNamesNotify,changed_groups,4,3,31504)
CheckOffset(struct _XkbNamesNotify,changed_groups,80,3,31504)
CheckMemberSize(struct _XkbNamesNotify,changed_indicators,4,3,31505)
CheckOffset(struct _XkbNamesNotify,changed_indicators,84,3,31505)
CheckMemberSize(struct _XkbNamesNotify,first_key,4,3,31506)
CheckOffset(struct _XkbNamesNotify,first_key,88,3,31506)
CheckMemberSize(struct _XkbNamesNotify,num_keys,4,3,31507)
CheckOffset(struct _XkbNamesNotify,num_keys,92,3,31507)
#elif defined __i386__
CheckTypeSize(struct _XkbNamesNotify,76, 9501, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbNamesNotify,serial,4,2,31490)
CheckOffset(struct _XkbNamesNotify,serial,4,2,31490)
CheckMemberSize(struct _XkbNamesNotify,send_event,4,2,31491)
CheckOffset(struct _XkbNamesNotify,send_event,8,2,31491)
CheckMemberSize(struct _XkbNamesNotify,display,4,2,31492)
CheckOffset(struct _XkbNamesNotify,display,12,2,31492)
CheckMemberSize(struct _XkbNamesNotify,time,4,2,31493)
CheckOffset(struct _XkbNamesNotify,time,16,2,31493)
CheckMemberSize(struct _XkbNamesNotify,xkb_type,4,2,31494)
CheckOffset(struct _XkbNamesNotify,xkb_type,20,2,31494)
CheckMemberSize(struct _XkbNamesNotify,device,4,2,31495)
CheckOffset(struct _XkbNamesNotify,device,24,2,31495)
CheckMemberSize(struct _XkbNamesNotify,changed,4,2,31496)
CheckOffset(struct _XkbNamesNotify,changed,28,2,31496)
CheckMemberSize(struct _XkbNamesNotify,first_type,4,2,31497)
CheckOffset(struct _XkbNamesNotify,first_type,32,2,31497)
CheckMemberSize(struct _XkbNamesNotify,num_types,4,2,31498)
CheckOffset(struct _XkbNamesNotify,num_types,36,2,31498)
CheckMemberSize(struct _XkbNamesNotify,first_lvl,4,2,31499)
CheckOffset(struct _XkbNamesNotify,first_lvl,40,2,31499)
CheckMemberSize(struct _XkbNamesNotify,num_lvls,4,2,31500)
CheckOffset(struct _XkbNamesNotify,num_lvls,44,2,31500)
CheckMemberSize(struct _XkbNamesNotify,num_aliases,4,2,31501)
CheckOffset(struct _XkbNamesNotify,num_aliases,48,2,31501)
CheckMemberSize(struct _XkbNamesNotify,num_radio_groups,4,2,31502)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,52,2,31502)
CheckMemberSize(struct _XkbNamesNotify,changed_vmods,4,2,31503)
CheckOffset(struct _XkbNamesNotify,changed_vmods,56,2,31503)
CheckMemberSize(struct _XkbNamesNotify,changed_groups,4,2,31504)
CheckOffset(struct _XkbNamesNotify,changed_groups,60,2,31504)
CheckMemberSize(struct _XkbNamesNotify,changed_indicators,4,2,31505)
CheckOffset(struct _XkbNamesNotify,changed_indicators,64,2,31505)
CheckMemberSize(struct _XkbNamesNotify,first_key,4,2,31506)
CheckOffset(struct _XkbNamesNotify,first_key,68,2,31506)
CheckMemberSize(struct _XkbNamesNotify,num_keys,4,2,31507)
CheckOffset(struct _XkbNamesNotify,num_keys,72,2,31507)
#else
Msg("Find size of _XkbNamesNotify (9501)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9501,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbNamesNotifyEvent,96, 9502, 12, 1.3, NULL, 9501, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbNamesNotifyEvent,96, 9502, 11, 2.0, NULL, 9501, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbNamesNotifyEvent,76, 9502, 10, 1.3, NULL, 9501, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbNamesNotifyEvent,96, 9502, 9, 2.0, NULL, 9501, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbNamesNotifyEvent,76, 9502, 6, 1.2, NULL, 9501, NULL)
#elif defined __ia64__
CheckTypeSize(XkbNamesNotifyEvent,96, 9502, 3, 1.3, NULL, 9501, NULL)
#elif defined __i386__
CheckTypeSize(XkbNamesNotifyEvent,76, 9502, 2, 1.2, NULL, 9501, NULL)
#else
Msg("Find size of XkbNamesNotifyEvent (9502)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9501,NULL);\n",architecture,9502,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbCompatMapNotify,64, 9503, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbCompatMapNotify,serial,8,12,31509)
CheckOffset(struct _XkbCompatMapNotify,serial,8,12,31509)
CheckMemberSize(struct _XkbCompatMapNotify,send_event,4,12,31510)
CheckOffset(struct _XkbCompatMapNotify,send_event,16,12,31510)
CheckMemberSize(struct _XkbCompatMapNotify,display,8,12,31511)
CheckOffset(struct _XkbCompatMapNotify,display,24,12,31511)
CheckMemberSize(struct _XkbCompatMapNotify,time,8,12,31512)
CheckOffset(struct _XkbCompatMapNotify,time,32,12,31512)
CheckMemberSize(struct _XkbCompatMapNotify,xkb_type,4,12,31513)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,40,12,31513)
CheckMemberSize(struct _XkbCompatMapNotify,device,4,12,31514)
CheckOffset(struct _XkbCompatMapNotify,device,44,12,31514)
CheckMemberSize(struct _XkbCompatMapNotify,changed_groups,4,12,31515)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,48,12,31515)
CheckMemberSize(struct _XkbCompatMapNotify,first_si,4,12,31516)
CheckOffset(struct _XkbCompatMapNotify,first_si,52,12,31516)
CheckMemberSize(struct _XkbCompatMapNotify,num_si,4,12,31517)
CheckOffset(struct _XkbCompatMapNotify,num_si,56,12,31517)
CheckMemberSize(struct _XkbCompatMapNotify,num_total_si,4,12,31518)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,60,12,31518)
#elif defined __x86_64__
CheckTypeSize(struct _XkbCompatMapNotify,64, 9503, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbCompatMapNotify,serial,8,11,31509)
CheckOffset(struct _XkbCompatMapNotify,serial,8,11,31509)
CheckMemberSize(struct _XkbCompatMapNotify,send_event,4,11,31510)
CheckOffset(struct _XkbCompatMapNotify,send_event,16,11,31510)
CheckMemberSize(struct _XkbCompatMapNotify,display,8,11,31511)
CheckOffset(struct _XkbCompatMapNotify,display,24,11,31511)
CheckMemberSize(struct _XkbCompatMapNotify,time,8,11,31512)
CheckOffset(struct _XkbCompatMapNotify,time,32,11,31512)
CheckMemberSize(struct _XkbCompatMapNotify,xkb_type,4,11,31513)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,40,11,31513)
CheckMemberSize(struct _XkbCompatMapNotify,device,4,11,31514)
CheckOffset(struct _XkbCompatMapNotify,device,44,11,31514)
CheckMemberSize(struct _XkbCompatMapNotify,changed_groups,4,11,31515)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,48,11,31515)
CheckMemberSize(struct _XkbCompatMapNotify,first_si,4,11,31516)
CheckOffset(struct _XkbCompatMapNotify,first_si,52,11,31516)
CheckMemberSize(struct _XkbCompatMapNotify,num_si,4,11,31517)
CheckOffset(struct _XkbCompatMapNotify,num_si,56,11,31517)
CheckMemberSize(struct _XkbCompatMapNotify,num_total_si,4,11,31518)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,60,11,31518)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbCompatMapNotify,44, 9503, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbCompatMapNotify,serial,4,10,31509)
CheckOffset(struct _XkbCompatMapNotify,serial,4,10,31509)
CheckMemberSize(struct _XkbCompatMapNotify,send_event,4,10,31510)
CheckOffset(struct _XkbCompatMapNotify,send_event,8,10,31510)
CheckMemberSize(struct _XkbCompatMapNotify,display,4,10,31511)
CheckOffset(struct _XkbCompatMapNotify,display,12,10,31511)
CheckMemberSize(struct _XkbCompatMapNotify,time,4,10,31512)
CheckOffset(struct _XkbCompatMapNotify,time,16,10,31512)
CheckMemberSize(struct _XkbCompatMapNotify,xkb_type,4,10,31513)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,20,10,31513)
CheckMemberSize(struct _XkbCompatMapNotify,device,4,10,31514)
CheckOffset(struct _XkbCompatMapNotify,device,24,10,31514)
CheckMemberSize(struct _XkbCompatMapNotify,changed_groups,4,10,31515)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,28,10,31515)
CheckMemberSize(struct _XkbCompatMapNotify,first_si,4,10,31516)
CheckOffset(struct _XkbCompatMapNotify,first_si,32,10,31516)
CheckMemberSize(struct _XkbCompatMapNotify,num_si,4,10,31517)
CheckOffset(struct _XkbCompatMapNotify,num_si,36,10,31517)
CheckMemberSize(struct _XkbCompatMapNotify,num_total_si,4,10,31518)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,40,10,31518)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbCompatMapNotify,64, 9503, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbCompatMapNotify,serial,8,9,31509)
CheckOffset(struct _XkbCompatMapNotify,serial,8,9,31509)
CheckMemberSize(struct _XkbCompatMapNotify,send_event,4,9,31510)
CheckOffset(struct _XkbCompatMapNotify,send_event,16,9,31510)
CheckMemberSize(struct _XkbCompatMapNotify,display,8,9,31511)
CheckOffset(struct _XkbCompatMapNotify,display,24,9,31511)
CheckMemberSize(struct _XkbCompatMapNotify,time,8,9,31512)
CheckOffset(struct _XkbCompatMapNotify,time,32,9,31512)
CheckMemberSize(struct _XkbCompatMapNotify,xkb_type,4,9,31513)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,40,9,31513)
CheckMemberSize(struct _XkbCompatMapNotify,device,4,9,31514)
CheckOffset(struct _XkbCompatMapNotify,device,44,9,31514)
CheckMemberSize(struct _XkbCompatMapNotify,changed_groups,4,9,31515)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,48,9,31515)
CheckMemberSize(struct _XkbCompatMapNotify,first_si,4,9,31516)
CheckOffset(struct _XkbCompatMapNotify,first_si,52,9,31516)
CheckMemberSize(struct _XkbCompatMapNotify,num_si,4,9,31517)
CheckOffset(struct _XkbCompatMapNotify,num_si,56,9,31517)
CheckMemberSize(struct _XkbCompatMapNotify,num_total_si,4,9,31518)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,60,9,31518)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbCompatMapNotify,44, 9503, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbCompatMapNotify,serial,4,6,31509)
CheckOffset(struct _XkbCompatMapNotify,serial,4,6,31509)
CheckMemberSize(struct _XkbCompatMapNotify,send_event,4,6,31510)
CheckOffset(struct _XkbCompatMapNotify,send_event,8,6,31510)
CheckMemberSize(struct _XkbCompatMapNotify,display,4,6,31511)
CheckOffset(struct _XkbCompatMapNotify,display,12,6,31511)
CheckMemberSize(struct _XkbCompatMapNotify,time,4,6,31512)
CheckOffset(struct _XkbCompatMapNotify,time,16,6,31512)
CheckMemberSize(struct _XkbCompatMapNotify,xkb_type,4,6,31513)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,20,6,31513)
CheckMemberSize(struct _XkbCompatMapNotify,device,4,6,31514)
CheckOffset(struct _XkbCompatMapNotify,device,24,6,31514)
CheckMemberSize(struct _XkbCompatMapNotify,changed_groups,4,6,31515)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,28,6,31515)
CheckMemberSize(struct _XkbCompatMapNotify,first_si,4,6,31516)
CheckOffset(struct _XkbCompatMapNotify,first_si,32,6,31516)
CheckMemberSize(struct _XkbCompatMapNotify,num_si,4,6,31517)
CheckOffset(struct _XkbCompatMapNotify,num_si,36,6,31517)
CheckMemberSize(struct _XkbCompatMapNotify,num_total_si,4,6,31518)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,40,6,31518)
#elif defined __ia64__
CheckTypeSize(struct _XkbCompatMapNotify,64, 9503, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbCompatMapNotify,serial,8,3,31509)
CheckOffset(struct _XkbCompatMapNotify,serial,8,3,31509)
CheckMemberSize(struct _XkbCompatMapNotify,send_event,4,3,31510)
CheckOffset(struct _XkbCompatMapNotify,send_event,16,3,31510)
CheckMemberSize(struct _XkbCompatMapNotify,display,8,3,31511)
CheckOffset(struct _XkbCompatMapNotify,display,24,3,31511)
CheckMemberSize(struct _XkbCompatMapNotify,time,8,3,31512)
CheckOffset(struct _XkbCompatMapNotify,time,32,3,31512)
CheckMemberSize(struct _XkbCompatMapNotify,xkb_type,4,3,31513)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,40,3,31513)
CheckMemberSize(struct _XkbCompatMapNotify,device,4,3,31514)
CheckOffset(struct _XkbCompatMapNotify,device,44,3,31514)
CheckMemberSize(struct _XkbCompatMapNotify,changed_groups,4,3,31515)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,48,3,31515)
CheckMemberSize(struct _XkbCompatMapNotify,first_si,4,3,31516)
CheckOffset(struct _XkbCompatMapNotify,first_si,52,3,31516)
CheckMemberSize(struct _XkbCompatMapNotify,num_si,4,3,31517)
CheckOffset(struct _XkbCompatMapNotify,num_si,56,3,31517)
CheckMemberSize(struct _XkbCompatMapNotify,num_total_si,4,3,31518)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,60,3,31518)
#elif defined __i386__
CheckTypeSize(struct _XkbCompatMapNotify,44, 9503, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbCompatMapNotify,serial,4,2,31509)
CheckOffset(struct _XkbCompatMapNotify,serial,4,2,31509)
CheckMemberSize(struct _XkbCompatMapNotify,send_event,4,2,31510)
CheckOffset(struct _XkbCompatMapNotify,send_event,8,2,31510)
CheckMemberSize(struct _XkbCompatMapNotify,display,4,2,31511)
CheckOffset(struct _XkbCompatMapNotify,display,12,2,31511)
CheckMemberSize(struct _XkbCompatMapNotify,time,4,2,31512)
CheckOffset(struct _XkbCompatMapNotify,time,16,2,31512)
CheckMemberSize(struct _XkbCompatMapNotify,xkb_type,4,2,31513)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,20,2,31513)
CheckMemberSize(struct _XkbCompatMapNotify,device,4,2,31514)
CheckOffset(struct _XkbCompatMapNotify,device,24,2,31514)
CheckMemberSize(struct _XkbCompatMapNotify,changed_groups,4,2,31515)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,28,2,31515)
CheckMemberSize(struct _XkbCompatMapNotify,first_si,4,2,31516)
CheckOffset(struct _XkbCompatMapNotify,first_si,32,2,31516)
CheckMemberSize(struct _XkbCompatMapNotify,num_si,4,2,31517)
CheckOffset(struct _XkbCompatMapNotify,num_si,36,2,31517)
CheckMemberSize(struct _XkbCompatMapNotify,num_total_si,4,2,31518)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,40,2,31518)
#else
Msg("Find size of _XkbCompatMapNotify (9503)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9503,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbCompatMapNotifyEvent,64, 9504, 12, 1.3, NULL, 9503, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbCompatMapNotifyEvent,64, 9504, 11, 2.0, NULL, 9503, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbCompatMapNotifyEvent,44, 9504, 10, 1.3, NULL, 9503, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbCompatMapNotifyEvent,64, 9504, 9, 2.0, NULL, 9503, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbCompatMapNotifyEvent,44, 9504, 6, 1.2, NULL, 9503, NULL)
#elif defined __ia64__
CheckTypeSize(XkbCompatMapNotifyEvent,64, 9504, 3, 1.3, NULL, 9503, NULL)
#elif defined __i386__
CheckTypeSize(XkbCompatMapNotifyEvent,44, 9504, 2, 1.2, NULL, 9503, NULL)
#else
Msg("Find size of XkbCompatMapNotifyEvent (9504)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9503,NULL);\n",architecture,9504,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbBellNotify,96, 9505, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbBellNotify,serial,8,12,31520)
CheckOffset(struct _XkbBellNotify,serial,8,12,31520)
CheckMemberSize(struct _XkbBellNotify,send_event,4,12,31521)
CheckOffset(struct _XkbBellNotify,send_event,16,12,31521)
CheckMemberSize(struct _XkbBellNotify,display,8,12,31522)
CheckOffset(struct _XkbBellNotify,display,24,12,31522)
CheckMemberSize(struct _XkbBellNotify,time,8,12,31523)
CheckOffset(struct _XkbBellNotify,time,32,12,31523)
CheckMemberSize(struct _XkbBellNotify,xkb_type,4,12,31524)
CheckOffset(struct _XkbBellNotify,xkb_type,40,12,31524)
CheckMemberSize(struct _XkbBellNotify,device,4,12,31525)
CheckOffset(struct _XkbBellNotify,device,44,12,31525)
CheckMemberSize(struct _XkbBellNotify,percent,4,12,31526)
CheckOffset(struct _XkbBellNotify,percent,48,12,31526)
CheckMemberSize(struct _XkbBellNotify,pitch,4,12,31527)
CheckOffset(struct _XkbBellNotify,pitch,52,12,31527)
CheckMemberSize(struct _XkbBellNotify,duration,4,12,31528)
CheckOffset(struct _XkbBellNotify,duration,56,12,31528)
CheckMemberSize(struct _XkbBellNotify,bell_class,4,12,31529)
CheckOffset(struct _XkbBellNotify,bell_class,60,12,31529)
CheckMemberSize(struct _XkbBellNotify,bell_id,4,12,31530)
CheckOffset(struct _XkbBellNotify,bell_id,64,12,31530)
CheckMemberSize(struct _XkbBellNotify,name,8,12,31531)
CheckOffset(struct _XkbBellNotify,name,72,12,31531)
CheckMemberSize(struct _XkbBellNotify,window,8,12,31532)
CheckOffset(struct _XkbBellNotify,window,80,12,31532)
CheckMemberSize(struct _XkbBellNotify,event_only,4,12,31533)
CheckOffset(struct _XkbBellNotify,event_only,88,12,31533)
#elif defined __x86_64__
CheckTypeSize(struct _XkbBellNotify,96, 9505, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbBellNotify,serial,8,11,31520)
CheckOffset(struct _XkbBellNotify,serial,8,11,31520)
CheckMemberSize(struct _XkbBellNotify,send_event,4,11,31521)
CheckOffset(struct _XkbBellNotify,send_event,16,11,31521)
CheckMemberSize(struct _XkbBellNotify,display,8,11,31522)
CheckOffset(struct _XkbBellNotify,display,24,11,31522)
CheckMemberSize(struct _XkbBellNotify,time,8,11,31523)
CheckOffset(struct _XkbBellNotify,time,32,11,31523)
CheckMemberSize(struct _XkbBellNotify,xkb_type,4,11,31524)
CheckOffset(struct _XkbBellNotify,xkb_type,40,11,31524)
CheckMemberSize(struct _XkbBellNotify,device,4,11,31525)
CheckOffset(struct _XkbBellNotify,device,44,11,31525)
CheckMemberSize(struct _XkbBellNotify,percent,4,11,31526)
CheckOffset(struct _XkbBellNotify,percent,48,11,31526)
CheckMemberSize(struct _XkbBellNotify,pitch,4,11,31527)
CheckOffset(struct _XkbBellNotify,pitch,52,11,31527)
CheckMemberSize(struct _XkbBellNotify,duration,4,11,31528)
CheckOffset(struct _XkbBellNotify,duration,56,11,31528)
CheckMemberSize(struct _XkbBellNotify,bell_class,4,11,31529)
CheckOffset(struct _XkbBellNotify,bell_class,60,11,31529)
CheckMemberSize(struct _XkbBellNotify,bell_id,4,11,31530)
CheckOffset(struct _XkbBellNotify,bell_id,64,11,31530)
CheckMemberSize(struct _XkbBellNotify,name,8,11,31531)
CheckOffset(struct _XkbBellNotify,name,72,11,31531)
CheckMemberSize(struct _XkbBellNotify,window,8,11,31532)
CheckOffset(struct _XkbBellNotify,window,80,11,31532)
CheckMemberSize(struct _XkbBellNotify,event_only,4,11,31533)
CheckOffset(struct _XkbBellNotify,event_only,88,11,31533)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbBellNotify,60, 9505, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbBellNotify,serial,4,10,31520)
CheckOffset(struct _XkbBellNotify,serial,4,10,31520)
CheckMemberSize(struct _XkbBellNotify,send_event,4,10,31521)
CheckOffset(struct _XkbBellNotify,send_event,8,10,31521)
CheckMemberSize(struct _XkbBellNotify,display,4,10,31522)
CheckOffset(struct _XkbBellNotify,display,12,10,31522)
CheckMemberSize(struct _XkbBellNotify,time,4,10,31523)
CheckOffset(struct _XkbBellNotify,time,16,10,31523)
CheckMemberSize(struct _XkbBellNotify,xkb_type,4,10,31524)
CheckOffset(struct _XkbBellNotify,xkb_type,20,10,31524)
CheckMemberSize(struct _XkbBellNotify,device,4,10,31525)
CheckOffset(struct _XkbBellNotify,device,24,10,31525)
CheckMemberSize(struct _XkbBellNotify,percent,4,10,31526)
CheckOffset(struct _XkbBellNotify,percent,28,10,31526)
CheckMemberSize(struct _XkbBellNotify,pitch,4,10,31527)
CheckOffset(struct _XkbBellNotify,pitch,32,10,31527)
CheckMemberSize(struct _XkbBellNotify,duration,4,10,31528)
CheckOffset(struct _XkbBellNotify,duration,36,10,31528)
CheckMemberSize(struct _XkbBellNotify,bell_class,4,10,31529)
CheckOffset(struct _XkbBellNotify,bell_class,40,10,31529)
CheckMemberSize(struct _XkbBellNotify,bell_id,4,10,31530)
CheckOffset(struct _XkbBellNotify,bell_id,44,10,31530)
CheckMemberSize(struct _XkbBellNotify,name,4,10,31531)
CheckOffset(struct _XkbBellNotify,name,48,10,31531)
CheckMemberSize(struct _XkbBellNotify,window,4,10,31532)
CheckOffset(struct _XkbBellNotify,window,52,10,31532)
CheckMemberSize(struct _XkbBellNotify,event_only,4,10,31533)
CheckOffset(struct _XkbBellNotify,event_only,56,10,31533)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbBellNotify,96, 9505, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbBellNotify,serial,8,9,31520)
CheckOffset(struct _XkbBellNotify,serial,8,9,31520)
CheckMemberSize(struct _XkbBellNotify,send_event,4,9,31521)
CheckOffset(struct _XkbBellNotify,send_event,16,9,31521)
CheckMemberSize(struct _XkbBellNotify,display,8,9,31522)
CheckOffset(struct _XkbBellNotify,display,24,9,31522)
CheckMemberSize(struct _XkbBellNotify,time,8,9,31523)
CheckOffset(struct _XkbBellNotify,time,32,9,31523)
CheckMemberSize(struct _XkbBellNotify,xkb_type,4,9,31524)
CheckOffset(struct _XkbBellNotify,xkb_type,40,9,31524)
CheckMemberSize(struct _XkbBellNotify,device,4,9,31525)
CheckOffset(struct _XkbBellNotify,device,44,9,31525)
CheckMemberSize(struct _XkbBellNotify,percent,4,9,31526)
CheckOffset(struct _XkbBellNotify,percent,48,9,31526)
CheckMemberSize(struct _XkbBellNotify,pitch,4,9,31527)
CheckOffset(struct _XkbBellNotify,pitch,52,9,31527)
CheckMemberSize(struct _XkbBellNotify,duration,4,9,31528)
CheckOffset(struct _XkbBellNotify,duration,56,9,31528)
CheckMemberSize(struct _XkbBellNotify,bell_class,4,9,31529)
CheckOffset(struct _XkbBellNotify,bell_class,60,9,31529)
CheckMemberSize(struct _XkbBellNotify,bell_id,4,9,31530)
CheckOffset(struct _XkbBellNotify,bell_id,64,9,31530)
CheckMemberSize(struct _XkbBellNotify,name,8,9,31531)
CheckOffset(struct _XkbBellNotify,name,72,9,31531)
CheckMemberSize(struct _XkbBellNotify,window,8,9,31532)
CheckOffset(struct _XkbBellNotify,window,80,9,31532)
CheckMemberSize(struct _XkbBellNotify,event_only,4,9,31533)
CheckOffset(struct _XkbBellNotify,event_only,88,9,31533)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbBellNotify,60, 9505, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbBellNotify,serial,4,6,31520)
CheckOffset(struct _XkbBellNotify,serial,4,6,31520)
CheckMemberSize(struct _XkbBellNotify,send_event,4,6,31521)
CheckOffset(struct _XkbBellNotify,send_event,8,6,31521)
CheckMemberSize(struct _XkbBellNotify,display,4,6,31522)
CheckOffset(struct _XkbBellNotify,display,12,6,31522)
CheckMemberSize(struct _XkbBellNotify,time,4,6,31523)
CheckOffset(struct _XkbBellNotify,time,16,6,31523)
CheckMemberSize(struct _XkbBellNotify,xkb_type,4,6,31524)
CheckOffset(struct _XkbBellNotify,xkb_type,20,6,31524)
CheckMemberSize(struct _XkbBellNotify,device,4,6,31525)
CheckOffset(struct _XkbBellNotify,device,24,6,31525)
CheckMemberSize(struct _XkbBellNotify,percent,4,6,31526)
CheckOffset(struct _XkbBellNotify,percent,28,6,31526)
CheckMemberSize(struct _XkbBellNotify,pitch,4,6,31527)
CheckOffset(struct _XkbBellNotify,pitch,32,6,31527)
CheckMemberSize(struct _XkbBellNotify,duration,4,6,31528)
CheckOffset(struct _XkbBellNotify,duration,36,6,31528)
CheckMemberSize(struct _XkbBellNotify,bell_class,4,6,31529)
CheckOffset(struct _XkbBellNotify,bell_class,40,6,31529)
CheckMemberSize(struct _XkbBellNotify,bell_id,4,6,31530)
CheckOffset(struct _XkbBellNotify,bell_id,44,6,31530)
CheckMemberSize(struct _XkbBellNotify,name,4,6,31531)
CheckOffset(struct _XkbBellNotify,name,48,6,31531)
CheckMemberSize(struct _XkbBellNotify,window,4,6,31532)
CheckOffset(struct _XkbBellNotify,window,52,6,31532)
CheckMemberSize(struct _XkbBellNotify,event_only,4,6,31533)
CheckOffset(struct _XkbBellNotify,event_only,56,6,31533)
#elif defined __ia64__
CheckTypeSize(struct _XkbBellNotify,96, 9505, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbBellNotify,serial,8,3,31520)
CheckOffset(struct _XkbBellNotify,serial,8,3,31520)
CheckMemberSize(struct _XkbBellNotify,send_event,4,3,31521)
CheckOffset(struct _XkbBellNotify,send_event,16,3,31521)
CheckMemberSize(struct _XkbBellNotify,display,8,3,31522)
CheckOffset(struct _XkbBellNotify,display,24,3,31522)
CheckMemberSize(struct _XkbBellNotify,time,8,3,31523)
CheckOffset(struct _XkbBellNotify,time,32,3,31523)
CheckMemberSize(struct _XkbBellNotify,xkb_type,4,3,31524)
CheckOffset(struct _XkbBellNotify,xkb_type,40,3,31524)
CheckMemberSize(struct _XkbBellNotify,device,4,3,31525)
CheckOffset(struct _XkbBellNotify,device,44,3,31525)
CheckMemberSize(struct _XkbBellNotify,percent,4,3,31526)
CheckOffset(struct _XkbBellNotify,percent,48,3,31526)
CheckMemberSize(struct _XkbBellNotify,pitch,4,3,31527)
CheckOffset(struct _XkbBellNotify,pitch,52,3,31527)
CheckMemberSize(struct _XkbBellNotify,duration,4,3,31528)
CheckOffset(struct _XkbBellNotify,duration,56,3,31528)
CheckMemberSize(struct _XkbBellNotify,bell_class,4,3,31529)
CheckOffset(struct _XkbBellNotify,bell_class,60,3,31529)
CheckMemberSize(struct _XkbBellNotify,bell_id,4,3,31530)
CheckOffset(struct _XkbBellNotify,bell_id,64,3,31530)
CheckMemberSize(struct _XkbBellNotify,name,8,3,31531)
CheckOffset(struct _XkbBellNotify,name,72,3,31531)
CheckMemberSize(struct _XkbBellNotify,window,8,3,31532)
CheckOffset(struct _XkbBellNotify,window,80,3,31532)
CheckMemberSize(struct _XkbBellNotify,event_only,4,3,31533)
CheckOffset(struct _XkbBellNotify,event_only,88,3,31533)
#elif defined __i386__
CheckTypeSize(struct _XkbBellNotify,60, 9505, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbBellNotify,serial,4,2,31520)
CheckOffset(struct _XkbBellNotify,serial,4,2,31520)
CheckMemberSize(struct _XkbBellNotify,send_event,4,2,31521)
CheckOffset(struct _XkbBellNotify,send_event,8,2,31521)
CheckMemberSize(struct _XkbBellNotify,display,4,2,31522)
CheckOffset(struct _XkbBellNotify,display,12,2,31522)
CheckMemberSize(struct _XkbBellNotify,time,4,2,31523)
CheckOffset(struct _XkbBellNotify,time,16,2,31523)
CheckMemberSize(struct _XkbBellNotify,xkb_type,4,2,31524)
CheckOffset(struct _XkbBellNotify,xkb_type,20,2,31524)
CheckMemberSize(struct _XkbBellNotify,device,4,2,31525)
CheckOffset(struct _XkbBellNotify,device,24,2,31525)
CheckMemberSize(struct _XkbBellNotify,percent,4,2,31526)
CheckOffset(struct _XkbBellNotify,percent,28,2,31526)
CheckMemberSize(struct _XkbBellNotify,pitch,4,2,31527)
CheckOffset(struct _XkbBellNotify,pitch,32,2,31527)
CheckMemberSize(struct _XkbBellNotify,duration,4,2,31528)
CheckOffset(struct _XkbBellNotify,duration,36,2,31528)
CheckMemberSize(struct _XkbBellNotify,bell_class,4,2,31529)
CheckOffset(struct _XkbBellNotify,bell_class,40,2,31529)
CheckMemberSize(struct _XkbBellNotify,bell_id,4,2,31530)
CheckOffset(struct _XkbBellNotify,bell_id,44,2,31530)
CheckMemberSize(struct _XkbBellNotify,name,4,2,31531)
CheckOffset(struct _XkbBellNotify,name,48,2,31531)
CheckMemberSize(struct _XkbBellNotify,window,4,2,31532)
CheckOffset(struct _XkbBellNotify,window,52,2,31532)
CheckMemberSize(struct _XkbBellNotify,event_only,4,2,31533)
CheckOffset(struct _XkbBellNotify,event_only,56,2,31533)
#else
Msg("Find size of _XkbBellNotify (9505)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9505,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbBellNotifyEvent,96, 9506, 12, 1.3, NULL, 9505, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbBellNotifyEvent,96, 9506, 11, 2.0, NULL, 9505, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbBellNotifyEvent,60, 9506, 10, 1.3, NULL, 9505, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbBellNotifyEvent,96, 9506, 9, 2.0, NULL, 9505, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbBellNotifyEvent,60, 9506, 6, 1.2, NULL, 9505, NULL)
#elif defined __ia64__
CheckTypeSize(XkbBellNotifyEvent,96, 9506, 3, 1.3, NULL, 9505, NULL)
#elif defined __i386__
CheckTypeSize(XkbBellNotifyEvent,60, 9506, 2, 1.2, NULL, 9505, NULL)
#else
Msg("Find size of XkbBellNotifyEvent (9506)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9505,NULL);\n",architecture,9506,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbActionMessage,80, 9507, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbActionMessage,serial,8,12,31535)
CheckOffset(struct _XkbActionMessage,serial,8,12,31535)
CheckMemberSize(struct _XkbActionMessage,send_event,4,12,31536)
CheckOffset(struct _XkbActionMessage,send_event,16,12,31536)
CheckMemberSize(struct _XkbActionMessage,display,8,12,31537)
CheckOffset(struct _XkbActionMessage,display,24,12,31537)
CheckMemberSize(struct _XkbActionMessage,time,8,12,31538)
CheckOffset(struct _XkbActionMessage,time,32,12,31538)
CheckMemberSize(struct _XkbActionMessage,xkb_type,4,12,31539)
CheckOffset(struct _XkbActionMessage,xkb_type,40,12,31539)
CheckMemberSize(struct _XkbActionMessage,device,4,12,31540)
CheckOffset(struct _XkbActionMessage,device,44,12,31540)
CheckMemberSize(struct _XkbActionMessage,keycode,1,12,31541)
CheckOffset(struct _XkbActionMessage,keycode,48,12,31541)
CheckMemberSize(struct _XkbActionMessage,press,4,12,31542)
CheckOffset(struct _XkbActionMessage,press,52,12,31542)
CheckMemberSize(struct _XkbActionMessage,key_event_follows,4,12,31543)
CheckOffset(struct _XkbActionMessage,key_event_follows,56,12,31543)
CheckMemberSize(struct _XkbActionMessage,group,4,12,31544)
CheckOffset(struct _XkbActionMessage,group,60,12,31544)
CheckMemberSize(struct _XkbActionMessage,mods,4,12,31545)
CheckOffset(struct _XkbActionMessage,mods,64,12,31545)
CheckMemberSize(struct _XkbActionMessage,message,7,12,31546)
CheckOffset(struct _XkbActionMessage,message,68,12,31546)
#elif defined __x86_64__
CheckTypeSize(struct _XkbActionMessage,80, 9507, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbActionMessage,serial,8,11,31535)
CheckOffset(struct _XkbActionMessage,serial,8,11,31535)
CheckMemberSize(struct _XkbActionMessage,send_event,4,11,31536)
CheckOffset(struct _XkbActionMessage,send_event,16,11,31536)
CheckMemberSize(struct _XkbActionMessage,display,8,11,31537)
CheckOffset(struct _XkbActionMessage,display,24,11,31537)
CheckMemberSize(struct _XkbActionMessage,time,8,11,31538)
CheckOffset(struct _XkbActionMessage,time,32,11,31538)
CheckMemberSize(struct _XkbActionMessage,xkb_type,4,11,31539)
CheckOffset(struct _XkbActionMessage,xkb_type,40,11,31539)
CheckMemberSize(struct _XkbActionMessage,device,4,11,31540)
CheckOffset(struct _XkbActionMessage,device,44,11,31540)
CheckMemberSize(struct _XkbActionMessage,keycode,1,11,31541)
CheckOffset(struct _XkbActionMessage,keycode,48,11,31541)
CheckMemberSize(struct _XkbActionMessage,press,4,11,31542)
CheckOffset(struct _XkbActionMessage,press,52,11,31542)
CheckMemberSize(struct _XkbActionMessage,key_event_follows,4,11,31543)
CheckOffset(struct _XkbActionMessage,key_event_follows,56,11,31543)
CheckMemberSize(struct _XkbActionMessage,group,4,11,31544)
CheckOffset(struct _XkbActionMessage,group,60,11,31544)
CheckMemberSize(struct _XkbActionMessage,mods,4,11,31545)
CheckOffset(struct _XkbActionMessage,mods,64,11,31545)
CheckMemberSize(struct _XkbActionMessage,message,7,11,31546)
CheckOffset(struct _XkbActionMessage,message,68,11,31546)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbActionMessage,56, 9507, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbActionMessage,serial,4,10,31535)
CheckOffset(struct _XkbActionMessage,serial,4,10,31535)
CheckMemberSize(struct _XkbActionMessage,send_event,4,10,31536)
CheckOffset(struct _XkbActionMessage,send_event,8,10,31536)
CheckMemberSize(struct _XkbActionMessage,display,4,10,31537)
CheckOffset(struct _XkbActionMessage,display,12,10,31537)
CheckMemberSize(struct _XkbActionMessage,time,4,10,31538)
CheckOffset(struct _XkbActionMessage,time,16,10,31538)
CheckMemberSize(struct _XkbActionMessage,xkb_type,4,10,31539)
CheckOffset(struct _XkbActionMessage,xkb_type,20,10,31539)
CheckMemberSize(struct _XkbActionMessage,device,4,10,31540)
CheckOffset(struct _XkbActionMessage,device,24,10,31540)
CheckMemberSize(struct _XkbActionMessage,keycode,1,10,31541)
CheckOffset(struct _XkbActionMessage,keycode,28,10,31541)
CheckMemberSize(struct _XkbActionMessage,press,4,10,31542)
CheckOffset(struct _XkbActionMessage,press,32,10,31542)
CheckMemberSize(struct _XkbActionMessage,key_event_follows,4,10,31543)
CheckOffset(struct _XkbActionMessage,key_event_follows,36,10,31543)
CheckMemberSize(struct _XkbActionMessage,group,4,10,31544)
CheckOffset(struct _XkbActionMessage,group,40,10,31544)
CheckMemberSize(struct _XkbActionMessage,mods,4,10,31545)
CheckOffset(struct _XkbActionMessage,mods,44,10,31545)
CheckMemberSize(struct _XkbActionMessage,message,7,10,31546)
CheckOffset(struct _XkbActionMessage,message,48,10,31546)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbActionMessage,80, 9507, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbActionMessage,serial,8,9,31535)
CheckOffset(struct _XkbActionMessage,serial,8,9,31535)
CheckMemberSize(struct _XkbActionMessage,send_event,4,9,31536)
CheckOffset(struct _XkbActionMessage,send_event,16,9,31536)
CheckMemberSize(struct _XkbActionMessage,display,8,9,31537)
CheckOffset(struct _XkbActionMessage,display,24,9,31537)
CheckMemberSize(struct _XkbActionMessage,time,8,9,31538)
CheckOffset(struct _XkbActionMessage,time,32,9,31538)
CheckMemberSize(struct _XkbActionMessage,xkb_type,4,9,31539)
CheckOffset(struct _XkbActionMessage,xkb_type,40,9,31539)
CheckMemberSize(struct _XkbActionMessage,device,4,9,31540)
CheckOffset(struct _XkbActionMessage,device,44,9,31540)
CheckMemberSize(struct _XkbActionMessage,keycode,1,9,31541)
CheckOffset(struct _XkbActionMessage,keycode,48,9,31541)
CheckMemberSize(struct _XkbActionMessage,press,4,9,31542)
CheckOffset(struct _XkbActionMessage,press,52,9,31542)
CheckMemberSize(struct _XkbActionMessage,key_event_follows,4,9,31543)
CheckOffset(struct _XkbActionMessage,key_event_follows,56,9,31543)
CheckMemberSize(struct _XkbActionMessage,group,4,9,31544)
CheckOffset(struct _XkbActionMessage,group,60,9,31544)
CheckMemberSize(struct _XkbActionMessage,mods,4,9,31545)
CheckOffset(struct _XkbActionMessage,mods,64,9,31545)
CheckMemberSize(struct _XkbActionMessage,message,7,9,31546)
CheckOffset(struct _XkbActionMessage,message,68,9,31546)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbActionMessage,56, 9507, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbActionMessage,serial,4,6,31535)
CheckOffset(struct _XkbActionMessage,serial,4,6,31535)
CheckMemberSize(struct _XkbActionMessage,send_event,4,6,31536)
CheckOffset(struct _XkbActionMessage,send_event,8,6,31536)
CheckMemberSize(struct _XkbActionMessage,display,4,6,31537)
CheckOffset(struct _XkbActionMessage,display,12,6,31537)
CheckMemberSize(struct _XkbActionMessage,time,4,6,31538)
CheckOffset(struct _XkbActionMessage,time,16,6,31538)
CheckMemberSize(struct _XkbActionMessage,xkb_type,4,6,31539)
CheckOffset(struct _XkbActionMessage,xkb_type,20,6,31539)
CheckMemberSize(struct _XkbActionMessage,device,4,6,31540)
CheckOffset(struct _XkbActionMessage,device,24,6,31540)
CheckMemberSize(struct _XkbActionMessage,keycode,1,6,31541)
CheckOffset(struct _XkbActionMessage,keycode,28,6,31541)
CheckMemberSize(struct _XkbActionMessage,press,4,6,31542)
CheckOffset(struct _XkbActionMessage,press,32,6,31542)
CheckMemberSize(struct _XkbActionMessage,key_event_follows,4,6,31543)
CheckOffset(struct _XkbActionMessage,key_event_follows,36,6,31543)
CheckMemberSize(struct _XkbActionMessage,group,4,6,31544)
CheckOffset(struct _XkbActionMessage,group,40,6,31544)
CheckMemberSize(struct _XkbActionMessage,mods,4,6,31545)
CheckOffset(struct _XkbActionMessage,mods,44,6,31545)
CheckMemberSize(struct _XkbActionMessage,message,7,6,31546)
CheckOffset(struct _XkbActionMessage,message,48,6,31546)
#elif defined __ia64__
CheckTypeSize(struct _XkbActionMessage,80, 9507, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbActionMessage,serial,8,3,31535)
CheckOffset(struct _XkbActionMessage,serial,8,3,31535)
CheckMemberSize(struct _XkbActionMessage,send_event,4,3,31536)
CheckOffset(struct _XkbActionMessage,send_event,16,3,31536)
CheckMemberSize(struct _XkbActionMessage,display,8,3,31537)
CheckOffset(struct _XkbActionMessage,display,24,3,31537)
CheckMemberSize(struct _XkbActionMessage,time,8,3,31538)
CheckOffset(struct _XkbActionMessage,time,32,3,31538)
CheckMemberSize(struct _XkbActionMessage,xkb_type,4,3,31539)
CheckOffset(struct _XkbActionMessage,xkb_type,40,3,31539)
CheckMemberSize(struct _XkbActionMessage,device,4,3,31540)
CheckOffset(struct _XkbActionMessage,device,44,3,31540)
CheckMemberSize(struct _XkbActionMessage,keycode,1,3,31541)
CheckOffset(struct _XkbActionMessage,keycode,48,3,31541)
CheckMemberSize(struct _XkbActionMessage,press,4,3,31542)
CheckOffset(struct _XkbActionMessage,press,52,3,31542)
CheckMemberSize(struct _XkbActionMessage,key_event_follows,4,3,31543)
CheckOffset(struct _XkbActionMessage,key_event_follows,56,3,31543)
CheckMemberSize(struct _XkbActionMessage,group,4,3,31544)
CheckOffset(struct _XkbActionMessage,group,60,3,31544)
CheckMemberSize(struct _XkbActionMessage,mods,4,3,31545)
CheckOffset(struct _XkbActionMessage,mods,64,3,31545)
CheckMemberSize(struct _XkbActionMessage,message,7,3,31546)
CheckOffset(struct _XkbActionMessage,message,68,3,31546)
#elif defined __i386__
CheckTypeSize(struct _XkbActionMessage,56, 9507, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbActionMessage,serial,4,2,31535)
CheckOffset(struct _XkbActionMessage,serial,4,2,31535)
CheckMemberSize(struct _XkbActionMessage,send_event,4,2,31536)
CheckOffset(struct _XkbActionMessage,send_event,8,2,31536)
CheckMemberSize(struct _XkbActionMessage,display,4,2,31537)
CheckOffset(struct _XkbActionMessage,display,12,2,31537)
CheckMemberSize(struct _XkbActionMessage,time,4,2,31538)
CheckOffset(struct _XkbActionMessage,time,16,2,31538)
CheckMemberSize(struct _XkbActionMessage,xkb_type,4,2,31539)
CheckOffset(struct _XkbActionMessage,xkb_type,20,2,31539)
CheckMemberSize(struct _XkbActionMessage,device,4,2,31540)
CheckOffset(struct _XkbActionMessage,device,24,2,31540)
CheckMemberSize(struct _XkbActionMessage,keycode,1,2,31541)
CheckOffset(struct _XkbActionMessage,keycode,28,2,31541)
CheckMemberSize(struct _XkbActionMessage,press,4,2,31542)
CheckOffset(struct _XkbActionMessage,press,32,2,31542)
CheckMemberSize(struct _XkbActionMessage,key_event_follows,4,2,31543)
CheckOffset(struct _XkbActionMessage,key_event_follows,36,2,31543)
CheckMemberSize(struct _XkbActionMessage,group,4,2,31544)
CheckOffset(struct _XkbActionMessage,group,40,2,31544)
CheckMemberSize(struct _XkbActionMessage,mods,4,2,31545)
CheckOffset(struct _XkbActionMessage,mods,44,2,31545)
CheckMemberSize(struct _XkbActionMessage,message,7,2,31546)
CheckOffset(struct _XkbActionMessage,message,48,2,31546)
#else
Msg("Find size of _XkbActionMessage (9507)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9507,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbActionMessageEvent,80, 9508, 12, 1.3, NULL, 9507, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbActionMessageEvent,80, 9508, 11, 2.0, NULL, 9507, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbActionMessageEvent,56, 9508, 10, 1.3, NULL, 9507, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbActionMessageEvent,80, 9508, 9, 2.0, NULL, 9507, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbActionMessageEvent,56, 9508, 6, 1.2, NULL, 9507, NULL)
#elif defined __ia64__
CheckTypeSize(XkbActionMessageEvent,80, 9508, 3, 1.3, NULL, 9507, NULL)
#elif defined __i386__
CheckTypeSize(XkbActionMessageEvent,56, 9508, 2, 1.2, NULL, 9507, NULL)
#else
Msg("Find size of XkbActionMessageEvent (9508)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9507,NULL);\n",architecture,9508,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbAccessXNotify,64, 9509, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbAccessXNotify,serial,8,12,31548)
CheckOffset(struct _XkbAccessXNotify,serial,8,12,31548)
CheckMemberSize(struct _XkbAccessXNotify,send_event,4,12,31549)
CheckOffset(struct _XkbAccessXNotify,send_event,16,12,31549)
CheckMemberSize(struct _XkbAccessXNotify,display,8,12,31550)
CheckOffset(struct _XkbAccessXNotify,display,24,12,31550)
CheckMemberSize(struct _XkbAccessXNotify,time,8,12,31551)
CheckOffset(struct _XkbAccessXNotify,time,32,12,31551)
CheckMemberSize(struct _XkbAccessXNotify,xkb_type,4,12,31552)
CheckOffset(struct _XkbAccessXNotify,xkb_type,40,12,31552)
CheckMemberSize(struct _XkbAccessXNotify,device,4,12,31553)
CheckOffset(struct _XkbAccessXNotify,device,44,12,31553)
CheckMemberSize(struct _XkbAccessXNotify,detail,4,12,31554)
CheckOffset(struct _XkbAccessXNotify,detail,48,12,31554)
CheckMemberSize(struct _XkbAccessXNotify,keycode,4,12,31555)
CheckOffset(struct _XkbAccessXNotify,keycode,52,12,31555)
CheckMemberSize(struct _XkbAccessXNotify,sk_delay,4,12,31556)
CheckOffset(struct _XkbAccessXNotify,sk_delay,56,12,31556)
CheckMemberSize(struct _XkbAccessXNotify,debounce_delay,4,12,31557)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,60,12,31557)
#elif defined __x86_64__
CheckTypeSize(struct _XkbAccessXNotify,64, 9509, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbAccessXNotify,serial,8,11,31548)
CheckOffset(struct _XkbAccessXNotify,serial,8,11,31548)
CheckMemberSize(struct _XkbAccessXNotify,send_event,4,11,31549)
CheckOffset(struct _XkbAccessXNotify,send_event,16,11,31549)
CheckMemberSize(struct _XkbAccessXNotify,display,8,11,31550)
CheckOffset(struct _XkbAccessXNotify,display,24,11,31550)
CheckMemberSize(struct _XkbAccessXNotify,time,8,11,31551)
CheckOffset(struct _XkbAccessXNotify,time,32,11,31551)
CheckMemberSize(struct _XkbAccessXNotify,xkb_type,4,11,31552)
CheckOffset(struct _XkbAccessXNotify,xkb_type,40,11,31552)
CheckMemberSize(struct _XkbAccessXNotify,device,4,11,31553)
CheckOffset(struct _XkbAccessXNotify,device,44,11,31553)
CheckMemberSize(struct _XkbAccessXNotify,detail,4,11,31554)
CheckOffset(struct _XkbAccessXNotify,detail,48,11,31554)
CheckMemberSize(struct _XkbAccessXNotify,keycode,4,11,31555)
CheckOffset(struct _XkbAccessXNotify,keycode,52,11,31555)
CheckMemberSize(struct _XkbAccessXNotify,sk_delay,4,11,31556)
CheckOffset(struct _XkbAccessXNotify,sk_delay,56,11,31556)
CheckMemberSize(struct _XkbAccessXNotify,debounce_delay,4,11,31557)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,60,11,31557)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbAccessXNotify,44, 9509, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbAccessXNotify,serial,4,10,31548)
CheckOffset(struct _XkbAccessXNotify,serial,4,10,31548)
CheckMemberSize(struct _XkbAccessXNotify,send_event,4,10,31549)
CheckOffset(struct _XkbAccessXNotify,send_event,8,10,31549)
CheckMemberSize(struct _XkbAccessXNotify,display,4,10,31550)
CheckOffset(struct _XkbAccessXNotify,display,12,10,31550)
CheckMemberSize(struct _XkbAccessXNotify,time,4,10,31551)
CheckOffset(struct _XkbAccessXNotify,time,16,10,31551)
CheckMemberSize(struct _XkbAccessXNotify,xkb_type,4,10,31552)
CheckOffset(struct _XkbAccessXNotify,xkb_type,20,10,31552)
CheckMemberSize(struct _XkbAccessXNotify,device,4,10,31553)
CheckOffset(struct _XkbAccessXNotify,device,24,10,31553)
CheckMemberSize(struct _XkbAccessXNotify,detail,4,10,31554)
CheckOffset(struct _XkbAccessXNotify,detail,28,10,31554)
CheckMemberSize(struct _XkbAccessXNotify,keycode,4,10,31555)
CheckOffset(struct _XkbAccessXNotify,keycode,32,10,31555)
CheckMemberSize(struct _XkbAccessXNotify,sk_delay,4,10,31556)
CheckOffset(struct _XkbAccessXNotify,sk_delay,36,10,31556)
CheckMemberSize(struct _XkbAccessXNotify,debounce_delay,4,10,31557)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,40,10,31557)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbAccessXNotify,64, 9509, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbAccessXNotify,serial,8,9,31548)
CheckOffset(struct _XkbAccessXNotify,serial,8,9,31548)
CheckMemberSize(struct _XkbAccessXNotify,send_event,4,9,31549)
CheckOffset(struct _XkbAccessXNotify,send_event,16,9,31549)
CheckMemberSize(struct _XkbAccessXNotify,display,8,9,31550)
CheckOffset(struct _XkbAccessXNotify,display,24,9,31550)
CheckMemberSize(struct _XkbAccessXNotify,time,8,9,31551)
CheckOffset(struct _XkbAccessXNotify,time,32,9,31551)
CheckMemberSize(struct _XkbAccessXNotify,xkb_type,4,9,31552)
CheckOffset(struct _XkbAccessXNotify,xkb_type,40,9,31552)
CheckMemberSize(struct _XkbAccessXNotify,device,4,9,31553)
CheckOffset(struct _XkbAccessXNotify,device,44,9,31553)
CheckMemberSize(struct _XkbAccessXNotify,detail,4,9,31554)
CheckOffset(struct _XkbAccessXNotify,detail,48,9,31554)
CheckMemberSize(struct _XkbAccessXNotify,keycode,4,9,31555)
CheckOffset(struct _XkbAccessXNotify,keycode,52,9,31555)
CheckMemberSize(struct _XkbAccessXNotify,sk_delay,4,9,31556)
CheckOffset(struct _XkbAccessXNotify,sk_delay,56,9,31556)
CheckMemberSize(struct _XkbAccessXNotify,debounce_delay,4,9,31557)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,60,9,31557)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbAccessXNotify,44, 9509, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAccessXNotify,serial,4,6,31548)
CheckOffset(struct _XkbAccessXNotify,serial,4,6,31548)
CheckMemberSize(struct _XkbAccessXNotify,send_event,4,6,31549)
CheckOffset(struct _XkbAccessXNotify,send_event,8,6,31549)
CheckMemberSize(struct _XkbAccessXNotify,display,4,6,31550)
CheckOffset(struct _XkbAccessXNotify,display,12,6,31550)
CheckMemberSize(struct _XkbAccessXNotify,time,4,6,31551)
CheckOffset(struct _XkbAccessXNotify,time,16,6,31551)
CheckMemberSize(struct _XkbAccessXNotify,xkb_type,4,6,31552)
CheckOffset(struct _XkbAccessXNotify,xkb_type,20,6,31552)
CheckMemberSize(struct _XkbAccessXNotify,device,4,6,31553)
CheckOffset(struct _XkbAccessXNotify,device,24,6,31553)
CheckMemberSize(struct _XkbAccessXNotify,detail,4,6,31554)
CheckOffset(struct _XkbAccessXNotify,detail,28,6,31554)
CheckMemberSize(struct _XkbAccessXNotify,keycode,4,6,31555)
CheckOffset(struct _XkbAccessXNotify,keycode,32,6,31555)
CheckMemberSize(struct _XkbAccessXNotify,sk_delay,4,6,31556)
CheckOffset(struct _XkbAccessXNotify,sk_delay,36,6,31556)
CheckMemberSize(struct _XkbAccessXNotify,debounce_delay,4,6,31557)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,40,6,31557)
#elif defined __ia64__
CheckTypeSize(struct _XkbAccessXNotify,64, 9509, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbAccessXNotify,serial,8,3,31548)
CheckOffset(struct _XkbAccessXNotify,serial,8,3,31548)
CheckMemberSize(struct _XkbAccessXNotify,send_event,4,3,31549)
CheckOffset(struct _XkbAccessXNotify,send_event,16,3,31549)
CheckMemberSize(struct _XkbAccessXNotify,display,8,3,31550)
CheckOffset(struct _XkbAccessXNotify,display,24,3,31550)
CheckMemberSize(struct _XkbAccessXNotify,time,8,3,31551)
CheckOffset(struct _XkbAccessXNotify,time,32,3,31551)
CheckMemberSize(struct _XkbAccessXNotify,xkb_type,4,3,31552)
CheckOffset(struct _XkbAccessXNotify,xkb_type,40,3,31552)
CheckMemberSize(struct _XkbAccessXNotify,device,4,3,31553)
CheckOffset(struct _XkbAccessXNotify,device,44,3,31553)
CheckMemberSize(struct _XkbAccessXNotify,detail,4,3,31554)
CheckOffset(struct _XkbAccessXNotify,detail,48,3,31554)
CheckMemberSize(struct _XkbAccessXNotify,keycode,4,3,31555)
CheckOffset(struct _XkbAccessXNotify,keycode,52,3,31555)
CheckMemberSize(struct _XkbAccessXNotify,sk_delay,4,3,31556)
CheckOffset(struct _XkbAccessXNotify,sk_delay,56,3,31556)
CheckMemberSize(struct _XkbAccessXNotify,debounce_delay,4,3,31557)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,60,3,31557)
#elif defined __i386__
CheckTypeSize(struct _XkbAccessXNotify,44, 9509, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbAccessXNotify,serial,4,2,31548)
CheckOffset(struct _XkbAccessXNotify,serial,4,2,31548)
CheckMemberSize(struct _XkbAccessXNotify,send_event,4,2,31549)
CheckOffset(struct _XkbAccessXNotify,send_event,8,2,31549)
CheckMemberSize(struct _XkbAccessXNotify,display,4,2,31550)
CheckOffset(struct _XkbAccessXNotify,display,12,2,31550)
CheckMemberSize(struct _XkbAccessXNotify,time,4,2,31551)
CheckOffset(struct _XkbAccessXNotify,time,16,2,31551)
CheckMemberSize(struct _XkbAccessXNotify,xkb_type,4,2,31552)
CheckOffset(struct _XkbAccessXNotify,xkb_type,20,2,31552)
CheckMemberSize(struct _XkbAccessXNotify,device,4,2,31553)
CheckOffset(struct _XkbAccessXNotify,device,24,2,31553)
CheckMemberSize(struct _XkbAccessXNotify,detail,4,2,31554)
CheckOffset(struct _XkbAccessXNotify,detail,28,2,31554)
CheckMemberSize(struct _XkbAccessXNotify,keycode,4,2,31555)
CheckOffset(struct _XkbAccessXNotify,keycode,32,2,31555)
CheckMemberSize(struct _XkbAccessXNotify,sk_delay,4,2,31556)
CheckOffset(struct _XkbAccessXNotify,sk_delay,36,2,31556)
CheckMemberSize(struct _XkbAccessXNotify,debounce_delay,4,2,31557)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,40,2,31557)
#else
Msg("Find size of _XkbAccessXNotify (9509)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9509,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbAccessXNotifyEvent,64, 9510, 12, 1.3, NULL, 9509, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbAccessXNotifyEvent,64, 9510, 11, 2.0, NULL, 9509, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbAccessXNotifyEvent,44, 9510, 10, 1.3, NULL, 9509, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbAccessXNotifyEvent,64, 9510, 9, 2.0, NULL, 9509, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbAccessXNotifyEvent,44, 9510, 6, 1.2, NULL, 9509, NULL)
#elif defined __ia64__
CheckTypeSize(XkbAccessXNotifyEvent,64, 9510, 3, 1.3, NULL, 9509, NULL)
#elif defined __i386__
CheckTypeSize(XkbAccessXNotifyEvent,44, 9510, 2, 1.2, NULL, 9509, NULL)
#else
Msg("Find size of XkbAccessXNotifyEvent (9510)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9509,NULL);\n",architecture,9510,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XkbExtensionDeviceNotify,88, 9511, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbExtensionDeviceNotify,serial,8,12,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,8,12,31559)
CheckMemberSize(struct _XkbExtensionDeviceNotify,send_event,4,12,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,16,12,31560)
CheckMemberSize(struct _XkbExtensionDeviceNotify,display,8,12,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,display,24,12,31561)
CheckMemberSize(struct _XkbExtensionDeviceNotify,time,8,12,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,time,32,12,31562)
CheckMemberSize(struct _XkbExtensionDeviceNotify,xkb_type,4,12,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,40,12,31563)
CheckMemberSize(struct _XkbExtensionDeviceNotify,device,4,12,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,device,44,12,31564)
CheckMemberSize(struct _XkbExtensionDeviceNotify,reason,4,12,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,48,12,31565)
CheckMemberSize(struct _XkbExtensionDeviceNotify,supported,4,12,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,52,12,31566)
CheckMemberSize(struct _XkbExtensionDeviceNotify,unsupported,4,12,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,56,12,31567)
CheckMemberSize(struct _XkbExtensionDeviceNotify,first_btn,4,12,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,60,12,31568)
CheckMemberSize(struct _XkbExtensionDeviceNotify,num_btns,4,12,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,64,12,31569)
CheckMemberSize(struct _XkbExtensionDeviceNotify,leds_defined,4,12,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,68,12,31570)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_state,4,12,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,72,12,31571)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_class,4,12,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,76,12,31572)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_id,4,12,31573)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,80,12,31573)
#elif defined __x86_64__
CheckTypeSize(struct _XkbExtensionDeviceNotify,88, 9511, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbExtensionDeviceNotify,serial,8,11,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,8,11,31559)
CheckMemberSize(struct _XkbExtensionDeviceNotify,send_event,4,11,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,16,11,31560)
CheckMemberSize(struct _XkbExtensionDeviceNotify,display,8,11,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,display,24,11,31561)
CheckMemberSize(struct _XkbExtensionDeviceNotify,time,8,11,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,time,32,11,31562)
CheckMemberSize(struct _XkbExtensionDeviceNotify,xkb_type,4,11,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,40,11,31563)
CheckMemberSize(struct _XkbExtensionDeviceNotify,device,4,11,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,device,44,11,31564)
CheckMemberSize(struct _XkbExtensionDeviceNotify,reason,4,11,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,48,11,31565)
CheckMemberSize(struct _XkbExtensionDeviceNotify,supported,4,11,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,52,11,31566)
CheckMemberSize(struct _XkbExtensionDeviceNotify,unsupported,4,11,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,56,11,31567)
CheckMemberSize(struct _XkbExtensionDeviceNotify,first_btn,4,11,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,60,11,31568)
CheckMemberSize(struct _XkbExtensionDeviceNotify,num_btns,4,11,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,64,11,31569)
CheckMemberSize(struct _XkbExtensionDeviceNotify,leds_defined,4,11,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,68,11,31570)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_state,4,11,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,72,11,31571)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_class,4,11,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,76,11,31572)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_id,4,11,31573)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,80,11,31573)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XkbExtensionDeviceNotify,64, 9511, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbExtensionDeviceNotify,serial,4,10,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,4,10,31559)
CheckMemberSize(struct _XkbExtensionDeviceNotify,send_event,4,10,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,8,10,31560)
CheckMemberSize(struct _XkbExtensionDeviceNotify,display,4,10,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,display,12,10,31561)
CheckMemberSize(struct _XkbExtensionDeviceNotify,time,4,10,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,time,16,10,31562)
CheckMemberSize(struct _XkbExtensionDeviceNotify,xkb_type,4,10,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,20,10,31563)
CheckMemberSize(struct _XkbExtensionDeviceNotify,device,4,10,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,device,24,10,31564)
CheckMemberSize(struct _XkbExtensionDeviceNotify,reason,4,10,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,28,10,31565)
CheckMemberSize(struct _XkbExtensionDeviceNotify,supported,4,10,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,32,10,31566)
CheckMemberSize(struct _XkbExtensionDeviceNotify,unsupported,4,10,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,36,10,31567)
CheckMemberSize(struct _XkbExtensionDeviceNotify,first_btn,4,10,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,40,10,31568)
CheckMemberSize(struct _XkbExtensionDeviceNotify,num_btns,4,10,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,44,10,31569)
CheckMemberSize(struct _XkbExtensionDeviceNotify,leds_defined,4,10,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,48,10,31570)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_state,4,10,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,52,10,31571)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_class,4,10,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,56,10,31572)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_id,4,10,31573)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,60,10,31573)
#elif defined __powerpc64__
CheckTypeSize(struct _XkbExtensionDeviceNotify,88, 9511, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XkbExtensionDeviceNotify,serial,8,9,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,8,9,31559)
CheckMemberSize(struct _XkbExtensionDeviceNotify,send_event,4,9,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,16,9,31560)
CheckMemberSize(struct _XkbExtensionDeviceNotify,display,8,9,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,display,24,9,31561)
CheckMemberSize(struct _XkbExtensionDeviceNotify,time,8,9,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,time,32,9,31562)
CheckMemberSize(struct _XkbExtensionDeviceNotify,xkb_type,4,9,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,40,9,31563)
CheckMemberSize(struct _XkbExtensionDeviceNotify,device,4,9,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,device,44,9,31564)
CheckMemberSize(struct _XkbExtensionDeviceNotify,reason,4,9,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,48,9,31565)
CheckMemberSize(struct _XkbExtensionDeviceNotify,supported,4,9,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,52,9,31566)
CheckMemberSize(struct _XkbExtensionDeviceNotify,unsupported,4,9,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,56,9,31567)
CheckMemberSize(struct _XkbExtensionDeviceNotify,first_btn,4,9,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,60,9,31568)
CheckMemberSize(struct _XkbExtensionDeviceNotify,num_btns,4,9,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,64,9,31569)
CheckMemberSize(struct _XkbExtensionDeviceNotify,leds_defined,4,9,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,68,9,31570)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_state,4,9,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,72,9,31571)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_class,4,9,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,76,9,31572)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_id,4,9,31573)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,80,9,31573)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XkbExtensionDeviceNotify,64, 9511, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbExtensionDeviceNotify,serial,4,6,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,4,6,31559)
CheckMemberSize(struct _XkbExtensionDeviceNotify,send_event,4,6,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,8,6,31560)
CheckMemberSize(struct _XkbExtensionDeviceNotify,display,4,6,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,display,12,6,31561)
CheckMemberSize(struct _XkbExtensionDeviceNotify,time,4,6,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,time,16,6,31562)
CheckMemberSize(struct _XkbExtensionDeviceNotify,xkb_type,4,6,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,20,6,31563)
CheckMemberSize(struct _XkbExtensionDeviceNotify,device,4,6,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,device,24,6,31564)
CheckMemberSize(struct _XkbExtensionDeviceNotify,reason,4,6,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,28,6,31565)
CheckMemberSize(struct _XkbExtensionDeviceNotify,supported,4,6,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,32,6,31566)
CheckMemberSize(struct _XkbExtensionDeviceNotify,unsupported,4,6,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,36,6,31567)
CheckMemberSize(struct _XkbExtensionDeviceNotify,first_btn,4,6,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,40,6,31568)
CheckMemberSize(struct _XkbExtensionDeviceNotify,num_btns,4,6,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,44,6,31569)
CheckMemberSize(struct _XkbExtensionDeviceNotify,leds_defined,4,6,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,48,6,31570)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_state,4,6,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,52,6,31571)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_class,4,6,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,56,6,31572)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_id,4,6,31573)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,60,6,31573)
#elif defined __ia64__
CheckTypeSize(struct _XkbExtensionDeviceNotify,88, 9511, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XkbExtensionDeviceNotify,serial,8,3,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,8,3,31559)
CheckMemberSize(struct _XkbExtensionDeviceNotify,send_event,4,3,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,16,3,31560)
CheckMemberSize(struct _XkbExtensionDeviceNotify,display,8,3,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,display,24,3,31561)
CheckMemberSize(struct _XkbExtensionDeviceNotify,time,8,3,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,time,32,3,31562)
CheckMemberSize(struct _XkbExtensionDeviceNotify,xkb_type,4,3,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,40,3,31563)
CheckMemberSize(struct _XkbExtensionDeviceNotify,device,4,3,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,device,44,3,31564)
CheckMemberSize(struct _XkbExtensionDeviceNotify,reason,4,3,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,48,3,31565)
CheckMemberSize(struct _XkbExtensionDeviceNotify,supported,4,3,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,52,3,31566)
CheckMemberSize(struct _XkbExtensionDeviceNotify,unsupported,4,3,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,56,3,31567)
CheckMemberSize(struct _XkbExtensionDeviceNotify,first_btn,4,3,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,60,3,31568)
CheckMemberSize(struct _XkbExtensionDeviceNotify,num_btns,4,3,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,64,3,31569)
CheckMemberSize(struct _XkbExtensionDeviceNotify,leds_defined,4,3,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,68,3,31570)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_state,4,3,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,72,3,31571)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_class,4,3,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,76,3,31572)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_id,4,3,31573)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,80,3,31573)
#elif defined __i386__
CheckTypeSize(struct _XkbExtensionDeviceNotify,64, 9511, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XkbExtensionDeviceNotify,serial,4,2,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,4,2,31559)
CheckMemberSize(struct _XkbExtensionDeviceNotify,send_event,4,2,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,8,2,31560)
CheckMemberSize(struct _XkbExtensionDeviceNotify,display,4,2,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,display,12,2,31561)
CheckMemberSize(struct _XkbExtensionDeviceNotify,time,4,2,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,time,16,2,31562)
CheckMemberSize(struct _XkbExtensionDeviceNotify,xkb_type,4,2,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,20,2,31563)
CheckMemberSize(struct _XkbExtensionDeviceNotify,device,4,2,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,device,24,2,31564)
CheckMemberSize(struct _XkbExtensionDeviceNotify,reason,4,2,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,28,2,31565)
CheckMemberSize(struct _XkbExtensionDeviceNotify,supported,4,2,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,32,2,31566)
CheckMemberSize(struct _XkbExtensionDeviceNotify,unsupported,4,2,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,36,2,31567)
CheckMemberSize(struct _XkbExtensionDeviceNotify,first_btn,4,2,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,40,2,31568)
CheckMemberSize(struct _XkbExtensionDeviceNotify,num_btns,4,2,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,44,2,31569)
CheckMemberSize(struct _XkbExtensionDeviceNotify,leds_defined,4,2,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,48,2,31570)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_state,4,2,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,52,2,31571)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_class,4,2,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,56,2,31572)
CheckMemberSize(struct _XkbExtensionDeviceNotify,led_id,4,2,31573)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,60,2,31573)
#else
Msg("Find size of _XkbExtensionDeviceNotify (9511)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9511,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbExtensionDeviceNotifyEvent,88, 9512, 12, 1.3, NULL, 9511, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbExtensionDeviceNotifyEvent,88, 9512, 11, 2.0, NULL, 9511, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbExtensionDeviceNotifyEvent,64, 9512, 10, 1.3, NULL, 9511, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbExtensionDeviceNotifyEvent,88, 9512, 9, 2.0, NULL, 9511, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbExtensionDeviceNotifyEvent,64, 9512, 6, 1.2, NULL, 9511, NULL)
#elif defined __ia64__
CheckTypeSize(XkbExtensionDeviceNotifyEvent,88, 9512, 3, 1.3, NULL, 9511, NULL)
#elif defined __i386__
CheckTypeSize(XkbExtensionDeviceNotifyEvent,64, 9512, 2, 1.2, NULL, 9511, NULL)
#else
Msg("Find size of XkbExtensionDeviceNotifyEvent (9512)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9511,NULL);\n",architecture,9512,0);
#endif

#if defined __s390x__
CheckTypeSize(union _XkbEvent,192, 9513, 12, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on S390X\n");
CheckOffset(union _XkbEvent,type,0,12,31574)
CheckOffset(union _XkbEvent,any,0,12,31575)
CheckOffset(union _XkbEvent,new_kbd,0,12,31576)
CheckOffset(union _XkbEvent,map,0,12,31577)
CheckOffset(union _XkbEvent,state,0,12,31578)
CheckOffset(union _XkbEvent,ctrls,0,12,31579)
CheckOffset(union _XkbEvent,indicators,0,12,31580)
CheckOffset(union _XkbEvent,names,0,12,31581)
CheckOffset(union _XkbEvent,compat,0,12,31582)
CheckOffset(union _XkbEvent,bell,0,12,31583)
CheckOffset(union _XkbEvent,message,0,12,31584)
CheckOffset(union _XkbEvent,accessx,0,12,31585)
CheckOffset(union _XkbEvent,device,0,12,31586)
CheckOffset(union _XkbEvent,core,0,12,31587)
#elif defined __x86_64__
CheckTypeSize(union _XkbEvent,192, 9513, 11, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on x86-64\n");
CheckOffset(union _XkbEvent,type,0,11,31574)
CheckOffset(union _XkbEvent,any,0,11,31575)
CheckOffset(union _XkbEvent,new_kbd,0,11,31576)
CheckOffset(union _XkbEvent,map,0,11,31577)
CheckOffset(union _XkbEvent,state,0,11,31578)
CheckOffset(union _XkbEvent,ctrls,0,11,31579)
CheckOffset(union _XkbEvent,indicators,0,11,31580)
CheckOffset(union _XkbEvent,names,0,11,31581)
CheckOffset(union _XkbEvent,compat,0,11,31582)
CheckOffset(union _XkbEvent,bell,0,11,31583)
CheckOffset(union _XkbEvent,message,0,11,31584)
CheckOffset(union _XkbEvent,accessx,0,11,31585)
CheckOffset(union _XkbEvent,device,0,11,31586)
CheckOffset(union _XkbEvent,core,0,11,31587)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(union _XkbEvent,96, 9513, 10, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on S390\n");
CheckOffset(union _XkbEvent,type,0,10,31574)
CheckOffset(union _XkbEvent,any,0,10,31575)
CheckOffset(union _XkbEvent,new_kbd,0,10,31576)
CheckOffset(union _XkbEvent,map,0,10,31577)
CheckOffset(union _XkbEvent,state,0,10,31578)
CheckOffset(union _XkbEvent,ctrls,0,10,31579)
CheckOffset(union _XkbEvent,indicators,0,10,31580)
CheckOffset(union _XkbEvent,names,0,10,31581)
CheckOffset(union _XkbEvent,compat,0,10,31582)
CheckOffset(union _XkbEvent,bell,0,10,31583)
CheckOffset(union _XkbEvent,message,0,10,31584)
CheckOffset(union _XkbEvent,accessx,0,10,31585)
CheckOffset(union _XkbEvent,device,0,10,31586)
CheckOffset(union _XkbEvent,core,0,10,31587)
#elif defined __powerpc64__
CheckTypeSize(union _XkbEvent,192, 9513, 9, 2.0, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on PPC64\n");
CheckOffset(union _XkbEvent,type,0,9,31574)
CheckOffset(union _XkbEvent,any,0,9,31575)
CheckOffset(union _XkbEvent,new_kbd,0,9,31576)
CheckOffset(union _XkbEvent,map,0,9,31577)
CheckOffset(union _XkbEvent,state,0,9,31578)
CheckOffset(union _XkbEvent,ctrls,0,9,31579)
CheckOffset(union _XkbEvent,indicators,0,9,31580)
CheckOffset(union _XkbEvent,names,0,9,31581)
CheckOffset(union _XkbEvent,compat,0,9,31582)
CheckOffset(union _XkbEvent,bell,0,9,31583)
CheckOffset(union _XkbEvent,message,0,9,31584)
CheckOffset(union _XkbEvent,accessx,0,9,31585)
CheckOffset(union _XkbEvent,device,0,9,31586)
CheckOffset(union _XkbEvent,core,0,9,31587)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(union _XkbEvent,96, 9513, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on PPC32\n");
CheckOffset(union _XkbEvent,type,0,6,31574)
CheckOffset(union _XkbEvent,any,0,6,31575)
CheckOffset(union _XkbEvent,new_kbd,0,6,31576)
CheckOffset(union _XkbEvent,map,0,6,31577)
CheckOffset(union _XkbEvent,state,0,6,31578)
CheckOffset(union _XkbEvent,ctrls,0,6,31579)
CheckOffset(union _XkbEvent,indicators,0,6,31580)
CheckOffset(union _XkbEvent,names,0,6,31581)
CheckOffset(union _XkbEvent,compat,0,6,31582)
CheckOffset(union _XkbEvent,bell,0,6,31583)
CheckOffset(union _XkbEvent,message,0,6,31584)
CheckOffset(union _XkbEvent,accessx,0,6,31585)
CheckOffset(union _XkbEvent,device,0,6,31586)
CheckOffset(union _XkbEvent,core,0,6,31587)
#elif defined __ia64__
CheckTypeSize(union _XkbEvent,192, 9513, 3, 1.3, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on IA64\n");
CheckOffset(union _XkbEvent,type,0,3,31574)
CheckOffset(union _XkbEvent,any,0,3,31575)
CheckOffset(union _XkbEvent,new_kbd,0,3,31576)
CheckOffset(union _XkbEvent,map,0,3,31577)
CheckOffset(union _XkbEvent,state,0,3,31578)
CheckOffset(union _XkbEvent,ctrls,0,3,31579)
CheckOffset(union _XkbEvent,indicators,0,3,31580)
CheckOffset(union _XkbEvent,names,0,3,31581)
CheckOffset(union _XkbEvent,compat,0,3,31582)
CheckOffset(union _XkbEvent,bell,0,3,31583)
CheckOffset(union _XkbEvent,message,0,3,31584)
CheckOffset(union _XkbEvent,accessx,0,3,31585)
CheckOffset(union _XkbEvent,device,0,3,31586)
CheckOffset(union _XkbEvent,core,0,3,31587)
#elif defined __i386__
CheckTypeSize(union _XkbEvent,96, 9513, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on IA32\n");
CheckOffset(union _XkbEvent,type,0,2,31574)
CheckOffset(union _XkbEvent,any,0,2,31575)
CheckOffset(union _XkbEvent,new_kbd,0,2,31576)
CheckOffset(union _XkbEvent,map,0,2,31577)
CheckOffset(union _XkbEvent,state,0,2,31578)
CheckOffset(union _XkbEvent,ctrls,0,2,31579)
CheckOffset(union _XkbEvent,indicators,0,2,31580)
CheckOffset(union _XkbEvent,names,0,2,31581)
CheckOffset(union _XkbEvent,compat,0,2,31582)
CheckOffset(union _XkbEvent,bell,0,2,31583)
CheckOffset(union _XkbEvent,message,0,2,31584)
CheckOffset(union _XkbEvent,accessx,0,2,31585)
CheckOffset(union _XkbEvent,device,0,2,31586)
CheckOffset(union _XkbEvent,core,0,2,31587)
#else
Msg("Find size of _XkbEvent (9513)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,9513,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbEvent,192, 9514, 12, 1.3, NULL, 9513, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbEvent,192, 9514, 11, 2.0, NULL, 9513, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbEvent,96, 9514, 10, 1.3, NULL, 9513, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbEvent,192, 9514, 9, 2.0, NULL, 9513, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbEvent,96, 9514, 6, 1.2, NULL, 9513, NULL)
#elif defined __ia64__
CheckTypeSize(XkbEvent,192, 9514, 3, 1.3, NULL, 9513, NULL)
#elif defined __i386__
CheckTypeSize(XkbEvent,96, 9514, 2, 1.2, NULL, 9513, NULL)
#else
Msg("Find size of XkbEvent (9514)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9513,NULL);\n",architecture,9514,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbKbdDpyStatePtr,8, 9518, 12, 1.3, NULL, 9517, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbKbdDpyStatePtr,8, 9518, 11, 2.0, NULL, 9517, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbKbdDpyStatePtr,4, 9518, 10, 1.3, NULL, 9517, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbKbdDpyStatePtr,8, 9518, 9, 2.0, NULL, 9517, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbKbdDpyStatePtr,4, 9518, 6, 1.2, NULL, 9517, NULL)
#elif defined __ia64__
CheckTypeSize(XkbKbdDpyStatePtr,8, 9518, 3, 1.3, NULL, 9517, NULL)
#elif defined __i386__
CheckTypeSize(XkbKbdDpyStatePtr,4, 9518, 2, 1.2, NULL, 9517, NULL)
#else
Msg("Find size of XkbKbdDpyStatePtr (9518)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9517,NULL);\n",architecture,9518,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbInternAtomFunc,8, 9520, 12, 1.3, NULL, 9519, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbInternAtomFunc,8, 9520, 11, 2.0, NULL, 9519, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbInternAtomFunc,4, 9520, 10, 1.3, NULL, 9519, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbInternAtomFunc,8, 9520, 9, 2.0, NULL, 9519, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbInternAtomFunc,4, 9520, 6, 1.2, NULL, 9519, NULL)
#elif defined __ia64__
CheckTypeSize(XkbInternAtomFunc,8, 9520, 3, 1.3, NULL, 9519, NULL)
#elif defined __i386__
CheckTypeSize(XkbInternAtomFunc,4, 9520, 2, 1.2, NULL, 9519, NULL)
#else
Msg("Find size of XkbInternAtomFunc (9520)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9519,NULL);\n",architecture,9520,0);
#endif

#if defined __s390x__
CheckTypeSize(XkbGetAtomNameFunc,8, 9522, 12, 1.3, NULL, 9521, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbGetAtomNameFunc,8, 9522, 11, 2.0, NULL, 9521, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbGetAtomNameFunc,4, 9522, 10, 1.3, NULL, 9521, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbGetAtomNameFunc,8, 9522, 9, 2.0, NULL, 9521, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbGetAtomNameFunc,4, 9522, 6, 1.2, NULL, 9521, NULL)
#elif defined __ia64__
CheckTypeSize(XkbGetAtomNameFunc,8, 9522, 3, 1.3, NULL, 9521, NULL)
#elif defined __i386__
CheckTypeSize(XkbGetAtomNameFunc,4, 9522, 2, 1.2, NULL, 9521, NULL)
#else
Msg("Find size of XkbGetAtomNameFunc (9522)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9521, NULL);\n",architecture,9522,0);
#endif

#if defined __s390x__
/* S390X */
typedef Atom (*XkbInternAtomFunc_db)(Display *, const char *, int);
CheckFunctionTypedef(XkbInternAtomFunc,XkbInternAtomFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef Atom (*XkbInternAtomFunc_db)(Display *, const char *, int);
CheckFunctionTypedef(XkbInternAtomFunc,XkbInternAtomFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef Atom (*XkbInternAtomFunc_db)(Display *, const char *, int);
CheckFunctionTypedef(XkbInternAtomFunc,XkbInternAtomFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef Atom (*XkbInternAtomFunc_db)(Display *, const char *, int);
CheckFunctionTypedef(XkbInternAtomFunc,XkbInternAtomFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef Atom (*XkbInternAtomFunc_db)(Display *, const char *, int);
CheckFunctionTypedef(XkbInternAtomFunc,XkbInternAtomFunc_db);
#elif defined __ia64__
/* IA64 */
typedef Atom (*XkbInternAtomFunc_db)(Display *, const char *, int);
CheckFunctionTypedef(XkbInternAtomFunc,XkbInternAtomFunc_db);
#elif defined __i386__
/* IA32 */
typedef Atom (*XkbInternAtomFunc_db)(Display *, const char *, int);
CheckFunctionTypedef(XkbInternAtomFunc,XkbInternAtomFunc_db);
#elif defined __s390x__
/* S390X */
typedef char * (*XkbGetAtomNameFunc_db)(Display *, Atom);
CheckFunctionTypedef(XkbGetAtomNameFunc,XkbGetAtomNameFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef char * (*XkbGetAtomNameFunc_db)(Display *, Atom);
CheckFunctionTypedef(XkbGetAtomNameFunc,XkbGetAtomNameFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef char * (*XkbGetAtomNameFunc_db)(Display *, Atom);
CheckFunctionTypedef(XkbGetAtomNameFunc,XkbGetAtomNameFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef char * (*XkbGetAtomNameFunc_db)(Display *, Atom);
CheckFunctionTypedef(XkbGetAtomNameFunc,XkbGetAtomNameFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef char * (*XkbGetAtomNameFunc_db)(Display *, Atom);
CheckFunctionTypedef(XkbGetAtomNameFunc,XkbGetAtomNameFunc_db);
#elif defined __ia64__
/* IA64 */
typedef char * (*XkbGetAtomNameFunc_db)(Display *, Atom);
CheckFunctionTypedef(XkbGetAtomNameFunc,XkbGetAtomNameFunc_db);
#elif defined __i386__
/* IA32 */
typedef char * (*XkbGetAtomNameFunc_db)(Display *, Atom);
CheckFunctionTypedef(XkbGetAtomNameFunc,XkbGetAtomNameFunc_db);
#endif

extern int XkbAllocClientMap_db(XkbDescPtr, unsigned int, unsigned int);
CheckInterfacedef(XkbAllocClientMap,XkbAllocClientMap_db);
extern int XkbAllocCompatMap_db(XkbDescPtr, unsigned int, unsigned int);
CheckInterfacedef(XkbAllocCompatMap,XkbAllocCompatMap_db);
extern int XkbAllocControls_db(XkbDescPtr, unsigned int);
CheckInterfacedef(XkbAllocControls,XkbAllocControls_db);
extern int XkbAllocIndicatorMaps_db(XkbDescPtr);
CheckInterfacedef(XkbAllocIndicatorMaps,XkbAllocIndicatorMaps_db);
extern XkbDescPtr XkbAllocKeyboard_db(void);
CheckInterfacedef(XkbAllocKeyboard,XkbAllocKeyboard_db);
extern int XkbAllocNames_db(XkbDescPtr, unsigned int, int, int);
CheckInterfacedef(XkbAllocNames,XkbAllocNames_db);
extern int XkbAllocServerMap_db(XkbDescPtr, unsigned int, unsigned int);
CheckInterfacedef(XkbAllocServerMap,XkbAllocServerMap_db);
extern int XkbApplyCompatMapToKey_db(XkbDescPtr, KeyCode, XkbChangesPtr);
CheckInterfacedef(XkbApplyCompatMapToKey,XkbApplyCompatMapToKey_db);
extern int XkbBell_db(Display *, Window, int, Atom);
CheckInterfacedef(XkbBell,XkbBell_db);
extern int XkbBellEvent_db(Display *, Window, int, Atom);
CheckInterfacedef(XkbBellEvent,XkbBellEvent_db);
extern int XkbChangeEnabledControls_db(Display *, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XkbChangeEnabledControls,XkbChangeEnabledControls_db);
extern int XkbChangeMap_db(Display *, XkbDescPtr, XkbMapChangesPtr);
CheckInterfacedef(XkbChangeMap,XkbChangeMap_db);
extern int XkbChangeNames_db(Display *, XkbDescPtr, XkbNameChangesPtr);
CheckInterfacedef(XkbChangeNames,XkbChangeNames_db);
extern int XkbChangeTypesOfKey_db(XkbDescPtr, int, int, unsigned int, int *, XkbMapChangesPtr);
CheckInterfacedef(XkbChangeTypesOfKey,XkbChangeTypesOfKey_db);
extern int XkbComputeEffectiveMap_db(XkbDescPtr, XkbKeyTypePtr, unsigned char *);
CheckInterfacedef(XkbComputeEffectiveMap,XkbComputeEffectiveMap_db);
extern int XkbCopyKeyType_db(XkbKeyTypePtr, XkbKeyTypePtr);
CheckInterfacedef(XkbCopyKeyType,XkbCopyKeyType_db);
extern int XkbCopyKeyTypes_db(XkbKeyTypePtr, XkbKeyTypePtr, int);
CheckInterfacedef(XkbCopyKeyTypes,XkbCopyKeyTypes_db);
extern int XkbForceBell_db(Display *, int);
CheckInterfacedef(XkbForceBell,XkbForceBell_db);
extern void XkbFreeClientMap_db(XkbDescPtr, unsigned int, int);
CheckInterfacedef(XkbFreeClientMap,XkbFreeClientMap_db);
extern void XkbFreeCompatMap_db(XkbDescPtr, unsigned int, int);
CheckInterfacedef(XkbFreeCompatMap,XkbFreeCompatMap_db);
extern void XkbFreeComponentList_db(XkbComponentListPtr);
CheckInterfacedef(XkbFreeComponentList,XkbFreeComponentList_db);
extern void XkbFreeControls_db(XkbDescPtr, unsigned int, int);
CheckInterfacedef(XkbFreeControls,XkbFreeControls_db);
extern void XkbFreeIndicatorMaps_db(XkbDescPtr);
CheckInterfacedef(XkbFreeIndicatorMaps,XkbFreeIndicatorMaps_db);
extern void XkbFreeKeyboard_db(XkbDescPtr, unsigned int, int);
CheckInterfacedef(XkbFreeKeyboard,XkbFreeKeyboard_db);
extern void XkbFreeNames_db(XkbDescPtr, unsigned int, int);
CheckInterfacedef(XkbFreeNames,XkbFreeNames_db);
extern void XkbFreeServerMap_db(XkbDescPtr, unsigned int, int);
CheckInterfacedef(XkbFreeServerMap,XkbFreeServerMap_db);
extern int XkbGetAutoRepeatRate_db(Display *, unsigned int, unsigned int *, unsigned int *);
CheckInterfacedef(XkbGetAutoRepeatRate,XkbGetAutoRepeatRate_db);
extern int XkbGetCompatMap_db(Display *, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetCompatMap,XkbGetCompatMap_db);
extern int XkbGetControls_db(Display *, unsigned long int, XkbDescPtr);
CheckInterfacedef(XkbGetControls,XkbGetControls_db);
extern int XkbGetIndicatorMap_db(Display *, unsigned long int, XkbDescPtr);
CheckInterfacedef(XkbGetIndicatorMap,XkbGetIndicatorMap_db);
extern int XkbGetIndicatorState_db(Display *, unsigned int, unsigned int *);
CheckInterfacedef(XkbGetIndicatorState,XkbGetIndicatorState_db);
extern int XkbGetKeyActions_db(Display *, unsigned int, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetKeyActions,XkbGetKeyActions_db);
extern int XkbGetKeyBehaviors_db(Display *, unsigned int, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetKeyBehaviors,XkbGetKeyBehaviors_db);
extern int XkbGetKeyExplicitComponents_db(Display *, unsigned int, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetKeyExplicitComponents,XkbGetKeyExplicitComponents_db);
extern int XkbGetKeyModifierMap_db(Display *, unsigned int, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetKeyModifierMap,XkbGetKeyModifierMap_db);
extern int XkbGetKeySyms_db(Display *, unsigned int, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetKeySyms,XkbGetKeySyms_db);
extern int XkbGetKeyTypes_db(Display *, unsigned int, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetKeyTypes,XkbGetKeyTypes_db);
extern XkbDescPtr XkbGetKeyboard_db(Display *, unsigned int, unsigned int);
CheckInterfacedef(XkbGetKeyboard,XkbGetKeyboard_db);
extern XkbDescPtr XkbGetKeyboardByName_db(Display *, unsigned int, XkbComponentNamesPtr, unsigned int, unsigned int, int);
CheckInterfacedef(XkbGetKeyboardByName,XkbGetKeyboardByName_db);
extern XkbDescPtr XkbGetMap_db(Display *, unsigned int, unsigned int);
CheckInterfacedef(XkbGetMap,XkbGetMap_db);
extern int XkbGetMapChanges_db(Display *, XkbDescPtr, XkbMapChangesPtr);
CheckInterfacedef(XkbGetMapChanges,XkbGetMapChanges_db);
extern int XkbGetNamedIndicator_db(Display *, Atom, int *, int *, XkbIndicatorMapPtr, int *);
CheckInterfacedef(XkbGetNamedIndicator,XkbGetNamedIndicator_db);
extern int XkbGetNames_db(Display *, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetNames,XkbGetNames_db);
extern int XkbGetState_db(Display *, unsigned int, XkbStatePtr);
CheckInterfacedef(XkbGetState,XkbGetState_db);
extern int XkbGetUpdatedMap_db(Display *, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetUpdatedMap,XkbGetUpdatedMap_db);
extern int XkbGetVirtualMods_db(Display *, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbGetVirtualMods,XkbGetVirtualMods_db);
extern unsigned int XkbGetXlibControls_db(Display *);
CheckInterfacedef(XkbGetXlibControls,XkbGetXlibControls_db);
extern int XkbIgnoreExtension_db(int);
CheckInterfacedef(XkbIgnoreExtension,XkbIgnoreExtension_db);
extern int XkbInitCanonicalKeyTypes_db(XkbDescPtr, unsigned int, int);
CheckInterfacedef(XkbInitCanonicalKeyTypes,XkbInitCanonicalKeyTypes_db);
extern int XkbKeyTypesForCoreSymbols_db(XkbDescPtr, int, KeySym *, unsigned int, int *, KeySym *);
CheckInterfacedef(XkbKeyTypesForCoreSymbols,XkbKeyTypesForCoreSymbols_db);
extern KeySym XkbKeycodeToKeysym_db(Display *, unsigned int, int, int);
CheckInterfacedef(XkbKeycodeToKeysym,XkbKeycodeToKeysym_db);
extern unsigned int XkbKeysymToModifiers_db(Display *, KeySym);
CheckInterfacedef(XkbKeysymToModifiers,XkbKeysymToModifiers_db);
extern int XkbLatchGroup_db(Display *, unsigned int, unsigned int);
CheckInterfacedef(XkbLatchGroup,XkbLatchGroup_db);
extern int XkbLatchModifiers_db(Display *, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XkbLatchModifiers,XkbLatchModifiers_db);
extern int XkbLibraryVersion_db(int *, int *);
CheckInterfacedef(XkbLibraryVersion,XkbLibraryVersion_db);
extern XkbComponentListPtr XkbListComponents_db(Display *, unsigned int, XkbComponentNamesPtr, int *);
CheckInterfacedef(XkbListComponents,XkbListComponents_db);
extern int XkbLockGroup_db(Display *, unsigned int, unsigned int);
CheckInterfacedef(XkbLockGroup,XkbLockGroup_db);
extern int XkbLockModifiers_db(Display *, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XkbLockModifiers,XkbLockModifiers_db);
extern int XkbLookupKeyBinding_db(Display *, KeySym, unsigned int, char *, int, int *);
CheckInterfacedef(XkbLookupKeyBinding,XkbLookupKeyBinding_db);
extern int XkbLookupKeySym_db(Display *, KeyCode, unsigned int, unsigned int *, KeySym *);
CheckInterfacedef(XkbLookupKeySym,XkbLookupKeySym_db);
extern void XkbNoteControlsChanges_db(XkbControlsChangesPtr, XkbControlsNotifyEvent *, unsigned int);
CheckInterfacedef(XkbNoteControlsChanges,XkbNoteControlsChanges_db);
extern void XkbNoteMapChanges_db(XkbMapChangesPtr, XkbMapNotifyEvent *, unsigned int);
CheckInterfacedef(XkbNoteMapChanges,XkbNoteMapChanges_db);
extern void XkbNoteNameChanges_db(XkbNameChangesPtr, XkbNamesNotifyEvent *, unsigned int);
CheckInterfacedef(XkbNoteNameChanges,XkbNoteNameChanges_db);
extern Display * XkbOpenDisplay_db(char *, int *, int *, int *, int *, int *);
CheckInterfacedef(XkbOpenDisplay,XkbOpenDisplay_db);
extern int XkbQueryExtension_db(Display *, int *, int *, int *, int *, int *);
CheckInterfacedef(XkbQueryExtension,XkbQueryExtension_db);
extern int XkbRefreshKeyboardMapping_db(XkbMapNotifyEvent *);
CheckInterfacedef(XkbRefreshKeyboardMapping,XkbRefreshKeyboardMapping_db);
extern XkbAction * XkbResizeKeyActions_db(XkbDescPtr, int, int);
CheckInterfacedef(XkbResizeKeyActions,XkbResizeKeyActions_db);
extern KeySym * XkbResizeKeySyms_db(XkbDescPtr, int, int);
CheckInterfacedef(XkbResizeKeySyms,XkbResizeKeySyms_db);
extern int XkbResizeKeyType_db(XkbDescPtr, int, int, int, int);
CheckInterfacedef(XkbResizeKeyType,XkbResizeKeyType_db);
extern int XkbSelectEventDetails_db(Display *, unsigned int, unsigned int, unsigned long int, unsigned long int);
CheckInterfacedef(XkbSelectEventDetails,XkbSelectEventDetails_db);
extern int XkbSelectEvents_db(Display *, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XkbSelectEvents,XkbSelectEvents_db);
extern void XkbSetAtomFuncs_db(XkbInternAtomFunc, XkbGetAtomNameFunc);
CheckInterfacedef(XkbSetAtomFuncs,XkbSetAtomFuncs_db);
extern int XkbSetAutoRepeatRate_db(Display *, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XkbSetAutoRepeatRate,XkbSetAutoRepeatRate_db);
extern int XkbSetAutoResetControls_db(Display *, unsigned int, unsigned int *, unsigned int *);
CheckInterfacedef(XkbSetAutoResetControls,XkbSetAutoResetControls_db);
extern int XkbSetCompatMap_db(Display *, unsigned int, XkbDescPtr, int);
CheckInterfacedef(XkbSetCompatMap,XkbSetCompatMap_db);
extern int XkbSetControls_db(Display *, unsigned long int, XkbDescPtr);
CheckInterfacedef(XkbSetControls,XkbSetControls_db);
extern int XkbSetDebuggingFlags_db(Display *, unsigned int, unsigned int, char *, unsigned int, unsigned int, unsigned int *, unsigned int *);
CheckInterfacedef(XkbSetDebuggingFlags,XkbSetDebuggingFlags_db);
extern int XkbSetDetectableAutoRepeat_db(Display *, int, int *);
CheckInterfacedef(XkbSetDetectableAutoRepeat,XkbSetDetectableAutoRepeat_db);
extern int XkbSetIgnoreLockMods_db(Display *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XkbSetIgnoreLockMods,XkbSetIgnoreLockMods_db);
extern int XkbSetIndicatorMap_db(Display *, unsigned long int, XkbDescPtr);
CheckInterfacedef(XkbSetIndicatorMap,XkbSetIndicatorMap_db);
extern int XkbSetMap_db(Display *, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbSetMap,XkbSetMap_db);
extern int XkbSetNamedIndicator_db(Display *, Atom, int, int, int, XkbIndicatorMapPtr);
CheckInterfacedef(XkbSetNamedIndicator,XkbSetNamedIndicator_db);
extern int XkbSetNames_db(Display *, unsigned int, unsigned int, unsigned int, XkbDescPtr);
CheckInterfacedef(XkbSetNames,XkbSetNames_db);
extern int XkbSetServerInternalMods_db(Display *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
CheckInterfacedef(XkbSetServerInternalMods,XkbSetServerInternalMods_db);
extern unsigned int XkbSetXlibControls_db(Display *, unsigned int, unsigned int);
CheckInterfacedef(XkbSetXlibControls,XkbSetXlibControls_db);
extern char XkbToControl_db(char);
CheckInterfacedef(XkbToControl,XkbToControl_db);
extern int XkbTranslateKeyCode_db(XkbDescPtr, KeyCode, unsigned int, unsigned int *, KeySym *);
CheckInterfacedef(XkbTranslateKeyCode,XkbTranslateKeyCode_db);
extern int XkbTranslateKeySym_db(Display *, KeySym *, unsigned int, char *, int, int *);
CheckInterfacedef(XkbTranslateKeySym,XkbTranslateKeySym_db);
extern int XkbUpdateMapFromCore_db(XkbDescPtr, KeyCode, int, int, KeySym *, XkbChangesPtr);
CheckInterfacedef(XkbUpdateMapFromCore,XkbUpdateMapFromCore_db);
extern int XkbUseExtension_db(Display *, int *, int *);
CheckInterfacedef(XkbUseExtension,XkbUseExtension_db);
extern int XkbVirtualModsToReal_db(XkbDescPtr, unsigned int, unsigned int *);
CheckInterfacedef(XkbVirtualModsToReal,XkbVirtualModsToReal_db);
extern int XkbGetPerClientControls_db(Display *, unsigned int *);
CheckInterfacedef(XkbGetPerClientControls,XkbGetPerClientControls_db);
extern int XkbSetPerClientControls_db(Display *, unsigned int, unsigned int *);
CheckInterfacedef(XkbSetPerClientControls,XkbSetPerClientControls_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/XKBlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
