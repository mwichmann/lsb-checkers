/*
 * Test of X11/extensions/sync.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/extensions/sync.h\n");
#endif

#if __i386__
CheckTypeSize(XSyncSystemCounter,16, 8615, 2)
#elif __ia64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncSystemCounter,16, 8615, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncSystemCounter,16, 8615, 10)
#elif __powerpc64__
CheckTypeSize(XSyncSystemCounter,24, 8615, 9)
#elif __s390x__
CheckTypeSize(XSyncSystemCounter,24, 8615, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8615,0);
Msg("Find size of XSyncSystemCounter (8615)\n");
#endif

#if __i386__
CheckTypeSize(XSyncTrigger,20, 8617, 2)
#elif __ia64__
CheckTypeSize(XSyncTrigger,24, 8617, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncTrigger,20, 8617, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncTrigger,20, 8617, 10)
#elif __powerpc64__
CheckTypeSize(XSyncTrigger,24, 8617, 9)
#elif __s390x__
CheckTypeSize(XSyncTrigger,24, 8617, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8617,0);
Msg("Find size of XSyncTrigger (8617)\n");
#endif

#if __i386__
CheckTypeSize(XSyncWaitCondition,28, 8619, 2)
#elif __ia64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncWaitCondition,28, 8619, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncWaitCondition,28, 8619, 10)
#elif __powerpc64__
CheckTypeSize(XSyncWaitCondition,32, 8619, 9)
#elif __s390x__
CheckTypeSize(XSyncWaitCondition,32, 8619, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8619,0);
Msg("Find size of XSyncWaitCondition (8619)\n");
#endif

#if __i386__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 2)
#elif __ia64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncAlarmAttributes,36, 8621, 10)
#elif __powerpc64__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 9)
#elif __s390x__
CheckTypeSize(XSyncAlarmAttributes,40, 8621, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8621,0);
Msg("Find size of XSyncAlarmAttributes (8621)\n");
#endif

#if __i386__
CheckTypeSize(XSyncCounter,4, 8609, 2)
#elif __ia64__
CheckTypeSize(XSyncCounter,8, 8609, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncCounter,4, 8609, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncCounter,4, 8609, 10)
#elif __powerpc64__
CheckTypeSize(XSyncCounter,8, 8609, 9)
#elif __s390x__
CheckTypeSize(XSyncCounter,8, 8609, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8609,0);
Msg("Find size of XSyncCounter (8609)\n");
#endif

#if __i386__
CheckTypeSize(XSyncAlarm,4, 8610, 2)
#elif __ia64__
CheckTypeSize(XSyncAlarm,8, 8610, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncAlarm,4, 8610, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncAlarm,4, 8610, 10)
#elif __powerpc64__
CheckTypeSize(XSyncAlarm,8, 8610, 9)
#elif __s390x__
CheckTypeSize(XSyncAlarm,8, 8610, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8610,0);
Msg("Find size of XSyncAlarm (8610)\n");
#endif

#if __i386__
CheckTypeSize(XSyncValue,8, 8612, 2)
#elif __ia64__
CheckTypeSize(XSyncValue,8, 8612, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncValue,8, 8612, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncValue,8, 8612, 10)
#elif __powerpc64__
CheckTypeSize(XSyncValue,8, 8612, 9)
#elif __s390x__
CheckTypeSize(XSyncValue,8, 8612, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8612,0);
Msg("Find size of XSyncValue (8612)\n");
#endif

#if __i386__
CheckTypeSize(XSyncValueType,4, 8964, 2)
#elif __ia64__
CheckTypeSize(XSyncValueType,4, 8964, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncValueType,4, 8964, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncValueType,4, 8964, 10)
#elif __powerpc64__
CheckTypeSize(XSyncValueType,4, 8964, 9)
#elif __s390x__
CheckTypeSize(XSyncValueType,4, 8964, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8964,0);
Msg("Find size of XSyncValueType (8964)\n");
#endif

#if __i386__
CheckTypeSize(XSyncTestType,4, 8966, 2)
#elif __ia64__
CheckTypeSize(XSyncTestType,4, 8966, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncTestType,4, 8966, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncTestType,4, 8966, 10)
#elif __powerpc64__
CheckTypeSize(XSyncTestType,4, 8966, 9)
#elif __s390x__
CheckTypeSize(XSyncTestType,4, 8966, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8966,0);
Msg("Find size of XSyncTestType (8966)\n");
#endif

#if __i386__
CheckTypeSize(XSyncAlarmState,4, 8968, 2)
#elif __ia64__
CheckTypeSize(XSyncAlarmState,4, 8968, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XSyncAlarmState,4, 8968, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(XSyncAlarmState,4, 8968, 10)
#elif __powerpc64__
CheckTypeSize(XSyncAlarmState,4, 8968, 9)
#elif __s390x__
CheckTypeSize(XSyncAlarmState,4, 8968, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8968,0);
Msg("Find size of XSyncAlarmState (8968)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/extensions/sync.h\n",cnt);
return cnt;
#endif

}
