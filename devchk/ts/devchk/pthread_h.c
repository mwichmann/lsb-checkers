/*
 * Test of pthread.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "pthread.h"



#ifdef TET_TEST
void pthread_h()
{
#else
int pthread_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in pthread.h\n");
#endif

#ifdef PTHREAD_CREATE_JOINABLE
	CompareConstant(PTHREAD_CREATE_JOINABLE,PTHREAD_CREATE_JOINABLE)
#else
Msg( "Warning: Constant not found: PTHREAD_CREATE_JOINABLE\n");
#endif

#ifdef PTHREAD_CREATE_DETACHED
	CompareConstant(PTHREAD_CREATE_DETACHED,PTHREAD_CREATE_DETACHED)
#else
Msg( "Warning: Constant not found: PTHREAD_CREATE_DETACHED\n");
#endif

#ifdef PTHREAD_INHERIT_SCHED
	CompareConstant(PTHREAD_INHERIT_SCHED,PTHREAD_INHERIT_SCHED)
#else
Msg( "Warning: Constant not found: PTHREAD_INHERIT_SCHED\n");
#endif

#ifdef PTHREAD_EXPLICIT_SCHED
	CompareConstant(PTHREAD_EXPLICIT_SCHED,PTHREAD_EXPLICIT_SCHED)
#else
Msg( "Warning: Constant not found: PTHREAD_EXPLICIT_SCHED\n");
#endif

#ifdef PTHREAD_SCOPE_SYSTEM
	CompareConstant(PTHREAD_SCOPE_SYSTEM,PTHREAD_SCOPE_SYSTEM)
#else
Msg( "Warning: Constant not found: PTHREAD_SCOPE_SYSTEM\n");
#endif

#ifdef PTHREAD_SCOPE_PROCESS
	CompareConstant(PTHREAD_SCOPE_PROCESS,PTHREAD_SCOPE_PROCESS)
#else
Msg( "Warning: Constant not found: PTHREAD_SCOPE_PROCESS\n");
#endif

#ifdef PTHREAD_PROCESS_PRIVATE
	CompareConstant(PTHREAD_PROCESS_PRIVATE,PTHREAD_PROCESS_PRIVATE)
#else
Msg( "Warning: Constant not found: PTHREAD_PROCESS_PRIVATE\n");
#endif

#ifdef PTHREAD_PROCESS_SHARED
	CompareConstant(PTHREAD_PROCESS_SHARED,PTHREAD_PROCESS_SHARED)
#else
Msg( "Warning: Constant not found: PTHREAD_PROCESS_SHARED\n");
#endif

#ifdef PTHREAD_ONCE_INIT
	CompareConstant(PTHREAD_ONCE_INIT,0)
#else
Msg( "Warning: Constant not found: PTHREAD_ONCE_INIT\n");
#endif

#ifdef PTHREAD_CANCEL_ENABLE
	CompareConstant(PTHREAD_CANCEL_ENABLE,PTHREAD_CANCEL_ENABLE)
#else
Msg( "Warning: Constant not found: PTHREAD_CANCEL_ENABLE\n");
#endif

#ifdef PTHREAD_CANCEL_DISABLE
	CompareConstant(PTHREAD_CANCEL_DISABLE,PTHREAD_CANCEL_DISABLE)
#else
Msg( "Warning: Constant not found: PTHREAD_CANCEL_DISABLE\n");
#endif

#ifdef PTHREAD_CANCEL_DEFERRED
	CompareConstant(PTHREAD_CANCEL_DEFERRED,PTHREAD_CANCEL_DEFERRED)
#else
Msg( "Warning: Constant not found: PTHREAD_CANCEL_DEFERRED\n");
#endif

#ifdef PTHREAD_CANCEL_ASYNCHRONOUS
	CompareConstant(PTHREAD_CANCEL_ASYNCHRONOUS,PTHREAD_CANCEL_ASYNCHRONOUS)
#else
Msg( "Warning: Constant not found: PTHREAD_CANCEL_ASYNCHRONOUS\n");
#endif

#ifdef PTHREAD_CANCELED
	CompareConstant(PTHREAD_CANCELED,((void*)-1))
#else
Msg( "Warning: Constant not found: PTHREAD_CANCELED\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_key_t,4, 9059, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9059,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_t,4, 9040, 2)
#elif __ia64__
CheckTypeSize(pthread_t,8, 9040, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9040,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in pthread.h\n",cnt);
return cnt;
#endif

}
