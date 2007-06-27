/*
 * Test of pthread.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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
	CompareConstant(PTHREAD_CREATE_JOINABLE,0,1537,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_JOINABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CREATE_DETACHED
	CompareConstant(PTHREAD_CREATE_DETACHED,1,1538,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_CREATE_DETACHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_INHERIT_SCHED
	CompareConstant(PTHREAD_INHERIT_SCHED,0,1539,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_INHERIT_SCHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_EXPLICIT_SCHED
	CompareConstant(PTHREAD_EXPLICIT_SCHED,1,1540,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_EXPLICIT_SCHED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_SCOPE_SYSTEM
	CompareConstant(PTHREAD_SCOPE_SYSTEM,0,1541,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_SYSTEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_SCOPE_PROCESS
	CompareConstant(PTHREAD_SCOPE_PROCESS,1,1542,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_SCOPE_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_PROCESS_PRIVATE
	CompareConstant(PTHREAD_PROCESS_PRIVATE,0,1543,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_PROCESS_SHARED
	CompareConstant(PTHREAD_PROCESS_SHARED,1,1544,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_PROCESS_SHARED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_ONCE_INIT
	CompareConstant(PTHREAD_ONCE_INIT,0,1545,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_ONCE_INIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_ENABLE
	CompareConstant(PTHREAD_CANCEL_ENABLE,0,1546,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ENABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_DISABLE
	CompareConstant(PTHREAD_CANCEL_DISABLE,1,1547,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DISABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_DEFERRED
	CompareConstant(PTHREAD_CANCEL_DEFERRED,0,1548,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_DEFERRED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCEL_ASYNCHRONOUS
	CompareConstant(PTHREAD_CANCEL_ASYNCHRONOUS,1,1549,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_CANCEL_ASYNCHRONOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_CANCELED
	CompareConstant(PTHREAD_CANCELED,((void*)-1),1550,architecture,1.1,NULL)
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
	CompareConstant(PTHREAD_MUTEX_DEFAULT,0,5002,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_ERRORCHECK
	CompareConstant(PTHREAD_MUTEX_ERRORCHECK,2,5003,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_ERRORCHECK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_NORMAL
	CompareConstant(PTHREAD_MUTEX_NORMAL,0,5004,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_MUTEX_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_MUTEX_RECURSIVE
	CompareConstant(PTHREAD_MUTEX_RECURSIVE,1,5005,architecture,1.2,NULL)
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
	CompareConstant(PTHREAD_RWLOCK_DEFAULT_NP,2,5096,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_RWLOCK_DEFAULT_NP\n");
cnt++;
#endif

#endif

#if defined __i386__
#elif defined __s390x__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __ia64__
#elif defined __powerpc64__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,6931,0);
Msg("Find size of _pthread_cleanup_buffer (6931)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_key_t,4, 9059, 2, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_key_t,4, 9059, 3, 1.3, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_key_t,4, 9059, 6, 1.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_key_t,4, 9059, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_key_t,4, 9059, 9, 2.0, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_key_t,4, 9059, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_key_t,4, 9059, 11, 2.0, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,9059,0);
Msg("Find size of pthread_key_t (9059)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_once_t,4, 9062, 2, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_once_t,4, 9062, 3, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_once_t,4, 9062, 6, 1.2, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_once_t,4, 9062, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_once_t,4, 9062, 9, 2.0, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_once_t,4, 9062, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_once_t,4, 9062, 11, 2.0, NULL, 6, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,9062,0);
Msg("Find size of pthread_once_t (9062)\n");
#endif

#ifdef LSBCC_MODE       /* XXX hand-edit */
#if defined __i386__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 2, 2.0, NULL, 10, NULL)
#elif defined __ia64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 3, 2.0, NULL, 10, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 6, 2.0, NULL, 10, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 10, 2.0, NULL, 10, NULL)
#elif defined __powerpc64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 9, 2.0, NULL, 10, NULL)
#elif defined __s390x__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 12, 2.0, NULL, 10, NULL)
#elif defined __x86_64__
CheckTypeSize(__pthread_cond_align_t,8, 10917, 11, 2.0, NULL, 10, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10,NULL);\n",architecture,10917,0);
Msg("Find size of __pthread_cond_align_t (10917)\n");
#endif
#endif

