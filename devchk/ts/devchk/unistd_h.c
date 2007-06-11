/*
 * Test of unistd.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "unistd.h"



#ifdef TET_TEST
void unistd_h()
{
#else
int unistd_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in unistd.h\n");
#endif

printf("Checking data structures in unistd.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef R_OK
	CompareConstant(R_OK,4,1212,architecture)
#else
Msg( "Error: Constant not found: R_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef W_OK
	CompareConstant(W_OK,2,1213,architecture)
#else
Msg( "Error: Constant not found: W_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_OK
	CompareConstant(X_OK,1,1214,architecture)
#else
Msg( "Error: Constant not found: X_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_OK
	CompareConstant(F_OK,0,1215,architecture)
#else
Msg( "Error: Constant not found: F_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_ULOCK
	CompareConstant(F_ULOCK,0,1216,architecture)
#else
Msg( "Error: Constant not found: F_ULOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_LOCK
	CompareConstant(F_LOCK,1,1217,architecture)
#else
Msg( "Error: Constant not found: F_LOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_TLOCK
	CompareConstant(F_TLOCK,2,1218,architecture)
#else
Msg( "Error: Constant not found: F_TLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_TEST
	CompareConstant(F_TEST,3,1219,architecture)
#else
Msg( "Error: Constant not found: F_TEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEEK_SET
	CompareConstant(SEEK_SET,0,1635,architecture)
#else
Msg( "Error: Constant not found: SEEK_SET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEEK_CUR
	CompareConstant(SEEK_CUR,1,1636,architecture)
#else
Msg( "Error: Constant not found: SEEK_CUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEEK_END
	CompareConstant(SEEK_END,2,1637,architecture)
#else
Msg( "Error: Constant not found: SEEK_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_C_BIND
	CompareConstant(_POSIX2_C_BIND,200112L,1922,architecture)
#else
Msg( "Error: Constant not found: _POSIX2_C_BIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XOPEN_XPG4
	CompareConstant(_XOPEN_XPG4,1,1930,architecture)
#else
Msg( "Error: Constant not found: _XOPEN_XPG4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STDIN_FILENO
	CompareConstant(STDIN_FILENO,0,1935,architecture)
#else
Msg( "Error: Constant not found: STDIN_FILENO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STDOUT_FILENO
	CompareConstant(STDOUT_FILENO,1,1936,architecture)
#else
Msg( "Error: Constant not found: STDOUT_FILENO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STDERR_FILENO
	CompareConstant(STDERR_FILENO,2,1937,architecture)
#else
Msg( "Error: Constant not found: STDERR_FILENO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MAPPED_FILES
	CompareConstant(_POSIX_MAPPED_FILES,200112,3528,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MAPPED_FILES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_OPEN_MAX
	CompareConstant(_SC_OPEN_MAX,4,3595,architecture)
#else
Msg( "Error: Constant not found: _SC_OPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CLK_TCK
	CompareConstant(_SC_CLK_TCK,2,3596,architecture)
#else
Msg( "Error: Constant not found: _SC_CLK_TCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_FSYNC
	CompareConstant(_POSIX_FSYNC,200112,4750,architecture)
#else
Msg( "Error: Constant not found: _POSIX_FSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMLOCK
	CompareConstant(_POSIX_MEMLOCK,200112,4751,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MEMLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_ASYNC_IO
	CompareConstant(_PC_ASYNC_IO,10,4753,architecture)
#else
Msg( "Error: Constant not found: _PC_ASYNC_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_CHOWN_RESTRICTED
	CompareConstant(_PC_CHOWN_RESTRICTED,6,4754,architecture)
#else
Msg( "Error: Constant not found: _PC_CHOWN_RESTRICTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_FILESIZEBITS
	CompareConstant(_PC_FILESIZEBITS,13,4755,architecture)
#else
Msg( "Error: Constant not found: _PC_FILESIZEBITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_LINK_MAX
	CompareConstant(_PC_LINK_MAX,0,4756,architecture)
#else
Msg( "Error: Constant not found: _PC_LINK_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_MAX_CANON
	CompareConstant(_PC_MAX_CANON,1,4757,architecture)
#else
Msg( "Error: Constant not found: _PC_MAX_CANON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_MAX_INPUT
	CompareConstant(_PC_MAX_INPUT,2,4758,architecture)
#else
Msg( "Error: Constant not found: _PC_MAX_INPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_NAME_MAX
	CompareConstant(_PC_NAME_MAX,3,4759,architecture)
#else
Msg( "Error: Constant not found: _PC_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_NO_TRUNC
	CompareConstant(_PC_NO_TRUNC,7,4760,architecture)
#else
Msg( "Error: Constant not found: _PC_NO_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_PATH_MAX
	CompareConstant(_PC_PATH_MAX,4,4761,architecture)
#else
Msg( "Error: Constant not found: _PC_PATH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_PIPE_BUF
	CompareConstant(_PC_PIPE_BUF,5,4762,architecture)
#else
Msg( "Error: Constant not found: _PC_PIPE_BUF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_PRIO_IO
	CompareConstant(_PC_PRIO_IO,11,4763,architecture)
#else
Msg( "Error: Constant not found: _PC_PRIO_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_SYNC_IO
	CompareConstant(_PC_SYNC_IO,9,4764,architecture)
#else
Msg( "Error: Constant not found: _PC_SYNC_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_VDISABLE
	CompareConstant(_PC_VDISABLE,8,4765,architecture)
#else
Msg( "Error: Constant not found: _PC_VDISABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMLOCK_RANGE
	CompareConstant(_POSIX_MEMLOCK_RANGE,200112,4766,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MEMLOCK_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMORY_PROTECTION
	CompareConstant(_POSIX_MEMORY_PROTECTION,200112,4767,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MEMORY_PROTECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SEMAPHORES
	CompareConstant(_POSIX_SEMAPHORES,200112,4771,architecture)
#else
Msg( "Error: Constant not found: _POSIX_SEMAPHORES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SHARED_MEMORY_OBJECTS
	CompareConstant(_POSIX_SHARED_MEMORY_OBJECTS,200112,4772,architecture)
#else
Msg( "Error: Constant not found: _POSIX_SHARED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_TIMERS
	CompareConstant(_POSIX_TIMERS,200112,4774,architecture)
#else
Msg( "Error: Constant not found: _POSIX_TIMERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_BIND
	CompareConstant(_SC_2_C_BIND,47,4775,architecture)
#else
Msg( "Error: Constant not found: _SC_2_C_BIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_DEV
	CompareConstant(_SC_2_C_DEV,48,4776,architecture)
#else
Msg( "Error: Constant not found: _SC_2_C_DEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_VERSION
	CompareConstant(_SC_2_C_VERSION,96,4777,architecture)
#else
Msg( "Error: Constant not found: _SC_2_C_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_FORT_DEV
	CompareConstant(_SC_2_FORT_DEV,49,4778,architecture)
#else
Msg( "Error: Constant not found: _SC_2_FORT_DEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_FORT_RUN
	CompareConstant(_SC_2_FORT_RUN,50,4779,architecture)
#else
Msg( "Error: Constant not found: _SC_2_FORT_RUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_LOCALEDEF
	CompareConstant(_SC_2_LOCALEDEF,52,4780,architecture)
#else
Msg( "Error: Constant not found: _SC_2_LOCALEDEF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_SW_DEV
	CompareConstant(_SC_2_SW_DEV,51,4781,architecture)
#else
Msg( "Error: Constant not found: _SC_2_SW_DEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_UPE
	CompareConstant(_SC_2_UPE,97,4782,architecture)
#else
Msg( "Error: Constant not found: _SC_2_UPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_VERSION
	CompareConstant(_SC_2_VERSION,46,4783,architecture)
#else
Msg( "Error: Constant not found: _SC_2_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_LISTIO_MAX
	CompareConstant(_SC_AIO_LISTIO_MAX,23,4784,architecture)
#else
Msg( "Error: Constant not found: _SC_AIO_LISTIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_MAX
	CompareConstant(_SC_AIO_MAX,24,4785,architecture)
#else
Msg( "Error: Constant not found: _SC_AIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_PRIO_DELTA_MAX
	CompareConstant(_SC_AIO_PRIO_DELTA_MAX,25,4786,architecture)
#else
Msg( "Error: Constant not found: _SC_AIO_PRIO_DELTA_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ARG_MAX
	CompareConstant(_SC_ARG_MAX,0,4787,architecture)
#else
Msg( "Error: Constant not found: _SC_ARG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ASYNCHRONOUS_IO
	CompareConstant(_SC_ASYNCHRONOUS_IO,12,4788,architecture)
#else
Msg( "Error: Constant not found: _SC_ASYNCHRONOUS_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_BASE_MAX
	CompareConstant(_SC_BC_BASE_MAX,36,4789,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_BASE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_DIM_MAX
	CompareConstant(_SC_BC_DIM_MAX,37,4790,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_DIM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_SCALE_MAX
	CompareConstant(_SC_BC_SCALE_MAX,38,4791,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_SCALE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_STRING_MAX
	CompareConstant(_SC_BC_STRING_MAX,39,4792,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_STRING_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CHILD_MAX
	CompareConstant(_SC_CHILD_MAX,1,4793,architecture)
#else
Msg( "Error: Constant not found: _SC_CHILD_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_COLL_WEIGHTS_MAX
	CompareConstant(_SC_COLL_WEIGHTS_MAX,40,4794,architecture)
#else
Msg( "Error: Constant not found: _SC_COLL_WEIGHTS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_DELAYTIMER_MAX
	CompareConstant(_SC_DELAYTIMER_MAX,26,4795,architecture)
#else
Msg( "Error: Constant not found: _SC_DELAYTIMER_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_EXPR_NEST_MAX
	CompareConstant(_SC_EXPR_NEST_MAX,42,4796,architecture)
#else
Msg( "Error: Constant not found: _SC_EXPR_NEST_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_JOB_CONTROL
	CompareConstant(_SC_JOB_CONTROL,7,4797,architecture)
#else
Msg( "Error: Constant not found: _SC_JOB_CONTROL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LINE_MAX
	CompareConstant(_SC_LINE_MAX,43,4798,architecture)
#else
Msg( "Error: Constant not found: _SC_LINE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MAPPED_FILES
	CompareConstant(_SC_MAPPED_FILES,16,4799,architecture)
#else
Msg( "Error: Constant not found: _SC_MAPPED_FILES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MEMLOCK
	CompareConstant(_SC_MEMLOCK,17,4800,architecture)
#else
Msg( "Error: Constant not found: _SC_MEMLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MEMLOCK_RANGE
	CompareConstant(_SC_MEMLOCK_RANGE,18,4801,architecture)
#else
Msg( "Error: Constant not found: _SC_MEMLOCK_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MEMORY_PROTECTION
	CompareConstant(_SC_MEMORY_PROTECTION,19,4802,architecture)
#else
Msg( "Error: Constant not found: _SC_MEMORY_PROTECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MESSAGE_PASSING
	CompareConstant(_SC_MESSAGE_PASSING,20,4803,architecture)
#else
Msg( "Error: Constant not found: _SC_MESSAGE_PASSING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MQ_OPEN_MAX
	CompareConstant(_SC_MQ_OPEN_MAX,27,4804,architecture)
#else
Msg( "Error: Constant not found: _SC_MQ_OPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MQ_PRIO_MAX
	CompareConstant(_SC_MQ_PRIO_MAX,28,4805,architecture)
#else
Msg( "Error: Constant not found: _SC_MQ_PRIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NGROUPS_MAX
	CompareConstant(_SC_NGROUPS_MAX,3,4806,architecture)
#else
Msg( "Error: Constant not found: _SC_NGROUPS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PASS_MAX
	CompareConstant(_SC_PASS_MAX,88,4807,architecture)
#else
Msg( "Error: Constant not found: _SC_PASS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PRIORITIZED_IO
	CompareConstant(_SC_PRIORITIZED_IO,13,4808,architecture)
#else
Msg( "Error: Constant not found: _SC_PRIORITIZED_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PRIORITY_SCHEDULING
	CompareConstant(_SC_PRIORITY_SCHEDULING,10,4809,architecture)
#else
Msg( "Error: Constant not found: _SC_PRIORITY_SCHEDULING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_REALTIME_SIGNALS
	CompareConstant(_SC_REALTIME_SIGNALS,9,4810,architecture)
#else
Msg( "Error: Constant not found: _SC_REALTIME_SIGNALS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_RE_DUP_MAX
	CompareConstant(_SC_RE_DUP_MAX,44,4811,architecture)
#else
Msg( "Error: Constant not found: _SC_RE_DUP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_RTSIG_MAX
	CompareConstant(_SC_RTSIG_MAX,31,4812,architecture)
#else
Msg( "Error: Constant not found: _SC_RTSIG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SAVED_IDS
	CompareConstant(_SC_SAVED_IDS,8,4813,architecture)
#else
Msg( "Error: Constant not found: _SC_SAVED_IDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SEMAPHORES
	CompareConstant(_SC_SEMAPHORES,21,4814,architecture)
#else
Msg( "Error: Constant not found: _SC_SEMAPHORES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SEM_NSEMS_MAX
	CompareConstant(_SC_SEM_NSEMS_MAX,32,4815,architecture)
#else
Msg( "Error: Constant not found: _SC_SEM_NSEMS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SEM_VALUE_MAX
	CompareConstant(_SC_SEM_VALUE_MAX,33,4816,architecture)
#else
Msg( "Error: Constant not found: _SC_SEM_VALUE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SHARED_MEMORY_OBJECTS
	CompareConstant(_SC_SHARED_MEMORY_OBJECTS,22,4817,architecture)
#else
Msg( "Error: Constant not found: _SC_SHARED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SIGQUEUE_MAX
	CompareConstant(_SC_SIGQUEUE_MAX,34,4818,architecture)
#else
Msg( "Error: Constant not found: _SC_SIGQUEUE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_STREAM_MAX
	CompareConstant(_SC_STREAM_MAX,5,4819,architecture)
#else
Msg( "Error: Constant not found: _SC_STREAM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SYNCHRONIZED_IO
	CompareConstant(_SC_SYNCHRONIZED_IO,14,4820,architecture)
#else
Msg( "Error: Constant not found: _SC_SYNCHRONIZED_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREADS
	CompareConstant(_SC_THREADS,67,4821,architecture)
#else
Msg( "Error: Constant not found: _SC_THREADS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_ATTR_STACKADDR
	CompareConstant(_SC_THREAD_ATTR_STACKADDR,77,4822,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_ATTR_STACKADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_ATTR_STACKSIZE
	CompareConstant(_SC_THREAD_ATTR_STACKSIZE,78,4823,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_ATTR_STACKSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
	CompareConstant(_SC_THREAD_DESTRUCTOR_ITERATIONS,73,4824,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_DESTRUCTOR_ITERATIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_KEYS_MAX
	CompareConstant(_SC_THREAD_KEYS_MAX,74,4825,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_KEYS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
	CompareConstant(_SC_THREAD_PRIORITY_SCHEDULING,79,4826,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIORITY_SCHEDULING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIO_INHERIT
	CompareConstant(_SC_THREAD_PRIO_INHERIT,80,4827,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIO_INHERIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIO_PROTECT
	CompareConstant(_SC_THREAD_PRIO_PROTECT,81,4828,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIO_PROTECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PROCESS_SHARED
	CompareConstant(_SC_THREAD_PROCESS_SHARED,82,4829,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PROCESS_SHARED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_SAFE_FUNCTIONS
	CompareConstant(_SC_THREAD_SAFE_FUNCTIONS,68,4830,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_SAFE_FUNCTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_STACK_MIN
	CompareConstant(_SC_THREAD_STACK_MIN,75,4831,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_STACK_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_THREADS_MAX
	CompareConstant(_SC_THREAD_THREADS_MAX,76,4832,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_THREADS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TIMERS
	CompareConstant(_SC_TIMERS,11,4833,architecture)
#else
Msg( "Error: Constant not found: _SC_TIMERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TIMER_MAX
	CompareConstant(_SC_TIMER_MAX,35,4834,architecture)
#else
Msg( "Error: Constant not found: _SC_TIMER_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TZNAME_MAX
	CompareConstant(_SC_TZNAME_MAX,6,4835,architecture)
#else
Msg( "Error: Constant not found: _SC_TZNAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_VERSION
	CompareConstant(_SC_VERSION,29,4836,architecture)
#else
Msg( "Error: Constant not found: _SC_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_ILP32_OFF32
	CompareConstant(_SC_XBS5_ILP32_OFF32,125,4837,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_ILP32_OFF32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_ILP32_OFFBIG
	CompareConstant(_SC_XBS5_ILP32_OFFBIG,126,4838,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_ILP32_OFFBIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_LP64_OFF64
	CompareConstant(_SC_XBS5_LP64_OFF64,127,4839,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_LP64_OFF64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_LPBIG_OFFBIG
	CompareConstant(_SC_XBS5_LPBIG_OFFBIG,128,4840,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_LPBIG_OFFBIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_CRYPT
	CompareConstant(_SC_XOPEN_CRYPT,92,4841,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_CRYPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_ENH_I18N
	CompareConstant(_SC_XOPEN_ENH_I18N,93,4842,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_ENH_I18N\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_LEGACY
	CompareConstant(_SC_XOPEN_LEGACY,129,4843,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_LEGACY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_REALTIME
	CompareConstant(_SC_XOPEN_REALTIME,130,4844,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_REALTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_SHM
	CompareConstant(_SC_XOPEN_SHM,94,4845,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_SHM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_VERSION
	CompareConstant(_SC_XOPEN_VERSION,89,4846,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_PATH
	CompareConstant(_CS_PATH,0,4847,architecture)
#else
Msg( "Error: Constant not found: _CS_PATH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_CFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_CFLAGS,1100,4848,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LDFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LDFLAGS,1101,4849,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LIBS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LIBS,1102,4850,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LINTFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LINTFLAGS,1103,4851,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_CFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_CFLAGS,1104,4852,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LDFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LDFLAGS,1105,4853,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LIBS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LIBS,1106,4854,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,1107,4855,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_CFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_CFLAGS,1108,4856,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LDFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_LDFLAGS,1109,4857,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LIBS
	CompareConstant(_CS_XBS5_LP64_OFF64_LIBS,1110,4858,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LINTFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_LINTFLAGS,1111,4859,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_CFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_CFLAGS,1112,4860,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,1113,4861,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LIBS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LIBS,1114,4862,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,1115,4863,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PAGESIZE
	CompareConstant(_SC_PAGESIZE,30,4930,architecture)
#else
Msg( "Error: Constant not found: _SC_PAGESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_VDISABLE
	CompareConstant(_POSIX_VDISABLE,'\0',5028,architecture)
#else
Msg( "Error: Constant not found: _POSIX_VDISABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_NO_TRUNC
	CompareConstant(_POSIX_NO_TRUNC,1,5029,architecture)
#else
Msg( "Error: Constant not found: _POSIX_NO_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_CHOWN_RESTRICTED
	CompareConstant(_POSIX_CHOWN_RESTRICTED,1,5030,architecture)
#else
Msg( "Error: Constant not found: _POSIX_CHOWN_RESTRICTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PAGE_SIZE
	CompareConstant(_SC_PAGE_SIZE,30,5148,architecture)
#else
Msg( "Error: Constant not found: _SC_PAGE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_REGEXP
	CompareConstant(_POSIX_REGEXP,1,5188,architecture)
#else
Msg( "Error: Constant not found: _POSIX_REGEXP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SHELL
	CompareConstant(_POSIX_SHELL,1,5190,architecture)
#else
Msg( "Error: Constant not found: _POSIX_SHELL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_JOB_CONTROL
	CompareConstant(_POSIX_JOB_CONTROL,1,5191,architecture)
#else
Msg( "Error: Constant not found: _POSIX_JOB_CONTROL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_THREADS
	CompareConstant(_POSIX_THREADS,200112L,5192,architecture)
#else
Msg( "Error: Constant not found: _POSIX_THREADS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_2_SYMLINKS
	CompareConstant(_PC_2_SYMLINKS,20,5193,architecture)
#else
Msg( "Error: Constant not found: _PC_2_SYMLINKS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_ALLOC_SIZE_MIN
	CompareConstant(_PC_ALLOC_SIZE_MIN,18,5194,architecture)
#else
Msg( "Error: Constant not found: _PC_ALLOC_SIZE_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_REC_INCR_XFER_SIZE
	CompareConstant(_PC_REC_INCR_XFER_SIZE,14,5195,architecture)
#else
Msg( "Error: Constant not found: _PC_REC_INCR_XFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_REC_MIN_XFER_SIZE
	CompareConstant(_PC_REC_MIN_XFER_SIZE,16,5196,architecture)
#else
Msg( "Error: Constant not found: _PC_REC_MIN_XFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_REC_XFER_ALIGN
	CompareConstant(_PC_REC_XFER_ALIGN,17,5197,architecture)
#else
Msg( "Error: Constant not found: _PC_REC_XFER_ALIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_CHAR_TERM
	CompareConstant(_SC_2_CHAR_TERM,95,5198,architecture)
#else
Msg( "Error: Constant not found: _SC_2_CHAR_TERM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_ACCOUNTING
	CompareConstant(_SC_2_PBS_ACCOUNTING,169,5199,architecture)
#else
Msg( "Error: Constant not found: _SC_2_PBS_ACCOUNTING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_CHECKPOINT
	CompareConstant(_SC_2_PBS_CHECKPOINT,175,5200,architecture)
#else
Msg( "Error: Constant not found: _SC_2_PBS_CHECKPOINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_LOCATE
	CompareConstant(_SC_2_PBS_LOCATE,170,5201,architecture)
#else
Msg( "Error: Constant not found: _SC_2_PBS_LOCATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_MESSAGE
	CompareConstant(_SC_2_PBS_MESSAGE,171,5202,architecture)
#else
Msg( "Error: Constant not found: _SC_2_PBS_MESSAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_TRACK
	CompareConstant(_SC_2_PBS_TRACK,172,5203,architecture)
#else
Msg( "Error: Constant not found: _SC_2_PBS_TRACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ADVISORY_INFO
	CompareConstant(_SC_ADVISORY_INFO,132,5204,architecture)
#else
Msg( "Error: Constant not found: _SC_ADVISORY_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ATEXIT_MAX
	CompareConstant(_SC_ATEXIT_MAX,87,5205,architecture)
#else
Msg( "Error: Constant not found: _SC_ATEXIT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BARRIERS
	CompareConstant(_SC_BARRIERS,133,5206,architecture)
#else
Msg( "Error: Constant not found: _SC_BARRIERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CLOCK_SELECTION
	CompareConstant(_SC_CLOCK_SELECTION,137,5207,architecture)
#else
Msg( "Error: Constant not found: _SC_CLOCK_SELECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CPUTIME
	CompareConstant(_SC_CPUTIME,138,5208,architecture)
#else
Msg( "Error: Constant not found: _SC_CPUTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_FSYNC
	CompareConstant(_SC_FSYNC,15,5209,architecture)
#else
Msg( "Error: Constant not found: _SC_FSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_GETGR_R_SIZE_MAX
	CompareConstant(_SC_GETGR_R_SIZE_MAX,69,5210,architecture)
#else
Msg( "Error: Constant not found: _SC_GETGR_R_SIZE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_GETPW_R_SIZE_MAX
	CompareConstant(_SC_GETPW_R_SIZE_MAX,70,5211,architecture)
#else
Msg( "Error: Constant not found: _SC_GETPW_R_SIZE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_HOST_NAME_MAX
	CompareConstant(_SC_HOST_NAME_MAX,180,5212,architecture)
#else
Msg( "Error: Constant not found: _SC_HOST_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_IOV_MAX
	CompareConstant(_SC_IOV_MAX,60,5213,architecture)
#else
Msg( "Error: Constant not found: _SC_IOV_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LOGIN_NAME_MAX
	CompareConstant(_SC_LOGIN_NAME_MAX,71,5215,architecture)
#else
Msg( "Error: Constant not found: _SC_LOGIN_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MONOTONIC_CLOCK
	CompareConstant(_SC_MONOTONIC_CLOCK,149,5216,architecture)
#else
Msg( "Error: Constant not found: _SC_MONOTONIC_CLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_READER_WRITER_LOCKS
	CompareConstant(_SC_READER_WRITER_LOCKS,153,5219,architecture)
#else
Msg( "Error: Constant not found: _SC_READER_WRITER_LOCKS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_REGEXP
	CompareConstant(_SC_REGEXP,155,5220,architecture)
#else
Msg( "Error: Constant not found: _SC_REGEXP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SHELL
	CompareConstant(_SC_SHELL,157,5221,architecture)
#else
Msg( "Error: Constant not found: _SC_SHELL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SPAWN
	CompareConstant(_SC_SPAWN,159,5222,architecture)
#else
Msg( "Error: Constant not found: _SC_SPAWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SPIN_LOCKS
	CompareConstant(_SC_SPIN_LOCKS,154,5223,architecture)
#else
Msg( "Error: Constant not found: _SC_SPIN_LOCKS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SPORADIC_SERVER
	CompareConstant(_SC_SPORADIC_SERVER,160,5224,architecture)
#else
Msg( "Error: Constant not found: _SC_SPORADIC_SERVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SYMLOOP_MAX
	CompareConstant(_SC_SYMLOOP_MAX,173,5226,architecture)
#else
Msg( "Error: Constant not found: _SC_SYMLOOP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_CPUTIME
	CompareConstant(_SC_THREAD_CPUTIME,139,5227,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_CPUTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_SPORADIC_SERVER
	CompareConstant(_SC_THREAD_SPORADIC_SERVER,161,5228,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_SPORADIC_SERVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TIMEOUTS
	CompareConstant(_SC_TIMEOUTS,164,5229,architecture)
#else
Msg( "Error: Constant not found: _SC_TIMEOUTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE
	CompareConstant(_SC_TRACE,181,5230,architecture)
#else
Msg( "Error: Constant not found: _SC_TRACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE_EVENT_FILTER
	CompareConstant(_SC_TRACE_EVENT_FILTER,182,5231,architecture)
#else
Msg( "Error: Constant not found: _SC_TRACE_EVENT_FILTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE_INHERIT
	CompareConstant(_SC_TRACE_INHERIT,183,5233,architecture)
#else
Msg( "Error: Constant not found: _SC_TRACE_INHERIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE_LOG
	CompareConstant(_SC_TRACE_LOG,184,5234,architecture)
#else
Msg( "Error: Constant not found: _SC_TRACE_LOG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TTY_NAME_MAX
	CompareConstant(_SC_TTY_NAME_MAX,72,5238,architecture)
#else
Msg( "Error: Constant not found: _SC_TTY_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TYPED_MEMORY_OBJECTS
	CompareConstant(_SC_TYPED_MEMORY_OBJECTS,165,5239,architecture)
#else
Msg( "Error: Constant not found: _SC_TYPED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_UNIX
	CompareConstant(_SC_XOPEN_UNIX,91,5241,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_UNIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_REALTIME_THREADS
	CompareConstant(_SC_XOPEN_REALTIME_THREADS,131,5242,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_REALTIME_THREADS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_ILP32_OFF32
	CompareConstant(_SC_V6_ILP32_OFF32,176,5243,architecture)
#else
Msg( "Error: Constant not found: _SC_V6_ILP32_OFF32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_ILP32_OFFBIG
	CompareConstant(_SC_V6_ILP32_OFFBIG,177,5244,architecture)
#else
Msg( "Error: Constant not found: _SC_V6_ILP32_OFFBIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_LP64_OFF64
	CompareConstant(_SC_V6_LP64_OFF64,178,5245,architecture)
#else
Msg( "Error: Constant not found: _SC_V6_LP64_OFF64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_LPBIG_OFFBIG
	CompareConstant(_SC_V6_LPBIG_OFFBIG,179,5246,architecture)
#else
Msg( "Error: Constant not found: _SC_V6_LPBIG_OFFBIG\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(off64_t,8, 9112, 2)
#elif __ia64__
CheckTypeSize(off64_t,8, 9112, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(off64_t,8, 9112, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(off64_t,8, 9112, 10)
#elif __powerpc64__
CheckTypeSize(off64_t,8, 9112, 9)
#elif __s390x__
CheckTypeSize(off64_t,8, 9112, 12)
#elif __x86_64__
CheckTypeSize(off64_t,8, 9112, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9112,0);
Msg("Find size of off64_t (9112)\n");
#endif

#if __i386__
CheckTypeSize(intptr_t,4, 9196, 2)
#elif __powerpc64__
CheckTypeSize(intptr_t,8, 9196, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(intptr_t,4, 9196, 10)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(intptr_t,4, 9196, 6)
#elif __ia64__
CheckTypeSize(intptr_t,8, 9196, 3)
#elif __x86_64__
CheckTypeSize(intptr_t,8, 9196, 11)
#elif __s390x__
CheckTypeSize(intptr_t,8, 9196, 12)
#endif

extern pid_t __getpgid_db(pid_t);
CheckInterfacedef(__getpgid,__getpgid_db);
extern void _exit_db(int);
CheckInterfacedef(_exit,_exit_db);
extern int acct_db(const char *);
CheckInterfacedef(acct,acct_db);
extern unsigned int alarm_db(unsigned int);
CheckInterfacedef(alarm,alarm_db);
extern int chown_db(const char *, uid_t, gid_t);
CheckInterfacedef(chown,chown_db);
extern int chroot_db(const char *);
CheckInterfacedef(chroot,chroot_db);
extern size_t confstr_db(int, char *, size_t);
CheckInterfacedef(confstr,confstr_db);
extern int creat_db(const char *, mode_t);
CheckInterfacedef(creat,creat_db);
extern int creat64_db(const char *, mode_t);
CheckInterfacedef(creat64,creat64_db);
extern char * ctermid_db(char *);
CheckInterfacedef(ctermid,ctermid_db);
extern char * cuserid_db(char *);
CheckInterfacedef(cuserid,cuserid_db);
extern int daemon_db(int, int);
CheckInterfacedef(daemon,daemon_db);
extern int execl_db(const char *, const char *, ...);
CheckInterfacedef(execl,execl_db);
extern int execle_db(const char *, const char *, ...);
CheckInterfacedef(execle,execle_db);
extern int execlp_db(const char *, const char *, ...);
CheckInterfacedef(execlp,execlp_db);
extern int execv_db(const char *, char *const []);
CheckInterfacedef(execv,execv_db);
extern int execvp_db(const char *, char *const []);
CheckInterfacedef(execvp,execvp_db);
extern int fdatasync_db(int);
CheckInterfacedef(fdatasync,fdatasync_db);
extern int ftruncate64_db(int, off64_t);
CheckInterfacedef(ftruncate64,ftruncate64_db);
extern long int gethostid_db(void);
CheckInterfacedef(gethostid,gethostid_db);
extern char * getlogin_db(void);
CheckInterfacedef(getlogin,getlogin_db);
extern int getlogin_r_db(char *, size_t);
CheckInterfacedef(getlogin_r,getlogin_r_db);
extern int getopt_db(int, char *const [], const char *);
CheckInterfacedef(getopt,getopt_db);
extern pid_t getpgrp_db(void);
CheckInterfacedef(getpgrp,getpgrp_db);
extern pid_t getsid_db(pid_t);
CheckInterfacedef(getsid,getsid_db);
extern char * getwd_db(char *);
CheckInterfacedef(getwd,getwd_db);
extern int lockf_db(int, int, off_t);
CheckInterfacedef(lockf,lockf_db);
extern int mkstemp_db(char *);
CheckInterfacedef(mkstemp,mkstemp_db);
extern int nice_db(int);
CheckInterfacedef(nice,nice_db);
extern int rename_db(const char *, const char *);
CheckInterfacedef(rename,rename_db);
extern int setegid_db(gid_t);
CheckInterfacedef(setegid,setegid_db);
extern int seteuid_db(uid_t);
CheckInterfacedef(seteuid,seteuid_db);
extern int sethostname_db(const char *, size_t);
CheckInterfacedef(sethostname,sethostname_db);
extern int setpgrp_db(void);
CheckInterfacedef(setpgrp,setpgrp_db);
extern void swab_db(const void *, void *, ssize_t);
CheckInterfacedef(swab,swab_db);
extern void sync_db(void);
CheckInterfacedef(sync,sync_db);
extern pid_t tcgetpgrp_db(int);
CheckInterfacedef(tcgetpgrp,tcgetpgrp_db);
extern int tcsetpgrp_db(int, pid_t);
CheckInterfacedef(tcsetpgrp,tcsetpgrp_db);
extern int truncate_db(const char *, off_t);
CheckInterfacedef(truncate,truncate_db);
extern int truncate64_db(const char *, off64_t);
CheckInterfacedef(truncate64,truncate64_db);
extern char * ttyname_db(int);
CheckInterfacedef(ttyname,ttyname_db);
extern unsigned int ualarm_db(useconds_t, useconds_t);
CheckInterfacedef(ualarm,ualarm_db);
extern int usleep_db(useconds_t);
CheckInterfacedef(usleep,usleep_db);
extern int close_db(int);
CheckInterfacedef(close,close_db);
extern int fsync_db(int);
CheckInterfacedef(fsync,fsync_db);
extern off_t lseek_db(int, off_t, int);
CheckInterfacedef(lseek,lseek_db);
extern int pause_db(void);
CheckInterfacedef(pause,pause_db);
extern ssize_t read_db(int, void *, size_t);
CheckInterfacedef(read,read_db);
extern ssize_t write_db(int, const void *, size_t);
CheckInterfacedef(write,write_db);
extern char * crypt_db(const char *, const char *);
CheckInterfacedef(crypt,crypt_db);
extern void encrypt_db(char *, int);
CheckInterfacedef(encrypt,encrypt_db);
extern void setkey_db(const char *);
CheckInterfacedef(setkey,setkey_db);
extern int access_db(const char *, int);
CheckInterfacedef(access,access_db);
extern int brk_db(void *);
CheckInterfacedef(brk,brk_db);
extern int chdir_db(const char *);
CheckInterfacedef(chdir,chdir_db);
extern int dup_db(int);
CheckInterfacedef(dup,dup_db);
extern int dup2_db(int, int);
CheckInterfacedef(dup2,dup2_db);
extern int execve_db(const char *, char *const [], char *const []);
CheckInterfacedef(execve,execve_db);
extern int fchdir_db(int);
CheckInterfacedef(fchdir,fchdir_db);
extern int fchown_db(int, uid_t, gid_t);
CheckInterfacedef(fchown,fchown_db);
extern pid_t fork_db(void);
CheckInterfacedef(fork,fork_db);
extern gid_t getegid_db(void);
CheckInterfacedef(getegid,getegid_db);
extern uid_t geteuid_db(void);
CheckInterfacedef(geteuid,geteuid_db);
extern gid_t getgid_db(void);
CheckInterfacedef(getgid,getgid_db);
extern int getgroups_db(int, gid_t[]);
CheckInterfacedef(getgroups,getgroups_db);
extern int gethostname_db(char *, size_t);
CheckInterfacedef(gethostname,gethostname_db);
extern pid_t getpgid_db(pid_t);
CheckInterfacedef(getpgid,getpgid_db);
extern pid_t getpid_db(void);
CheckInterfacedef(getpid,getpid_db);
extern uid_t getuid_db(void);
CheckInterfacedef(getuid,getuid_db);
extern int lchown_db(const char *, uid_t, gid_t);
CheckInterfacedef(lchown,lchown_db);
extern int link_db(const char *, const char *);
CheckInterfacedef(link,link_db);
extern int mkdir_db(const char *, mode_t);
CheckInterfacedef(mkdir,mkdir_db);
extern long int pathconf_db(const char *, int);
CheckInterfacedef(pathconf,pathconf_db);
extern int pipe_db(int[2]);
CheckInterfacedef(pipe,pipe_db);
extern ssize_t readlink_db(const char *, char *, size_t);
CheckInterfacedef(readlink,readlink_db);
extern int rmdir_db(const char *);
CheckInterfacedef(rmdir,rmdir_db);
extern void * sbrk_db(intptr_t);
CheckInterfacedef(sbrk,sbrk_db);
extern int select_db(int, fd_set *, fd_set *, fd_set *, struct timeval *);
CheckInterfacedef(select,select_db);
extern int setgid_db(gid_t);
CheckInterfacedef(setgid,setgid_db);
extern int setpgid_db(pid_t, pid_t);
CheckInterfacedef(setpgid,setpgid_db);
extern int setregid_db(gid_t, gid_t);
CheckInterfacedef(setregid,setregid_db);
extern int setreuid_db(uid_t, uid_t);
CheckInterfacedef(setreuid,setreuid_db);
extern pid_t setsid_db(void);
CheckInterfacedef(setsid,setsid_db);
extern int setuid_db(uid_t);
CheckInterfacedef(setuid,setuid_db);
extern unsigned int sleep_db(unsigned int);
CheckInterfacedef(sleep,sleep_db);
extern int symlink_db(const char *, const char *);
CheckInterfacedef(symlink,symlink_db);
extern long int sysconf_db(int);
CheckInterfacedef(sysconf,sysconf_db);
extern int unlink_db(const char *);
CheckInterfacedef(unlink,unlink_db);
extern pid_t vfork_db(void);
CheckInterfacedef(vfork,vfork_db);
extern ssize_t pread_db(int, void *, size_t, off_t);
CheckInterfacedef(pread,pread_db);
extern ssize_t pwrite_db(int, const void *, size_t, off_t);
CheckInterfacedef(pwrite,pwrite_db);
extern long int fpathconf_db(int, int);
CheckInterfacedef(fpathconf,fpathconf_db);
extern int ftruncate_db(int, off_t);
CheckInterfacedef(ftruncate,ftruncate_db);
extern char * getcwd_db(char *, size_t);
CheckInterfacedef(getcwd,getcwd_db);
extern int getpagesize_db(void);
CheckInterfacedef(getpagesize,getpagesize_db);
extern pid_t getppid_db(void);
CheckInterfacedef(getppid,getppid_db);
extern int isatty_db(int);
CheckInterfacedef(isatty,isatty_db);
extern loff_t lseek64_db(int, loff_t, int);
CheckInterfacedef(lseek64,lseek64_db);
extern int open64_db(const char *, int, ...);
CheckInterfacedef(open64,open64_db);
extern ssize_t pread64_db(int, void *, size_t, off64_t);
CheckInterfacedef(pread64,pread64_db);
extern ssize_t pwrite64_db(int, const void *, size_t, off64_t);
CheckInterfacedef(pwrite64,pwrite64_db);
extern int ttyname_r_db(int, char *, size_t);
CheckInterfacedef(ttyname_r,ttyname_r_db);
extern int mknod_db(const char *, mode_t, dev_t);
CheckInterfacedef(mknod,mknod_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in unistd.h\n\n",pcnt,cnt);
return cnt;
#endif

}
