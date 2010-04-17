/*
 * Test of limits.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "limits.h"



#ifdef TET_TEST
void limits_h()
{
#else
int limits_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in limits.h\n");
#endif

printf("Checking data structures in limits.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SHRT_MIN
	CompareConstant(SHRT_MIN,(-32768),10,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SHRT_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_AIO_LISTIO_MAX
	CompareConstant(_POSIX_AIO_LISTIO_MAX,2,10821,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_AIO_LISTIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_AIO_MAX
	CompareConstant(_POSIX_AIO_MAX,1,10822,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_AIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_ARG_MAX
	CompareConstant(_POSIX_ARG_MAX,4096,10823,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_ARG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_CHILD_MAX
	CompareConstant(_POSIX_CHILD_MAX,25,10824,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_CHILD_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_DELAYTIMER_MAX
	CompareConstant(_POSIX_DELAYTIMER_MAX,32,10825,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_DELAYTIMER_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_HOST_NAME_MAX
	CompareConstant(_POSIX_HOST_NAME_MAX,255,10826,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_HOST_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_LINK_MAX
	CompareConstant(_POSIX_LINK_MAX,8,10827,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_LINK_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_LOGIN_NAME_MAX
	CompareConstant(_POSIX_LOGIN_NAME_MAX,9,10828,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_LOGIN_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MAX_CANON
	CompareConstant(_POSIX_MAX_CANON,255,10829,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MAX_CANON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MAX_INPUT
	CompareConstant(_POSIX_MAX_INPUT,255,10830,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MAX_INPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MQ_OPEN_MAX
	CompareConstant(_POSIX_MQ_OPEN_MAX,8,10831,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MQ_OPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MQ_PRIO_MAX
	CompareConstant(_POSIX_MQ_PRIO_MAX,32,10832,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MQ_PRIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_NAME_MAX
	CompareConstant(_POSIX_NAME_MAX,14,10833,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_NGROUPS_MAX
	CompareConstant(_POSIX_NGROUPS_MAX,8,10834,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_NGROUPS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_OPEN_MAX
	CompareConstant(_POSIX_OPEN_MAX,20,10835,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_OPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_FD_SETSIZE
	CompareConstant(_POSIX_FD_SETSIZE,_POSIX_OPEN_MAX,10836,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_FD_SETSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_PATH_MAX
	CompareConstant(_POSIX_PATH_MAX,256,10837,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_PATH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_PIPE_BUF
	CompareConstant(_POSIX_PIPE_BUF,512,10838,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_PIPE_BUF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_RE_DUP_MAX
	CompareConstant(_POSIX_RE_DUP_MAX,255,10839,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_RE_DUP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_RTSIG_MAX
	CompareConstant(_POSIX_RTSIG_MAX,8,10840,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_RTSIG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SEM_NSEMS_MAX
	CompareConstant(_POSIX_SEM_NSEMS_MAX,256,10841,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SEM_NSEMS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SEM_VALUE_MAX
	CompareConstant(_POSIX_SEM_VALUE_MAX,32767,10842,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SEM_VALUE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SIGQUEUE_MAX
	CompareConstant(_POSIX_SIGQUEUE_MAX,32,10843,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SIGQUEUE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SSIZE_MAX
	CompareConstant(_POSIX_SSIZE_MAX,32767,10844,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SSIZE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_STREAM_MAX
	CompareConstant(_POSIX_STREAM_MAX,8,10845,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_STREAM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SYMLINK_MAX
	CompareConstant(_POSIX_SYMLINK_MAX,255,10846,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SYMLINK_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SYMLOOP_MAX
	CompareConstant(_POSIX_SYMLOOP_MAX,8,10847,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SYMLOOP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_TIMER_MAX
	CompareConstant(_POSIX_TIMER_MAX,32,10848,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_TIMER_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_TTY_NAME_MAX
	CompareConstant(_POSIX_TTY_NAME_MAX,9,10849,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_TTY_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_TZNAME_MAX
	CompareConstant(_POSIX_TZNAME_MAX,6,10850,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_TZNAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_QLIMIT
	CompareConstant(_POSIX_QLIMIT,1,10851,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_QLIMIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_HIWAT
	CompareConstant(_POSIX_HIWAT,_POSIX_PIPE_BUF,10852,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_HIWAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_UIO_MAXIOV
	CompareConstant(_POSIX_UIO_MAXIOV,16,10853,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_UIO_MAXIOV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_CLOCKRES_MIN
	CompareConstant(_POSIX_CLOCKRES_MIN,20000000,10854,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_CLOCKRES_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_BC_BASE_MAX
	CompareConstant(_POSIX2_BC_BASE_MAX,99,10855,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_BC_BASE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_BC_DIM_MAX
	CompareConstant(_POSIX2_BC_DIM_MAX,2048,10856,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_BC_DIM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_BC_SCALE_MAX
	CompareConstant(_POSIX2_BC_SCALE_MAX,99,10857,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_BC_SCALE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_BC_STRING_MAX
	CompareConstant(_POSIX2_BC_STRING_MAX,1000,10858,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_BC_STRING_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_COLL_WEIGHTS_MAX
	CompareConstant(_POSIX2_COLL_WEIGHTS_MAX,2,10859,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_COLL_WEIGHTS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_EXPR_NEST_MAX
	CompareConstant(_POSIX2_EXPR_NEST_MAX,32,10860,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_EXPR_NEST_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_LINE_MAX
	CompareConstant(_POSIX2_LINE_MAX,2048,10861,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_LINE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_RE_DUP_MAX
	CompareConstant(_POSIX2_RE_DUP_MAX,255,10862,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_RE_DUP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_CHARCLASS_NAME_MAX
	CompareConstant(_POSIX2_CHARCLASS_NAME_MAX,14,10863,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_CHARCLASS_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BC_BASE_MAX
	CompareConstant(BC_BASE_MAX,_POSIX2_BC_BASE_MAX,10864,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BC_BASE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BC_DIM_MAX
	CompareConstant(BC_DIM_MAX,_POSIX2_BC_DIM_MAX,10865,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BC_DIM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BC_SCALE_MAX
	CompareConstant(BC_SCALE_MAX,_POSIX2_BC_SCALE_MAX,10866,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BC_SCALE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BC_STRING_MAX
	CompareConstant(BC_STRING_MAX,_POSIX2_BC_STRING_MAX,10867,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BC_STRING_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef COLL_WEIGHTS_MAX
	CompareConstant(COLL_WEIGHTS_MAX,255,10868,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: COLL_WEIGHTS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXPR_NEST_MAX
	CompareConstant(EXPR_NEST_MAX,_POSIX2_EXPR_NEST_MAX,10869,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: EXPR_NEST_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CHARCLASS_NAME_MAX
	CompareConstant(CHARCLASS_NAME_MAX,2048,10870,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CHARCLASS_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHRT_MAX
	CompareConstant(SHRT_MAX,32767,11,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SHRT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef USHRT_MAX
	CompareConstant(USHRT_MAX,65535,12,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: USHRT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_MIN
	CompareConstant(INT_MIN,(-INT_MAX-1),13,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INT_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INT_MAX
	CompareConstant(INT_MAX,2147483647,14,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UINT_MAX
	CompareConstant(UINT_MAX,4294967295U,15,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: UINT_MAX\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,9223372036854775807L,16,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,2147483647L,16,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,0x7FFFFFFFFFFFFFFFL,16,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,0x7FFFFFFFL,16,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,9223372036854775807L,16,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,0x7FFFFFFFFFFFFFFFL,16,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef LONG_MAX
	CompareConstant(LONG_MAX,2147483647,16,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: LONG_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for LONG_MAX (16, int) in db for this architecture\n");
#ifdef LONG_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16,%d,'""1.3""',NULL);\n", architecture, LONG_MAX);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef LONG_MIN
	CompareConstant(LONG_MIN,(-LONG_MAX-1L),17,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: LONG_MIN\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFUL,18,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFUL,18,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFFFFFFFFFUL,18,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ULONG_MAX
	CompareLongConstant(ULONG_MAX,0xFFFFFFFFUL,18,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: ULONG_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for ULONG_MAX (18, long) in db for this architecture\n");
#ifdef ULONG_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,18,%ld,'""1.3""',NULL);\n", architecture, ULONG_MAX);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef MB_LEN_MAX
	CompareConstant(MB_LEN_MAX,16,2,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: MB_LEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NGROUPS_MAX
	CompareConstant(NGROUPS_MAX,32,21,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: NGROUPS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PATH_MAX
	CompareConstant(PATH_MAX,4096,29,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: PATH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LLONG_MAX
	CompareConstant(LLONG_MAX,9223372036854775807LL,3062,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LLONG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LLONG_MIN
	CompareConstant(LLONG_MIN,(-LLONG_MAX-1LL),3063,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LLONG_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ULLONG_MAX
	CompareConstant(ULLONG_MAX,18446744073709551615ULL,3064,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: ULLONG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LINE_MAX
	CompareConstant(LINE_MAX,2048,3066,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: LINE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_THREADS_MAX
	CompareConstant(PTHREAD_THREADS_MAX,16384,3085,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_THREADS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_KEYS_MAX
	CompareConstant(PTHREAD_KEYS_MAX,1024,3088,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_KEYS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PTHREAD_DESTRUCTOR_ITERATIONS
	CompareConstant(PTHREAD_DESTRUCTOR_ITERATIONS,4,3089,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_DESTRUCTOR_ITERATIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CHAR_BIT
	CompareConstant(CHAR_BIT,8,4,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CHAR_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCHAR_MIN
	CompareConstant(SCHAR_MIN,(-128),5,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SCHAR_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSIZE_MAX
	CompareConstant(SSIZE_MAX,LONG_MAX,5127,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: SSIZE_MAX\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,196608,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef PTHREAD_STACK_MIN
	CompareConstant(PTHREAD_STACK_MIN,16384,5310,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: PTHREAD_STACK_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for PTHREAD_STACK_MIN (5310, int) in db for this architecture\n");
#ifdef PTHREAD_STACK_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,5310,%d,'""3.0""',NULL);\n", architecture, PTHREAD_STACK_MIN);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SCHAR_MAX
	CompareConstant(SCHAR_MAX,127,6,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SCHAR_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UCHAR_MAX
	CompareConstant(UCHAR_MAX,255,7,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: UCHAR_MAX\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,SCHAR_MIN,8,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,SCHAR_MIN,8,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,SCHAR_MIN,8,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CHAR_MIN
	CompareConstant(CHAR_MIN,0,8,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MIN\n");
cnt++;
#endif

#else
Msg( "No definition for CHAR_MIN (8, int) in db for this architecture\n");
#ifdef CHAR_MIN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,8,%d,'""1.3""',NULL);\n", architecture, CHAR_MIN);
#endif
#endif
#if defined __powerpc64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,SCHAR_MAX,9,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif defined __i386__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,SCHAR_MAX,9,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,127,9,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef CHAR_MAX
	CompareConstant(CHAR_MAX,255,9,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CHAR_MAX\n");
cnt++;
#endif

#else
Msg( "No definition for CHAR_MAX (9, int) in db for this architecture\n");
#ifdef CHAR_MAX
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,9,%d,'""1.3""',NULL);\n", architecture, CHAR_MAX);
#endif
#endif
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in limits.h\n\n",pcnt,cnt);
return cnt;
#endif

}
