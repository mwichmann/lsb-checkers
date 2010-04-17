/*
 * Test of X11/extensions/XKBstr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <X11/Intrinsic.h>
#include "X11/extensions/XKBstr.h"



#ifdef TET_TEST
void X11_extensions_XKBstr_h()
{
#else
int X11_extensions_XKBstr_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XKBstr.h\n");
#endif

printf("Checking data structures in X11/extensions/XKBstr.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XkbCharToInt(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIntTo2Chars(i,h,l) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for Xkb2CharsToInt(h,l) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbModLocks(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbStateMods(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbGroupLock(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbStateGroup(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbStateFieldFromRec(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbGrabStateFromRec(s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbNumGroups(g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbOutOfRangeGroupInfo(g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbOutOfRangeGroupAction(g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbOutOfRangeGroupNumber(g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSetGroupInfo(g,w,n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSetNumGroups(g,n) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XkbAnyActionDataSize
	CompareConstant(XkbAnyActionDataSize,7,16981,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: XkbAnyActionDataSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbModActionVMods(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSetModActionVMods(a,v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSAGroup(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSASetGroup(a,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbPtrActionX(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbPtrActionY(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSetPtrActionX(a,x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSetPtrActionY(a,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSAPtrDfltValue(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSASetPtrDfltValue(a,c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSAScreen(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSASetScreen(a,s) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbActionSetCtrls(a,c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbActionCtrls(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSARedirectVMods(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSARedirectSetVMods(a,m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSARedirectVModsMask(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSARedirectSetVModsMask(a,m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbAX_AnyFeedback(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbAX_NeedOption(c,w) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbAX_NeedFeedback(c,w) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbSMKeyActionsPtr(m,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeyGroupInfo(m,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeyNumGroups(m,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeyGroupWidth(m,k,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeyGroupsWidth(m,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeyTypeIndex(m,k,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeyType(m,k,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeyNumSyms(m,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeySymsOffset(m,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbCMKeySymsPtr(m,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIM_IsAuto(i) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbIM_InUse(i) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyKeyTypeIndex(d,k,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyKeyType(d,k,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyGroupWidth(d,k,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyGroupsWidth(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyGroupInfo(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyNumGroups(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyNumSyms(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeySymsPtr(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeySym(d,k,n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeySymEntry(d,k,sl,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyAction(d,k,n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyActionEntry(d,k,sl,g) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyHasActions(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyNumActions(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeyActionsPtr(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbKeycodeInRange(d,k) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbNumKeys(d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbXI_DevHasBtnActs(d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbXI_LegalDevBtn(d,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XkbXI_DevHasLeds(d) */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef _XKBSTR_H_
Msg( "Error: Constant not found: _XKBSTR_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct _XkbStateRec,0, 39371, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbStateRec on All\n");
CheckOffset(struct _XkbStateRec,group,0,1,217496)
CheckOffset(struct _XkbStateRec,locked_group,0,1,217497)
CheckOffset(struct _XkbStateRec,base_group,0,1,217498)
CheckOffset(struct _XkbStateRec,latched_group,0,1,217499)
CheckOffset(struct _XkbStateRec,mods,0,1,217500)
CheckOffset(struct _XkbStateRec,base_mods,0,1,217501)
CheckOffset(struct _XkbStateRec,latched_mods,0,1,217502)
CheckOffset(struct _XkbStateRec,locked_mods,0,1,217503)
CheckOffset(struct _XkbStateRec,compat_state,0,1,217504)
CheckOffset(struct _XkbStateRec,grab_mods,0,1,217505)
CheckOffset(struct _XkbStateRec,compat_grab_mods,0,1,217506)
CheckOffset(struct _XkbStateRec,lookup_mods,0,1,217507)
CheckOffset(struct _XkbStateRec,compat_lookup_mods,0,1,217508)
CheckOffset(struct _XkbStateRec,ptr_buttons,0,1,217509)
#endif

#if 1
CheckTypeSize(XkbStateRec,0, 39372, 1, 1.1, NULL, 39371, NULL)
#endif

