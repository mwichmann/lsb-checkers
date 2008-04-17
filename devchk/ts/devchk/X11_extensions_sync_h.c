/*
 * Test of X11/extensions/sync.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/sync.h"



#ifdef TET_TEST
void X11_extensions_sync_h()
{
#else
int X11_extensions_sync_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/sync.h\n");
#endif

printf("Checking data structures in X11/extensions/sync.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SYNC_NAME
	CompareConstant(SYNC_NAME,"SYNC",2953,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SYNC_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SYNC_MAJOR_VERSION
	CompareConstant(SYNC_MAJOR_VERSION,3,2954,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SYNC_MAJOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SYNC_MINOR_VERSION
	CompareConstant(SYNC_MINOR_VERSION,0,2955,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SYNC_MINOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncInitialize
	CompareConstant(X_SyncInitialize,0,2956,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncInitialize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncListSystemCounters
	CompareConstant(X_SyncListSystemCounters,1,2957,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncListSystemCounters\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncCreateCounter
	CompareConstant(X_SyncCreateCounter,2,2958,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncCreateCounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncSetCounter
	CompareConstant(X_SyncSetCounter,3,2959,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncSetCounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncChangeCounter
	CompareConstant(X_SyncChangeCounter,4,2960,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncChangeCounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncQueryCounter
	CompareConstant(X_SyncQueryCounter,5,2961,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncQueryCounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncDestroyCounter
	CompareConstant(X_SyncDestroyCounter,6,2962,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncDestroyCounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncAwait
	CompareConstant(X_SyncAwait,7,2963,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncAwait\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncCreateAlarm
	CompareConstant(X_SyncCreateAlarm,8,2964,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncCreateAlarm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncChangeAlarm
	CompareConstant(X_SyncChangeAlarm,9,2965,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncChangeAlarm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncQueryAlarm
	CompareConstant(X_SyncQueryAlarm,10,2966,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncQueryAlarm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncDestroyAlarm
	CompareConstant(X_SyncDestroyAlarm,11,2967,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncDestroyAlarm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncSetPriority
	CompareConstant(X_SyncSetPriority,12,2968,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncSetPriority\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_SyncGetPriority
	CompareConstant(X_SyncGetPriority,13,2969,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: X_SyncGetPriority\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncCounterNotify
	CompareConstant(XSyncCounterNotify,0,2970,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncCounterNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncAlarmNotify
	CompareConstant(XSyncAlarmNotify,1,2971,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncAlarmNotify\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncAlarmNotifyMask
	CompareConstant(XSyncAlarmNotifyMask,(1L<<XSyncAlarmNotify),2972,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncAlarmNotifyMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncNumberEvents
	CompareConstant(XSyncNumberEvents,2L,2973,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncNumberEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncBadCounter
	CompareConstant(XSyncBadCounter,0L,2974,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncBadCounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncBadAlarm
	CompareConstant(XSyncBadAlarm,1L,2975,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncBadAlarm\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncNumberErrors
	CompareConstant(XSyncNumberErrors,(XSyncBadAlarm+1),2976,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncNumberErrors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncCACounter
	CompareConstant(XSyncCACounter,(1L<<0),2977,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncCACounter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncCAValueType
	CompareConstant(XSyncCAValueType,(1L<<1),2978,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncCAValueType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncCAValue
	CompareConstant(XSyncCAValue,(1L<<2),2979,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncCAValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncCATestType
	CompareConstant(XSyncCATestType,(1L<<3),2980,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncCATestType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncCADelta
	CompareConstant(XSyncCADelta,(1L<<4),2981,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncCADelta\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XSyncCAEvents
	CompareConstant(XSyncCAEvents,(1L<<5),2982,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XSyncCAEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncIntToValue(pv,i) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncIntsToValue(pv,l,h) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueGreaterThan(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueLessThan(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueGreaterOrEqual(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueLessOrEqual(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueEqual(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueIsNegative(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueIsZero(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueIsPositive(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueLow32(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueHigh32(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueAdd(presult,a,b,poverflow) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncValueSubtract(presult,a,b,poverflow) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncMaxValue(pv) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XSyncMinValue(pv) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncIntToValue(pv,i) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncIntsToValue(pv,l,h) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueGreaterThan(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueLessThan(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueGreaterOrEqual(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueLessOrEqual(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueEqual(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueIsNegative(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueIsZero(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueIsPositive(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueLow32(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueHigh32(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueAdd(presult,a,b,poverflow) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncValueSubtract(presult,a,b,poverflow) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncMaxValue(pv) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSyncMinValue(pv) */
