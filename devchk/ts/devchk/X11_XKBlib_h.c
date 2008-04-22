/*
 * Test of X11/XKBlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#ifdef TET_TEST
Msg("Checking data structures in X11/XKBlib.h\n");
#endif

printf("Checking data structures in X11/XKBlib.h\n");
#if 1
CheckTypeSize(struct _XkbAnyEvent,0, 9489, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbAnyEvent on All\n");
CheckOffset(struct _XkbAnyEvent,type,0,1,31391)
CheckOffset(struct _XkbAnyEvent,serial,0,1,31392)
CheckOffset(struct _XkbAnyEvent,send_event,0,1,31393)
CheckOffset(struct _XkbAnyEvent,display,0,1,31394)
CheckOffset(struct _XkbAnyEvent,time,0,1,31395)
CheckOffset(struct _XkbAnyEvent,xkb_type,0,1,31396)
CheckOffset(struct _XkbAnyEvent,device,0,1,31397)
#endif

#if 1
CheckTypeSize(XkbAnyEvent,0, 9490, 1, 1.2, NULL, 9489, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbNewKeyboardNotify,0, 9491, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbNewKeyboardNotify on All\n");
CheckOffset(struct _XkbNewKeyboardNotify,type,0,1,31398)
CheckOffset(struct _XkbNewKeyboardNotify,serial,0,1,31399)
CheckOffset(struct _XkbNewKeyboardNotify,send_event,0,1,31400)
CheckOffset(struct _XkbNewKeyboardNotify,display,0,1,31401)
CheckOffset(struct _XkbNewKeyboardNotify,time,0,1,31402)
CheckOffset(struct _XkbNewKeyboardNotify,xkb_type,0,1,31403)
CheckOffset(struct _XkbNewKeyboardNotify,device,0,1,31404)
CheckOffset(struct _XkbNewKeyboardNotify,old_device,0,1,31405)
CheckOffset(struct _XkbNewKeyboardNotify,min_key_code,0,1,31406)
CheckOffset(struct _XkbNewKeyboardNotify,max_key_code,0,1,31407)
CheckOffset(struct _XkbNewKeyboardNotify,old_min_key_code,0,1,31408)
CheckOffset(struct _XkbNewKeyboardNotify,old_max_key_code,0,1,31409)
CheckOffset(struct _XkbNewKeyboardNotify,changed,0,1,31410)
CheckOffset(struct _XkbNewKeyboardNotify,req_major,0,1,31411)
CheckOffset(struct _XkbNewKeyboardNotify,req_minor,0,1,31412)
#endif

#if 1
CheckTypeSize(XkbNewKeyboardNotifyEvent,0, 9492, 1, 1.2, NULL, 9491, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbMapNotifyEvent,0, 9493, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbMapNotifyEvent on All\n");
CheckOffset(struct _XkbMapNotifyEvent,type,0,1,31413)
CheckOffset(struct _XkbMapNotifyEvent,serial,0,1,31414)
CheckOffset(struct _XkbMapNotifyEvent,send_event,0,1,31415)
CheckOffset(struct _XkbMapNotifyEvent,display,0,1,31416)
CheckOffset(struct _XkbMapNotifyEvent,time,0,1,31417)
CheckOffset(struct _XkbMapNotifyEvent,xkb_type,0,1,31418)
CheckOffset(struct _XkbMapNotifyEvent,device,0,1,31419)
CheckOffset(struct _XkbMapNotifyEvent,changed,0,1,31420)
CheckOffset(struct _XkbMapNotifyEvent,flags,0,1,31421)
CheckOffset(struct _XkbMapNotifyEvent,first_type,0,1,31422)
CheckOffset(struct _XkbMapNotifyEvent,num_types,0,1,31423)
CheckOffset(struct _XkbMapNotifyEvent,min_key_code,0,1,31424)
CheckOffset(struct _XkbMapNotifyEvent,max_key_code,0,1,31425)
CheckOffset(struct _XkbMapNotifyEvent,first_key_sym,0,1,31426)
CheckOffset(struct _XkbMapNotifyEvent,first_key_act,0,1,31427)
CheckOffset(struct _XkbMapNotifyEvent,first_key_behavior,0,1,31428)
CheckOffset(struct _XkbMapNotifyEvent,first_key_explicit,0,1,31429)
CheckOffset(struct _XkbMapNotifyEvent,first_modmap_key,0,1,31430)
CheckOffset(struct _XkbMapNotifyEvent,first_vmodmap_key,0,1,31431)
CheckOffset(struct _XkbMapNotifyEvent,num_key_syms,0,1,31432)
CheckOffset(struct _XkbMapNotifyEvent,num_key_acts,0,1,31433)
CheckOffset(struct _XkbMapNotifyEvent,num_key_behaviors,0,1,31434)
CheckOffset(struct _XkbMapNotifyEvent,num_key_explicit,0,1,31435)
CheckOffset(struct _XkbMapNotifyEvent,num_modmap_keys,0,1,31436)
CheckOffset(struct _XkbMapNotifyEvent,num_vmodmap_keys,0,1,31437)
CheckOffset(struct _XkbMapNotifyEvent,vmods,0,1,31438)
#endif

#if 1
CheckTypeSize(XkbMapNotifyEvent,0, 9494, 1, 1.2, NULL, 9493, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbStateNotifyEvent,0, 9495, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbStateNotifyEvent on All\n");
CheckOffset(struct _XkbStateNotifyEvent,type,0,1,31439)
CheckOffset(struct _XkbStateNotifyEvent,serial,0,1,31440)
CheckOffset(struct _XkbStateNotifyEvent,send_event,0,1,31441)
CheckOffset(struct _XkbStateNotifyEvent,display,0,1,31442)
CheckOffset(struct _XkbStateNotifyEvent,time,0,1,31443)
CheckOffset(struct _XkbStateNotifyEvent,xkb_type,0,1,31444)
CheckOffset(struct _XkbStateNotifyEvent,device,0,1,31445)
CheckOffset(struct _XkbStateNotifyEvent,changed,0,1,31446)
CheckOffset(struct _XkbStateNotifyEvent,group,0,1,31447)
CheckOffset(struct _XkbStateNotifyEvent,base_group,0,1,31448)
CheckOffset(struct _XkbStateNotifyEvent,latched_group,0,1,31449)
CheckOffset(struct _XkbStateNotifyEvent,locked_group,0,1,31450)
CheckOffset(struct _XkbStateNotifyEvent,mods,0,1,31451)
CheckOffset(struct _XkbStateNotifyEvent,base_mods,0,1,31452)
CheckOffset(struct _XkbStateNotifyEvent,latched_mods,0,1,31453)
CheckOffset(struct _XkbStateNotifyEvent,locked_mods,0,1,31454)
CheckOffset(struct _XkbStateNotifyEvent,compat_state,0,1,31455)
CheckOffset(struct _XkbStateNotifyEvent,grab_mods,0,1,31456)
CheckOffset(struct _XkbStateNotifyEvent,compat_grab_mods,0,1,31457)
CheckOffset(struct _XkbStateNotifyEvent,lookup_mods,0,1,31458)
CheckOffset(struct _XkbStateNotifyEvent,compat_lookup_mods,0,1,31459)
CheckOffset(struct _XkbStateNotifyEvent,ptr_buttons,0,1,31460)
CheckOffset(struct _XkbStateNotifyEvent,keycode,0,1,31461)
CheckOffset(struct _XkbStateNotifyEvent,event_type,0,1,31462)
CheckOffset(struct _XkbStateNotifyEvent,req_major,0,1,31463)
CheckOffset(struct _XkbStateNotifyEvent,req_minor,0,1,31464)
#endif

#if 1
CheckTypeSize(XkbStateNotifyEvent,0, 9496, 1, 1.2, NULL, 9495, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbControlsNotify,0, 9497, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbControlsNotify on All\n");
CheckOffset(struct _XkbControlsNotify,type,0,1,31465)
CheckOffset(struct _XkbControlsNotify,serial,0,1,31466)
CheckOffset(struct _XkbControlsNotify,send_event,0,1,31467)
CheckOffset(struct _XkbControlsNotify,display,0,1,31468)
CheckOffset(struct _XkbControlsNotify,time,0,1,31469)
CheckOffset(struct _XkbControlsNotify,xkb_type,0,1,31470)
CheckOffset(struct _XkbControlsNotify,device,0,1,31471)
CheckOffset(struct _XkbControlsNotify,changed_ctrls,0,1,31472)
CheckOffset(struct _XkbControlsNotify,enabled_ctrls,0,1,31473)
CheckOffset(struct _XkbControlsNotify,enabled_ctrl_changes,0,1,31474)
CheckOffset(struct _XkbControlsNotify,num_groups,0,1,31475)
CheckOffset(struct _XkbControlsNotify,keycode,0,1,31476)
CheckOffset(struct _XkbControlsNotify,event_type,0,1,31477)
CheckOffset(struct _XkbControlsNotify,req_major,0,1,31478)
CheckOffset(struct _XkbControlsNotify,req_minor,0,1,31479)
#endif

#if 1
CheckTypeSize(XkbControlsNotifyEvent,0, 9498, 1, 1.2, NULL, 9497, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbIndicatorNotify,0, 9499, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbIndicatorNotify on All\n");
CheckOffset(struct _XkbIndicatorNotify,type,0,1,31480)
CheckOffset(struct _XkbIndicatorNotify,serial,0,1,31481)
CheckOffset(struct _XkbIndicatorNotify,send_event,0,1,31482)
CheckOffset(struct _XkbIndicatorNotify,display,0,1,31483)
CheckOffset(struct _XkbIndicatorNotify,time,0,1,31484)
CheckOffset(struct _XkbIndicatorNotify,xkb_type,0,1,31485)
CheckOffset(struct _XkbIndicatorNotify,device,0,1,31486)
CheckOffset(struct _XkbIndicatorNotify,changed,0,1,31487)
CheckOffset(struct _XkbIndicatorNotify,state,0,1,31488)
#endif

#if 1
CheckTypeSize(XkbIndicatorNotifyEvent,0, 9500, 1, 1.2, NULL, 9499, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbNamesNotify,0, 9501, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbNamesNotify on All\n");
CheckOffset(struct _XkbNamesNotify,type,0,1,31489)
CheckOffset(struct _XkbNamesNotify,serial,0,1,31490)
CheckOffset(struct _XkbNamesNotify,send_event,0,1,31491)
CheckOffset(struct _XkbNamesNotify,display,0,1,31492)
CheckOffset(struct _XkbNamesNotify,time,0,1,31493)
CheckOffset(struct _XkbNamesNotify,xkb_type,0,1,31494)
CheckOffset(struct _XkbNamesNotify,device,0,1,31495)
CheckOffset(struct _XkbNamesNotify,changed,0,1,31496)
CheckOffset(struct _XkbNamesNotify,first_type,0,1,31497)
CheckOffset(struct _XkbNamesNotify,num_types,0,1,31498)
CheckOffset(struct _XkbNamesNotify,first_lvl,0,1,31499)
CheckOffset(struct _XkbNamesNotify,num_lvls,0,1,31500)
CheckOffset(struct _XkbNamesNotify,num_aliases,0,1,31501)
CheckOffset(struct _XkbNamesNotify,num_radio_groups,0,1,31502)
CheckOffset(struct _XkbNamesNotify,changed_vmods,0,1,31503)
CheckOffset(struct _XkbNamesNotify,changed_groups,0,1,31504)
CheckOffset(struct _XkbNamesNotify,changed_indicators,0,1,31505)
CheckOffset(struct _XkbNamesNotify,first_key,0,1,31506)
CheckOffset(struct _XkbNamesNotify,num_keys,0,1,31507)
#endif

#if 1
CheckTypeSize(XkbNamesNotifyEvent,0, 9502, 1, 1.2, NULL, 9501, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbCompatMapNotify,0, 9503, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbCompatMapNotify on All\n");
CheckOffset(struct _XkbCompatMapNotify,type,0,1,31508)
CheckOffset(struct _XkbCompatMapNotify,serial,0,1,31509)
CheckOffset(struct _XkbCompatMapNotify,send_event,0,1,31510)
CheckOffset(struct _XkbCompatMapNotify,display,0,1,31511)
CheckOffset(struct _XkbCompatMapNotify,time,0,1,31512)
CheckOffset(struct _XkbCompatMapNotify,xkb_type,0,1,31513)
CheckOffset(struct _XkbCompatMapNotify,device,0,1,31514)
CheckOffset(struct _XkbCompatMapNotify,changed_groups,0,1,31515)
CheckOffset(struct _XkbCompatMapNotify,first_si,0,1,31516)
CheckOffset(struct _XkbCompatMapNotify,num_si,0,1,31517)
CheckOffset(struct _XkbCompatMapNotify,num_total_si,0,1,31518)
#endif

#if 1
CheckTypeSize(XkbCompatMapNotifyEvent,0, 9504, 1, 1.2, NULL, 9503, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbBellNotify,0, 9505, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbBellNotify on All\n");
CheckOffset(struct _XkbBellNotify,type,0,1,31519)
CheckOffset(struct _XkbBellNotify,serial,0,1,31520)
CheckOffset(struct _XkbBellNotify,send_event,0,1,31521)
CheckOffset(struct _XkbBellNotify,display,0,1,31522)
CheckOffset(struct _XkbBellNotify,time,0,1,31523)
CheckOffset(struct _XkbBellNotify,xkb_type,0,1,31524)
CheckOffset(struct _XkbBellNotify,device,0,1,31525)
CheckOffset(struct _XkbBellNotify,percent,0,1,31526)
CheckOffset(struct _XkbBellNotify,pitch,0,1,31527)
CheckOffset(struct _XkbBellNotify,duration,0,1,31528)
CheckOffset(struct _XkbBellNotify,bell_class,0,1,31529)
CheckOffset(struct _XkbBellNotify,bell_id,0,1,31530)
CheckOffset(struct _XkbBellNotify,name,0,1,31531)
CheckOffset(struct _XkbBellNotify,window,0,1,31532)
CheckOffset(struct _XkbBellNotify,event_only,0,1,31533)
#endif

#if 1
CheckTypeSize(XkbBellNotifyEvent,0, 9506, 1, 1.2, NULL, 9505, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbActionMessage,0, 9507, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbActionMessage on All\n");
CheckOffset(struct _XkbActionMessage,type,0,1,31534)
CheckOffset(struct _XkbActionMessage,serial,0,1,31535)
CheckOffset(struct _XkbActionMessage,send_event,0,1,31536)
CheckOffset(struct _XkbActionMessage,display,0,1,31537)
CheckOffset(struct _XkbActionMessage,time,0,1,31538)
CheckOffset(struct _XkbActionMessage,xkb_type,0,1,31539)
CheckOffset(struct _XkbActionMessage,device,0,1,31540)
CheckOffset(struct _XkbActionMessage,keycode,0,1,31541)
CheckOffset(struct _XkbActionMessage,press,0,1,31542)
CheckOffset(struct _XkbActionMessage,key_event_follows,0,1,31543)
CheckOffset(struct _XkbActionMessage,group,0,1,31544)
CheckOffset(struct _XkbActionMessage,mods,0,1,31545)
CheckOffset(struct _XkbActionMessage,message,0,1,31546)
#endif

#if 1
CheckTypeSize(XkbActionMessageEvent,0, 9508, 1, 1.2, NULL, 9507, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbAccessXNotify,0, 9509, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbAccessXNotify on All\n");
CheckOffset(struct _XkbAccessXNotify,type,0,1,31547)
CheckOffset(struct _XkbAccessXNotify,serial,0,1,31548)
CheckOffset(struct _XkbAccessXNotify,send_event,0,1,31549)
CheckOffset(struct _XkbAccessXNotify,display,0,1,31550)
CheckOffset(struct _XkbAccessXNotify,time,0,1,31551)
CheckOffset(struct _XkbAccessXNotify,xkb_type,0,1,31552)
CheckOffset(struct _XkbAccessXNotify,device,0,1,31553)
CheckOffset(struct _XkbAccessXNotify,detail,0,1,31554)
CheckOffset(struct _XkbAccessXNotify,keycode,0,1,31555)
CheckOffset(struct _XkbAccessXNotify,sk_delay,0,1,31556)
CheckOffset(struct _XkbAccessXNotify,debounce_delay,0,1,31557)
#endif

#if 1
CheckTypeSize(XkbAccessXNotifyEvent,0, 9510, 1, 1.2, NULL, 9509, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbExtensionDeviceNotify,0, 9511, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbExtensionDeviceNotify on All\n");
CheckOffset(struct _XkbExtensionDeviceNotify,type,0,1,31558)
CheckOffset(struct _XkbExtensionDeviceNotify,serial,0,1,31559)
CheckOffset(struct _XkbExtensionDeviceNotify,send_event,0,1,31560)
CheckOffset(struct _XkbExtensionDeviceNotify,display,0,1,31561)
CheckOffset(struct _XkbExtensionDeviceNotify,time,0,1,31562)
CheckOffset(struct _XkbExtensionDeviceNotify,xkb_type,0,1,31563)
CheckOffset(struct _XkbExtensionDeviceNotify,device,0,1,31564)
CheckOffset(struct _XkbExtensionDeviceNotify,reason,0,1,31565)
CheckOffset(struct _XkbExtensionDeviceNotify,supported,0,1,31566)
CheckOffset(struct _XkbExtensionDeviceNotify,unsupported,0,1,31567)
CheckOffset(struct _XkbExtensionDeviceNotify,first_btn,0,1,31568)
CheckOffset(struct _XkbExtensionDeviceNotify,num_btns,0,1,31569)
CheckOffset(struct _XkbExtensionDeviceNotify,leds_defined,0,1,31570)
CheckOffset(struct _XkbExtensionDeviceNotify,led_state,0,1,31571)
CheckOffset(struct _XkbExtensionDeviceNotify,led_class,0,1,31572)
CheckOffset(struct _XkbExtensionDeviceNotify,led_id,0,1,31573)
#endif

#if 1
CheckTypeSize(XkbExtensionDeviceNotifyEvent,0, 9512, 1, 1.2, NULL, 9511, NULL)
#endif

#if 1
CheckTypeSize(union _XkbEvent,0, 9513, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XkbEvent on All\n");
CheckOffset(union _XkbEvent,type,0,1,31574)
CheckOffset(union _XkbEvent,any,0,1,31575)
CheckOffset(union _XkbEvent,new_kbd,0,1,31576)
CheckOffset(union _XkbEvent,map,0,1,31577)
CheckOffset(union _XkbEvent,state,0,1,31578)
CheckOffset(union _XkbEvent,ctrls,0,1,31579)
CheckOffset(union _XkbEvent,indicators,0,1,31580)
CheckOffset(union _XkbEvent,names,0,1,31581)
CheckOffset(union _XkbEvent,compat,0,1,31582)
CheckOffset(union _XkbEvent,bell,0,1,31583)
CheckOffset(union _XkbEvent,message,0,1,31584)
CheckOffset(union _XkbEvent,accessx,0,1,31585)
CheckOffset(union _XkbEvent,device,0,1,31586)
CheckOffset(union _XkbEvent,core,0,1,31587)
#endif

#if 1
CheckTypeSize(XkbEvent,0, 9514, 1, 1.2, NULL, 9513, NULL)
#endif

#if 1
CheckTypeSize(XkbKbdDpyStatePtr,0, 9518, 1, 1.2, NULL, 9517, NULL)
#endif

#if defined __i386__
CheckTypeSize(XkbInternAtomFunc,4, 9520, 2, 1.2, NULL, 9519, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbInternAtomFunc,0, 9520, 10, 1.2, NULL, 9519, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbInternAtomFunc,0, 9520, 11, 1.2, NULL, 9519, NULL)
#elif defined __s390x__
CheckTypeSize(XkbInternAtomFunc,0, 9520, 12, 1.2, NULL, 9519, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbInternAtomFunc,0, 9520, 6, 1.2, NULL, 9519, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbInternAtomFunc,0, 9520, 9, 1.2, NULL, 9519, NULL)
#else
Msg("Find size of XkbInternAtomFunc (9520)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9519,NULL);\n",architecture,9520,0);
#endif

#if defined __i386__
CheckTypeSize(XkbGetAtomNameFunc,4, 9522, 2, 1.2, NULL, 9521, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XkbGetAtomNameFunc,0, 9522, 10, 1.2, NULL, 9521, NULL)
#elif defined __x86_64__
CheckTypeSize(XkbGetAtomNameFunc,0, 9522, 11, 1.2, NULL, 9521, NULL)
#elif defined __s390x__
CheckTypeSize(XkbGetAtomNameFunc,0, 9522, 12, 1.2, NULL, 9521, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XkbGetAtomNameFunc,0, 9522, 6, 1.2, NULL, 9521, NULL)
#elif defined __powerpc64__
CheckTypeSize(XkbGetAtomNameFunc,0, 9522, 9, 1.2, NULL, 9521, NULL)
#else
Msg("Find size of XkbGetAtomNameFunc (9522)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9521, NULL);\n",architecture,9522,0);
#endif

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