#if defined __i386__
CheckTypeSize(pthread_t,4, 9040, 2, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_t,8, 9040, 3, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_t,4, 9040, 6, 1.2, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_t,4, 9040, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_t,8, 9040, 9, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_t,8, 9040, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_t,8, 9040, 11, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9040,0);
Msg("Find size of pthread_t (9040)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,10105,0);
Msg("Find size of _pthread_fastlock (10105)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_mutex_t,24, 9047, 2, 1.2, NULL, 10106, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_mutex_t,40, 9047, 3, 1.3, NULL, 10106, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_mutex_t,24, 9047, 6, 1.2, NULL, 10106, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_mutex_t,24, 9047, 10, 1.3, NULL, 10106, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_mutex_t,40, 9047, 9, 2.0, NULL, 10106, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_mutex_t,40, 9047, 12, 1.3, NULL, 10106, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_mutex_t,40, 9047, 11, 2.0, NULL, 10106, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10106,NULL);\n",architecture,9047,0);
Msg("Find size of pthread_mutex_t (9047)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 2, 1.2, NULL, 10109, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 3, 1.3, NULL, 10109, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 6, 1.2, NULL, 10109, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 10, 1.3, NULL, 10109, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 9, 2.0, NULL, 10109, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 12, 1.3, NULL, 10109, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_mutexattr_t,4, 9049, 11, 2.0, NULL, 10109, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10109,NULL);\n",architecture,9049,0);
Msg("Find size of pthread_mutexattr_t (9049)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_attr_t,36, 9042, 2, 1.2, NULL, 10112, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_attr_t,56, 9042, 3, 1.3, NULL, 10112, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_attr_t,36, 9042, 6, 1.2, NULL, 10112, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_attr_t,36, 9042, 10, 1.3, NULL, 10112, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_attr_t,56, 9042, 9, 2.0, NULL, 10112, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_attr_t,56, 9042, 12, 1.3, NULL, 10112, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_attr_t,56, 9042, 11, 2.0, NULL, 10112, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10112,NULL);\n",architecture,9042,0);
Msg("Find size of pthread_attr_t (9042)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_cond_t,48, 9051, 2, 1.2, NULL, 10110, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_cond_t,48, 9051, 3, 1.3, NULL, 10110, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_cond_t,48, 9051, 6, 1.2, NULL, 10110, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_cond_t,48, 9051, 10, 1.3, NULL, 10110, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_cond_t,48, 9051, 9, 2.0, NULL, 10110, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_cond_t,48, 9051, 12, 1.3, NULL, 10110, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_cond_t,48, 9051, 11, 2.0, NULL, 10110, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10110,NULL);\n",architecture,9051,0);
Msg("Find size of pthread_cond_t (9051)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_condattr_t,4, 9053, 2, 1.2, NULL, 10434, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_condattr_t,4, 9053, 3, 1.3, NULL, 10434, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_condattr_t,4, 9053, 6, 1.2, NULL, 10434, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_condattr_t,4, 9053, 10, 1.3, NULL, 10434, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_condattr_t,4, 9053, 9, 2.0, NULL, 10434, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_condattr_t,4, 9053, 12, 1.3, NULL, 10434, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_condattr_t,4, 9053, 11, 2.0, NULL, 10434, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10434,NULL);\n",architecture,9053,0);
Msg("Find size of pthread_condattr_t (9053)\n");
#endif

#ifdef LSBCC_MODE       /* XXX hand-edit */
#if defined __i386__
CheckTypeSize(_pthread_descr,4, 9087, 2, 1.2, NULL, 10104, NULL)
#elif defined __ia64__
CheckTypeSize(_pthread_descr,8, 9087, 3, 1.3, NULL, 10104, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_pthread_descr,4, 9087, 6, 1.2, NULL, 10104, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_pthread_descr,4, 9087, 10, 1.3, NULL, 10104, NULL)
#elif defined __powerpc64__
CheckTypeSize(_pthread_descr,8, 9087, 9, 2.0, NULL, 10104, NULL)
#elif defined __s390x__
CheckTypeSize(_pthread_descr,8, 9087, 12, 1.3, NULL, 10104, NULL)
#elif defined __x86_64__
CheckTypeSize(_pthread_descr,8, 9087, 11, 2.0, NULL, 10104, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10104,NULL);\n",architecture,9087,0);
Msg("Find size of _pthread_descr (9087)\n");
#endif
#endif

#if defined __i386__
CheckTypeSize(pthread_rwlock_t,32, 9055, 2, 1.2, NULL, 10279, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_rwlock_t,32, 9055, 6, 1.2, NULL, 10279, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 3, 1.3, NULL, 10279, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_rwlock_t,32, 9055, 10, 1.3, NULL, 10279, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 9, 2.0, NULL, 10279, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_rwlock_t,56, 9055, 12, 1.3, NULL, 10279, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 11, 2.0, NULL, 10279, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10279,NULL);\n",architecture,9055,0);
Msg("Find size of pthread_rwlock_t (9055)\n");
#endif

#if defined __i386__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 2, 1.2, NULL, 10280, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 6, 1.2, NULL, 10280, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 3, 1.3, NULL, 10280, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 10, 1.3, NULL, 10280, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 9, 2.0, NULL, 10280, NULL)
#elif defined __s390x__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 12, 1.3, NULL, 10280, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 11, 2.0, NULL, 10280, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10280, NULL);\n",architecture,9057,0);
Msg("Find size of pthread_rwlockattr_t (9057)\n");
#endif

extern int pthread_mutex_timedlock_db(pthread_mutex_t *, const struct timespec *);
CheckInterfacedef(pthread_mutex_timedlock,pthread_mutex_timedlock_db);
#ifdef LSBCC_MODE       /* XXX hand-edit */
extern void _pthread_cleanup_pop_db(struct _pthread_cleanup_buffer *, int);
CheckInterfacedef(_pthread_cleanup_pop,_pthread_cleanup_pop_db);
extern void _pthread_cleanup_push_db(struct _pthread_cleanup_buffer *, void(*__routine)(void *)
, void *);
CheckInterfacedef(_pthread_cleanup_push,_pthread_cleanup_push_db);
#endif
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
#ifdef LSBCC_MODE       /* XXX hand-edit */
extern int __register_atfork_db(void(*prepare)(void)
, void(*parent)(void)
, void(*child)(void)
, void *);
CheckInterfacedef(__register_atfork,__register_atfork_db);
#endif
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
