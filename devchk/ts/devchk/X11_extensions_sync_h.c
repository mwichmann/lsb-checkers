/*
 * Test of X11/extensions/sync.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
CheckTypeSize(XSyncSystemCounter,16, 8615, 2);
#elif __ia64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncSystemCounter,16, 8615, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncSystemCounter,16, 8615, 10);
#elif __powerpc64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 9);
#elif __s390x__
CheckTypeSize(XSyncSystemCounter,24, 8615, 12);
#elif __x86_64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 11);
#elif 1
CheckTypeSize(XSyncSystemCounter,0, 8615, 1);
#endif

#if __i386__
CheckTypeSize(XSyncTrigger,20, 8617, 2);
#elif __ia64__
CheckTypeSize(XSyncTrigger,24, 8617, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncTrigger,20, 8617, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncTrigger,20, 8617, 10);
#elif __powerpc64__
CheckTypeSize(XSyncTrigger,24, 8617, 9);
#elif __s390x__
CheckTypeSize(XSyncTrigger,24, 8617, 12);
#elif __x86_64__
CheckTypeSize(XSyncTrigger,24, 8617, 11);
#elif 1
CheckTypeSize(XSyncTrigger,0, 8617, 1);
#endif

#if __i386__
CheckTypeSize(XSyncWaitCondition,28, 8619, 2);
#elif __ia64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncWaitCondition,28, 8619, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncWaitCondition,28, 8619, 10);
#elif __powerpc64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 9);
#elif __s390x__
CheckTypeSize(XSyncWaitCondition,32, 8619, 12);
#elif __x86_64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 11);
#elif 1
CheckTypeSize(XSyncWaitCondition,0, 8619, 1);
#endif

#if __i386__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 2);
#elif __ia64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 10);
#elif __powerpc64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 9);
#elif __s390x__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 12);
#elif __x86_64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 11);
#elif 1
CheckTypeSize(XSyncAlarmAttributes,0, 8621, 1);
#endif

#if __i386__
CheckTypeSize(XSyncCounter,4, 8609, 2);
#elif __ia64__
CheckTypeSize(XSyncCounter,8, 8609, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncCounter,4, 8609, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncCounter,4, 8609, 10);
#elif __powerpc64__
CheckTypeSize(XSyncCounter,8, 8609, 9);
#elif __s390x__
CheckTypeSize(XSyncCounter,8, 8609, 12);
#elif __x86_64__
CheckTypeSize(XSyncCounter,8, 8609, 11);
#elif 1
CheckTypeSize(XSyncCounter,0, 8609, 1);
#endif

#if __i386__
CheckTypeSize(XSyncAlarm,4, 8610, 2);
#elif __ia64__
CheckTypeSize(XSyncAlarm,8, 8610, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncAlarm,4, 8610, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncAlarm,4, 8610, 10);
#elif __powerpc64__
CheckTypeSize(XSyncAlarm,8, 8610, 9);
#elif __s390x__
CheckTypeSize(XSyncAlarm,8, 8610, 12);
#elif __x86_64__
CheckTypeSize(XSyncAlarm,8, 8610, 11);
#elif 1
CheckTypeSize(XSyncAlarm,0, 8610, 1);
#endif

#if __i386__
CheckTypeSize(XSyncValue,8, 8612, 2);
#elif __ia64__
CheckTypeSize(XSyncValue,8, 8612, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncValue,8, 8612, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncValue,8, 8612, 10);
#elif __powerpc64__
CheckTypeSize(XSyncValue,8, 8612, 9);
#elif __s390x__
CheckTypeSize(XSyncValue,8, 8612, 12);
#elif __x86_64__
CheckTypeSize(XSyncValue,8, 8612, 11);
#elif 1
CheckTypeSize(XSyncValue,0, 8612, 1);
#endif

#if __i386__
CheckTypeSize(XSyncValueType,4, 8964, 2);
#elif __ia64__
CheckTypeSize(XSyncValueType,4, 8964, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncValueType,4, 8964, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncValueType,4, 8964, 10);
#elif __powerpc64__
CheckTypeSize(XSyncValueType,4, 8964, 9);
#elif __s390x__
CheckTypeSize(XSyncValueType,4, 8964, 12);
#elif __x86_64__
CheckTypeSize(XSyncValueType,4, 8964, 11);
#elif 1
CheckTypeSize(XSyncValueType,0, 8964, 1);
#endif

#if __i386__
CheckTypeSize(XSyncTestType,4, 8966, 2);
#elif __ia64__
CheckTypeSize(XSyncTestType,4, 8966, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncTestType,4, 8966, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncTestType,4, 8966, 10);
#elif __powerpc64__
CheckTypeSize(XSyncTestType,4, 8966, 9);
#elif __s390x__
CheckTypeSize(XSyncTestType,4, 8966, 12);
#elif __x86_64__
CheckTypeSize(XSyncTestType,4, 8966, 11);
#elif 1
CheckTypeSize(XSyncTestType,0, 8966, 1);
#endif

#if __i386__
CheckTypeSize(XSyncAlarmState,4, 8968, 2);
#elif __ia64__
CheckTypeSize(XSyncAlarmState,4, 8968, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncAlarmState,4, 8968, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncAlarmState,4, 8968, 10);
#elif __powerpc64__
CheckTypeSize(XSyncAlarmState,4, 8968, 9);
#elif __s390x__
CheckTypeSize(XSyncAlarmState,4, 8968, 12);
#elif __x86_64__
CheckTypeSize(XSyncAlarmState,4, 8968, 11);
#elif 1
CheckTypeSize(XSyncAlarmState,0, 8968, 1);
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
