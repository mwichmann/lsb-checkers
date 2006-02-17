/*
 * Test of pthread.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
extern int pthread_setschedprio (pthread_t __target_thread, int __prio);
extern int __register_atfork (void (*__prepare) (void),
                              void (*__parent) (void),
                              void (*__child) (void),
                              void *__dso_handle);

#include "pthread.h"



#ifdef TET_TEST
void pthread_h()
{
#else
int pthread_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pthread.h\n");
#endif

printf("Checking data structures in pthread.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PTHREAD_MUTEX_INITIALIZER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PTHREAD_COND_INITIALIZER */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CREATE_JOINABLE
	CompareConstant(PTHREAD_CREATE_JOINABLE,0,1537,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_JOINABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CREATE_DETACHED
	CompareConstant(PTHREAD_CREATE_DETACHED,1,1538,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_DETACHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_INHERIT_SCHED
	CompareConstant(PTHREAD_INHERIT_SCHED,0,1539,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_INHERIT_SCHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_EXPLICIT_SCHED
	CompareConstant(PTHREAD_EXPLICIT_SCHED,1,1540,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_EXPLICIT_SCHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_SCOPE_SYSTEM
	CompareConstant(PTHREAD_SCOPE_SYSTEM,0,1541,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_SYSTEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_SCOPE_PROCESS
	CompareConstant(PTHREAD_SCOPE_PROCESS,1,1542,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_PROCESS_PRIVATE
	CompareConstant(PTHREAD_PROCESS_PRIVATE,0,1543,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_PROCESS_SHARED
	CompareConstant(PTHREAD_PROCESS_SHARED,1,1544,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_SHARED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_ONCE_INIT
	CompareConstant(PTHREAD_ONCE_INIT,0,1545,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_ONCE_INIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_ENABLE
	CompareConstant(PTHREAD_CANCEL_ENABLE,0,1546,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ENABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_DISABLE
	CompareConstant(PTHREAD_CANCEL_DISABLE,1,1547,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DISABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_DEFERRED
	CompareConstant(PTHREAD_CANCEL_DEFERRED,0,1548,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DEFERRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_ASYNCHRONOUS
	CompareConstant(PTHREAD_CANCEL_ASYNCHRONOUS,1,1549,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ASYNCHRONOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCELED
	CompareConstant(PTHREAD_CANCELED,((void*)-1),1550,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_CANCELED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for pthread_cleanup_push(routine,arg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for pthread_cleanup_pop(execute) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for __LOCK_INITIALIZER */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_DEFAULT
	CompareConstant(PTHREAD_MUTEX_DEFAULT,1,5002,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_ERRORCHECK
	CompareConstant(PTHREAD_MUTEX_ERRORCHECK,3,5003,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_ERRORCHECK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_NORMAL
	CompareConstant(PTHREAD_MUTEX_NORMAL,1,5004,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_RECURSIVE
	CompareConstant(PTHREAD_MUTEX_RECURSIVE,2,5005,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_RECURSIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_RWLOCK_DEFAULT_NP
	CompareConstant(PTHREAD_RWLOCK_DEFAULT_NP,2,5096,architecture)
#else
Msg( "Error: Constant not found: PTHREAD_RWLOCK_DEFAULT_NP\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct _pthread_cleanup_buffer,16, 6931, 2)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,4,2,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,2,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,4,2,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,4,2,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,2,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,8,2,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,4,2,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,12,2,40622)
#elif __s390x__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 12)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,12,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,12,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,12,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,12,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,12,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,12,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,12,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,12,40622)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _pthread_cleanup_buffer,16, 6931, 6)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,4,6,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,6,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,4,6,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,4,6,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,6,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,8,6,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,4,6,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,12,6,40622)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _pthread_cleanup_buffer,16, 6931, 10)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,4,10,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,10,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,4,10,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,4,10,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,10,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,8,10,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,4,10,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,12,10,40622)
#elif __ia64__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 3)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,3,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,3,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,3,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,3,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,3,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,3,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,3,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,3,40622)
#elif __powerpc64__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 9)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,9,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,9,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,9,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,9,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,9,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,9,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,9,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,9,40622)
#elif __x86_64__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 11)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,11,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,11,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,11,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,11,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,11,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,11,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,11,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,11,40622)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6931,0);
Msg("Find size of _pthread_cleanup_buffer (6931)\n");
#endif

#if __i386__
CheckTypeSize(pthread_rwlock_t *,4, 9056, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_rwlock_t *,0, 9056, 6)
#elif __ia64__
CheckTypeSize(pthread_rwlock_t *,0, 9056, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_rwlock_t *,0, 9056, 10)
#elif __powerpc64__
CheckTypeSize(pthread_rwlock_t *,0, 9056, 9)
#elif __s390x__
CheckTypeSize(pthread_rwlock_t *,0, 9056, 12)
#elif __x86_64__
CheckTypeSize(pthread_rwlock_t *,8, 9056, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9056,0);
Msg("Find size of pthread_rwlock_t * (9056)\n");
#endif

#if __i386__
CheckTypeSize(pthread_key_t,4, 9059, 2)
#elif __ia64__
CheckTypeSize(pthread_key_t,4, 9059, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_key_t,4, 9059, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_key_t,4, 9059, 10)
#elif __powerpc64__
CheckTypeSize(pthread_key_t,4, 9059, 9)
#elif __s390x__
CheckTypeSize(pthread_key_t,4, 9059, 12)
#elif __x86_64__
CheckTypeSize(pthread_key_t,4, 9059, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9059,0);
Msg("Find size of pthread_key_t (9059)\n");
#endif

#if __i386__
CheckTypeSize(pthread_once_t,4, 9062, 2)
#elif __ia64__
CheckTypeSize(pthread_once_t,4, 9062, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_once_t,4, 9062, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_once_t,4, 9062, 10)
#elif __powerpc64__
CheckTypeSize(pthread_once_t,4, 9062, 9)
#elif __s390x__
CheckTypeSize(pthread_once_t,4, 9062, 12)
#elif __x86_64__
CheckTypeSize(pthread_once_t,4, 9062, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9062,0);
Msg("Find size of pthread_once_t (9062)\n");
#endif

#if __arm__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 4)
#elif __i386__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 2)
#elif __ia64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 10)
#elif __powerpc64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 9)
#elif __s390x__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 12)
#elif __x86_64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10917,0);
Msg("Find size of __pthread_cond_align_t (10917)\n");
#endif

#if __i386__
CheckTypeSize(pthread_t,4, 9040, 2)
#elif __ia64__
CheckTypeSize(pthread_t,8, 9040, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_t,4, 9040, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_t,4, 9040, 10)
#elif __powerpc64__
CheckTypeSize(pthread_t,8, 9040, 9)
#elif __s390x__
CheckTypeSize(pthread_t,8, 9040, 12)
#elif __x86_64__
CheckTypeSize(pthread_t,8, 9040, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9040,0);
Msg("Find size of pthread_t (9040)\n");
#endif

#if __i386__
CheckTypeSize(struct _pthread_fastlock,8, 10105, 2)
CheckMemberSize(struct _pthread_fastlock,__status,4,2,33602)
CheckOffset(struct _pthread_fastlock,__status,0,2,33602)
CheckMemberSize(struct _pthread_fastlock,__spinlock,4,2,34427)
CheckOffset(struct _pthread_fastlock,__spinlock,4,2,34427)
#elif __ia64__
CheckTypeSize(struct _pthread_fastlock,16, 10105, 3)
CheckMemberSize(struct _pthread_fastlock,__spinlock,4,3,34427)
CheckOffset(struct _pthread_fastlock,__spinlock,8,3,34427)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _pthread_fastlock,8, 10105, 6)
CheckMemberSize(struct _pthread_fastlock,__spinlock,4,6,34427)
CheckOffset(struct _pthread_fastlock,__spinlock,4,6,34427)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _pthread_fastlock,8, 10105, 10)
CheckMemberSize(struct _pthread_fastlock,__spinlock,4,10,34427)
CheckOffset(struct _pthread_fastlock,__spinlock,4,10,34427)
#elif __powerpc64__
CheckTypeSize(struct _pthread_fastlock,16, 10105, 9)
CheckMemberSize(struct _pthread_fastlock,__spinlock,4,9,34427)
CheckOffset(struct _pthread_fastlock,__spinlock,8,9,34427)
#elif __s390x__
CheckTypeSize(struct _pthread_fastlock,16, 10105, 12)
CheckMemberSize(struct _pthread_fastlock,__spinlock,4,12,34427)
CheckOffset(struct _pthread_fastlock,__spinlock,8,12,34427)
#elif __x86_64__
CheckTypeSize(struct _pthread_fastlock,16, 10105, 11)
CheckMemberSize(struct _pthread_fastlock,__spinlock,4,11,34427)
CheckOffset(struct _pthread_fastlock,__spinlock,8,11,34427)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10105,0);
Msg("Find size of _pthread_fastlock (10105)\n");
#endif

#if __i386__
CheckTypeSize(pthread_mutex_t,24, 9047, 2)
#elif __ia64__
CheckTypeSize(pthread_mutex_t,40, 9047, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_mutex_t,24, 9047, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_mutex_t,24, 9047, 10)
#elif __powerpc64__
CheckTypeSize(pthread_mutex_t,40, 9047, 9)
#elif __s390x__
CheckTypeSize(pthread_mutex_t,40, 9047, 12)
#elif __x86_64__
CheckTypeSize(pthread_mutex_t,40, 9047, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9047,0);
Msg("Find size of pthread_mutex_t (9047)\n");
#endif

#if __i386__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 2)
#elif __ia64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 10)
#elif __powerpc64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 9)
#elif __s390x__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 12)
#elif __x86_64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9049,0);
Msg("Find size of pthread_mutexattr_t (9049)\n");
#endif

#if __i386__
CheckTypeSize(pthread_attr_t,36, 9042, 2)
#elif __ia64__
CheckTypeSize(pthread_attr_t,56, 9042, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_attr_t,36, 9042, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_attr_t,36, 9042, 10)
#elif __powerpc64__
CheckTypeSize(pthread_attr_t,56, 9042, 9)
#elif __s390x__
CheckTypeSize(pthread_attr_t,56, 9042, 12)
#elif __x86_64__
CheckTypeSize(pthread_attr_t,56, 9042, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9042,0);
Msg("Find size of pthread_attr_t (9042)\n");
#endif

#if __i386__
CheckTypeSize(pthread_cond_t,48, 9051, 2)
#elif __ia64__
CheckTypeSize(pthread_cond_t,48, 9051, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_cond_t,48, 9051, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_cond_t,48, 9051, 10)
#elif __powerpc64__
CheckTypeSize(pthread_cond_t,48, 9051, 9)
#elif __s390x__
CheckTypeSize(pthread_cond_t,48, 9051, 12)
#elif __x86_64__
CheckTypeSize(pthread_cond_t,48, 9051, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9051,0);
Msg("Find size of pthread_cond_t (9051)\n");
#endif

#if __i386__
CheckTypeSize(pthread_condattr_t,4, 9053, 2)
#elif __ia64__
CheckTypeSize(pthread_condattr_t,4, 9053, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_condattr_t,4, 9053, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_condattr_t,4, 9053, 10)
#elif __powerpc64__
CheckTypeSize(pthread_condattr_t,4, 9053, 9)
#elif __s390x__
CheckTypeSize(pthread_condattr_t,4, 9053, 12)
#elif __x86_64__
CheckTypeSize(pthread_condattr_t,4, 9053, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9053,0);
Msg("Find size of pthread_condattr_t (9053)\n");
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(_pthread_descr,4, 9087, 2)
#elif __ia64__
CheckTypeSize(_pthread_descr,8, 9087, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(_pthread_descr,4, 9087, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(_pthread_descr,4, 9087, 10)
#elif __powerpc64__
CheckTypeSize(_pthread_descr,8, 9087, 9)
#elif __s390x__
CheckTypeSize(_pthread_descr,8, 9087, 12)
#elif __x86_64__
CheckTypeSize(_pthread_descr,8, 9087, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9087,0);
Msg("Find size of _pthread_descr (9087)\n");
#endif

#if __i386__
CheckTypeSize(pthread_rwlock_t,32, 9055, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_rwlock_t,32, 9055, 6)
#elif __ia64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_rwlock_t,32, 9055, 10)
#elif __powerpc64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 9)
#elif __s390x__
CheckTypeSize(pthread_rwlock_t,56, 9055, 12)
#elif __x86_64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9055,0);
Msg("Find size of pthread_rwlock_t (9055)\n");
#endif

#if __i386__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 6)
#elif __ia64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 10)
#elif __powerpc64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 9)
#elif __s390x__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 12)
#elif __x86_64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9057,0);
Msg("Find size of pthread_rwlockattr_t (9057)\n");
#endif

#if __i386__
CheckTypeSize(struct _pthread_rwlock_t,32, 10279, 2)
CheckMemberSize(struct _pthread_rwlock_t,__rw_readers,4,2,34439)
CheckOffset(struct _pthread_rwlock_t,__rw_readers,8,2,34439)
CheckMemberSize(struct _pthread_rwlock_t,__rw_writer,4,2,34440)
CheckOffset(struct _pthread_rwlock_t,__rw_writer,12,2,34440)
CheckMemberSize(struct _pthread_rwlock_t,__rw_read_waiting,4,2,34441)
CheckOffset(struct _pthread_rwlock_t,__rw_read_waiting,16,2,34441)
CheckMemberSize(struct _pthread_rwlock_t,__rw_write_waiting,4,2,34442)
CheckOffset(struct _pthread_rwlock_t,__rw_write_waiting,20,2,34442)
CheckMemberSize(struct _pthread_rwlock_t,__rw_kind,4,2,34443)
CheckOffset(struct _pthread_rwlock_t,__rw_kind,24,2,34443)
CheckMemberSize(struct _pthread_rwlock_t,__rw_pshared,4,2,34444)
CheckOffset(struct _pthread_rwlock_t,__rw_pshared,28,2,34444)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _pthread_rwlock_t,32, 10279, 6)
CheckMemberSize(struct _pthread_rwlock_t,__rw_readers,4,6,34439)
CheckOffset(struct _pthread_rwlock_t,__rw_readers,8,6,34439)
CheckMemberSize(struct _pthread_rwlock_t,__rw_writer,4,6,34440)
CheckOffset(struct _pthread_rwlock_t,__rw_writer,12,6,34440)
CheckMemberSize(struct _pthread_rwlock_t,__rw_read_waiting,4,6,34441)
CheckOffset(struct _pthread_rwlock_t,__rw_read_waiting,16,6,34441)
CheckMemberSize(struct _pthread_rwlock_t,__rw_write_waiting,4,6,34442)
CheckOffset(struct _pthread_rwlock_t,__rw_write_waiting,20,6,34442)
CheckMemberSize(struct _pthread_rwlock_t,__rw_kind,4,6,34443)
CheckOffset(struct _pthread_rwlock_t,__rw_kind,24,6,34443)
CheckMemberSize(struct _pthread_rwlock_t,__rw_pshared,4,6,34444)
CheckOffset(struct _pthread_rwlock_t,__rw_pshared,28,6,34444)
#elif __ia64__
CheckTypeSize(struct _pthread_rwlock_t,56, 10279, 3)
CheckMemberSize(struct _pthread_rwlock_t,__rw_readers,4,3,34439)
CheckOffset(struct _pthread_rwlock_t,__rw_readers,16,3,34439)
CheckMemberSize(struct _pthread_rwlock_t,__rw_writer,8,3,34440)
CheckOffset(struct _pthread_rwlock_t,__rw_writer,24,3,34440)
CheckMemberSize(struct _pthread_rwlock_t,__rw_read_waiting,8,3,34441)
CheckOffset(struct _pthread_rwlock_t,__rw_read_waiting,32,3,34441)
CheckMemberSize(struct _pthread_rwlock_t,__rw_write_waiting,8,3,34442)
CheckOffset(struct _pthread_rwlock_t,__rw_write_waiting,40,3,34442)
CheckMemberSize(struct _pthread_rwlock_t,__rw_kind,4,3,34443)
CheckOffset(struct _pthread_rwlock_t,__rw_kind,48,3,34443)
CheckMemberSize(struct _pthread_rwlock_t,__rw_pshared,4,3,34444)
CheckOffset(struct _pthread_rwlock_t,__rw_pshared,52,3,34444)
#elif __s390x__
CheckTypeSize(struct _pthread_rwlock_t,56, 10279, 12)
CheckMemberSize(struct _pthread_rwlock_t,__rw_readers,4,12,34439)
CheckOffset(struct _pthread_rwlock_t,__rw_readers,16,12,34439)
CheckMemberSize(struct _pthread_rwlock_t,__rw_writer,8,12,34440)
CheckOffset(struct _pthread_rwlock_t,__rw_writer,24,12,34440)
CheckMemberSize(struct _pthread_rwlock_t,__rw_read_waiting,8,12,34441)
CheckOffset(struct _pthread_rwlock_t,__rw_read_waiting,32,12,34441)
CheckMemberSize(struct _pthread_rwlock_t,__rw_write_waiting,8,12,34442)
CheckOffset(struct _pthread_rwlock_t,__rw_write_waiting,40,12,34442)
CheckMemberSize(struct _pthread_rwlock_t,__rw_kind,4,12,34443)
CheckOffset(struct _pthread_rwlock_t,__rw_kind,48,12,34443)
CheckMemberSize(struct _pthread_rwlock_t,__rw_pshared,4,12,34444)
CheckOffset(struct _pthread_rwlock_t,__rw_pshared,52,12,34444)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _pthread_rwlock_t,32, 10279, 10)
CheckMemberSize(struct _pthread_rwlock_t,__rw_readers,4,10,34439)
CheckOffset(struct _pthread_rwlock_t,__rw_readers,8,10,34439)
CheckMemberSize(struct _pthread_rwlock_t,__rw_writer,4,10,34440)
CheckOffset(struct _pthread_rwlock_t,__rw_writer,12,10,34440)
CheckMemberSize(struct _pthread_rwlock_t,__rw_read_waiting,4,10,34441)
CheckOffset(struct _pthread_rwlock_t,__rw_read_waiting,16,10,34441)
CheckMemberSize(struct _pthread_rwlock_t,__rw_write_waiting,4,10,34442)
CheckOffset(struct _pthread_rwlock_t,__rw_write_waiting,20,10,34442)
CheckMemberSize(struct _pthread_rwlock_t,__rw_kind,4,10,34443)
CheckOffset(struct _pthread_rwlock_t,__rw_kind,24,10,34443)
CheckMemberSize(struct _pthread_rwlock_t,__rw_pshared,4,10,34444)
CheckOffset(struct _pthread_rwlock_t,__rw_pshared,28,10,34444)
#elif __x86_64__
CheckTypeSize(struct _pthread_rwlock_t,56, 10279, 11)
CheckMemberSize(struct _pthread_rwlock_t,__rw_readers,4,11,34439)
CheckOffset(struct _pthread_rwlock_t,__rw_readers,16,11,34439)
CheckMemberSize(struct _pthread_rwlock_t,__rw_writer,8,11,34440)
CheckOffset(struct _pthread_rwlock_t,__rw_writer,24,11,34440)
CheckMemberSize(struct _pthread_rwlock_t,__rw_read_waiting,8,11,34441)
CheckOffset(struct _pthread_rwlock_t,__rw_read_waiting,32,11,34441)
CheckMemberSize(struct _pthread_rwlock_t,__rw_write_waiting,8,11,34442)
CheckOffset(struct _pthread_rwlock_t,__rw_write_waiting,40,11,34442)
CheckMemberSize(struct _pthread_rwlock_t,__rw_kind,4,11,34443)
CheckOffset(struct _pthread_rwlock_t,__rw_kind,48,11,34443)
CheckMemberSize(struct _pthread_rwlock_t,__rw_pshared,4,11,34444)
CheckOffset(struct _pthread_rwlock_t,__rw_pshared,52,11,34444)
#elif __powerpc64__
CheckTypeSize(struct _pthread_rwlock_t,56, 10279, 9)
CheckMemberSize(struct _pthread_rwlock_t,__rw_readers,4,9,34439)
CheckOffset(struct _pthread_rwlock_t,__rw_readers,16,9,34439)
CheckMemberSize(struct _pthread_rwlock_t,__rw_writer,8,9,34440)
CheckOffset(struct _pthread_rwlock_t,__rw_writer,24,9,34440)
CheckMemberSize(struct _pthread_rwlock_t,__rw_read_waiting,8,9,34441)
CheckOffset(struct _pthread_rwlock_t,__rw_read_waiting,32,9,34441)
CheckMemberSize(struct _pthread_rwlock_t,__rw_write_waiting,8,9,34442)
CheckOffset(struct _pthread_rwlock_t,__rw_write_waiting,40,9,34442)
CheckMemberSize(struct _pthread_rwlock_t,__rw_kind,4,9,34443)
CheckOffset(struct _pthread_rwlock_t,__rw_kind,48,9,34443)
CheckMemberSize(struct _pthread_rwlock_t,__rw_pshared,4,9,34444)
CheckOffset(struct _pthread_rwlock_t,__rw_pshared,52,9,34444)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10279,0);
Msg("Find size of _pthread_rwlock_t (10279)\n");
#endif

#if __i386__
#elif __s390x__
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __x86_64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10280,0);
Msg("Find size of anon-pthread_rwlockattr_t (10280)\n");
#endif

#if __s390__ && !__s390x__
#elif __i386__
#elif __powerpc64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10811,0);
Msg("Find size of const pthread_rwlockattr_t * (10811)\n");
#endif

extern void _pthread_cleanup_pop_db(struct _pthread_cleanup_buffer *, int);
CheckInterfacedef(_pthread_cleanup_pop,_pthread_cleanup_pop_db);
extern void _pthread_cleanup_push_db(struct _pthread_cleanup_buffer *, void(*__routine)(void *)
, void *);
CheckInterfacedef(_pthread_cleanup_push,_pthread_cleanup_push_db);
extern int pthread_atfork_db(void(*prepare)(void)
, void(*parent)(void)
, void(*child)(void)
);
CheckInterfacedef(pthread_atfork,pthread_atfork_db);
extern int pthread_attr_destroy_db(pthread_attr_t *);
CheckInterfacedef(pthread_attr_destroy,pthread_attr_destroy_db);
extern int pthread_attr_getdetachstate_db(const pthread_attr_t *, int *);
CheckInterfacedef(pthread_attr_getdetachstate,pthread_attr_getdetachstate_db);
extern int pthread_attr_getinheritsched_db(const pthread_attr_t *, int *);
CheckInterfacedef(pthread_attr_getinheritsched,pthread_attr_getinheritsched_db);
extern int pthread_attr_getschedparam_db(const pthread_attr_t *, struct sched_param *);
CheckInterfacedef(pthread_attr_getschedparam,pthread_attr_getschedparam_db);
extern int pthread_attr_getschedpolicy_db(const pthread_attr_t *, int *);
CheckInterfacedef(pthread_attr_getschedpolicy,pthread_attr_getschedpolicy_db);
extern int pthread_attr_getscope_db(const pthread_attr_t *, int *);
CheckInterfacedef(pthread_attr_getscope,pthread_attr_getscope_db);
extern int pthread_attr_init_db(pthread_attr_t *);
CheckInterfacedef(pthread_attr_init,pthread_attr_init_db);
extern int pthread_attr_setdetachstate_db(pthread_attr_t *, int);
CheckInterfacedef(pthread_attr_setdetachstate,pthread_attr_setdetachstate_db);
extern int pthread_attr_setinheritsched_db(pthread_attr_t *, int);
CheckInterfacedef(pthread_attr_setinheritsched,pthread_attr_setinheritsched_db);
extern int pthread_attr_setschedparam_db(pthread_attr_t *, const struct sched_param *);
CheckInterfacedef(pthread_attr_setschedparam,pthread_attr_setschedparam_db);
extern int pthread_attr_setschedpolicy_db(pthread_attr_t *, int);
CheckInterfacedef(pthread_attr_setschedpolicy,pthread_attr_setschedpolicy_db);
extern int pthread_attr_setscope_db(pthread_attr_t *, int);
CheckInterfacedef(pthread_attr_setscope,pthread_attr_setscope_db);
extern int pthread_cancel_db(pthread_t);
CheckInterfacedef(pthread_cancel,pthread_cancel_db);
extern int pthread_cond_broadcast_db(pthread_cond_t *);
CheckInterfacedef(pthread_cond_broadcast,pthread_cond_broadcast_db);
extern int pthread_cond_destroy_db(pthread_cond_t *);
CheckInterfacedef(pthread_cond_destroy,pthread_cond_destroy_db);
extern int pthread_cond_init_db(pthread_cond_t *, const pthread_condattr_t *);
CheckInterfacedef(pthread_cond_init,pthread_cond_init_db);
extern int pthread_cond_signal_db(pthread_cond_t *);
CheckInterfacedef(pthread_cond_signal,pthread_cond_signal_db);
extern int pthread_cond_timedwait_db(pthread_cond_t *, pthread_mutex_t *, const struct timespec *);
CheckInterfacedef(pthread_cond_timedwait,pthread_cond_timedwait_db);
extern int pthread_cond_wait_db(pthread_cond_t *, pthread_mutex_t *);
CheckInterfacedef(pthread_cond_wait,pthread_cond_wait_db);
extern int pthread_condattr_destroy_db(pthread_condattr_t *);
CheckInterfacedef(pthread_condattr_destroy,pthread_condattr_destroy_db);
extern int pthread_condattr_init_db(pthread_condattr_t *);
CheckInterfacedef(pthread_condattr_init,pthread_condattr_init_db);
extern int pthread_create_db(pthread_t *, const pthread_attr_t *, void *(*__start_routine)(void *)
, void *);
CheckInterfacedef(pthread_create,pthread_create_db);
extern int pthread_detach_db(pthread_t);
CheckInterfacedef(pthread_detach,pthread_detach_db);
extern int pthread_equal_db(pthread_t, pthread_t);
CheckInterfacedef(pthread_equal,pthread_equal_db);
extern void pthread_exit_db(void *);
CheckInterfacedef(pthread_exit,pthread_exit_db);
extern int pthread_getschedparam_db(pthread_t, int *, struct sched_param *);
CheckInterfacedef(pthread_getschedparam,pthread_getschedparam_db);
extern void * pthread_getspecific_db(pthread_key_t);
CheckInterfacedef(pthread_getspecific,pthread_getspecific_db);
extern int pthread_join_db(pthread_t, void * *);
CheckInterfacedef(pthread_join,pthread_join_db);
extern int pthread_key_create_db(pthread_key_t *, void(*destr_func)(void *)
);
CheckInterfacedef(pthread_key_create,pthread_key_create_db);
extern int pthread_key_delete_db(pthread_key_t);
CheckInterfacedef(pthread_key_delete,pthread_key_delete_db);
extern int pthread_mutex_destroy_db(pthread_mutex_t *);
CheckInterfacedef(pthread_mutex_destroy,pthread_mutex_destroy_db);
extern int pthread_mutex_init_db(pthread_mutex_t *, const pthread_mutexattr_t *);
CheckInterfacedef(pthread_mutex_init,pthread_mutex_init_db);
extern int pthread_mutex_lock_db(pthread_mutex_t *);
CheckInterfacedef(pthread_mutex_lock,pthread_mutex_lock_db);
extern int pthread_mutex_trylock_db(pthread_mutex_t *);
CheckInterfacedef(pthread_mutex_trylock,pthread_mutex_trylock_db);
extern int pthread_mutex_unlock_db(pthread_mutex_t *);
CheckInterfacedef(pthread_mutex_unlock,pthread_mutex_unlock_db);
extern int pthread_mutexattr_destroy_db(pthread_mutexattr_t *);
CheckInterfacedef(pthread_mutexattr_destroy,pthread_mutexattr_destroy_db);
extern int pthread_mutexattr_init_db(pthread_mutexattr_t *);
CheckInterfacedef(pthread_mutexattr_init,pthread_mutexattr_init_db);
extern int pthread_once_db(pthread_once_t *, void(*init_routine)(void)
);
CheckInterfacedef(pthread_once,pthread_once_db);
extern int pthread_rwlock_destroy_db(pthread_rwlock_t *);
CheckInterfacedef(pthread_rwlock_destroy,pthread_rwlock_destroy_db);
extern int pthread_rwlock_init_db(pthread_rwlock_t *, const pthread_rwlockattr_t *);
CheckInterfacedef(pthread_rwlock_init,pthread_rwlock_init_db);
extern int pthread_rwlock_rdlock_db(pthread_rwlock_t *);
CheckInterfacedef(pthread_rwlock_rdlock,pthread_rwlock_rdlock_db);
extern int pthread_rwlock_tryrdlock_db(pthread_rwlock_t *);
CheckInterfacedef(pthread_rwlock_tryrdlock,pthread_rwlock_tryrdlock_db);
extern int pthread_rwlock_trywrlock_db(pthread_rwlock_t *);
CheckInterfacedef(pthread_rwlock_trywrlock,pthread_rwlock_trywrlock_db);
extern int pthread_rwlock_unlock_db(pthread_rwlock_t *);
CheckInterfacedef(pthread_rwlock_unlock,pthread_rwlock_unlock_db);
extern int pthread_rwlock_wrlock_db(pthread_rwlock_t *);
CheckInterfacedef(pthread_rwlock_wrlock,pthread_rwlock_wrlock_db);
extern int pthread_rwlockattr_destroy_db(pthread_rwlockattr_t *);
CheckInterfacedef(pthread_rwlockattr_destroy,pthread_rwlockattr_destroy_db);
extern int pthread_rwlockattr_getpshared_db(const pthread_rwlockattr_t *, int *);
CheckInterfacedef(pthread_rwlockattr_getpshared,pthread_rwlockattr_getpshared_db);
extern int pthread_rwlockattr_init_db(pthread_rwlockattr_t *);
CheckInterfacedef(pthread_rwlockattr_init,pthread_rwlockattr_init_db);
extern int pthread_rwlockattr_setpshared_db(pthread_rwlockattr_t *, int);
CheckInterfacedef(pthread_rwlockattr_setpshared,pthread_rwlockattr_setpshared_db);
extern pthread_t pthread_self_db(void);
CheckInterfacedef(pthread_self,pthread_self_db);
extern int pthread_setcancelstate_db(int, int *);
CheckInterfacedef(pthread_setcancelstate,pthread_setcancelstate_db);
extern int pthread_setcanceltype_db(int, int *);
CheckInterfacedef(pthread_setcanceltype,pthread_setcanceltype_db);
extern int pthread_setschedparam_db(pthread_t, int, const struct sched_param *);
CheckInterfacedef(pthread_setschedparam,pthread_setschedparam_db);
extern int pthread_setspecific_db(pthread_key_t, const void *);
CheckInterfacedef(pthread_setspecific,pthread_setspecific_db);
extern void pthread_testcancel_db(void);
CheckInterfacedef(pthread_testcancel,pthread_testcancel_db);
extern int pthread_attr_getguardsize_db(const pthread_attr_t *, size_t *);
CheckInterfacedef(pthread_attr_getguardsize,pthread_attr_getguardsize_db);
extern int pthread_attr_setguardsize_db(pthread_attr_t *, size_t);
CheckInterfacedef(pthread_attr_setguardsize,pthread_attr_setguardsize_db);
extern int pthread_attr_setstackaddr_db(pthread_attr_t *, void *);
CheckInterfacedef(pthread_attr_setstackaddr,pthread_attr_setstackaddr_db);
extern int pthread_attr_getstackaddr_db(const pthread_attr_t *, void * *);
CheckInterfacedef(pthread_attr_getstackaddr,pthread_attr_getstackaddr_db);
extern int pthread_attr_setstacksize_db(pthread_attr_t *, size_t);
CheckInterfacedef(pthread_attr_setstacksize,pthread_attr_setstacksize_db);
extern int pthread_attr_getstacksize_db(const pthread_attr_t *, size_t *);
CheckInterfacedef(pthread_attr_getstacksize,pthread_attr_getstacksize_db);
extern int pthread_mutexattr_gettype_db(const pthread_mutexattr_t *, int *);
CheckInterfacedef(pthread_mutexattr_gettype,pthread_mutexattr_gettype_db);
extern int pthread_mutexattr_settype_db(pthread_mutexattr_t *, int);
CheckInterfacedef(pthread_mutexattr_settype,pthread_mutexattr_settype_db);
extern int pthread_getconcurrency_db(void);
CheckInterfacedef(pthread_getconcurrency,pthread_getconcurrency_db);
extern int pthread_setconcurrency_db(int);
CheckInterfacedef(pthread_setconcurrency,pthread_setconcurrency_db);
extern int pthread_attr_getstack_db(const pthread_attr_t *, void * *, size_t *);
CheckInterfacedef(pthread_attr_getstack,pthread_attr_getstack_db);
extern int pthread_attr_setstack_db(pthread_attr_t *, void *, size_t);
CheckInterfacedef(pthread_attr_setstack,pthread_attr_setstack_db);
extern int pthread_condattr_getpshared_db(const pthread_condattr_t *, int *);
CheckInterfacedef(pthread_condattr_getpshared,pthread_condattr_getpshared_db);
extern int pthread_condattr_setpshared_db(pthread_condattr_t *, int);
CheckInterfacedef(pthread_condattr_setpshared,pthread_condattr_setpshared_db);
extern int pthread_mutexattr_getpshared_db(const pthread_mutexattr_t *, int *);
CheckInterfacedef(pthread_mutexattr_getpshared,pthread_mutexattr_getpshared_db);
extern int pthread_mutexattr_setpshared_db(pthread_mutexattr_t *, int);
CheckInterfacedef(pthread_mutexattr_setpshared,pthread_mutexattr_setpshared_db);
extern int pthread_rwlock_timedrdlock_db(pthread_rwlock_t *, const struct timespec *);
CheckInterfacedef(pthread_rwlock_timedrdlock,pthread_rwlock_timedrdlock_db);
extern int pthread_rwlock_timedwrlock_db(pthread_rwlock_t *, const struct timespec *);
CheckInterfacedef(pthread_rwlock_timedwrlock,pthread_rwlock_timedwrlock_db);
extern int __register_atfork_db(void(*prepare)(void)
, void(*parent)(void)
, void(*child)(void)
, void *);
CheckInterfacedef(__register_atfork,__register_atfork_db);
extern int pthread_setschedprio_db(pthread_t, int);
CheckInterfacedef(pthread_setschedprio,pthread_setschedprio_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pthread.h\n\n",pcnt,cnt);
return cnt;
#endif

}
