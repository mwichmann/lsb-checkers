/*
 * Test of limits.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "limits.h"



int limits_h()
{
int cnt=0;
#ifdef _XOPEN_IOV_MAX
CompareConstant(_XOPEN_IOV_MAX,16)
#else
Msg( "Warning: Constant not found: _XOPEN_IOV_MAX\n");
#endif
#ifdef _POSIX_TZNAME_MAX
CompareConstant(_POSIX_TZNAME_MAX,3)
#else
Msg( "Warning: Constant not found: _POSIX_TZNAME_MAX\n");
#endif
#ifdef _POSIX_TTY_NAME_MAX
CompareConstant(_POSIX_TTY_NAME_MAX,9)
#else
Msg( "Warning: Constant not found: _POSIX_TTY_NAME_MAX\n");
#endif
#ifdef _POSIX_TIMER_MAX
CompareConstant(_POSIX_TIMER_MAX,32)
#else
Msg( "Warning: Constant not found: _POSIX_TIMER_MAX\n");
#endif
#ifdef _POSIX_THREAD_THREADS_MAX
CompareConstant(_POSIX_THREAD_THREADS_MAX,64)
#else
Msg( "Warning: Constant not found: _POSIX_THREAD_THREADS_MAX\n");
#endif
#ifdef _POSIX_THREAD_KEYS_MAX
CompareConstant(_POSIX_THREAD_KEYS_MAX,128)
#else
Msg( "Warning: Constant not found: _POSIX_THREAD_KEYS_MAX\n");
#endif
#ifdef _POSIX_THREAD_DESTRUCTOR_ITERATIONS
CompareConstant(_POSIX_THREAD_DESTRUCTOR_ITERATIONS,4)
#else
Msg( "Warning: Constant not found: _POSIX_THREAD_DESTRUCTOR_ITERATIONS\n");
#endif
#ifdef _POSIX_STREAM_MAX
CompareConstant(_POSIX_STREAM_MAX,8)
#else
Msg( "Warning: Constant not found: _POSIX_STREAM_MAX\n");
#endif
#ifdef _POSIX_SSIZE_MAX
CompareConstant(_POSIX_SSIZE_MAX,32767)
#else
Msg( "Warning: Constant not found: _POSIX_SSIZE_MAX\n");
#endif
#ifdef _POSIX_SIGQUEUE_MAX
CompareConstant(_POSIX_SIGQUEUE_MAX,32)
#else
Msg( "Warning: Constant not found: _POSIX_SIGQUEUE_MAX\n");
#endif
#ifdef _POSIX_SEM_VALUE_MAX
CompareConstant(_POSIX_SEM_VALUE_MAX,32767)
#else
Msg( "Warning: Constant not found: _POSIX_SEM_VALUE_MAX\n");
#endif
#ifdef _POSIX_SEM_NSEMS_MAX
CompareConstant(_POSIX_SEM_NSEMS_MAX,256)
#else
Msg( "Warning: Constant not found: _POSIX_SEM_NSEMS_MAX\n");
#endif
#ifdef _POSIX_RTSIG_MAX
CompareConstant(_POSIX_RTSIG_MAX,8)
#else
Msg( "Warning: Constant not found: _POSIX_RTSIG_MAX\n");
#endif
#ifdef _POSIX_PIPE_BUF
CompareConstant(_POSIX_PIPE_BUF,512)
#else
Msg( "Warning: Constant not found: _POSIX_PIPE_BUF\n");
#endif
#ifdef _POSIX_PATH_MAX
CompareConstant(_POSIX_PATH_MAX,255)
#else
Msg( "Warning: Constant not found: _POSIX_PATH_MAX\n");
#endif
#ifdef _POSIX_OPEN_MAX
CompareConstant(_POSIX_OPEN_MAX,16)
#else
Msg( "Warning: Constant not found: _POSIX_OPEN_MAX\n");
#endif
#ifdef _POSIX_NGROUPS_MAX
CompareConstant(_POSIX_NGROUPS_MAX,0)
#else
Msg( "Warning: Constant not found: _POSIX_NGROUPS_MAX\n");
#endif
#ifdef _POSIX_NAME_MAX
CompareConstant(_POSIX_NAME_MAX,14)
#else
Msg( "Warning: Constant not found: _POSIX_NAME_MAX\n");
#endif
#ifdef _POSIX_MQ_PRIO_MAX
CompareConstant(_POSIX_MQ_PRIO_MAX,32)
#else
Msg( "Warning: Constant not found: _POSIX_MQ_PRIO_MAX\n");
#endif
#ifdef _POSIX_MQ_OPEN_MAX
CompareConstant(_POSIX_MQ_OPEN_MAX,8)
#else
Msg( "Warning: Constant not found: _POSIX_MQ_OPEN_MAX\n");
#endif
#ifdef _POSIX_MAX_INPUT
CompareConstant(_POSIX_MAX_INPUT,255)
#else
Msg( "Warning: Constant not found: _POSIX_MAX_INPUT\n");
#endif
#ifdef _POSIX_MAX_CANON
CompareConstant(_POSIX_MAX_CANON,255)
#else
Msg( "Warning: Constant not found: _POSIX_MAX_CANON\n");
#endif
#ifdef _POSIX_LOGIN_NAME_MAX
CompareConstant(_POSIX_LOGIN_NAME_MAX,9)
#else
Msg( "Warning: Constant not found: _POSIX_LOGIN_NAME_MAX\n");
#endif
#ifdef _POSIX_LINK_MAX
CompareConstant(_POSIX_LINK_MAX,8)
#else
Msg( "Warning: Constant not found: _POSIX_LINK_MAX\n");
#endif
#ifdef _POSIX_DELAYTIMER_MAX
CompareConstant(_POSIX_DELAYTIMER_MAX,32)
#else
Msg( "Warning: Constant not found: _POSIX_DELAYTIMER_MAX\n");
#endif
#ifdef _POSIX_CLOCKRES_MIN
CompareConstant(_POSIX_CLOCKRES_MIN,20000000)
#else
Msg( "Warning: Constant not found: _POSIX_CLOCKRES_MIN\n");
#endif
#ifdef _POSIX_CHILD_MAX
CompareConstant(_POSIX_CHILD_MAX,6)
#else
Msg( "Warning: Constant not found: _POSIX_CHILD_MAX\n");
#endif
#ifdef _POSIX_ARG_MAX
CompareConstant(_POSIX_ARG_MAX,4096)
#else
Msg( "Warning: Constant not found: _POSIX_ARG_MAX\n");
#endif
#ifdef _POSIX_AIO_MAX
CompareConstant(_POSIX_AIO_MAX,1)
#else
Msg( "Warning: Constant not found: _POSIX_AIO_MAX\n");
#endif
#ifdef _POSIX_AIO_LISTIO_MAX
CompareConstant(_POSIX_AIO_LISTIO_MAX,2)
#else
Msg( "Warning: Constant not found: _POSIX_AIO_LISTIO_MAX\n");
#endif
#ifdef _POSIX2_RE_DUP_MAX
CompareConstant(_POSIX2_RE_DUP_MAX,255)
#else
Msg( "Warning: Constant not found: _POSIX2_RE_DUP_MAX\n");
#endif
#ifdef _POSIX2_LINE_MAX
CompareConstant(_POSIX2_LINE_MAX,2048)
#else
Msg( "Warning: Constant not found: _POSIX2_LINE_MAX\n");
#endif
#ifdef _POSIX2_EXPR_NEST_MAX
CompareConstant(_POSIX2_EXPR_NEST_MAX,32)
#else
Msg( "Warning: Constant not found: _POSIX2_EXPR_NEST_MAX\n");
#endif
#ifdef _POSIX2_COLL_WEIGHTS_MAX
CompareConstant(_POSIX2_COLL_WEIGHTS_MAX,255)
#else
Msg( "Warning: Constant not found: _POSIX2_COLL_WEIGHTS_MAX\n");
#endif
#ifdef _POSIX2_BC_STRING_MAX
CompareConstant(_POSIX2_BC_STRING_MAX,1000)
#else
Msg( "Warning: Constant not found: _POSIX2_BC_STRING_MAX\n");
#endif
#ifdef _POSIX2_BC_SCALE_MAX
CompareConstant(_POSIX2_BC_SCALE_MAX,99)
#else
Msg( "Warning: Constant not found: _POSIX2_BC_SCALE_MAX\n");
#endif
#ifdef _POSIX2_BC_DIM_MAX
CompareConstant(_POSIX2_BC_DIM_MAX,2048)
#else
Msg( "Warning: Constant not found: _POSIX2_BC_DIM_MAX\n");
#endif
#ifdef _POSIX2_BC_BASE_MAX
CompareConstant(_POSIX2_BC_BASE_MAX,99)
#else
Msg( "Warning: Constant not found: _POSIX2_BC_BASE_MAX\n");
#endif
#ifdef WORD_BIT
CompareConstant(WORD_BIT,(-1))
#else
Msg( "Warning: Constant not found: WORD_BIT\n");
#endif
#ifdef USHRT_MAX
CompareConstant(USHRT_MAX,65535)
#else
Msg( "Warning: Constant not found: USHRT_MAX\n");
#endif
#ifdef ULONG_MAX
CompareConstant(ULONG_MAX,(-1))
#else
Msg( "Warning: Constant not found: ULONG_MAX\n");
#endif
#ifdef UINT_MAX
CompareConstant(UINT_MAX,(-1))
#else
Msg( "Warning: Constant not found: UINT_MAX\n");
#endif
#ifdef UCHAR_MAX
CompareConstant(UCHAR_MAX,255)
#else
Msg( "Warning: Constant not found: UCHAR_MAX\n");
#endif
#ifdef TMP_MAX
CompareConstant(TMP_MAX,(-1))
#else
Msg( "Warning: Constant not found: TMP_MAX\n");
#endif
#ifdef SSIZE_MAX
CompareConstant(SSIZE_MAX,2147483647)
#else
Msg( "Warning: Constant not found: SSIZE_MAX\n");
#endif
#ifdef SHRT_MIN
CompareConstant(SHRT_MIN,-32768)
#else
Msg( "Warning: Constant not found: SHRT_MIN\n");
#endif
#ifdef SHRT_MAX
CompareConstant(SHRT_MAX,32767)
#else
Msg( "Warning: Constant not found: SHRT_MAX\n");
#endif
#ifdef SCHAR_MIN
CompareConstant(SCHAR_MIN,-128)
#else
Msg( "Warning: Constant not found: SCHAR_MIN\n");
#endif
#ifdef SCHAR_MAX
CompareConstant(SCHAR_MAX,127)
#else
Msg( "Warning: Constant not found: SCHAR_MAX\n");
#endif
#ifdef NZERO
CompareConstant(NZERO,(-1))
#else
Msg( "Warning: Constant not found: NZERO\n");
#endif
#ifdef NL_TEXTMAX
CompareConstant(NL_TEXTMAX,(-1))
#else
Msg( "Warning: Constant not found: NL_TEXTMAX\n");
#endif
#ifdef NL_SETMAX
CompareConstant(NL_SETMAX,(-1))
#else
Msg( "Warning: Constant not found: NL_SETMAX\n");
#endif
#ifdef NL_NMAX
CompareConstant(NL_NMAX,(-1))
#else
Msg( "Warning: Constant not found: NL_NMAX\n");
#endif
#ifdef NL_MSGMAX
CompareConstant(NL_MSGMAX,(-1))
#else
Msg( "Warning: Constant not found: NL_MSGMAX\n");
#endif
#ifdef NL_LANGMAX
CompareConstant(NL_LANGMAX,(-1))
#else
Msg( "Warning: Constant not found: NL_LANGMAX\n");
#endif
#ifdef NL_ARGMAX
CompareConstant(NL_ARGMAX,(-1))
#else
Msg( "Warning: Constant not found: NL_ARGMAX\n");
#endif
#ifdef MB_LEN_MAX
CompareConstant(MB_LEN_MAX,6)
#else
Msg( "Warning: Constant not found: MB_LEN_MAX\n");
#endif
#ifdef LONG_MIN
CompareConstant(LONG_MIN,-2147483648)
#else
Msg( "Warning: Constant not found: LONG_MIN\n");
#endif
#ifdef LONG_MAX
CompareConstant(LONG_MAX,2147483647)
#else
Msg( "Warning: Constant not found: LONG_MAX\n");
#endif
#ifdef LONG_BIT
CompareConstant(LONG_BIT,(-1))
#else
Msg( "Warning: Constant not found: LONG_BIT\n");
#endif
#ifdef INT_MIN
CompareConstant(INT_MIN,-2147483648)
#else
Msg( "Warning: Constant not found: INT_MIN\n");
#endif
#ifdef INT_MAX
CompareConstant(INT_MAX,2147483647)
#else
Msg( "Warning: Constant not found: INT_MAX\n");
#endif
#ifdef CHAR_MIN
CompareConstant(CHAR_MIN,-128)
#else
Msg( "Warning: Constant not found: CHAR_MIN\n");
#endif
#ifdef CHAR_MAX
CompareConstant(CHAR_MAX,127)
#else
Msg( "Warning: Constant not found: CHAR_MAX\n");
#endif
#ifdef CHAR_BIT
CompareConstant(CHAR_BIT,8)
#else
Msg( "Warning: Constant not found: CHAR_BIT\n");
#endif
#ifdef CHARCLASS_NAME_MAX
CompareConstant(CHARCLASS_NAME_MAX,2048)
#else
Msg( "Warning: Constant not found: CHARCLASS_NAME_MAX\n");
#endif
printf("%d tests in limits.h\n",cnt);
return cnt;
}