#if 1
CheckTypeSize(XkbStatePtr,0, 39373, 1, 1.1, NULL, 39374, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbMods,0, 39375, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbMods on All\n");
CheckOffset(struct _XkbMods,mask,0,1,217510)
CheckOffset(struct _XkbMods,real_mods,0,1,217511)
CheckOffset(struct _XkbMods,vmods,0,1,217512)
#endif

#if 1
CheckTypeSize(XkbModsPtr,0, 39376, 1, 1.1, NULL, 39377, NULL)
#endif

#if 1
CheckTypeSize(XkbModsRec,0, 39378, 1, 1.1, NULL, 39375, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbKTMapEntry,0, 39379, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbKTMapEntry on All\n");
CheckOffset(struct _XkbKTMapEntry,active,0,1,217513)
CheckOffset(struct _XkbKTMapEntry,level,0,1,217514)
CheckOffset(struct _XkbKTMapEntry,mods,0,1,217515)
#endif

#if 1
CheckTypeSize(XkbKTMapEntryRec,0, 39380, 1, 1.1, NULL, 39379, NULL)
#endif

#if 1
CheckTypeSize(XkbKTMapEntryPtr,0, 39381, 1, 1.1, NULL, 39382, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbKeyType,0, 39383, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbKeyType on All\n");
CheckOffset(struct _XkbKeyType,mods,0,1,217516)
CheckOffset(struct _XkbKeyType,num_levels,0,1,217517)
CheckOffset(struct _XkbKeyType,map_count,0,1,217518)
CheckOffset(struct _XkbKeyType,map,0,1,217519)
CheckOffset(struct _XkbKeyType,preserve,0,1,217520)
CheckOffset(struct _XkbKeyType,name,0,1,217521)
CheckOffset(struct _XkbKeyType,level_names,0,1,217522)
#endif

#if 1
CheckTypeSize(XkbKeyTypeRec,0, 39384, 1, 1.1, NULL, 39383, NULL)
#endif

#if 1
CheckTypeSize(XkbKeyTypePtr,0, 39385, 1, 1.1, NULL, 39386, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbBehavior,0, 39387, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbBehavior on All\n");
CheckOffset(struct _XkbBehavior,type,0,1,217523)
CheckOffset(struct _XkbBehavior,data,0,1,217524)
#endif

#if 1
CheckTypeSize(XkbBehavior,0, 39388, 1, 1.1, NULL, 39387, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbAnyAction,0, 39389, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbAnyAction on All\n");
CheckOffset(struct _XkbAnyAction,type,0,1,217525)
CheckOffset(struct _XkbAnyAction,data,0,1,217526)
#endif

#if 1
CheckTypeSize(XkbAnyAction,0, 39390, 1, 1.1, NULL, 39389, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbModAction,0, 39391, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbModAction on All\n");
CheckOffset(struct _XkbModAction,type,0,1,217527)
CheckOffset(struct _XkbModAction,flags,0,1,217528)
CheckOffset(struct _XkbModAction,mask,0,1,217529)
CheckOffset(struct _XkbModAction,real_mods,0,1,217530)
CheckOffset(struct _XkbModAction,vmods1,0,1,217531)
CheckOffset(struct _XkbModAction,vmods2,0,1,217532)
#endif

#if 1
CheckTypeSize(XkbModAction,0, 39392, 1, 1.1, NULL, 39391, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbGroupAction,0, 39393, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbGroupAction on All\n");
CheckOffset(struct _XkbGroupAction,type,0,1,217533)
CheckOffset(struct _XkbGroupAction,flags,0,1,217534)
CheckOffset(struct _XkbGroupAction,group_XXX,0,1,217535)
#endif

#if 1
CheckTypeSize(XkbGroupAction,0, 39394, 1, 1.1, NULL, 39393, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbISOAction,0, 39395, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbISOAction on All\n");
CheckOffset(struct _XkbISOAction,type,0,1,217536)
CheckOffset(struct _XkbISOAction,flags,0,1,217537)
CheckOffset(struct _XkbISOAction,mask,0,1,217538)
CheckOffset(struct _XkbISOAction,real_mods,0,1,217539)
CheckOffset(struct _XkbISOAction,group_XXX,0,1,217540)
CheckOffset(struct _XkbISOAction,affect,0,1,217541)
CheckOffset(struct _XkbISOAction,vmods1,0,1,217542)
CheckOffset(struct _XkbISOAction,vmods2,0,1,217543)
#endif

#if 1
CheckTypeSize(XkbISOAction,0, 39396, 1, 1.1, NULL, 39395, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbPtrAction,0, 39397, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbPtrAction on All\n");
CheckOffset(struct _XkbPtrAction,type,0,1,217544)
CheckOffset(struct _XkbPtrAction,flags,0,1,217545)
CheckOffset(struct _XkbPtrAction,high_XXX,0,1,217546)
CheckOffset(struct _XkbPtrAction,low_XXX,0,1,217547)
CheckOffset(struct _XkbPtrAction,high_YYY,0,1,217548)
CheckOffset(struct _XkbPtrAction,low_YYY,0,1,217549)
#endif

#if 1
CheckTypeSize(XkbPtrAction,0, 39398, 1, 1.1, NULL, 39397, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbPtrBtnAction,0, 39399, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbPtrBtnAction on All\n");
CheckOffset(struct _XkbPtrBtnAction,type,0,1,217550)
CheckOffset(struct _XkbPtrBtnAction,flags,0,1,217551)
CheckOffset(struct _XkbPtrBtnAction,count,0,1,217552)
CheckOffset(struct _XkbPtrBtnAction,button,0,1,217553)
#endif

#if 1
CheckTypeSize(XkbPtrBtnAction,0, 39400, 1, 1.1, NULL, 39399, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbPtrDfltAction,0, 39401, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbPtrDfltAction on All\n");
CheckOffset(struct _XkbPtrDfltAction,type,0,1,217554)
CheckOffset(struct _XkbPtrDfltAction,flags,0,1,217555)
CheckOffset(struct _XkbPtrDfltAction,affect,0,1,217556)
CheckOffset(struct _XkbPtrDfltAction,valueXXX,0,1,217557)
#endif

#if 1
CheckTypeSize(XkbPtrDfltAction,0, 39402, 1, 1.1, NULL, 39401, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbSwitchScreenAction,0, 39403, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbSwitchScreenAction on All\n");
CheckOffset(struct _XkbSwitchScreenAction,type,0,1,217558)
CheckOffset(struct _XkbSwitchScreenAction,flags,0,1,217559)
CheckOffset(struct _XkbSwitchScreenAction,screenXXX,0,1,217560)
#endif

#if 1
CheckTypeSize(XkbSwitchScreenAction,0, 39404, 1, 1.1, NULL, 39403, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbCtrlsAction,0, 39405, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbCtrlsAction on All\n");
CheckOffset(struct _XkbCtrlsAction,type,0,1,217561)
CheckOffset(struct _XkbCtrlsAction,flags,0,1,217562)
CheckOffset(struct _XkbCtrlsAction,ctrls3,0,1,217563)
CheckOffset(struct _XkbCtrlsAction,ctrls2,0,1,217564)
CheckOffset(struct _XkbCtrlsAction,ctrls1,0,1,217565)
CheckOffset(struct _XkbCtrlsAction,ctrls0,0,1,217566)
#endif

#if 1
CheckTypeSize(XkbCtrlsAction,0, 39406, 1, 1.1, NULL, 39405, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbMessageAction,0, 39408, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbMessageAction on All\n");
CheckOffset(struct _XkbMessageAction,type,0,1,217567)
CheckOffset(struct _XkbMessageAction,flags,0,1,217568)
CheckOffset(struct _XkbMessageAction,message,0,1,217569)
#endif

#if 1
CheckTypeSize(XkbMessageAction,0, 39409, 1, 1.1, NULL, 39408, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbRedirectKeyAction,0, 39410, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbRedirectKeyAction on All\n");
CheckOffset(struct _XkbRedirectKeyAction,type,0,1,217570)
CheckOffset(struct _XkbRedirectKeyAction,new_key,0,1,217571)
CheckOffset(struct _XkbRedirectKeyAction,mods_mask,0,1,217572)
CheckOffset(struct _XkbRedirectKeyAction,mods,0,1,217573)
CheckOffset(struct _XkbRedirectKeyAction,vmods_mask0,0,1,217574)
CheckOffset(struct _XkbRedirectKeyAction,vmods_mask1,0,1,217575)
CheckOffset(struct _XkbRedirectKeyAction,vmods0,0,1,217576)
CheckOffset(struct _XkbRedirectKeyAction,vmods1,0,1,217577)
#endif

#if 1
CheckTypeSize(XkbRedirectKeyAction,0, 39411, 1, 1.1, NULL, 39410, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbDeviceBtnAction,0, 39412, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbDeviceBtnAction on All\n");
CheckOffset(struct _XkbDeviceBtnAction,type,0,1,217578)
CheckOffset(struct _XkbDeviceBtnAction,flags,0,1,217579)
CheckOffset(struct _XkbDeviceBtnAction,count,0,1,217580)
CheckOffset(struct _XkbDeviceBtnAction,button,0,1,217581)
CheckOffset(struct _XkbDeviceBtnAction,device,0,1,217582)
#endif

#if 1
CheckTypeSize(XkbDeviceBtnAction,0, 39413, 1, 1.1, NULL, 39412, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbDeviceValuatorAction,0, 39414, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbDeviceValuatorAction on All\n");
CheckOffset(struct _XkbDeviceValuatorAction,type,0,1,217583)
CheckOffset(struct _XkbDeviceValuatorAction,device,0,1,217584)
CheckOffset(struct _XkbDeviceValuatorAction,v1_what,0,1,217585)
CheckOffset(struct _XkbDeviceValuatorAction,v1_ndx,0,1,217586)
CheckOffset(struct _XkbDeviceValuatorAction,v1_value,0,1,217587)
CheckOffset(struct _XkbDeviceValuatorAction,v2_what,0,1,217588)
CheckOffset(struct _XkbDeviceValuatorAction,v2_ndx,0,1,217589)
CheckOffset(struct _XkbDeviceValuatorAction,v2_value,0,1,217590)
#endif

#if 1
CheckTypeSize(XkbDeviceValuatorAction,0, 39415, 1, 1.1, NULL, 39414, NULL)
#endif

#if 1
CheckTypeSize(union _XkbAction,0, 39416, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbAction on All\n");
CheckOffset(union _XkbAction,any,0,1,217591)
CheckOffset(union _XkbAction,mods,0,1,217592)
CheckOffset(union _XkbAction,group,0,1,217593)
CheckOffset(union _XkbAction,iso,0,1,217594)
CheckOffset(union _XkbAction,ptr,0,1,217595)
CheckOffset(union _XkbAction,btn,0,1,217596)
CheckOffset(union _XkbAction,dflt,0,1,217597)
CheckOffset(union _XkbAction,screen,0,1,217598)
CheckOffset(union _XkbAction,ctrls,0,1,217599)
CheckOffset(union _XkbAction,msg,0,1,217600)
CheckOffset(union _XkbAction,redirect,0,1,217601)
CheckOffset(union _XkbAction,devbtn,0,1,217602)
CheckOffset(union _XkbAction,devval,0,1,217603)
CheckOffset(union _XkbAction,type,0,1,217604)
#endif

#if 1
CheckTypeSize(XkbAction,0, 39417, 1, 1.1, NULL, 39416, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbControls,0, 39419, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbControls on All\n");
CheckOffset(struct _XkbControls,mk_dflt_btn,0,1,217605)
CheckOffset(struct _XkbControls,num_groups,0,1,217606)
CheckOffset(struct _XkbControls,groups_wrap,0,1,217607)
CheckOffset(struct _XkbControls,internal,0,1,217608)
CheckOffset(struct _XkbControls,ignore_lock,0,1,217609)
CheckOffset(struct _XkbControls,enabled_ctrls,0,1,217610)
CheckOffset(struct _XkbControls,repeat_delay,0,1,217611)
CheckOffset(struct _XkbControls,repeat_interval,0,1,217612)
CheckOffset(struct _XkbControls,slow_keys_delay,0,1,217613)
CheckOffset(struct _XkbControls,debounce_delay,0,1,217614)
CheckOffset(struct _XkbControls,mk_delay,0,1,217615)
CheckOffset(struct _XkbControls,mk_interval,0,1,217616)
CheckOffset(struct _XkbControls,mk_time_to_max,0,1,217617)
CheckOffset(struct _XkbControls,mk_max_speed,0,1,217618)
CheckOffset(struct _XkbControls,mk_curve,0,1,217619)
CheckOffset(struct _XkbControls,ax_options,0,1,217620)
CheckOffset(struct _XkbControls,ax_timeout,0,1,217621)
CheckOffset(struct _XkbControls,axt_opts_mask,0,1,217622)
CheckOffset(struct _XkbControls,axt_opts_values,0,1,217623)
CheckOffset(struct _XkbControls,axt_ctrls_mask,0,1,217624)
CheckOffset(struct _XkbControls,axt_ctrls_values,0,1,217625)
CheckOffset(struct _XkbControls,per_key_repeat,0,1,217626)
#endif

#if 1
CheckTypeSize(XkbControlsRec,0, 39420, 1, 1.1, NULL, 39419, NULL)
#endif

#if 1
CheckTypeSize(XkbControlsPtr,0, 39421, 1, 1.1, NULL, 39422, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbServerMapRec,0, 39424, 1, , NULL, 0, NULL)
CheckMemberSize(struct _XkbServerMapRec,explicit,0,1,217632)
CheckOffset(struct _XkbServerMapRec,explicit,0,1,217632)
#endif

#if 1
CheckTypeSize(XkbServerMapRec,0, 39425, 1, 1.1, NULL, 39424, NULL)
#endif

#if 1
CheckTypeSize(XkbServerMapPtr,0, 39426, 1, 1.1, NULL, 39427, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbSymMapRec,0, 39428, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbSymMapRec on All\n");
CheckOffset(struct _XkbSymMapRec,kt_index,0,1,217635)
CheckOffset(struct _XkbSymMapRec,group_info,0,1,217636)
CheckOffset(struct _XkbSymMapRec,width,0,1,217637)
CheckOffset(struct _XkbSymMapRec,offset,0,1,217638)
#endif

#if 1
CheckTypeSize(XkbSymMapRec,0, 39429, 1, 1.1, NULL, 39428, NULL)
#endif

#if 1
CheckTypeSize(XkbSymMapPtr,0, 39430, 1, 1.1, NULL, 39431, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbClientMapRec,0, 39432, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbClientMapRec on All\n");
CheckOffset(struct _XkbClientMapRec,size_types,0,1,217639)
CheckOffset(struct _XkbClientMapRec,num_types,0,1,217640)
CheckOffset(struct _XkbClientMapRec,types,0,1,217641)
CheckOffset(struct _XkbClientMapRec,size_syms,0,1,217642)
CheckOffset(struct _XkbClientMapRec,num_syms,0,1,217643)
CheckOffset(struct _XkbClientMapRec,syms,0,1,217644)
CheckOffset(struct _XkbClientMapRec,key_sym_map,0,1,217645)
CheckOffset(struct _XkbClientMapRec,modmap,0,1,217646)
#endif

#if 1
CheckTypeSize(XkbClientMapRec,0, 39433, 1, 1.1, NULL, 39432, NULL)
#endif

#if 1
CheckTypeSize(XkbClientMapPtr,0, 39434, 1, 1.1, NULL, 39435, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbSymInterpretRec,0, 39436, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbSymInterpretRec on All\n");
CheckOffset(struct _XkbSymInterpretRec,sym,0,1,217647)
CheckOffset(struct _XkbSymInterpretRec,flags,0,1,217648)
CheckOffset(struct _XkbSymInterpretRec,match,0,1,217649)
CheckOffset(struct _XkbSymInterpretRec,mods,0,1,217650)
CheckOffset(struct _XkbSymInterpretRec,virtual_mod,0,1,217651)
CheckOffset(struct _XkbSymInterpretRec,act,0,1,217652)
#endif

#if 1
CheckTypeSize(XkbSymInterpretRec,0, 39437, 1, 1.1, NULL, 39436, NULL)
#endif

#if 1
CheckTypeSize(XkbSymInterpretPtr,0, 39438, 1, 1.1, NULL, 39439, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbCompatMapRec,0, 39441, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbCompatMapRec on All\n");
CheckOffset(struct _XkbCompatMapRec,sym_interpret,0,1,217653)
CheckOffset(struct _XkbCompatMapRec,groups,0,1,217654)
CheckOffset(struct _XkbCompatMapRec,num_si,0,1,217655)
CheckOffset(struct _XkbCompatMapRec,size_si,0,1,217656)
#endif

#if 1
CheckTypeSize(XkbCompatMapRec,0, 39442, 1, 1.1, NULL, 39441, NULL)
#endif

#if 1
CheckTypeSize(XkbCompatMapPtr,0, 39443, 1, 1.1, NULL, 39444, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbIndicatorMapRec,0, 39445, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbIndicatorMapRec on All\n");
CheckOffset(struct _XkbIndicatorMapRec,flags,0,1,217657)
CheckOffset(struct _XkbIndicatorMapRec,which_groups,0,1,217658)
CheckOffset(struct _XkbIndicatorMapRec,groups,0,1,217659)
CheckOffset(struct _XkbIndicatorMapRec,which_mods,0,1,217660)
CheckOffset(struct _XkbIndicatorMapRec,mods,0,1,217661)
CheckOffset(struct _XkbIndicatorMapRec,ctrls,0,1,217662)
#endif

#if 1
CheckTypeSize(XkbIndicatorMapPtr,0, 39446, 1, 1.1, NULL, 39447, NULL)
#endif

#if 1
CheckTypeSize(XkbIndicatorMapRec,0, 39448, 1, 1.1, NULL, 39445, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbIndicatorRec,0, 39450, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbIndicatorRec on All\n");
CheckOffset(struct _XkbIndicatorRec,phys_indicators,0,1,217663)
CheckOffset(struct _XkbIndicatorRec,maps,0,1,217664)
#endif

#if 1
CheckTypeSize(XkbIndicatorRec,0, 39451, 1, 1.1, NULL, 39450, NULL)
#endif

#if 1
CheckTypeSize(XkbIndicatorPtr,0, 39452, 1, 1.1, NULL, 39453, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbKeyNameRec,0, 39454, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbKeyNameRec on All\n");
CheckOffset(struct _XkbKeyNameRec,name,0,1,217665)
#endif

#if 1
CheckTypeSize(XkbKeyNameRec,0, 39455, 1, 1.1, NULL, 39454, NULL)
#endif

#if 1
CheckTypeSize(XkbKeyNamePtr,0, 39456, 1, 1.1, NULL, 39457, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbKeyAliasRec,0, 39458, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbKeyAliasRec on All\n");
CheckOffset(struct _XkbKeyAliasRec,real,0,1,217666)
CheckOffset(struct _XkbKeyAliasRec,alias,0,1,217667)
#endif

#if 1
CheckTypeSize(XkbKeyAliasRec,0, 39459, 1, 1.1, NULL, 39458, NULL)
#endif

#if 1
CheckTypeSize(XkbKeyAliasPtr,0, 39460, 1, 1.1, NULL, 39461, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbNamesRec,0, 39465, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbNamesRec on All\n");
CheckOffset(struct _XkbNamesRec,keycodes,0,1,217668)
CheckOffset(struct _XkbNamesRec,geometry,0,1,217669)
CheckOffset(struct _XkbNamesRec,symbols,0,1,217670)
CheckOffset(struct _XkbNamesRec,types,0,1,217671)
CheckOffset(struct _XkbNamesRec,compat,0,1,217672)
CheckOffset(struct _XkbNamesRec,vmods,0,1,217673)
CheckOffset(struct _XkbNamesRec,indicators,0,1,217674)
CheckOffset(struct _XkbNamesRec,groups,0,1,217675)
CheckOffset(struct _XkbNamesRec,keys,0,1,217676)
CheckOffset(struct _XkbNamesRec,key_aliases,0,1,217677)
CheckOffset(struct _XkbNamesRec,radio_groups,0,1,217678)
CheckOffset(struct _XkbNamesRec,phys_symbols,0,1,217679)
CheckOffset(struct _XkbNamesRec,num_keys,0,1,217680)
CheckOffset(struct _XkbNamesRec,num_key_aliases,0,1,217681)
CheckOffset(struct _XkbNamesRec,num_rg,0,1,217682)
#endif

#if 1
CheckTypeSize(XkbNamesRec,0, 39466, 1, 1.1, NULL, 39465, NULL)
#endif

#if 1
CheckTypeSize(XkbNamesPtr,0, 39467, 1, 1.1, NULL, 39468, NULL)
#endif

#if 1
CheckTypeSize(XkbGeometryPtr,0, 39469, 1, 1.1, NULL, 39528, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbDesc,0, 39471, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbDesc on All\n");
CheckOffset(struct _XkbDesc,dpy,0,1,217683)
CheckOffset(struct _XkbDesc,flags,0,1,217684)
CheckOffset(struct _XkbDesc,device_spec,0,1,217685)
CheckOffset(struct _XkbDesc,min_key_code,0,1,217686)
CheckOffset(struct _XkbDesc,max_key_code,0,1,217687)
CheckOffset(struct _XkbDesc,ctrls,0,1,217688)
CheckOffset(struct _XkbDesc,server,0,1,217689)
CheckOffset(struct _XkbDesc,map,0,1,217690)
CheckOffset(struct _XkbDesc,indicators,0,1,217691)
CheckOffset(struct _XkbDesc,names,0,1,217692)
CheckOffset(struct _XkbDesc,compat,0,1,217693)
CheckOffset(struct _XkbDesc,geom,0,1,217694)
#endif

#if 1
CheckTypeSize(XkbDescRec,0, 39472, 1, 1.1, NULL, 39471, NULL)
#endif

#if 1
CheckTypeSize(XkbDescPtr,0, 39473, 1, 1.1, NULL, 39474, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbMapChanges,0, 39475, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbMapChanges on All\n");
CheckOffset(struct _XkbMapChanges,changed,0,1,217695)
CheckOffset(struct _XkbMapChanges,min_key_code,0,1,217696)
CheckOffset(struct _XkbMapChanges,max_key_code,0,1,217697)
CheckOffset(struct _XkbMapChanges,first_type,0,1,217698)
CheckOffset(struct _XkbMapChanges,num_types,0,1,217699)
CheckOffset(struct _XkbMapChanges,first_key_sym,0,1,217700)
CheckOffset(struct _XkbMapChanges,num_key_syms,0,1,217701)
CheckOffset(struct _XkbMapChanges,first_key_act,0,1,217702)
CheckOffset(struct _XkbMapChanges,num_key_acts,0,1,217703)
CheckOffset(struct _XkbMapChanges,first_key_behavior,0,1,217704)
CheckOffset(struct _XkbMapChanges,num_key_behaviors,0,1,217705)
CheckOffset(struct _XkbMapChanges,first_key_explicit,0,1,217706)
CheckOffset(struct _XkbMapChanges,num_key_explicit,0,1,217707)
CheckOffset(struct _XkbMapChanges,first_modmap_key,0,1,217708)
CheckOffset(struct _XkbMapChanges,num_modmap_keys,0,1,217709)
CheckOffset(struct _XkbMapChanges,first_vmodmap_key,0,1,217710)
CheckOffset(struct _XkbMapChanges,num_vmodmap_keys,0,1,217711)
CheckOffset(struct _XkbMapChanges,pad,0,1,217712)
CheckOffset(struct _XkbMapChanges,vmods,0,1,217713)
#endif

#if 1
CheckTypeSize(XkbMapChangesPtr,0, 39476, 1, 1.1, NULL, 39477, NULL)
#endif

#if 1
CheckTypeSize(XkbMapChangesRec,0, 39478, 1, 1.1, NULL, 39475, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbControlsChanges,0, 39479, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbControlsChanges on All\n");
CheckOffset(struct _XkbControlsChanges,changed_ctrls,0,1,217714)
CheckOffset(struct _XkbControlsChanges,enabled_ctrls_changes,0,1,217715)
CheckOffset(struct _XkbControlsChanges,num_groups_changed,0,1,217716)
#endif

#if 1
CheckTypeSize(XkbControlsChangesPtr,0, 39480, 1, 1.1, NULL, 39481, NULL)
#endif

#if 1
CheckTypeSize(XkbControlsChangesRec,0, 39482, 1, 1.1, NULL, 39479, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbIndicatorChanges,0, 39483, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbIndicatorChanges on All\n");
CheckOffset(struct _XkbIndicatorChanges,state_changes,0,1,217717)
CheckOffset(struct _XkbIndicatorChanges,map_changes,0,1,217718)
#endif

#if 1
CheckTypeSize(XkbIndicatorChangesPtr,0, 39484, 1, 1.1, NULL, 39485, NULL)
#endif

#if 1
CheckTypeSize(XkbIndicatorChangesRec,0, 39486, 1, 1.1, NULL, 39483, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbNameChanges,0, 39487, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbNameChanges on All\n");
CheckOffset(struct _XkbNameChanges,changed,0,1,217719)
CheckOffset(struct _XkbNameChanges,first_type,0,1,217720)
CheckOffset(struct _XkbNameChanges,num_types,0,1,217721)
CheckOffset(struct _XkbNameChanges,first_lvl,0,1,217722)
CheckOffset(struct _XkbNameChanges,num_lvls,0,1,217723)
CheckOffset(struct _XkbNameChanges,num_aliases,0,1,217724)
CheckOffset(struct _XkbNameChanges,num_rg,0,1,217725)
CheckOffset(struct _XkbNameChanges,first_key,0,1,217726)
CheckOffset(struct _XkbNameChanges,num_keys,0,1,217727)
CheckOffset(struct _XkbNameChanges,changed_vmods,0,1,217728)
CheckOffset(struct _XkbNameChanges,changed_indicators,0,1,217729)
CheckOffset(struct _XkbNameChanges,changed_groups,0,1,217730)
#endif

#if 1
CheckTypeSize(XkbNameChangesRec,0, 39488, 1, 1.1, NULL, 39487, NULL)
#endif

#if 1
CheckTypeSize(XkbNameChangesPtr,0, 39489, 1, 1.1, NULL, 39490, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbCompatChanges,0, 39491, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbCompatChanges on All\n");
CheckOffset(struct _XkbCompatChanges,changed_groups,0,1,217731)
CheckOffset(struct _XkbCompatChanges,first_si,0,1,217732)
CheckOffset(struct _XkbCompatChanges,num_si,0,1,217733)
#endif

#if 1
CheckTypeSize(XkbCompatChangesRec,0, 39492, 1, 1.1, NULL, 39491, NULL)
#endif

#if 1
CheckTypeSize(XkbCompatChangesPtr,0, 39493, 1, 1.1, NULL, 39494, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbChanges,0, 39495, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbChanges on All\n");
CheckOffset(struct _XkbChanges,device_spec,0,1,217734)
CheckOffset(struct _XkbChanges,state_changes,0,1,217735)
CheckOffset(struct _XkbChanges,map,0,1,217736)
CheckOffset(struct _XkbChanges,ctrls,0,1,217737)
CheckOffset(struct _XkbChanges,indicators,0,1,217738)
CheckOffset(struct _XkbChanges,names,0,1,217739)
CheckOffset(struct _XkbChanges,compat,0,1,217740)
#endif

#if 1
CheckTypeSize(XkbChangesRec,0, 39496, 1, 1.1, NULL, 39495, NULL)
#endif

#if 1
CheckTypeSize(XkbChangesPtr,0, 39497, 1, 1.1, NULL, 39498, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbComponentNames,0, 39499, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbComponentNames on All\n");
CheckOffset(struct _XkbComponentNames,keymap,0,1,217741)
CheckOffset(struct _XkbComponentNames,keycodes,0,1,217742)
CheckOffset(struct _XkbComponentNames,types,0,1,217743)
CheckOffset(struct _XkbComponentNames,compat,0,1,217744)
CheckOffset(struct _XkbComponentNames,symbols,0,1,217745)
CheckOffset(struct _XkbComponentNames,geometry,0,1,217746)
#endif

#if 1
CheckTypeSize(XkbComponentNamesRec,0, 39500, 1, 1.1, NULL, 39499, NULL)
#endif

#if 1
CheckTypeSize(XkbComponentNamesPtr,0, 39501, 1, 1.1, NULL, 39502, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbComponentName,0, 39503, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbComponentName on All\n");
CheckOffset(struct _XkbComponentName,flags,0,1,217747)
CheckOffset(struct _XkbComponentName,name,0,1,217748)
#endif

#if 1
CheckTypeSize(XkbComponentNameRec,0, 39504, 1, 1.1, NULL, 39503, NULL)
#endif

#if 1
CheckTypeSize(XkbComponentNamePtr,0, 39505, 1, 1.1, NULL, 39506, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbComponentList,0, 39507, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbComponentList on All\n");
CheckOffset(struct _XkbComponentList,num_keymaps,0,1,217749)
CheckOffset(struct _XkbComponentList,num_keycodes,0,1,217750)
CheckOffset(struct _XkbComponentList,num_types,0,1,217751)
CheckOffset(struct _XkbComponentList,num_compat,0,1,217752)
CheckOffset(struct _XkbComponentList,num_symbols,0,1,217753)
CheckOffset(struct _XkbComponentList,num_geometry,0,1,217754)
CheckOffset(struct _XkbComponentList,keymaps,0,1,217755)
CheckOffset(struct _XkbComponentList,keycodes,0,1,217756)
CheckOffset(struct _XkbComponentList,types,0,1,217757)
CheckOffset(struct _XkbComponentList,compat,0,1,217758)
CheckOffset(struct _XkbComponentList,symbols,0,1,217759)
CheckOffset(struct _XkbComponentList,geometry,0,1,217760)
#endif

#if 1
CheckTypeSize(XkbComponentListRec,0, 39508, 1, 1.1, NULL, 39507, NULL)
#endif

#if 1
CheckTypeSize(XkbComponentListPtr,0, 39509, 1, 1.1, NULL, 39510, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbDeviceLedInfo,0, 39511, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbDeviceLedInfo on All\n");
CheckOffset(struct _XkbDeviceLedInfo,led_class,0,1,217761)
CheckOffset(struct _XkbDeviceLedInfo,led_id,0,1,217762)
CheckOffset(struct _XkbDeviceLedInfo,phys_indicators,0,1,217763)
CheckOffset(struct _XkbDeviceLedInfo,maps_present,0,1,217764)
CheckOffset(struct _XkbDeviceLedInfo,names_present,0,1,217765)
CheckOffset(struct _XkbDeviceLedInfo,state,0,1,217766)
CheckOffset(struct _XkbDeviceLedInfo,names,0,1,217767)
CheckOffset(struct _XkbDeviceLedInfo,maps,0,1,217768)
#endif

#if 1
CheckTypeSize(XkbDeviceLedInfoRec,0, 39512, 1, 1.1, NULL, 39511, NULL)
#endif

#if 1
CheckTypeSize(XkbDeviceLedInfoPtr,0, 39513, 1, 1.1, NULL, 39514, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbDeviceInfo,0, 39515, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbDeviceInfo on All\n");
CheckOffset(struct _XkbDeviceInfo,name,0,1,217769)
CheckOffset(struct _XkbDeviceInfo,type,0,1,217770)
CheckOffset(struct _XkbDeviceInfo,device_spec,0,1,217771)
CheckOffset(struct _XkbDeviceInfo,has_own_state,0,1,217772)
CheckOffset(struct _XkbDeviceInfo,supported,0,1,217773)
CheckOffset(struct _XkbDeviceInfo,unsupported,0,1,217774)
CheckOffset(struct _XkbDeviceInfo,num_btns,0,1,217775)
CheckOffset(struct _XkbDeviceInfo,btn_acts,0,1,217776)
CheckOffset(struct _XkbDeviceInfo,sz_leds,0,1,217777)
CheckOffset(struct _XkbDeviceInfo,num_leds,0,1,217778)
CheckOffset(struct _XkbDeviceInfo,dflt_kbd_fb,0,1,217779)
CheckOffset(struct _XkbDeviceInfo,dflt_led_fb,0,1,217780)
CheckOffset(struct _XkbDeviceInfo,leds,0,1,217781)
#endif

#if 1
CheckTypeSize(XkbDeviceInfoRec,0, 39516, 1, 1.1, NULL, 39515, NULL)
#endif

#if 1
CheckTypeSize(XkbDeviceInfoPtr,0, 39517, 1, 1.1, NULL, 39518, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbDeviceLedChanges,0, 39520, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbDeviceLedChanges on All\n");
CheckOffset(struct _XkbDeviceLedChanges,led_class,0,1,217782)
CheckOffset(struct _XkbDeviceLedChanges,led_id,0,1,217783)
CheckOffset(struct _XkbDeviceLedChanges,defined,0,1,217784)
CheckOffset(struct _XkbDeviceLedChanges,next,0,1,217785)
#endif

#if 1
CheckTypeSize(XkbDeviceLedChangesRec,0, 39521, 1, 1.1, NULL, 39520, NULL)
#endif

#if 1
CheckTypeSize(XkbDeviceLedChangesPtr,0, 39522, 1, 1.1, NULL, 39519, NULL)
#endif

#if 1
CheckTypeSize(struct _XkbDeviceChanges,0, 39523, 1, , NULL, 0, NULL)
Msg("Missing member data for _XkbDeviceChanges on All\n");
CheckOffset(struct _XkbDeviceChanges,changed,0,1,217786)
CheckOffset(struct _XkbDeviceChanges,first_btn,0,1,217787)
CheckOffset(struct _XkbDeviceChanges,num_btns,0,1,217788)
CheckOffset(struct _XkbDeviceChanges,leds,0,1,217789)
#endif

#if 1
CheckTypeSize(XkbDeviceChangesRec,0, 39524, 1, 1.1, NULL, 39523, NULL)
#endif

#if 1
CheckTypeSize(XkbDeviceChangesPtr,0, 39525, 1, 1.1, NULL, 39526, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XKBstr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
