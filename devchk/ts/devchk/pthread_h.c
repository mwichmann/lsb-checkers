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

/* No test for PTHREAD_MUTEX_INITIALIZER */
#ifdef PTHREAD_MUTEX_TIMED_NP
	CompareConstant(PTHREAD_MUTEX_TIMED_NP,1)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_TIMED_NP\n");
cnt++;
#endif

/* No test for __LOCK_INITIALIZER */
#ifdef PTHREAD_CREATE_JOINABLE
	CompareConstant(PTHREAD_CREATE_JOINABLE,0)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_JOINABLE\n");
cnt++;
#endif

#ifdef PTHREAD_CREATE_DETACHED
	CompareConstant(PTHREAD_CREATE_DETACHED,1)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_DETACHED\n");
cnt++;
#endif

#ifdef PTHREAD_INHERIT_SCHED
	CompareConstant(PTHREAD_INHERIT_SCHED,0)
#else
Msg( "Error: Constant not found: PTHREAD_INHERIT_SCHED\n");
cnt++;
#endif

#ifdef PTHREAD_EXPLICIT_SCHED
	CompareConstant(PTHREAD_EXPLICIT_SCHED,1)
#else
Msg( "Error: Constant not found: PTHREAD_EXPLICIT_SCHED\n");
cnt++;
#endif

#ifdef PTHREAD_SCOPE_SYSTEM
	CompareConstant(PTHREAD_SCOPE_SYSTEM,0)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_SYSTEM\n");
cnt++;
#endif

#ifdef PTHREAD_SCOPE_PROCESS
	CompareConstant(PTHREAD_SCOPE_PROCESS,1)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_PROCESS\n");
cnt++;
#endif

#ifdef PTHREAD_PROCESS_PRIVATE
	CompareConstant(PTHREAD_PROCESS_PRIVATE,0)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_PRIVATE\n");
cnt++;
#endif

#ifdef PTHREAD_PROCESS_SHARED
	CompareConstant(PTHREAD_PROCESS_SHARED,1)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_SHARED\n");
cnt++;
#endif

#ifdef PTHREAD_ONCE_INIT
	CompareConstant(PTHREAD_ONCE_INIT,0)
#else
Msg( "Error: Constant not found: PTHREAD_ONCE_INIT\n");
cnt++;
#endif

#ifdef PTHREAD_CANCEL_ENABLE
	CompareConstant(PTHREAD_CANCEL_ENABLE,0)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ENABLE\n");
cnt++;
#endif

#ifdef PTHREAD_CANCEL_DISABLE
	CompareConstant(PTHREAD_CANCEL_DISABLE,1)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DISABLE\n");
cnt++;
#endif

#ifdef PTHREAD_CANCEL_DEFERRED
	CompareConstant(PTHREAD_CANCEL_DEFERRED,0)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DEFERRED\n");
cnt++;
#endif

#ifdef PTHREAD_CANCEL_ASYNCHRONOUS
	CompareConstant(PTHREAD_CANCEL_ASYNCHRONOUS,1)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ASYNCHRONOUS\n");
cnt++;
#endif

#ifdef PTHREAD_CANCELED
	CompareConstant(PTHREAD_CANCELED,((void*)-1))
#else
Msg( "Error: Constant not found: PTHREAD_CANCELED\n");
cnt++;
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9056,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_key_t,4, 9059, 2)
#elif __ia64__
CheckTypeSize(pthread_key_t,4, 9059, 3)
#elif __powerpc__
CheckTypeSize(pthread_key_t,4, 9059, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9059,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_once_t,4, 9062, 2)
#elif __ia64__
CheckTypeSize(pthread_once_t,4, 9062, 3)
#elif __powerpc__
CheckTypeSize(pthread_once_t,4, 9062, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9062,0);
#endif

#ifdef __i386__
CheckTypeSize(__atomic_lock_t,4, 10276, 2)
#elif __ia64__
CheckTypeSize(__atomic_lock_t,4, 10276, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10276,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_t,4, 9040, 2)
#elif __ia64__
CheckTypeSize(pthread_t,8, 9040, 3)
#elif __powerpc__
CheckTypeSize(pthread_t,4, 9040, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9040,0);
#endif

#ifdef __i386__
CheckTypeSize(struct _pthread_fastlock,8, 10105, 2)
CheckOffset(struct _pthread_fastlock,__status,0,2,33602)
CheckOffset(struct _pthread_fastlock,__spinlock,4,2,34427)
#elif __ia64__
CheckTypeSize(struct _pthread_fastlock,16, 10105, 3)
#elif __powerpc__
CheckTypeSize(struct _pthread_fastlock,8, 10105, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10105,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_mutex_t,24, 9047, 2)
#elif __ia64__
CheckTypeSize(pthread_mutex_t,40, 9047, 3)
#elif __powerpc__
CheckTypeSize(pthread_mutex_t,24, 9047, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9047,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 2)
#elif __ia64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 3)
#elif __powerpc__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9049,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_attr_t,36, 9042, 2)
#elif __ia64__
CheckTypeSize(pthread_attr_t,56, 9042, 3)
#elif __powerpc__
CheckTypeSize(pthread_attr_t,36, 9042, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9042,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_cond_t,12, 9051, 2)
#elif __ia64__
CheckTypeSize(pthread_cond_t,24, 9051, 3)
#elif __powerpc__
CheckTypeSize(pthread_cond_t,12, 9051, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9051,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_condattr_t,4, 9053, 2)
#elif __ia64__
CheckTypeSize(pthread_condattr_t,4, 9053, 3)
#elif __powerpc__
CheckTypeSize(pthread_condattr_t,4, 9053, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9053,0);
#endif

#ifdef __i386__
CheckTypeSize(_pthread_descr,4, 9087, 2)
#elif __ia64__
CheckTypeSize(_pthread_descr,8, 9087, 3)
#elif __powerpc__
CheckTypeSize(_pthread_descr,4, 9087, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9087,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_rwlock_t,32, 9055, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9055,0);
#endif

#ifdef __i386__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9057,0);
#endif

#ifdef __i386__
CheckTypeSize(struct _pthread_rwlock_t,32, 10279, 2)
#endif

#ifdef __no_sym__
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
