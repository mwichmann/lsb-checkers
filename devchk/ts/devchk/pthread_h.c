/*
 * Test of pthread.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef _LSB_DEFAULT_ARCH
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_DISABLE
	CompareConstant(PTHREAD_CANCEL_DISABLE,1,1547,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DISABLE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_PROCESS_PRIVATE
	CompareConstant(PTHREAD_PROCESS_PRIVATE,0,1543,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_PRIVATE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_DEFAULT
	CompareConstant(PTHREAD_MUTEX_DEFAULT,1,5002,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_DEFAULT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCELED
	CompareConstant(PTHREAD_CANCELED,((void*)-1),1550,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCELED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_ENABLE
	CompareConstant(PTHREAD_CANCEL_ENABLE,0,1546,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ENABLE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CREATE_JOINABLE
	CompareConstant(PTHREAD_CREATE_JOINABLE,0,1537,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_JOINABLE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for PTHREAD_COND_INITIALIZER */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_ERRORCHECK
	CompareConstant(PTHREAD_MUTEX_ERRORCHECK,3,5003,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_ERRORCHECK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_SCOPE_PROCESS
	CompareConstant(PTHREAD_SCOPE_PROCESS,1,1542,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_PROCESS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_INHERIT_SCHED
	CompareConstant(PTHREAD_INHERIT_SCHED,0,1539,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_INHERIT_SCHED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_NORMAL
	CompareConstant(PTHREAD_MUTEX_NORMAL,1,5004,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_NORMAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_SCOPE_SYSTEM
	CompareConstant(PTHREAD_SCOPE_SYSTEM,0,1541,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_SYSTEM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_ONCE_INIT
	CompareConstant(PTHREAD_ONCE_INIT,0,1545,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_ONCE_INIT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_ASYNCHRONOUS
	CompareConstant(PTHREAD_CANCEL_ASYNCHRONOUS,1,1549,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ASYNCHRONOUS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for PTHREAD_MUTEX_INITIALIZER */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_DEFERRED
	CompareConstant(PTHREAD_CANCEL_DEFERRED,0,1548,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DEFERRED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_EXPLICIT_SCHED
	CompareConstant(PTHREAD_EXPLICIT_SCHED,1,1540,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_EXPLICIT_SCHED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for __LOCK_INITIALIZER */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_RECURSIVE
	CompareConstant(PTHREAD_MUTEX_RECURSIVE,2,5005,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_RECURSIVE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_PROCESS_SHARED
	CompareConstant(PTHREAD_PROCESS_SHARED,1,1544,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_SHARED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CREATE_DETACHED
	CompareConstant(PTHREAD_CREATE_DETACHED,1,1538,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_DETACHED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_TIMED_NP
	CompareConstant(PTHREAD_MUTEX_TIMED_NP,1,4958,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_TIMED_NP\n");
cnt++;
#endif

#endif

#ifdef __i386__
#elif __powerpc__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9056,0);
Msg("Find size of pthread_rwlock_t * (9056)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_key_t,4, 9059, 2)
#elif __ia64__
CheckTypeSize(pthread_key_t,4, 9059, 3)
#elif __powerpc__
CheckTypeSize(pthread_key_t,4, 9059, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9059,0);
Msg("Find size of pthread_key_t (9059)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_once_t,4, 9062, 2)
#elif __ia64__
CheckTypeSize(pthread_once_t,4, 9062, 3)
#elif __powerpc__
CheckTypeSize(pthread_once_t,4, 9062, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9062,0);
Msg("Find size of pthread_once_t (9062)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_t,4, 9040, 2)
#elif __ia64__
CheckTypeSize(pthread_t,8, 9040, 3)
#elif __powerpc__
CheckTypeSize(pthread_t,4, 9040, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9040,0);
Msg("Find size of pthread_t (9040)\n");
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
Msg("Find size of _pthread_fastlock (10105)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_mutex_t,24, 9047, 2)
#elif __ia64__
CheckTypeSize(pthread_mutex_t,40, 9047, 3)
#elif __powerpc__
CheckTypeSize(pthread_mutex_t,24, 9047, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9047,0);
Msg("Find size of pthread_mutex_t (9047)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 2)
#elif __ia64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 3)
#elif __powerpc__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9049,0);
Msg("Find size of pthread_mutexattr_t (9049)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_attr_t,36, 9042, 2)
#elif __ia64__
CheckTypeSize(pthread_attr_t,56, 9042, 3)
#elif __powerpc__
CheckTypeSize(pthread_attr_t,36, 9042, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9042,0);
Msg("Find size of pthread_attr_t (9042)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_cond_t,12, 9051, 2)
#elif __ia64__
CheckTypeSize(pthread_cond_t,24, 9051, 3)
#elif __powerpc__
CheckTypeSize(pthread_cond_t,12, 9051, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9051,0);
Msg("Find size of pthread_cond_t (9051)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_condattr_t,4, 9053, 2)
#elif __ia64__
CheckTypeSize(pthread_condattr_t,4, 9053, 3)
#elif __powerpc__
CheckTypeSize(pthread_condattr_t,4, 9053, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9053,0);
Msg("Find size of pthread_condattr_t (9053)\n");
#endif

#ifdef __i386__
CheckTypeSize(_pthread_descr,4, 9087, 2)
#elif __ia64__
CheckTypeSize(_pthread_descr,8, 9087, 3)
#elif __powerpc__
CheckTypeSize(_pthread_descr,4, 9087, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9087,0);
Msg("Find size of _pthread_descr (9087)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_rwlock_t,32, 9055, 2)
#elif __powerpc__
CheckTypeSize(pthread_rwlock_t,32, 9055, 6)
#elif __ia64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9055,0);
Msg("Find size of pthread_rwlock_t (9055)\n");
#endif

#ifdef __i386__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 2)
#elif __powerpc__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 6)
#elif __ia64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9057,0);
Msg("Find size of pthread_rwlockattr_t (9057)\n");
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
