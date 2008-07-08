/*
 * Test of pthread.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
struct _pthread_cleanup_buffer;
void _pthread_cleanup_pop(struct _pthread_cleanup_buffer *, int);
void _pthread_cleanup_push(struct _pthread_cleanup_buffer *, void(*fptr10)(void *), void *);
int __register_atfork(void (*)(void), void (*)(void), void (*)(void), void *);
#endif
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
#if defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_BARRIER_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIER_T,32,10672,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIER_T\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_BARRIER_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIER_T,20,10672,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIER_T\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __SIZEOF_PTHREAD_BARRIER_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIER_T,32,10672,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIER_T\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __SIZEOF_PTHREAD_BARRIER_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIER_T,20,10672,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIER_T\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __SIZEOF_PTHREAD_BARRIER_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIER_T,32,10672,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIER_T\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __SIZEOF_PTHREAD_BARRIER_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIER_T,32,10672,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIER_T\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __SIZEOF_PTHREAD_BARRIER_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIER_T,20,10672,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIER_T\n");
cnt++;
#endif

#else
Msg( "No definition for __SIZEOF_PTHREAD_BARRIER_T (10672, int) in db\n");
#ifdef __SIZEOF_PTHREAD_BARRIER_T
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,10672,%d,'""3.2""',NULL);\n", architecture, __SIZEOF_PTHREAD_BARRIER_T);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef __SIZEOF_PTHREAD_BARRIERATTR_T
	CompareConstant(__SIZEOF_PTHREAD_BARRIERATTR_T,4,10673,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_BARRIERATTR_T\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
/* No test for PTHREAD_MUTEX_INITIALIZER */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for PTHREAD_MUTEX_INITIALIZER */
#elif defined __ia64__
/* No test for PTHREAD_MUTEX_INITIALIZER */
#elif defined __i386__
/* No test for PTHREAD_MUTEX_INITIALIZER */
#elif defined __s390x__
/* No test for PTHREAD_MUTEX_INITIALIZER */
#elif defined __x86_64__
/* No test for PTHREAD_MUTEX_INITIALIZER */
#elif defined __s390__ && !defined __s390x__
/* No test for PTHREAD_MUTEX_INITIALIZER */
#else
Msg( "No definition for PTHREAD_MUTEX_INITIALIZER (1535, Unknown) in db\n");
#ifdef PTHREAD_MUTEX_INITIALIZER
#endif
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
#ifdef __SIZEOF_PTHREAD_MUTEXATTR_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEXATTR_T,4,15591,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEXATTR_T\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __SIZEOF_PTHREAD_CONDATTR_T
	CompareConstant(__SIZEOF_PTHREAD_CONDATTR_T,4,15592,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_CONDATTR_T\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __SIZEOF_PTHREAD_RWLOCKATTR_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCKATTR_T,8,15593,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCKATTR_T\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCK_T,56,15594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCK_T\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCK_T,32,15594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCK_T\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCK_T,56,15594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCK_T\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCK_T,32,15594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCK_T\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCK_T,56,15594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCK_T\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCK_T,56,15594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCK_T\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
	CompareConstant(__SIZEOF_PTHREAD_RWLOCK_T,32,15594,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_RWLOCK_T\n");
cnt++;
#endif

#else
Msg( "No definition for __SIZEOF_PTHREAD_RWLOCK_T (15594, int) in db\n");
#ifdef __SIZEOF_PTHREAD_RWLOCK_T
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,15594,%d,'""4.0""',NULL);\n", architecture, __SIZEOF_PTHREAD_RWLOCK_T);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef __SIZEOF_PTHREAD_COND_T
	CompareConstant(__SIZEOF_PTHREAD_COND_T,48,15595,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_COND_T\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_ATTR_T
	CompareConstant(__SIZEOF_PTHREAD_ATTR_T,56,15596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_ATTR_T\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_ATTR_T
	CompareConstant(__SIZEOF_PTHREAD_ATTR_T,36,15596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_ATTR_T\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __SIZEOF_PTHREAD_ATTR_T
	CompareConstant(__SIZEOF_PTHREAD_ATTR_T,56,15596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_ATTR_T\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __SIZEOF_PTHREAD_ATTR_T
	CompareConstant(__SIZEOF_PTHREAD_ATTR_T,36,15596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_ATTR_T\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __SIZEOF_PTHREAD_ATTR_T
	CompareConstant(__SIZEOF_PTHREAD_ATTR_T,56,15596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_ATTR_T\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __SIZEOF_PTHREAD_ATTR_T
	CompareConstant(__SIZEOF_PTHREAD_ATTR_T,56,15596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_ATTR_T\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __SIZEOF_PTHREAD_ATTR_T
	CompareConstant(__SIZEOF_PTHREAD_ATTR_T,36,15596,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_ATTR_T\n");
cnt++;
#endif

#else
Msg( "No definition for __SIZEOF_PTHREAD_ATTR_T (15596, int) in db\n");
#ifdef __SIZEOF_PTHREAD_ATTR_T
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,15596,%d,'""4.0""',NULL);\n", architecture, __SIZEOF_PTHREAD_ATTR_T);
#endif
#endif
#if defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_MUTEX_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEX_T,40,15597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEX_T\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef __SIZEOF_PTHREAD_MUTEX_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEX_T,24,15597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEX_T\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef __SIZEOF_PTHREAD_MUTEX_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEX_T,40,15597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEX_T\n");
cnt++;
#endif

#elif defined __i386__
#ifdef __SIZEOF_PTHREAD_MUTEX_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEX_T,24,15597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEX_T\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef __SIZEOF_PTHREAD_MUTEX_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEX_T,40,15597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEX_T\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef __SIZEOF_PTHREAD_MUTEX_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEX_T,40,15597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEX_T\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef __SIZEOF_PTHREAD_MUTEX_T
	CompareConstant(__SIZEOF_PTHREAD_MUTEX_T,24,15597,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __SIZEOF_PTHREAD_MUTEX_T\n");
cnt++;
#endif

#else
Msg( "No definition for __SIZEOF_PTHREAD_MUTEX_T (15597, int) in db\n");
#ifdef __SIZEOF_PTHREAD_MUTEX_T
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,15597,%d,'""4.0""',NULL);\n", architecture, __SIZEOF_PTHREAD_MUTEX_T);
#endif
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

#if defined __powerpc64__
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#elif defined __ia64__
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#elif defined __i386__
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#elif defined __s390x__
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#elif defined __x86_64__
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#elif defined __s390__ && !defined __s390x__
/* No test for PTHREAD_RWLOCK_INITIALIZER */
#else
Msg( "No definition for PTHREAD_RWLOCK_INITIALIZER (5006, Unknown) in db\n");
#ifdef PTHREAD_RWLOCK_INITIALIZER
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_RWLOCK_DEFAULT_NP
	CompareConstant(PTHREAD_RWLOCK_DEFAULT_NP,2,5096,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_RWLOCK_DEFAULT_NP\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 12, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,12,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,12,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,12,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,12,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,12,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,12,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,12,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,12,40622)
#elif defined __x86_64__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,11,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,11,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,11,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,11,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,11,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,11,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,11,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,11,40622)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _pthread_cleanup_buffer,16, 6931, 10, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,4,10,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,10,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,4,10,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,4,10,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,10,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,8,10,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,4,10,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,12,10,40622)
#elif defined __powerpc64__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,9,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,9,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,9,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,9,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,9,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,9,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,9,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,9,40622)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _pthread_cleanup_buffer,16, 6931, 6, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,4,6,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,6,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,4,6,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,4,6,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,6,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,8,6,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,4,6,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,12,6,40622)
#elif defined __ia64__
CheckTypeSize(struct _pthread_cleanup_buffer,32, 6931, 3, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,8,3,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,3,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,8,3,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,8,3,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,3,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,16,3,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,8,3,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,24,3,40622)
#elif defined __i386__
CheckTypeSize(struct _pthread_cleanup_buffer,16, 6931, 2, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _pthread_cleanup_buffer,__routine,4,2,40619)
CheckOffset(struct _pthread_cleanup_buffer,__routine,0,2,40619)
CheckMemberSize(struct _pthread_cleanup_buffer,__arg,4,2,40620)
CheckOffset(struct _pthread_cleanup_buffer,__arg,4,2,40620)
CheckMemberSize(struct _pthread_cleanup_buffer,__canceltype,4,2,40621)
CheckOffset(struct _pthread_cleanup_buffer,__canceltype,8,2,40621)
CheckMemberSize(struct _pthread_cleanup_buffer,__prev,4,2,40622)
CheckOffset(struct _pthread_cleanup_buffer,__prev,12,2,40622)
#else
Msg("Find size of _pthread_cleanup_buffer (6931)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,6931,0);
#endif

#if defined __s390x__
CheckTypeSize(pthread_key_t,4, 9059, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_key_t,4, 9059, 11, 2.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_key_t,4, 9059, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_key_t,4, 9059, 9, 2.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_key_t,4, 9059, 6, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_key_t,4, 9059, 3, 1.3, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(pthread_key_t,4, 9059, 2, 1.2, NULL, 7, NULL)
#else
Msg("Find size of pthread_key_t (9059)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,7,NULL);\n",architecture,9059,0);
#endif

#if defined __s390x__
CheckTypeSize(pthread_once_t,4, 9062, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_once_t,4, 9062, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_once_t,4, 9062, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_once_t,4, 9062, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_once_t,4, 9062, 6, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_once_t,4, 9062, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(pthread_once_t,4, 9062, 2, 1.2, NULL, 6, NULL)
#else
Msg("Find size of pthread_once_t (9062)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,6,NULL);\n",architecture,9062,0);
#endif

#if 1
CheckTypeSize(pthread_spinlock_t,4, 16581, 1, 3.2, NULL, 16601, NULL)
#endif

#if defined __s390x__
CheckTypeSize(pthread_barrier_t,32, 22154, 12, 3.2, NULL, 16602, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_barrier_t,32, 22154, 11, 3.2, NULL, 16602, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_barrier_t,20, 22154, 10, 3.2, NULL, 16602, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_barrier_t,32, 22154, 9, 3.2, NULL, 16602, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_barrier_t,20, 22154, 6, 3.2, NULL, 16602, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_barrier_t,32, 22154, 3, 3.2, NULL, 16602, NULL)
#elif defined __i386__
CheckTypeSize(pthread_barrier_t,20, 22154, 2, 3.2, NULL, 16602, NULL)
#endif

#if 1
CheckTypeSize(pthread_barrierattr_t,4, 22155, 1, 3.2, NULL, 16604, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct __pthread_internal_list,16, 26300, 12, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_internal_list,__next,8,12,78828)
CheckOffset(struct __pthread_internal_list,__next,8,12,78828)
#elif defined __x86_64__
CheckTypeSize(struct __pthread_internal_list,16, 26300, 11, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_internal_list,__next,8,11,78828)
CheckOffset(struct __pthread_internal_list,__next,8,11,78828)
#elif defined __powerpc64__
CheckTypeSize(struct __pthread_internal_list,16, 26300, 9, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_internal_list,__next,8,9,78828)
CheckOffset(struct __pthread_internal_list,__next,8,9,78828)
#elif defined __ia64__
CheckTypeSize(struct __pthread_internal_list,16, 26300, 3, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_internal_list,__next,8,3,78828)
CheckOffset(struct __pthread_internal_list,__next,8,3,78828)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct __pthread_internal_slist,4, 1000092, 10, 4.0, NULL, 0, NULL)
Msg("Missing member data for __pthread_internal_slist on S390\n");
CheckOffset(struct __pthread_internal_slist,__next,0,10,78829)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct __pthread_internal_slist,4, 1000092, 6, 4.0, NULL, 0, NULL)
Msg("Missing member data for __pthread_internal_slist on PPC32\n");
CheckOffset(struct __pthread_internal_slist,__next,0,6,78829)
#elif defined __i386__
CheckTypeSize(struct __pthread_internal_slist,4, 1000092, 2, 4.0, NULL, 0, NULL)
Msg("Missing member data for __pthread_internal_slist on IA32\n");
CheckOffset(struct __pthread_internal_slist,__next,0,2,78829)
#endif

#if defined __s390x__
CheckTypeSize(pthread_t,8, 9040, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_t,8, 9040, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_t,4, 9040, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_t,8, 9040, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_t,4, 9040, 6, 1.2, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_t,8, 9040, 3, 1.3, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(pthread_t,4, 9040, 2, 1.2, NULL, 9, NULL)
#else
Msg("Find size of pthread_t (9040)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9,NULL);\n",architecture,9040,0);
#endif

#if defined __s390x__
CheckTypeSize(pthread_mutex_t,40, 9047, 12, 4.0, NULL, 1000096, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_mutex_t,40, 9047, 11, 4.0, NULL, 1000096, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_mutex_t,24, 9047, 10, 4.0, NULL, 1000096, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_mutex_t,40, 9047, 9, 4.0, NULL, 1000096, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_mutex_t,24, 9047, 6, 4.0, NULL, 1000096, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_mutex_t,40, 9047, 3, 4.0, NULL, 1000096, NULL)
#elif defined __i386__
CheckTypeSize(pthread_mutex_t,24, 9047, 2, 4.0, NULL, 1000096, NULL)
#else
Msg("Find size of pthread_mutex_t (9047)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,1000096,NULL);\n",architecture,9047,0);
#endif

#if 1
CheckTypeSize(pthread_mutexattr_t,4, 9049, 1, 4.0, NULL, 1000083, NULL)
#endif

#if defined __s390x__
CheckTypeSize(pthread_attr_t,56, 9042, 12, 4.0, NULL, 1000084, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_attr_t,56, 9042, 11, 4.0, NULL, 1000084, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_attr_t,36, 9042, 10, 4.0, NULL, 1000084, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_attr_t,56, 9042, 9, 4.0, NULL, 1000084, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_attr_t,36, 9042, 6, 4.0, NULL, 1000084, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_attr_t,56, 9042, 3, 4.0, NULL, 1000084, NULL)
#elif defined __i386__
CheckTypeSize(pthread_attr_t,36, 9042, 2, 4.0, NULL, 1000084, NULL)
#else
Msg("Find size of pthread_attr_t (9042)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,1000084,NULL);\n",architecture,9042,0);
#endif

#if 1
CheckTypeSize(pthread_cond_t,48, 9051, 1, 4.0, NULL, 1000088, NULL)
#endif

#if 1
CheckTypeSize(pthread_condattr_t,4, 9053, 1, 4.0, NULL, 1000086, NULL)
#endif

#if defined __s390x__
CheckTypeSize(__pthread_list_t,16, 26301, 12, 4.0, NULL, 26300, NULL)
#elif defined __x86_64__
CheckTypeSize(__pthread_list_t,16, 26301, 11, 4.0, NULL, 26300, NULL)
#elif defined __powerpc64__
CheckTypeSize(__pthread_list_t,16, 26301, 9, 4.0, NULL, 26300, NULL)
#elif defined __ia64__
CheckTypeSize(__pthread_list_t,16, 26301, 3, 4.0, NULL, 26300, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct __pthread_mutex_s,40, 26302, 12, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_mutex_s,__count,4,12,78845)
CheckOffset(struct __pthread_mutex_s,__count,4,12,78845)
CheckMemberSize(struct __pthread_mutex_s,__owner,4,12,78852)
CheckOffset(struct __pthread_mutex_s,__owner,8,12,78852)
CheckMemberSize(struct __pthread_mutex_s,__nusers,4,12,78856)
CheckOffset(struct __pthread_mutex_s,__nusers,12,12,78856)
CheckMemberSize(struct __pthread_mutex_s,__kind,4,12,78863)
CheckOffset(struct __pthread_mutex_s,__kind,16,12,78863)
CheckMemberSize(struct __pthread_mutex_s,__spins,4,12,78870)
CheckOffset(struct __pthread_mutex_s,__spins,20,12,78870)
CheckMemberSize(struct __pthread_mutex_s,__list,16,12,78874)
CheckOffset(struct __pthread_mutex_s,__list,24,12,78874)
#elif defined __x86_64__
CheckTypeSize(struct __pthread_mutex_s,40, 26302, 11, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_mutex_s,__count,4,11,78844)
CheckOffset(struct __pthread_mutex_s,__count,4,11,78844)
CheckMemberSize(struct __pthread_mutex_s,__owner,4,11,78851)
CheckOffset(struct __pthread_mutex_s,__owner,8,11,78851)
CheckMemberSize(struct __pthread_mutex_s,__nusers,4,11,78855)
CheckOffset(struct __pthread_mutex_s,__nusers,12,11,78855)
CheckMemberSize(struct __pthread_mutex_s,__kind,4,11,78862)
CheckOffset(struct __pthread_mutex_s,__kind,16,11,78862)
CheckMemberSize(struct __pthread_mutex_s,__spins,4,11,78869)
CheckOffset(struct __pthread_mutex_s,__spins,20,11,78869)
CheckMemberSize(struct __pthread_mutex_s,__list,16,11,78873)
CheckOffset(struct __pthread_mutex_s,__list,24,11,78873)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct __pthread_mutex_s,24, 26302, 10, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_mutex_s,__count,4,10,78843)
CheckOffset(struct __pthread_mutex_s,__count,4,10,78843)
CheckMemberSize(struct __pthread_mutex_s,__owner,4,10,78850)
CheckOffset(struct __pthread_mutex_s,__owner,8,10,78850)
CheckMemberSize(struct __pthread_mutex_s,__kind,4,10,78861)
CheckOffset(struct __pthread_mutex_s,__kind,12,10,78861)
CheckMemberSize(struct __pthread_mutex_s,__nusers,4,10,78866)
CheckOffset(struct __pthread_mutex_s,__nusers,16,10,78866)
#elif defined __powerpc64__
CheckTypeSize(struct __pthread_mutex_s,40, 26302, 9, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_mutex_s,__count,4,9,78842)
CheckOffset(struct __pthread_mutex_s,__count,4,9,78842)
CheckMemberSize(struct __pthread_mutex_s,__owner,4,9,78849)
CheckOffset(struct __pthread_mutex_s,__owner,8,9,78849)
CheckMemberSize(struct __pthread_mutex_s,__nusers,4,9,78854)
CheckOffset(struct __pthread_mutex_s,__nusers,12,9,78854)
CheckMemberSize(struct __pthread_mutex_s,__kind,4,9,78860)
CheckOffset(struct __pthread_mutex_s,__kind,16,9,78860)
CheckMemberSize(struct __pthread_mutex_s,__spins,4,9,78868)
CheckOffset(struct __pthread_mutex_s,__spins,20,9,78868)
CheckMemberSize(struct __pthread_mutex_s,__list,16,9,78872)
CheckOffset(struct __pthread_mutex_s,__list,24,9,78872)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct __pthread_mutex_s,24, 26302, 6, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_mutex_s,__count,4,6,78841)
CheckOffset(struct __pthread_mutex_s,__count,4,6,78841)
CheckMemberSize(struct __pthread_mutex_s,__owner,4,6,78848)
CheckOffset(struct __pthread_mutex_s,__owner,8,6,78848)
CheckMemberSize(struct __pthread_mutex_s,__kind,4,6,78859)
CheckOffset(struct __pthread_mutex_s,__kind,12,6,78859)
CheckMemberSize(struct __pthread_mutex_s,__nusers,4,6,78865)
CheckOffset(struct __pthread_mutex_s,__nusers,16,6,78865)
#elif defined __ia64__
CheckTypeSize(struct __pthread_mutex_s,40, 26302, 3, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_mutex_s,__count,4,3,78840)
CheckOffset(struct __pthread_mutex_s,__count,4,3,78840)
CheckMemberSize(struct __pthread_mutex_s,__owner,4,3,78847)
CheckOffset(struct __pthread_mutex_s,__owner,8,3,78847)
CheckMemberSize(struct __pthread_mutex_s,__nusers,4,3,78853)
CheckOffset(struct __pthread_mutex_s,__nusers,12,3,78853)
CheckMemberSize(struct __pthread_mutex_s,__kind,4,3,78858)
CheckOffset(struct __pthread_mutex_s,__kind,16,3,78858)
CheckMemberSize(struct __pthread_mutex_s,__spins,4,3,78867)
CheckOffset(struct __pthread_mutex_s,__spins,20,3,78867)
CheckMemberSize(struct __pthread_mutex_s,__list,16,3,78871)
CheckOffset(struct __pthread_mutex_s,__list,24,3,78871)
#elif defined __i386__
CheckTypeSize(struct __pthread_mutex_s,24, 26302, 2, 4.0, NULL, 0, NULL)
CheckMemberSize(struct __pthread_mutex_s,__count,4,2,78839)
CheckOffset(struct __pthread_mutex_s,__count,4,2,78839)
CheckMemberSize(struct __pthread_mutex_s,__owner,4,2,78846)
CheckOffset(struct __pthread_mutex_s,__owner,8,2,78846)
CheckMemberSize(struct __pthread_mutex_s,__kind,4,2,78857)
CheckOffset(struct __pthread_mutex_s,__kind,12,2,78857)
CheckMemberSize(struct __pthread_mutex_s,__nusers,4,2,78864)
CheckOffset(struct __pthread_mutex_s,__nusers,16,2,78864)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(__pthread_slist_t,4, 1000094, 10, 4.0, NULL, 1000092, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__pthread_slist_t,4, 1000094, 6, 4.0, NULL, 1000092, NULL)
#elif defined __i386__
CheckTypeSize(__pthread_slist_t,4, 1000094, 2, 4.0, NULL, 1000092, NULL)
#endif

#if defined __s390x__
CheckTypeSize(pthread_rwlock_t,56, 9055, 12, 4.0, NULL, 1000091, NULL)
#elif defined __x86_64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 11, 4.0, NULL, 1000091, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(pthread_rwlock_t,32, 9055, 10, 4.0, NULL, 1000091, NULL)
#elif defined __powerpc64__
CheckTypeSize(pthread_rwlock_t,0, 9055, 9, 4.0, NULL, 1000091, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(pthread_rwlock_t,32, 9055, 6, 4.0, NULL, 1000091, NULL)
#elif defined __ia64__
CheckTypeSize(pthread_rwlock_t,56, 9055, 3, 4.0, NULL, 1000091, NULL)
#elif defined __i386__
CheckTypeSize(pthread_rwlock_t,32, 9055, 2, 4.0, NULL, 1000091, NULL)
#endif

#if 1
CheckTypeSize(pthread_rwlockattr_t,8, 9057, 1, 4.0, NULL, 1000085, NULL)
#endif

extern int pthread_barrier_destroy_db(pthread_barrier_t *);
CheckInterfacedef(pthread_barrier_destroy,pthread_barrier_destroy_db);
extern int pthread_barrier_init_db(pthread_barrier_t *, const pthread_barrierattr_t *, unsigned int);
CheckInterfacedef(pthread_barrier_init,pthread_barrier_init_db);
extern int pthread_barrier_wait_db(pthread_barrier_t *);
CheckInterfacedef(pthread_barrier_wait,pthread_barrier_wait_db);
extern int pthread_barrierattr_destroy_db(pthread_barrierattr_t *);
CheckInterfacedef(pthread_barrierattr_destroy,pthread_barrierattr_destroy_db);
extern int pthread_barrierattr_init_db(pthread_barrierattr_t *);
CheckInterfacedef(pthread_barrierattr_init,pthread_barrierattr_init_db);
extern int pthread_barrierattr_setpshared_db(pthread_barrierattr_t *, int);
CheckInterfacedef(pthread_barrierattr_setpshared,pthread_barrierattr_setpshared_db);
extern int pthread_getcpuclockid_db(pthread_t, clockid_t *);
CheckInterfacedef(pthread_getcpuclockid,pthread_getcpuclockid_db);
extern int pthread_spin_destroy_db(pthread_spinlock_t *);
CheckInterfacedef(pthread_spin_destroy,pthread_spin_destroy_db);
extern int pthread_spin_init_db(pthread_spinlock_t *, int);
CheckInterfacedef(pthread_spin_init,pthread_spin_init_db);
extern int pthread_spin_lock_db(pthread_spinlock_t *);
CheckInterfacedef(pthread_spin_lock,pthread_spin_lock_db);
extern int pthread_spin_trylock_db(pthread_spinlock_t *);
CheckInterfacedef(pthread_spin_trylock,pthread_spin_trylock_db);
extern int pthread_spin_unlock_db(pthread_spinlock_t *);
CheckInterfacedef(pthread_spin_unlock,pthread_spin_unlock_db);
extern int pthread_mutex_timedlock_db(pthread_mutex_t *, const struct timespec *);
CheckInterfacedef(pthread_mutex_timedlock,pthread_mutex_timedlock_db);
extern int pthread_barrierattr_getpshared_db(const pthread_barrierattr_t *, int *);
CheckInterfacedef(pthread_barrierattr_getpshared,pthread_barrierattr_getpshared_db);
extern int pthread_mutexattr_getprioceiling_db(const pthread_mutexattr_t *, int *);
CheckInterfacedef(pthread_mutexattr_getprioceiling,pthread_mutexattr_getprioceiling_db);
extern int pthread_mutexattr_getprotocol_db(const pthread_mutexattr_t *, int *);
CheckInterfacedef(pthread_mutexattr_getprotocol,pthread_mutexattr_getprotocol_db);
extern int pthread_mutexattr_setprioceiling_db(pthread_mutexattr_t *, int);
CheckInterfacedef(pthread_mutexattr_setprioceiling,pthread_mutexattr_setprioceiling_db);
extern int pthread_mutexattr_setprotocol_db(pthread_mutexattr_t *, int);
CheckInterfacedef(pthread_mutexattr_setprotocol,pthread_mutexattr_setprotocol_db);
extern int pthread_mutex_getprioceiling_db(const pthread_mutex_t *, int *);
CheckInterfacedef(pthread_mutex_getprioceiling,pthread_mutex_getprioceiling_db);
extern int pthread_mutex_setprioceiling_db(pthread_mutex_t *, int, int *);
CheckInterfacedef(pthread_mutex_setprioceiling,pthread_mutex_setprioceiling_db);
extern void _pthread_cleanup_pop_db(struct _pthread_cleanup_buffer *, int);
CheckInterfacedef(_pthread_cleanup_pop,_pthread_cleanup_pop_db);
extern void _pthread_cleanup_push_db(struct _pthread_cleanup_buffer *, void(*fptr0)(void *)
, void *);
CheckInterfacedef(_pthread_cleanup_push,_pthread_cleanup_push_db);
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
extern int pthread_create_db(pthread_t *, const pthread_attr_t *, void *(*fptr1)(void *)
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
extern int pthread_key_create_db(pthread_key_t *, void(*fptr2)(void *)
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
extern int pthread_once_db(pthread_once_t *, void(*fptr3)(void)
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
extern int __register_atfork_db(void(*fptr4)(void)
, void(*fptr5)(void)
, void(*fptr6)(void)
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
