/*
 * Test of unistd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "unistd.h"



#ifdef TET_TEST
void unistd_h()
{
#else
int unistd_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in unistd.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_VDISABLE
	CompareConstant(_POSIX_VDISABLE,'\0',5028,architecture)
#else
Msg( "Error: Constant not found: _POSIX_VDISABLE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_NO_TRUNC
	CompareConstant(_POSIX_NO_TRUNC,1,5029,architecture)
#else
Msg( "Error: Constant not found: _POSIX_NO_TRUNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_MEMLOCK
	CompareConstant(_SC_MEMLOCK,17,4800,architecture)
#else
Msg( "Error: Constant not found: _SC_MEMLOCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_MEMLOCK_RANGE
	CompareConstant(_SC_MEMLOCK_RANGE,18,4801,architecture)
#else
Msg( "Error: Constant not found: _SC_MEMLOCK_RANGE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_MEMORY_PROTECTION
	CompareConstant(_SC_MEMORY_PROTECTION,19,4802,architecture)
#else
Msg( "Error: Constant not found: _SC_MEMORY_PROTECTION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_MESSAGE_PASSING
	CompareConstant(_SC_MESSAGE_PASSING,20,4803,architecture)
#else
Msg( "Error: Constant not found: _SC_MESSAGE_PASSING\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_MQ_OPEN_MAX
	CompareConstant(_SC_MQ_OPEN_MAX,27,4804,architecture)
#else
Msg( "Error: Constant not found: _SC_MQ_OPEN_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_MQ_PRIO_MAX
	CompareConstant(_SC_MQ_PRIO_MAX,28,4805,architecture)
#else
Msg( "Error: Constant not found: _SC_MQ_PRIO_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_NGROUPS_MAX
	CompareConstant(_SC_NGROUPS_MAX,3,4806,architecture)
#else
Msg( "Error: Constant not found: _SC_NGROUPS_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_PASS_MAX
	CompareConstant(_SC_PASS_MAX,88,4807,architecture)
#else
Msg( "Error: Constant not found: _SC_PASS_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_PRIORITIZED_IO
	CompareConstant(_SC_PRIORITIZED_IO,13,4808,architecture)
#else
Msg( "Error: Constant not found: _SC_PRIORITIZED_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_PRIORITY_SCHEDULING
	CompareConstant(_SC_PRIORITY_SCHEDULING,10,4809,architecture)
#else
Msg( "Error: Constant not found: _SC_PRIORITY_SCHEDULING\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_CHOWN_RESTRICTED
	CompareConstant(_POSIX_CHOWN_RESTRICTED,1,5030,architecture)
#else
Msg( "Error: Constant not found: _POSIX_CHOWN_RESTRICTED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_REALTIME_SIGNALS
	CompareConstant(_SC_REALTIME_SIGNALS,9,4810,architecture)
#else
Msg( "Error: Constant not found: _SC_REALTIME_SIGNALS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_RE_DUP_MAX
	CompareConstant(_SC_RE_DUP_MAX,44,4811,architecture)
#else
Msg( "Error: Constant not found: _SC_RE_DUP_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_RTSIG_MAX
	CompareConstant(_SC_RTSIG_MAX,31,4812,architecture)
#else
Msg( "Error: Constant not found: _SC_RTSIG_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_SAVED_IDS
	CompareConstant(_SC_SAVED_IDS,8,4813,architecture)
#else
Msg( "Error: Constant not found: _SC_SAVED_IDS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_SEMAPHORES
	CompareConstant(_SC_SEMAPHORES,21,4814,architecture)
#else
Msg( "Error: Constant not found: _SC_SEMAPHORES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_SEM_NSEMS_MAX
	CompareConstant(_SC_SEM_NSEMS_MAX,32,4815,architecture)
#else
Msg( "Error: Constant not found: _SC_SEM_NSEMS_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_SEM_VALUE_MAX
	CompareConstant(_SC_SEM_VALUE_MAX,33,4816,architecture)
#else
Msg( "Error: Constant not found: _SC_SEM_VALUE_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_SHARED_MEMORY_OBJECTS
	CompareConstant(_SC_SHARED_MEMORY_OBJECTS,22,4817,architecture)
#else
Msg( "Error: Constant not found: _SC_SHARED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_SIGQUEUE_MAX
	CompareConstant(_SC_SIGQUEUE_MAX,34,4818,architecture)
#else
Msg( "Error: Constant not found: _SC_SIGQUEUE_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_STREAM_MAX
	CompareConstant(_SC_STREAM_MAX,5,4819,architecture)
#else
Msg( "Error: Constant not found: _SC_STREAM_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_ASYNCHRONOUS_IO
	CompareConstant(_POSIX_ASYNCHRONOUS_IO,1,4749,architecture)
#else
Msg( "Error: Constant not found: _POSIX_ASYNCHRONOUS_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_VERSION
	CompareConstant(_POSIX_VERSION,199506L,1919,architecture)
#else
Msg( "Error: Constant not found: _POSIX_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_SYNCHRONIZED_IO
	CompareConstant(_SC_SYNCHRONIZED_IO,14,4820,architecture)
#else
Msg( "Error: Constant not found: _SC_SYNCHRONIZED_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREADS
	CompareConstant(_SC_THREADS,67,4821,architecture)
#else
Msg( "Error: Constant not found: _SC_THREADS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_ATTR_STACKADDR
	CompareConstant(_SC_THREAD_ATTR_STACKADDR,77,4822,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_ATTR_STACKADDR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_ATTR_STACKSIZE
	CompareConstant(_SC_THREAD_ATTR_STACKSIZE,78,4823,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_ATTR_STACKSIZE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_FSYNC
	CompareConstant(_POSIX_FSYNC,1,4750,architecture)
#else
Msg( "Error: Constant not found: _POSIX_FSYNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
	CompareConstant(_SC_THREAD_DESTRUCTOR_ITERATIONS,73,4824,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_DESTRUCTOR_ITERATIONS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMLOCK
	CompareConstant(_POSIX_MEMLOCK,1,4751,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MEMLOCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _XOPEN_REALTIME
	CompareConstant(_XOPEN_REALTIME,1,4752,architecture)
#else
Msg( "Error: Constant not found: _XOPEN_REALTIME\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_KEYS_MAX
	CompareConstant(_SC_THREAD_KEYS_MAX,74,4825,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_KEYS_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
	CompareConstant(_SC_THREAD_PRIORITY_SCHEDULING,79,4826,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIORITY_SCHEDULING\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_ASYNC_IO
	CompareConstant(_PC_ASYNC_IO,10,4753,architecture)
#else
Msg( "Error: Constant not found: _PC_ASYNC_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIO_INHERIT
	CompareConstant(_SC_THREAD_PRIO_INHERIT,80,4827,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIO_INHERIT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_CHOWN_RESTRICTED
	CompareConstant(_PC_CHOWN_RESTRICTED,6,4754,architecture)
#else
Msg( "Error: Constant not found: _PC_CHOWN_RESTRICTED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIO_PROTECT
	CompareConstant(_SC_THREAD_PRIO_PROTECT,81,4828,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIO_PROTECT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_FILESIZEBITS
	CompareConstant(_PC_FILESIZEBITS,13,4755,architecture)
#else
Msg( "Error: Constant not found: _PC_FILESIZEBITS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PROCESS_SHARED
	CompareConstant(_SC_THREAD_PROCESS_SHARED,82,4829,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_PROCESS_SHARED\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_LINK_MAX
	CompareConstant(_PC_LINK_MAX,0,4756,architecture)
#else
Msg( "Error: Constant not found: _PC_LINK_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_MAX_CANON
	CompareConstant(_PC_MAX_CANON,1,4757,architecture)
#else
Msg( "Error: Constant not found: _PC_MAX_CANON\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_MAX_INPUT
	CompareConstant(_PC_MAX_INPUT,2,4758,architecture)
#else
Msg( "Error: Constant not found: _PC_MAX_INPUT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_NAME_MAX
	CompareConstant(_PC_NAME_MAX,3,4759,architecture)
#else
Msg( "Error: Constant not found: _PC_NAME_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX2_C_VERSION
	CompareConstant(_POSIX2_C_VERSION,199209L,1920,architecture)
#else
Msg( "Error: Constant not found: _POSIX2_C_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX2_VERSION
	CompareConstant(_POSIX2_VERSION,199209L,1921,architecture)
#else
Msg( "Error: Constant not found: _POSIX2_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_MAPPED_FILES
	CompareConstant(_POSIX_MAPPED_FILES,1,3528,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MAPPED_FILES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _XOPEN_VERSION
	CompareConstant(_XOPEN_VERSION,500,1926,architecture)
#else
Msg( "Error: Constant not found: _XOPEN_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _XOPEN_XCU_VERSION
	CompareConstant(_XOPEN_XCU_VERSION,4,1927,architecture)
#else
Msg( "Error: Constant not found: _XOPEN_XCU_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_SAFE_FUNCTIONS
	CompareConstant(_SC_THREAD_SAFE_FUNCTIONS,68,4830,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_SAFE_FUNCTIONS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_STACK_MIN
	CompareConstant(_SC_THREAD_STACK_MIN,75,4831,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_STACK_MIN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_THREADS_MAX
	CompareConstant(_SC_THREAD_THREADS_MAX,76,4832,architecture)
#else
Msg( "Error: Constant not found: _SC_THREAD_THREADS_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_TIMERS
	CompareConstant(_SC_TIMERS,11,4833,architecture)
#else
Msg( "Error: Constant not found: _SC_TIMERS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_NO_TRUNC
	CompareConstant(_PC_NO_TRUNC,7,4760,architecture)
#else
Msg( "Error: Constant not found: _PC_NO_TRUNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_TIMER_MAX
	CompareConstant(_SC_TIMER_MAX,35,4834,architecture)
#else
Msg( "Error: Constant not found: _SC_TIMER_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_PATH_MAX
	CompareConstant(_PC_PATH_MAX,4,4761,architecture)
#else
Msg( "Error: Constant not found: _PC_PATH_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_TZNAME_MAX
	CompareConstant(_SC_TZNAME_MAX,6,4835,architecture)
#else
Msg( "Error: Constant not found: _SC_TZNAME_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_PIPE_BUF
	CompareConstant(_PC_PIPE_BUF,5,4762,architecture)
#else
Msg( "Error: Constant not found: _PC_PIPE_BUF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_VERSION
	CompareConstant(_SC_VERSION,29,4836,architecture)
#else
Msg( "Error: Constant not found: _SC_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_PRIO_IO
	CompareConstant(_PC_PRIO_IO,11,4763,architecture)
#else
Msg( "Error: Constant not found: _PC_PRIO_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_ILP32_OFF32
	CompareConstant(_SC_XBS5_ILP32_OFF32,125,4837,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_ILP32_OFF32\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_SYNC_IO
	CompareConstant(_PC_SYNC_IO,9,4764,architecture)
#else
Msg( "Error: Constant not found: _PC_SYNC_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_ILP32_OFFBIG
	CompareConstant(_SC_XBS5_ILP32_OFFBIG,126,4838,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_ILP32_OFFBIG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _PC_VDISABLE
	CompareConstant(_PC_VDISABLE,8,4765,architecture)
#else
Msg( "Error: Constant not found: _PC_VDISABLE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_LP64_OFF64
	CompareConstant(_SC_XBS5_LP64_OFF64,127,4839,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_LP64_OFF64\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMLOCK_RANGE
	CompareConstant(_POSIX_MEMLOCK_RANGE,1,4766,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MEMLOCK_RANGE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMORY_PROTECTION
	CompareConstant(_POSIX_MEMORY_PROTECTION,1,4767,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MEMORY_PROTECTION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_MESSAGE_PASSING
	CompareConstant(_POSIX_MESSAGE_PASSING,1,4768,architecture)
#else
Msg( "Error: Constant not found: _POSIX_MESSAGE_PASSING\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_PRIORITY_SCHEDULING
	CompareConstant(_POSIX_PRIORITY_SCHEDULING,1,4769,architecture)
#else
Msg( "Error: Constant not found: _POSIX_PRIORITY_SCHEDULING\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _XOPEN_XPG4
	CompareConstant(_XOPEN_XPG4,1,1930,architecture)
#else
Msg( "Error: Constant not found: _XOPEN_XPG4\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef STDIN_FILENO
	CompareConstant(STDIN_FILENO,0,1935,architecture)
#else
Msg( "Error: Constant not found: STDIN_FILENO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef STDOUT_FILENO
	CompareConstant(STDOUT_FILENO,1,1936,architecture)
#else
Msg( "Error: Constant not found: STDOUT_FILENO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef STDERR_FILENO
	CompareConstant(STDERR_FILENO,2,1937,architecture)
#else
Msg( "Error: Constant not found: STDERR_FILENO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_LPBIG_OFFBIG
	CompareConstant(_SC_XBS5_LPBIG_OFFBIG,128,4840,architecture)
#else
Msg( "Error: Constant not found: _SC_XBS5_LPBIG_OFFBIG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_CRYPT
	CompareConstant(_SC_XOPEN_CRYPT,92,4841,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_CRYPT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_ENH_I18N
	CompareConstant(_SC_XOPEN_ENH_I18N,93,4842,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_ENH_I18N\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_LEGACY
	CompareConstant(_SC_XOPEN_LEGACY,129,4843,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_LEGACY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_REALTIME_SIGNALS
	CompareConstant(_POSIX_REALTIME_SIGNALS,1,4770,architecture)
#else
Msg( "Error: Constant not found: _POSIX_REALTIME_SIGNALS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_REALTIME
	CompareConstant(_SC_XOPEN_REALTIME,130,4844,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_REALTIME\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_SEMAPHORES
	CompareConstant(_POSIX_SEMAPHORES,1,4771,architecture)
#else
Msg( "Error: Constant not found: _POSIX_SEMAPHORES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_SHM
	CompareConstant(_SC_XOPEN_SHM,94,4845,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_SHM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_SHARED_MEMORY_OBJECTS
	CompareConstant(_POSIX_SHARED_MEMORY_OBJECTS,1,4772,architecture)
#else
Msg( "Error: Constant not found: _POSIX_SHARED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_VERSION
	CompareConstant(_SC_XOPEN_VERSION,89,4846,architecture)
#else
Msg( "Error: Constant not found: _SC_XOPEN_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_SYNCHRONIZED_IO
	CompareConstant(_POSIX_SYNCHRONIZED_IO,1,4773,architecture)
#else
Msg( "Error: Constant not found: _POSIX_SYNCHRONIZED_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_PATH
	CompareConstant(_CS_PATH,0,4847,architecture)
#else
Msg( "Error: Constant not found: _CS_PATH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _POSIX_TIMERS
	CompareConstant(_POSIX_TIMERS,1,4774,architecture)
#else
Msg( "Error: Constant not found: _POSIX_TIMERS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_CFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_CFLAGS,1100,4848,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_CFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_BIND
	CompareConstant(_SC_2_C_BIND,47,4775,architecture)
#else
Msg( "Error: Constant not found: _SC_2_C_BIND\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LDFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LDFLAGS,1101,4849,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LDFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_DEV
	CompareConstant(_SC_2_C_DEV,48,4776,architecture)
#else
Msg( "Error: Constant not found: _SC_2_C_DEV\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_VERSION
	CompareConstant(_SC_2_C_VERSION,96,4777,architecture)
#else
Msg( "Error: Constant not found: _SC_2_C_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_FORT_DEV
	CompareConstant(_SC_2_FORT_DEV,49,4778,architecture)
#else
Msg( "Error: Constant not found: _SC_2_FORT_DEV\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_FORT_RUN
	CompareConstant(_SC_2_FORT_RUN,50,4779,architecture)
#else
Msg( "Error: Constant not found: _SC_2_FORT_RUN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LIBS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LIBS,1102,4850,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LIBS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LINTFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LINTFLAGS,1103,4851,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LINTFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_CFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_CFLAGS,1104,4852,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_CFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LDFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LDFLAGS,1105,4853,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LDFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_LOCALEDEF
	CompareConstant(_SC_2_LOCALEDEF,52,4780,architecture)
#else
Msg( "Error: Constant not found: _SC_2_LOCALEDEF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LIBS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LIBS,1106,4854,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LIBS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_SW_DEV
	CompareConstant(_SC_2_SW_DEV,51,4781,architecture)
#else
Msg( "Error: Constant not found: _SC_2_SW_DEV\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,1107,4855,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LINTFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_UPE
	CompareConstant(_SC_2_UPE,97,4782,architecture)
#else
Msg( "Error: Constant not found: _SC_2_UPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_CFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_CFLAGS,1108,4856,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_CFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_2_VERSION
	CompareConstant(_SC_2_VERSION,46,4783,architecture)
#else
Msg( "Error: Constant not found: _SC_2_VERSION\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LDFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_LDFLAGS,1109,4857,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LDFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_LISTIO_MAX
	CompareConstant(_SC_AIO_LISTIO_MAX,23,4784,architecture)
#else
Msg( "Error: Constant not found: _SC_AIO_LISTIO_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LIBS
	CompareConstant(_CS_XBS5_LP64_OFF64_LIBS,1110,4858,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LIBS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_MAX
	CompareConstant(_SC_AIO_MAX,24,4785,architecture)
#else
Msg( "Error: Constant not found: _SC_AIO_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LINTFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_LINTFLAGS,1111,4859,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LINTFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_PRIO_DELTA_MAX
	CompareConstant(_SC_AIO_PRIO_DELTA_MAX,25,4786,architecture)
#else
Msg( "Error: Constant not found: _SC_AIO_PRIO_DELTA_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_ARG_MAX
	CompareConstant(_SC_ARG_MAX,0,4787,architecture)
#else
Msg( "Error: Constant not found: _SC_ARG_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_ASYNCHRONOUS_IO
	CompareConstant(_SC_ASYNCHRONOUS_IO,12,4788,architecture)
#else
Msg( "Error: Constant not found: _SC_ASYNCHRONOUS_IO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_BC_BASE_MAX
	CompareConstant(_SC_BC_BASE_MAX,36,4789,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_BASE_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_PAGESIZE
	CompareConstant(_SC_PAGESIZE,30,4930,architecture)
#else
Msg( "Error: Constant not found: _SC_PAGESIZE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_CFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_CFLAGS,1112,4860,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_CFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,1113,4861,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LDFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LIBS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LIBS,1114,4862,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LIBS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,1115,4863,architecture)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_BC_DIM_MAX
	CompareConstant(_SC_BC_DIM_MAX,37,4790,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_DIM_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_BC_SCALE_MAX
	CompareConstant(_SC_BC_SCALE_MAX,38,4791,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_SCALE_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_BC_STRING_MAX
	CompareConstant(_SC_BC_STRING_MAX,39,4792,architecture)
#else
Msg( "Error: Constant not found: _SC_BC_STRING_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_CHILD_MAX
	CompareConstant(_SC_CHILD_MAX,1,4793,architecture)
#else
Msg( "Error: Constant not found: _SC_CHILD_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_COLL_WEIGHTS_MAX
	CompareConstant(_SC_COLL_WEIGHTS_MAX,40,4794,architecture)
#else
Msg( "Error: Constant not found: _SC_COLL_WEIGHTS_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_DELAYTIMER_MAX
	CompareConstant(_SC_DELAYTIMER_MAX,26,4795,architecture)
#else
Msg( "Error: Constant not found: _SC_DELAYTIMER_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_EXPR_NEST_MAX
	CompareConstant(_SC_EXPR_NEST_MAX,42,4796,architecture)
#else
Msg( "Error: Constant not found: _SC_EXPR_NEST_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_JOB_CONTROL
	CompareConstant(_SC_JOB_CONTROL,7,4797,architecture)
#else
Msg( "Error: Constant not found: _SC_JOB_CONTROL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_LINE_MAX
	CompareConstant(_SC_LINE_MAX,43,4798,architecture)
#else
Msg( "Error: Constant not found: _SC_LINE_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_MAPPED_FILES
	CompareConstant(_SC_MAPPED_FILES,16,4799,architecture)
#else
Msg( "Error: Constant not found: _SC_MAPPED_FILES\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_OPEN_MAX
	CompareConstant(_SC_OPEN_MAX,4,3595,architecture)
#else
Msg( "Error: Constant not found: _SC_OPEN_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef _SC_CLK_TCK
	CompareConstant(_SC_CLK_TCK,2,3596,architecture)
#else
Msg( "Error: Constant not found: _SC_CLK_TCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SEEK_SET
	CompareConstant(SEEK_SET,0,1635,architecture)
#else
Msg( "Error: Constant not found: SEEK_SET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SEEK_CUR
	CompareConstant(SEEK_CUR,1,1636,architecture)
#else
Msg( "Error: Constant not found: SEEK_CUR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SEEK_END
	CompareConstant(SEEK_END,2,1637,architecture)
#else
Msg( "Error: Constant not found: SEEK_END\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef R_OK
	CompareConstant(R_OK,4,1212,architecture)
#else
Msg( "Error: Constant not found: R_OK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef W_OK
	CompareConstant(W_OK,2,1213,architecture)
#else
Msg( "Error: Constant not found: W_OK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef X_OK
	CompareConstant(X_OK,1,1214,architecture)
#else
Msg( "Error: Constant not found: X_OK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_OK
	CompareConstant(F_OK,0,1215,architecture)
#else
Msg( "Error: Constant not found: F_OK\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(off64_t,8, 9112, 2)
#elif __ia64__
CheckTypeSize(off64_t,8, 9112, 3)
#elif __powerpc__
CheckTypeSize(off64_t,8, 9112, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9112,0);
Msg("Find size of off64_t (9112)\n");
#endif

#ifdef __i386__
CheckTypeSize(intptr_t,4, 9196, 2)
#elif __ia64__
CheckTypeSize(intptr_t,8, 9196, 3)
#elif __powerpc__
CheckTypeSize(intptr_t,4, 9196, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9196,0);
Msg("Find size of intptr_t (9196)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in unistd.h\n",cnt);
return cnt;
#endif

}
