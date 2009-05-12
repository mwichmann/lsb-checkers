/*
 * Test of X11/extensions/syncstr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifdef XLIB_ILLEGAL_ACCESS
#undef XLIB_ILLEGAL_ACCESS
#endif
#include <X11/Xlibint.h>

#include "X11/extensions/syncstr.h"



#ifdef TET_TEST
void X11_extensions_syncstr_h()
{
#else
int X11_extensions_syncstr_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/syncstr.h\n");
#endif

printf("Checking data structures in X11/extensions/syncstr.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncInitializeReq
	CompareConstant(sz_xSyncInitializeReq,8,19736,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncInitializeReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncInitializeReply
	CompareConstant(sz_xSyncInitializeReply,32,19737,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncInitializeReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncListSystemCountersReq
	CompareConstant(sz_xSyncListSystemCountersReq,4,19738,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncListSystemCountersReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncListSystemCountersReply
	CompareConstant(sz_xSyncListSystemCountersReply,32,19739,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncListSystemCountersReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncSystemCounter
	CompareConstant(sz_xSyncSystemCounter,14,19740,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncSystemCounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncCreateCounterReq
	CompareConstant(sz_xSyncCreateCounterReq,16,19741,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncCreateCounterReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncChangeCounterReq
	CompareConstant(sz_xSyncChangeCounterReq,16,19742,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncChangeCounterReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncSetCounterReq
	CompareConstant(sz_xSyncSetCounterReq,16,19743,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncSetCounterReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncDestroyCounterReq
	CompareConstant(sz_xSyncDestroyCounterReq,8,19744,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncDestroyCounterReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncQueryCounterReq
	CompareConstant(sz_xSyncQueryCounterReq,8,19745,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncQueryCounterReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncQueryCounterReply
	CompareConstant(sz_xSyncQueryCounterReply,32,19746,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncQueryCounterReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncAwaitReq
	CompareConstant(sz_xSyncAwaitReq,4,19747,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncAwaitReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncWaitCondition
	CompareConstant(sz_xSyncWaitCondition,28,19748,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncWaitCondition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncCreateAlarmReq
	CompareConstant(sz_xSyncCreateAlarmReq,12,19749,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncCreateAlarmReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncDestroyAlarmReq
	CompareConstant(sz_xSyncDestroyAlarmReq,8,19750,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncDestroyAlarmReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncQueryAlarmReq
	CompareConstant(sz_xSyncQueryAlarmReq,8,19751,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncQueryAlarmReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncQueryAlarmReply
	CompareConstant(sz_xSyncQueryAlarmReply,40,19752,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncQueryAlarmReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncChangeAlarmReq
	CompareConstant(sz_xSyncChangeAlarmReq,12,19753,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncChangeAlarmReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncSetPriorityReq
	CompareConstant(sz_xSyncSetPriorityReq,12,19754,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncSetPriorityReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncGetPriorityReq
	CompareConstant(sz_xSyncGetPriorityReq,8,19755,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncGetPriorityReq\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_xSyncGetPriorityReply
	CompareConstant(sz_xSyncGetPriorityReply,32,19756,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: sz_xSyncGetPriorityReply\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct _xSyncInitialize,0, 39744, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncInitialize on All\n");
CheckOffset(struct _xSyncInitialize,reqType,0,1,218858)
CheckOffset(struct _xSyncInitialize,syncReqType,0,1,218859)
CheckOffset(struct _xSyncInitialize,length,0,1,218860)
CheckOffset(struct _xSyncInitialize,majorVersion,0,1,218861)
CheckOffset(struct _xSyncInitialize,minorVersion,0,1,218862)
CheckOffset(struct _xSyncInitialize,pad,0,1,218863)
#endif

#if 1
CheckTypeSize(xSyncInitializeReq,0, 39745, 1, 4.0, NULL, 39744, NULL)
#endif

#if 1
CheckTypeSize(xSyncInitializeReply,0, 39747, 1, 4.0, NULL, 39746, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncListSystemCounters,0, 39748, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncListSystemCounters on All\n");
CheckOffset(struct _xSyncListSystemCounters,reqType,0,1,218876)
CheckOffset(struct _xSyncListSystemCounters,syncReqType,0,1,218877)
CheckOffset(struct _xSyncListSystemCounters,length,0,1,218878)
#endif

#if 1
CheckTypeSize(xSyncListSystemCountersReq,0, 39749, 1, 4.0, NULL, 39748, NULL)
#endif

#if 1
CheckTypeSize(xSyncListSystemCountersReply,0, 39751, 1, 4.0, NULL, 39750, NULL)
#endif

#if 1
CheckTypeSize(xSyncSystemCounter,0, 39753, 1, 4.0, NULL, 39752, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncCreateCounterReq,0, 39754, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncCreateCounterReq on All\n");
CheckOffset(struct _xSyncCreateCounterReq,reqType,0,1,218893)
CheckOffset(struct _xSyncCreateCounterReq,syncReqType,0,1,218894)
CheckOffset(struct _xSyncCreateCounterReq,length,0,1,218895)
CheckOffset(struct _xSyncCreateCounterReq,cid,0,1,218896)
CheckOffset(struct _xSyncCreateCounterReq,initial_value_hi,0,1,218897)
CheckOffset(struct _xSyncCreateCounterReq,initial_value_lo,0,1,218898)
#endif

#if 1
CheckTypeSize(xSyncCreateCounterReq,0, 39755, 1, 4.0, NULL, 39754, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncChangeCounterReq,0, 39756, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncChangeCounterReq on All\n");
CheckOffset(struct _xSyncChangeCounterReq,reqType,0,1,218899)
CheckOffset(struct _xSyncChangeCounterReq,syncReqType,0,1,218900)
CheckOffset(struct _xSyncChangeCounterReq,length,0,1,218901)
CheckOffset(struct _xSyncChangeCounterReq,cid,0,1,218902)
CheckOffset(struct _xSyncChangeCounterReq,value_hi,0,1,218903)
CheckOffset(struct _xSyncChangeCounterReq,value_lo,0,1,218904)
#endif

#if 1
CheckTypeSize(xSyncChangeCounterReq,0, 39757, 1, 4.0, NULL, 39756, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncSetCounterReq,0, 39758, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncSetCounterReq on All\n");
CheckOffset(struct _xSyncSetCounterReq,reqType,0,1,218905)
CheckOffset(struct _xSyncSetCounterReq,syncReqType,0,1,218906)
CheckOffset(struct _xSyncSetCounterReq,length,0,1,218907)
CheckOffset(struct _xSyncSetCounterReq,cid,0,1,218908)
CheckOffset(struct _xSyncSetCounterReq,value_hi,0,1,218909)
CheckOffset(struct _xSyncSetCounterReq,value_lo,0,1,218910)
#endif

#if 1
CheckTypeSize(xSyncSetCounterReq,0, 39759, 1, 4.0, NULL, 39758, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncDestroyCounterReq,0, 39760, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncDestroyCounterReq on All\n");
CheckOffset(struct _xSyncDestroyCounterReq,reqType,0,1,218911)
CheckOffset(struct _xSyncDestroyCounterReq,syncReqType,0,1,218912)
CheckOffset(struct _xSyncDestroyCounterReq,length,0,1,218913)
CheckOffset(struct _xSyncDestroyCounterReq,counter,0,1,218914)
#endif

#if 1
CheckTypeSize(xSyncDestroyCounterReq,0, 39761, 1, 4.0, NULL, 39760, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncQueryCounterReq,0, 39762, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncQueryCounterReq on All\n");
CheckOffset(struct _xSyncQueryCounterReq,reqType,0,1,218915)
CheckOffset(struct _xSyncQueryCounterReq,syncReqType,0,1,218916)
CheckOffset(struct _xSyncQueryCounterReq,length,0,1,218917)
CheckOffset(struct _xSyncQueryCounterReq,counter,0,1,218918)
#endif

#if 1
CheckTypeSize(xSyncQueryCounterReq,0, 39763, 1, 4.0, NULL, 39762, NULL)
#endif

#if 1
CheckTypeSize(xSyncQueryCounterReply,0, 39765, 1, 4.0, NULL, 39764, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncAwaitReq,0, 39766, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncAwaitReq on All\n");
CheckOffset(struct _xSyncAwaitReq,reqType,0,1,218929)
CheckOffset(struct _xSyncAwaitReq,syncReqType,0,1,218930)
CheckOffset(struct _xSyncAwaitReq,length,0,1,218931)
#endif

#if 1
CheckTypeSize(xSyncAwaitReq,0, 39767, 1, 4.0, NULL, 39766, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncWaitCondition,0, 39768, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncWaitCondition on All\n");
CheckOffset(struct _xSyncWaitCondition,counter,0,1,218932)
CheckOffset(struct _xSyncWaitCondition,value_type,0,1,218933)
CheckOffset(struct _xSyncWaitCondition,wait_value_hi,0,1,218934)
CheckOffset(struct _xSyncWaitCondition,wait_value_lo,0,1,218935)
CheckOffset(struct _xSyncWaitCondition,test_type,0,1,218936)
CheckOffset(struct _xSyncWaitCondition,event_threshold_hi,0,1,218937)
CheckOffset(struct _xSyncWaitCondition,event_threshold_lo,0,1,218938)
#endif

#if 1
CheckTypeSize(xSyncWaitCondition,0, 39769, 1, 4.0, NULL, 39768, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncCreateAlarmReq,0, 39770, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncCreateAlarmReq on All\n");
CheckOffset(struct _xSyncCreateAlarmReq,reqType,0,1,218939)
CheckOffset(struct _xSyncCreateAlarmReq,syncReqType,0,1,218940)
CheckOffset(struct _xSyncCreateAlarmReq,length,0,1,218941)
CheckOffset(struct _xSyncCreateAlarmReq,id,0,1,218942)
CheckOffset(struct _xSyncCreateAlarmReq,valueMask,0,1,218943)
#endif

#if 1
CheckTypeSize(xSyncCreateAlarmReq,0, 39771, 1, 4.0, NULL, 39770, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncDestroyAlarmReq,0, 39772, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncDestroyAlarmReq on All\n");
CheckOffset(struct _xSyncDestroyAlarmReq,reqType,0,1,218944)
CheckOffset(struct _xSyncDestroyAlarmReq,syncReqType,0,1,218945)
CheckOffset(struct _xSyncDestroyAlarmReq,length,0,1,218946)
CheckOffset(struct _xSyncDestroyAlarmReq,alarm,0,1,218947)
#endif

#if 1
CheckTypeSize(xSyncDestroyAlarmReq,0, 39773, 1, 4.0, NULL, 39772, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncQueryAlarmReq,0, 39774, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncQueryAlarmReq on All\n");
CheckOffset(struct _xSyncQueryAlarmReq,reqType,0,1,218948)
CheckOffset(struct _xSyncQueryAlarmReq,syncReqType,0,1,218949)
CheckOffset(struct _xSyncQueryAlarmReq,length,0,1,218950)
CheckOffset(struct _xSyncQueryAlarmReq,alarm,0,1,218951)
#endif

#if 1
CheckTypeSize(xSyncQueryAlarmReq,0, 39775, 1, 4.0, NULL, 39774, NULL)
#endif

#if 1
CheckTypeSize(xSyncQueryAlarmReply,0, 39777, 1, 4.0, NULL, 39776, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncChangeAlarmReq,0, 39778, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncChangeAlarmReq on All\n");
CheckOffset(struct _xSyncChangeAlarmReq,reqType,0,1,218967)
CheckOffset(struct _xSyncChangeAlarmReq,syncReqType,0,1,218968)
CheckOffset(struct _xSyncChangeAlarmReq,length,0,1,218969)
CheckOffset(struct _xSyncChangeAlarmReq,alarm,0,1,218970)
CheckOffset(struct _xSyncChangeAlarmReq,valueMask,0,1,218971)
#endif

#if 1
CheckTypeSize(xSyncChangeAlarmReq,0, 39779, 1, 4.0, NULL, 39778, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncSetPriority,0, 39780, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncSetPriority on All\n");
CheckOffset(struct _xSyncSetPriority,reqType,0,1,218972)
CheckOffset(struct _xSyncSetPriority,syncReqType,0,1,218973)
CheckOffset(struct _xSyncSetPriority,length,0,1,218974)
CheckOffset(struct _xSyncSetPriority,id,0,1,218975)
CheckOffset(struct _xSyncSetPriority,priority,0,1,218976)
#endif

#if 1
CheckTypeSize(xSyncSetPriorityReq,0, 39781, 1, 4.0, NULL, 39780, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncGetPriority,0, 39782, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncGetPriority on All\n");
CheckOffset(struct _xSyncGetPriority,reqType,0,1,218977)
CheckOffset(struct _xSyncGetPriority,syncReqType,0,1,218978)
CheckOffset(struct _xSyncGetPriority,length,0,1,218979)
CheckOffset(struct _xSyncGetPriority,id,0,1,218980)
#endif

#if 1
CheckTypeSize(xSyncGetPriorityReq,0, 39783, 1, 4.0, NULL, 39782, NULL)
#endif

#if 1
CheckTypeSize(xSyncGetPriorityReply,0, 39785, 1, 4.0, NULL, 39784, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncCounterNotifyEvent,0, 39786, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncCounterNotifyEvent on All\n");
CheckOffset(struct _xSyncCounterNotifyEvent,type,0,1,218991)
CheckOffset(struct _xSyncCounterNotifyEvent,kind,0,1,218992)
CheckOffset(struct _xSyncCounterNotifyEvent,sequenceNumber,0,1,218993)
CheckOffset(struct _xSyncCounterNotifyEvent,counter,0,1,218994)
CheckOffset(struct _xSyncCounterNotifyEvent,wait_value_hi,0,1,218995)
CheckOffset(struct _xSyncCounterNotifyEvent,wait_value_lo,0,1,218996)
CheckOffset(struct _xSyncCounterNotifyEvent,counter_value_hi,0,1,218997)
CheckOffset(struct _xSyncCounterNotifyEvent,counter_value_lo,0,1,218998)
CheckOffset(struct _xSyncCounterNotifyEvent,time,0,1,218999)
CheckOffset(struct _xSyncCounterNotifyEvent,count,0,1,219000)
CheckOffset(struct _xSyncCounterNotifyEvent,destroyed,0,1,219001)
CheckOffset(struct _xSyncCounterNotifyEvent,pad0,0,1,219002)
#endif

#if 1
CheckTypeSize(xSyncCounterNotifyEvent,0, 39787, 1, 4.0, NULL, 39786, NULL)
#endif

#if 1
CheckTypeSize(struct _xSyncAlarmNotifyEvent,0, 39788, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for _xSyncAlarmNotifyEvent on All\n");
CheckOffset(struct _xSyncAlarmNotifyEvent,type,0,1,219003)
CheckOffset(struct _xSyncAlarmNotifyEvent,kind,0,1,219004)
CheckOffset(struct _xSyncAlarmNotifyEvent,sequenceNumber,0,1,219005)
CheckOffset(struct _xSyncAlarmNotifyEvent,alarm,0,1,219006)
CheckOffset(struct _xSyncAlarmNotifyEvent,counter_value_hi,0,1,219007)
CheckOffset(struct _xSyncAlarmNotifyEvent,counter_value_lo,0,1,219008)
CheckOffset(struct _xSyncAlarmNotifyEvent,alarm_value_hi,0,1,219009)
CheckOffset(struct _xSyncAlarmNotifyEvent,alarm_value_lo,0,1,219010)
CheckOffset(struct _xSyncAlarmNotifyEvent,time,0,1,219011)
CheckOffset(struct _xSyncAlarmNotifyEvent,state,0,1,219012)
CheckOffset(struct _xSyncAlarmNotifyEvent,pad0,0,1,219013)
CheckOffset(struct _xSyncAlarmNotifyEvent,pad1,0,1,219014)
CheckOffset(struct _xSyncAlarmNotifyEvent,pad2,0,1,219015)
#endif

#if 1
CheckTypeSize(xSyncAlarmNotifyEvent,0, 39789, 1, 4.0, NULL, 39788, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/syncstr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