#endif

#if 1
CheckTypeSize(struct _XSyncSystemCounter,0, 8614, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XSyncSystemCounter on All\n");
CheckOffset(struct _XSyncSystemCounter,name,0,1,28933)
CheckOffset(struct _XSyncSystemCounter,counter,0,1,28934)
CheckOffset(struct _XSyncSystemCounter,resolution,0,1,28935)
#endif

#if defined __i386__
CheckTypeSize(XSyncSystemCounter,16, 8615, 2, 1.2, NULL, 8614, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 3, 1.2, NULL, 8614, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncSystemCounter,16, 8615, 6, 1.2, NULL, 8614, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncSystemCounter,16, 8615, 10, 1.2, NULL, 8614, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 9, 1.2, NULL, 8614, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncSystemCounter,24, 8615, 12, 1.2, NULL, 8614, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 11, 1.2, NULL, 8614, NULL)
#else
Msg("Find size of XSyncSystemCounter (8615)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8614,NULL);\n",architecture,8615,0);
#endif

#if defined __i386__
CheckTypeSize(XSyncTrigger,20, 8617, 2, 1.2, NULL, 8616, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncTrigger,24, 8617, 3, 1.2, NULL, 8616, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncTrigger,20, 8617, 6, 1.2, NULL, 8616, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncTrigger,20, 8617, 10, 1.2, NULL, 8616, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncTrigger,24, 8617, 9, 1.2, NULL, 8616, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncTrigger,24, 8617, 12, 1.2, NULL, 8616, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncTrigger,24, 8617, 11, 1.2, NULL, 8616, NULL)
#else
Msg("Find size of XSyncTrigger (8617)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8616,NULL);\n",architecture,8617,0);
#endif

#if defined __i386__
CheckTypeSize(XSyncWaitCondition,28, 8619, 2, 1.2, NULL, 8618, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 3, 1.2, NULL, 8618, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncWaitCondition,28, 8619, 6, 1.2, NULL, 8618, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncWaitCondition,28, 8619, 10, 1.2, NULL, 8618, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 9, 1.2, NULL, 8618, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncWaitCondition,32, 8619, 12, 1.2, NULL, 8618, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 11, 1.2, NULL, 8618, NULL)
#else
Msg("Find size of XSyncWaitCondition (8619)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8618,NULL);\n",architecture,8619,0);
#endif

#if defined __i386__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 2, 1.2, NULL, 8620, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 3, 1.2, NULL, 8620, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 6, 1.2, NULL, 8620, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 10, 1.2, NULL, 8620, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 9, 1.2, NULL, 8620, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 12, 1.2, NULL, 8620, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 11, 1.2, NULL, 8620, NULL)
#else
Msg("Find size of XSyncAlarmAttributes (8621)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8620,NULL);\n",architecture,8621,0);
#endif

#if 1
CheckTypeSize(XSyncCounterNotifyEvent,0, 8623, 1, 1.2, NULL, 8622, NULL)
#endif

#if 1
CheckTypeSize(XSyncAlarmNotifyEvent,0, 8625, 1, 1.2, NULL, 8624, NULL)
#endif

#if 1
CheckTypeSize(XSyncAlarmError,0, 8627, 1, 1.2, NULL, 8626, NULL)
#endif

#if 1
CheckTypeSize(XSyncCounterError,0, 8629, 1, 1.2, NULL, 8628, NULL)
#endif

#if defined __i386__
CheckTypeSize(XSyncCounter,4, 8609, 2, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncCounter,8, 8609, 3, 1.2, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncCounter,4, 8609, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncCounter,4, 8609, 10, 1.2, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncCounter,8, 8609, 9, 1.2, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncCounter,8, 8609, 12, 1.2, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncCounter,8, 8609, 11, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of XSyncCounter (8609)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8609,0);
#endif

#if defined __i386__
CheckTypeSize(XSyncAlarm,4, 8610, 2, 1.2, NULL, 8171, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncAlarm,8, 8610, 3, 1.2, NULL, 8171, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncAlarm,4, 8610, 6, 1.2, NULL, 8171, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncAlarm,4, 8610, 10, 1.2, NULL, 8171, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncAlarm,8, 8610, 9, 1.2, NULL, 8171, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncAlarm,8, 8610, 12, 1.2, NULL, 8171, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncAlarm,8, 8610, 11, 1.2, NULL, 8171, NULL)
#else
Msg("Find size of XSyncAlarm (8610)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8171,NULL);\n",architecture,8610,0);
#endif

#if 1
CheckTypeSize(struct _XSyncValue,0, 8611, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XSyncValue on All\n");
CheckOffset(struct _XSyncValue,hi,0,1,28931)
CheckOffset(struct _XSyncValue,lo,0,1,28932)
#endif

#if defined __i386__
CheckTypeSize(XSyncValue,8, 8612, 2, 1.2, NULL, 8611, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncValue,8, 8612, 3, 1.2, NULL, 8611, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncValue,8, 8612, 6, 1.2, NULL, 8611, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncValue,8, 8612, 10, 1.2, NULL, 8611, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncValue,8, 8612, 9, 1.2, NULL, 8611, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncValue,8, 8612, 12, 1.2, NULL, 8611, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncValue,8, 8612, 11, 1.2, NULL, 8611, NULL)
#else
Msg("Find size of XSyncValue (8612)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8611,NULL);\n",architecture,8612,0);
#endif

#if 1
CheckEnum("XSyncAbsolute",XSyncAbsolute,0,28922)
CheckEnum("XSyncRelative",XSyncRelative,(0) + 1,28923)
#endif

#if defined __i386__
CheckTypeSize(XSyncValueType,4, 8964, 2, 1.2, NULL, 8963, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncValueType,4, 8964, 3, 1.2, NULL, 8963, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncValueType,4, 8964, 6, 1.2, NULL, 8963, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncValueType,4, 8964, 10, 1.2, NULL, 8963, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncValueType,4, 8964, 9, 1.2, NULL, 8963, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncValueType,4, 8964, 12, 1.2, NULL, 8963, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncValueType,4, 8964, 11, 1.2, NULL, 8963, NULL)
#else
Msg("Find size of XSyncValueType (8964)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8963,NULL);\n",architecture,8964,0);
#endif

#if 1
CheckEnum("XSyncPositiveTransition",XSyncPositiveTransition,0,28924)
CheckEnum("XSyncNegativeTransition",XSyncNegativeTransition,(0) + 1,28925)
CheckEnum("XSyncPositiveComparison",XSyncPositiveComparison,((0) + 1) + 1,28926)
CheckEnum("XSyncNegativeComparison",XSyncNegativeComparison,(((0) + 1) + 1) + 1,28927)
#endif

#if defined __i386__
CheckTypeSize(XSyncTestType,4, 8966, 2, 1.2, NULL, 8965, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncTestType,4, 8966, 3, 1.2, NULL, 8965, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncTestType,4, 8966, 6, 1.2, NULL, 8965, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncTestType,4, 8966, 10, 1.2, NULL, 8965, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncTestType,4, 8966, 9, 1.2, NULL, 8965, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncTestType,4, 8966, 12, 1.2, NULL, 8965, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncTestType,4, 8966, 11, 1.2, NULL, 8965, NULL)
#else
Msg("Find size of XSyncTestType (8966)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8965,NULL);\n",architecture,8966,0);
#endif

#if 1
CheckEnum("XSyncAlarmActive",XSyncAlarmActive,0,28928)
CheckEnum("XSyncAlarmInactive",XSyncAlarmInactive,(0) + 1,28929)
CheckEnum("XSyncAlarmDestroyed",XSyncAlarmDestroyed,((0) + 1) + 1,28930)
#endif

#if defined __i386__
CheckTypeSize(XSyncAlarmState,4, 8968, 2, 1.2, NULL, 8967, NULL)
#elif defined __ia64__
CheckTypeSize(XSyncAlarmState,4, 8968, 3, 1.2, NULL, 8967, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XSyncAlarmState,4, 8968, 6, 1.2, NULL, 8967, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XSyncAlarmState,4, 8968, 10, 1.2, NULL, 8967, NULL)
#elif defined __powerpc64__
CheckTypeSize(XSyncAlarmState,4, 8968, 9, 1.2, NULL, 8967, NULL)
#elif defined __s390x__
CheckTypeSize(XSyncAlarmState,4, 8968, 12, 1.2, NULL, 8967, NULL)
#elif defined __x86_64__
CheckTypeSize(XSyncAlarmState,4, 8968, 11, 1.2, NULL, 8967, NULL)
#else
Msg("Find size of XSyncAlarmState (8968)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8967, NULL);\n",architecture,8968,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/sync.h\n\n",pcnt,cnt);
return cnt;
#endif

}
