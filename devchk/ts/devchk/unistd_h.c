/*
 * Test of unistd.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#ifdef __USE_FORTIFY_LEVEL
#undef __USE_FORTIFY_LEVEL
#endif
#define __USE_FORTIFY_LEVEL 2
#endif
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
#ifdef _SC_2_PBS
	CompareConstant(_SC_2_PBS,168,10735,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_PBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_EQUIV_CLASS_MAX
	CompareConstant(_SC_EQUIV_CLASS_MAX,41,10736,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_EQUIV_CLASS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CHARCLASS_NAME_MAX
	CompareConstant(_SC_CHARCLASS_NAME_MAX,45,10737,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_CHARCLASS_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII
	CompareConstant(_SC_PII,53,10738,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_XTI
	CompareConstant(_SC_PII_XTI,54,10739,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_XTI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_SOCKET
	CompareConstant(_SC_PII_SOCKET,55,10740,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_SOCKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_INTERNET
	CompareConstant(_SC_PII_INTERNET,56,10741,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_INTERNET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_OSI
	CompareConstant(_SC_PII_OSI,57,10742,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_OSI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_POLL
	CompareConstant(_SC_POLL,58,10743,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_POLL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SELECT
	CompareConstant(_SC_SELECT,59,10744,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SELECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_UIO_MAXIOV
	CompareConstant(_SC_UIO_MAXIOV,60,10745,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_UIO_MAXIOV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_INTERNET_STREAM
	CompareConstant(_SC_PII_INTERNET_STREAM,61,10746,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_INTERNET_STREAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_INTERNET_DGRAM
	CompareConstant(_SC_PII_INTERNET_DGRAM,62,10747,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_INTERNET_DGRAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_OSI_COTS
	CompareConstant(_SC_PII_OSI_COTS,63,10748,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_OSI_COTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_OSI_CLTS
	CompareConstant(_SC_PII_OSI_CLTS,64,10749,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_OSI_CLTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PII_OSI_M
	CompareConstant(_SC_PII_OSI_M,65,10750,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PII_OSI_M\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_T_IOV_MAX
	CompareConstant(_SC_T_IOV_MAX,66,10751,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_T_IOV_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NPROCESSORS_CONF
	CompareConstant(_SC_NPROCESSORS_CONF,83,10752,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NPROCESSORS_CONF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NPROCESSORS_ONLN
	CompareConstant(_SC_NPROCESSORS_ONLN,84,10753,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NPROCESSORS_ONLN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PHYS_PAGES
	CompareConstant(_SC_PHYS_PAGES,85,10754,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PHYS_PAGES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_AVPHYS_PAGES
	CompareConstant(_SC_AVPHYS_PAGES,86,10755,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_AVPHYS_PAGES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_XCU_VERSION
	CompareConstant(_SC_XOPEN_XCU_VERSION,90,10756,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_XCU_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_XPG2
	CompareConstant(_SC_XOPEN_XPG2,98,10757,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_XPG2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_XPG3
	CompareConstant(_SC_XOPEN_XPG3,99,10758,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_XPG3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_XPG4
	CompareConstant(_SC_XOPEN_XPG4,100,10759,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_XPG4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CHAR_BIT
	CompareConstant(_SC_CHAR_BIT,101,10760,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_CHAR_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CHAR_MAX
	CompareConstant(_SC_CHAR_MAX,102,10761,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_CHAR_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CHAR_MIN
	CompareConstant(_SC_CHAR_MIN,103,10762,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_CHAR_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_INT_MAX
	CompareConstant(_SC_INT_MAX,104,10763,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_INT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_INT_MIN
	CompareConstant(_SC_INT_MIN,105,10764,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_INT_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LONG_BIT
	CompareConstant(_SC_LONG_BIT,106,10765,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LONG_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_WORD_BIT
	CompareConstant(_SC_WORD_BIT,107,10766,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_WORD_BIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MB_LEN_MAX
	CompareConstant(_SC_MB_LEN_MAX,108,10767,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MB_LEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NZERO
	CompareConstant(_SC_NZERO,109,10768,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NZERO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SSIZE_MAX
	CompareConstant(_SC_SSIZE_MAX,110,10769,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SSIZE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SCHAR_MAX
	CompareConstant(_SC_SCHAR_MAX,111,10770,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SCHAR_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SCHAR_MIN
	CompareConstant(_SC_SCHAR_MIN,112,10771,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SCHAR_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SHRT_MAX
	CompareConstant(_SC_SHRT_MAX,113,10772,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SHRT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SHRT_MIN
	CompareConstant(_SC_SHRT_MIN,114,10773,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SHRT_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_UCHAR_MAX
	CompareConstant(_SC_UCHAR_MAX,115,10774,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_UCHAR_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_UINT_MAX
	CompareConstant(_SC_UINT_MAX,116,10775,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_UINT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ULONG_MAX
	CompareConstant(_SC_ULONG_MAX,117,10776,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_ULONG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_USHRT_MAX
	CompareConstant(_SC_USHRT_MAX,118,10777,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_USHRT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NL_ARGMAX
	CompareConstant(_SC_NL_ARGMAX,119,10778,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NL_ARGMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NL_LANGMAX
	CompareConstant(_SC_NL_LANGMAX,120,10779,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NL_LANGMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NL_MSGMAX
	CompareConstant(_SC_NL_MSGMAX,121,10780,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NL_MSGMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NL_NMAX
	CompareConstant(_SC_NL_NMAX,122,10781,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NL_NMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NL_SETMAX
	CompareConstant(_SC_NL_SETMAX,123,10782,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NL_SETMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NL_TEXTMAX
	CompareConstant(_SC_NL_TEXTMAX,124,10783,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NL_TEXTMAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BASE
	CompareConstant(_SC_BASE,134,10784,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_C_LANG_SUPPORT
	CompareConstant(_SC_C_LANG_SUPPORT,135,10785,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_C_LANG_SUPPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_C_LANG_SUPPORT_R
	CompareConstant(_SC_C_LANG_SUPPORT_R,136,10786,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_C_LANG_SUPPORT_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_DEVICE_IO
	CompareConstant(_SC_DEVICE_IO,140,10787,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_DEVICE_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_DEVICE_SPECIFIC
	CompareConstant(_SC_DEVICE_SPECIFIC,141,10788,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_DEVICE_SPECIFIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_DEVICE_SPECIFIC_R
	CompareConstant(_SC_DEVICE_SPECIFIC_R,142,10789,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_DEVICE_SPECIFIC_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_FD_MGMT
	CompareConstant(_SC_FD_MGMT,143,10790,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_FD_MGMT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_FIFO
	CompareConstant(_SC_FIFO,144,10791,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_FIFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PIPE
	CompareConstant(_SC_PIPE,145,10792,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PIPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_FILE_ATTRIBUTES
	CompareConstant(_SC_FILE_ATTRIBUTES,146,10793,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_FILE_ATTRIBUTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_FILE_LOCKING
	CompareConstant(_SC_FILE_LOCKING,147,10794,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_FILE_LOCKING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_FILE_SYSTEM
	CompareConstant(_SC_FILE_SYSTEM,148,10795,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_FILE_SYSTEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MULTI_PROCESS
	CompareConstant(_SC_MULTI_PROCESS,150,10796,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MULTI_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SINGLE_PROCESS
	CompareConstant(_SC_SINGLE_PROCESS,151,10797,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SINGLE_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NETWORKING
	CompareConstant(_SC_NETWORKING,152,10798,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NETWORKING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_REGEX_VERSION
	CompareConstant(_SC_REGEX_VERSION,156,10799,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_REGEX_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SIGNALS
	CompareConstant(_SC_SIGNALS,158,10800,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SIGNALS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SYSTEM_DATABASE
	CompareConstant(_SC_SYSTEM_DATABASE,162,10801,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SYSTEM_DATABASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SYSTEM_DATABASE_R
	CompareConstant(_SC_SYSTEM_DATABASE_R,163,10802,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SYSTEM_DATABASE_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_USER_GROUPS
	CompareConstant(_SC_USER_GROUPS,166,10803,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_USER_GROUPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_USER_GROUPS_R
	CompareConstant(_SC_USER_GROUPS_R,167,10804,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_USER_GROUPS_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_STREAMS
	CompareConstant(_SC_STREAMS,174,10805,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_STREAMS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL1_ICACHE_SIZE
	CompareConstant(_SC_LEVEL1_ICACHE_SIZE,185,10806,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL1_ICACHE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL1_ICACHE_ASSOC
	CompareConstant(_SC_LEVEL1_ICACHE_ASSOC,186,10807,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL1_ICACHE_ASSOC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL1_ICACHE_LINESIZE
	CompareConstant(_SC_LEVEL1_ICACHE_LINESIZE,187,10808,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL1_ICACHE_LINESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL1_DCACHE_SIZE
	CompareConstant(_SC_LEVEL1_DCACHE_SIZE,188,10809,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL1_DCACHE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL1_DCACHE_ASSOC
	CompareConstant(_SC_LEVEL1_DCACHE_ASSOC,189,10810,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL1_DCACHE_ASSOC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL1_DCACHE_LINESIZE
	CompareConstant(_SC_LEVEL1_DCACHE_LINESIZE,190,10811,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL1_DCACHE_LINESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL2_CACHE_SIZE
	CompareConstant(_SC_LEVEL2_CACHE_SIZE,191,10812,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL2_CACHE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL2_CACHE_ASSOC
	CompareConstant(_SC_LEVEL2_CACHE_ASSOC,192,10813,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL2_CACHE_ASSOC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL2_CACHE_LINESIZE
	CompareConstant(_SC_LEVEL2_CACHE_LINESIZE,193,10814,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL2_CACHE_LINESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL3_CACHE_SIZE
	CompareConstant(_SC_LEVEL3_CACHE_SIZE,194,10815,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL3_CACHE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL3_CACHE_ASSOC
	CompareConstant(_SC_LEVEL3_CACHE_ASSOC,195,10816,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL3_CACHE_ASSOC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL3_CACHE_LINESIZE
	CompareConstant(_SC_LEVEL3_CACHE_LINESIZE,196,10817,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL3_CACHE_LINESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL4_CACHE_SIZE
	CompareConstant(_SC_LEVEL4_CACHE_SIZE,197,10818,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL4_CACHE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL4_CACHE_ASSOC
	CompareConstant(_SC_LEVEL4_CACHE_ASSOC,198,10819,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL4_CACHE_ASSOC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LEVEL4_CACHE_LINESIZE
	CompareConstant(_SC_LEVEL4_CACHE_LINESIZE,199,10820,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LEVEL4_CACHE_LINESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef R_OK
	CompareConstant(R_OK,4,1212,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: R_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef W_OK
	CompareConstant(W_OK,2,1213,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: W_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_OK
	CompareConstant(X_OK,1,1214,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: X_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_OK
	CompareConstant(F_OK,0,1215,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_OK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_ULOCK
	CompareConstant(F_ULOCK,0,1216,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: F_ULOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_LOCK
	CompareConstant(F_LOCK,1,1217,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: F_LOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_TLOCK
	CompareConstant(F_TLOCK,2,1218,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: F_TLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_TEST
	CompareConstant(F_TEST,3,1219,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: F_TEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEEK_SET
	CompareConstant(SEEK_SET,0,1635,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SEEK_SET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEEK_CUR
	CompareConstant(SEEK_CUR,1,1636,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SEEK_CUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEEK_END
	CompareConstant(SEEK_END,2,1637,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SEEK_END\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_VERSION
	CompareConstant(_POSIX_VERSION,200112L,1919,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_VERSION
	CompareConstant(_POSIX2_VERSION,200112L,1921,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX2_C_BIND
	CompareConstant(_POSIX2_C_BIND,200112L,1922,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _POSIX2_C_BIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XOPEN_VERSION
	CompareConstant(_XOPEN_VERSION,500,1926,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _XOPEN_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XOPEN_XPG4
	CompareConstant(_XOPEN_XPG4,1,1930,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _XOPEN_XPG4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STDIN_FILENO
	CompareConstant(STDIN_FILENO,0,1935,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: STDIN_FILENO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STDOUT_FILENO
	CompareConstant(STDOUT_FILENO,1,1936,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: STDOUT_FILENO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef STDERR_FILENO
	CompareConstant(STDERR_FILENO,2,1937,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: STDERR_FILENO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MAPPED_FILES
	CompareConstant(_POSIX_MAPPED_FILES,200112,3528,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MAPPED_FILES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_OPEN_MAX
	CompareConstant(_SC_OPEN_MAX,4,3595,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _SC_OPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CLK_TCK
	CompareConstant(_SC_CLK_TCK,2,3596,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: _SC_CLK_TCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_FSYNC
	CompareConstant(_POSIX_FSYNC,200112,4750,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_FSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMLOCK
	CompareConstant(_POSIX_MEMLOCK,200112,4751,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MEMLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_ASYNC_IO
	CompareConstant(_PC_ASYNC_IO,10,4753,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_ASYNC_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_CHOWN_RESTRICTED
	CompareConstant(_PC_CHOWN_RESTRICTED,6,4754,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_CHOWN_RESTRICTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_FILESIZEBITS
	CompareConstant(_PC_FILESIZEBITS,13,4755,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_FILESIZEBITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_LINK_MAX
	CompareConstant(_PC_LINK_MAX,0,4756,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_LINK_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_MAX_CANON
	CompareConstant(_PC_MAX_CANON,1,4757,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_MAX_CANON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_MAX_INPUT
	CompareConstant(_PC_MAX_INPUT,2,4758,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_MAX_INPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_NAME_MAX
	CompareConstant(_PC_NAME_MAX,3,4759,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_NO_TRUNC
	CompareConstant(_PC_NO_TRUNC,7,4760,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_NO_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_PATH_MAX
	CompareConstant(_PC_PATH_MAX,4,4761,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_PATH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_PIPE_BUF
	CompareConstant(_PC_PIPE_BUF,5,4762,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_PIPE_BUF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_PRIO_IO
	CompareConstant(_PC_PRIO_IO,11,4763,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_PRIO_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_SYNC_IO
	CompareConstant(_PC_SYNC_IO,9,4764,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_SYNC_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_VDISABLE
	CompareConstant(_PC_VDISABLE,8,4765,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _PC_VDISABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMLOCK_RANGE
	CompareConstant(_POSIX_MEMLOCK_RANGE,200112,4766,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MEMLOCK_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_MEMORY_PROTECTION
	CompareConstant(_POSIX_MEMORY_PROTECTION,200112,4767,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_MEMORY_PROTECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SEMAPHORES
	CompareConstant(_POSIX_SEMAPHORES,200112,4771,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SEMAPHORES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SHARED_MEMORY_OBJECTS
	CompareConstant(_POSIX_SHARED_MEMORY_OBJECTS,200112,4772,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SHARED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_TIMERS
	CompareConstant(_POSIX_TIMERS,200112,4774,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _POSIX_TIMERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_BIND
	CompareConstant(_SC_2_C_BIND,47,4775,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_C_BIND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_DEV
	CompareConstant(_SC_2_C_DEV,48,4776,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_C_DEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_C_VERSION
	CompareConstant(_SC_2_C_VERSION,96,4777,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_C_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_FORT_DEV
	CompareConstant(_SC_2_FORT_DEV,49,4778,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_FORT_DEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_FORT_RUN
	CompareConstant(_SC_2_FORT_RUN,50,4779,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_FORT_RUN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_LOCALEDEF
	CompareConstant(_SC_2_LOCALEDEF,52,4780,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_LOCALEDEF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_SW_DEV
	CompareConstant(_SC_2_SW_DEV,51,4781,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_SW_DEV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_UPE
	CompareConstant(_SC_2_UPE,97,4782,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_UPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_VERSION
	CompareConstant(_SC_2_VERSION,46,4783,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_2_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_LISTIO_MAX
	CompareConstant(_SC_AIO_LISTIO_MAX,23,4784,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_AIO_LISTIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_MAX
	CompareConstant(_SC_AIO_MAX,24,4785,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_AIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_AIO_PRIO_DELTA_MAX
	CompareConstant(_SC_AIO_PRIO_DELTA_MAX,25,4786,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_AIO_PRIO_DELTA_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ARG_MAX
	CompareConstant(_SC_ARG_MAX,0,4787,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_ARG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ASYNCHRONOUS_IO
	CompareConstant(_SC_ASYNCHRONOUS_IO,12,4788,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_ASYNCHRONOUS_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_BASE_MAX
	CompareConstant(_SC_BC_BASE_MAX,36,4789,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_BC_BASE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_DIM_MAX
	CompareConstant(_SC_BC_DIM_MAX,37,4790,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_BC_DIM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_SCALE_MAX
	CompareConstant(_SC_BC_SCALE_MAX,38,4791,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_BC_SCALE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BC_STRING_MAX
	CompareConstant(_SC_BC_STRING_MAX,39,4792,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_BC_STRING_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CHILD_MAX
	CompareConstant(_SC_CHILD_MAX,1,4793,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_CHILD_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_COLL_WEIGHTS_MAX
	CompareConstant(_SC_COLL_WEIGHTS_MAX,40,4794,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_COLL_WEIGHTS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_DELAYTIMER_MAX
	CompareConstant(_SC_DELAYTIMER_MAX,26,4795,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_DELAYTIMER_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_EXPR_NEST_MAX
	CompareConstant(_SC_EXPR_NEST_MAX,42,4796,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_EXPR_NEST_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_JOB_CONTROL
	CompareConstant(_SC_JOB_CONTROL,7,4797,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_JOB_CONTROL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LINE_MAX
	CompareConstant(_SC_LINE_MAX,43,4798,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_LINE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MAPPED_FILES
	CompareConstant(_SC_MAPPED_FILES,16,4799,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MAPPED_FILES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MEMLOCK
	CompareConstant(_SC_MEMLOCK,17,4800,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MEMLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MEMLOCK_RANGE
	CompareConstant(_SC_MEMLOCK_RANGE,18,4801,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MEMLOCK_RANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MEMORY_PROTECTION
	CompareConstant(_SC_MEMORY_PROTECTION,19,4802,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MEMORY_PROTECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MESSAGE_PASSING
	CompareConstant(_SC_MESSAGE_PASSING,20,4803,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MESSAGE_PASSING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MQ_OPEN_MAX
	CompareConstant(_SC_MQ_OPEN_MAX,27,4804,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MQ_OPEN_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MQ_PRIO_MAX
	CompareConstant(_SC_MQ_PRIO_MAX,28,4805,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_MQ_PRIO_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_NGROUPS_MAX
	CompareConstant(_SC_NGROUPS_MAX,3,4806,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_NGROUPS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PASS_MAX
	CompareConstant(_SC_PASS_MAX,88,4807,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PASS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PRIORITIZED_IO
	CompareConstant(_SC_PRIORITIZED_IO,13,4808,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PRIORITIZED_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PRIORITY_SCHEDULING
	CompareConstant(_SC_PRIORITY_SCHEDULING,10,4809,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PRIORITY_SCHEDULING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_REALTIME_SIGNALS
	CompareConstant(_SC_REALTIME_SIGNALS,9,4810,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_REALTIME_SIGNALS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_RE_DUP_MAX
	CompareConstant(_SC_RE_DUP_MAX,44,4811,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_RE_DUP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_RTSIG_MAX
	CompareConstant(_SC_RTSIG_MAX,31,4812,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_RTSIG_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SAVED_IDS
	CompareConstant(_SC_SAVED_IDS,8,4813,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SAVED_IDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SEMAPHORES
	CompareConstant(_SC_SEMAPHORES,21,4814,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SEMAPHORES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SEM_NSEMS_MAX
	CompareConstant(_SC_SEM_NSEMS_MAX,32,4815,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SEM_NSEMS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SEM_VALUE_MAX
	CompareConstant(_SC_SEM_VALUE_MAX,33,4816,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SEM_VALUE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SHARED_MEMORY_OBJECTS
	CompareConstant(_SC_SHARED_MEMORY_OBJECTS,22,4817,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SHARED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SIGQUEUE_MAX
	CompareConstant(_SC_SIGQUEUE_MAX,34,4818,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SIGQUEUE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_STREAM_MAX
	CompareConstant(_SC_STREAM_MAX,5,4819,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_STREAM_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SYNCHRONIZED_IO
	CompareConstant(_SC_SYNCHRONIZED_IO,14,4820,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_SYNCHRONIZED_IO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREADS
	CompareConstant(_SC_THREADS,67,4821,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREADS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_ATTR_STACKADDR
	CompareConstant(_SC_THREAD_ATTR_STACKADDR,77,4822,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_ATTR_STACKADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_ATTR_STACKSIZE
	CompareConstant(_SC_THREAD_ATTR_STACKSIZE,78,4823,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_ATTR_STACKSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
	CompareConstant(_SC_THREAD_DESTRUCTOR_ITERATIONS,73,4824,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_DESTRUCTOR_ITERATIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_KEYS_MAX
	CompareConstant(_SC_THREAD_KEYS_MAX,74,4825,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_KEYS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
	CompareConstant(_SC_THREAD_PRIORITY_SCHEDULING,79,4826,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIORITY_SCHEDULING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIO_INHERIT
	CompareConstant(_SC_THREAD_PRIO_INHERIT,80,4827,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIO_INHERIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PRIO_PROTECT
	CompareConstant(_SC_THREAD_PRIO_PROTECT,81,4828,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_PRIO_PROTECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_PROCESS_SHARED
	CompareConstant(_SC_THREAD_PROCESS_SHARED,82,4829,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_PROCESS_SHARED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_SAFE_FUNCTIONS
	CompareConstant(_SC_THREAD_SAFE_FUNCTIONS,68,4830,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_SAFE_FUNCTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_STACK_MIN
	CompareConstant(_SC_THREAD_STACK_MIN,75,4831,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_STACK_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_THREADS_MAX
	CompareConstant(_SC_THREAD_THREADS_MAX,76,4832,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_THREADS_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TIMERS
	CompareConstant(_SC_TIMERS,11,4833,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_TIMERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TIMER_MAX
	CompareConstant(_SC_TIMER_MAX,35,4834,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_TIMER_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TZNAME_MAX
	CompareConstant(_SC_TZNAME_MAX,6,4835,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_TZNAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_VERSION
	CompareConstant(_SC_VERSION,29,4836,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_ILP32_OFF32
	CompareConstant(_SC_XBS5_ILP32_OFF32,125,4837,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XBS5_ILP32_OFF32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_ILP32_OFFBIG
	CompareConstant(_SC_XBS5_ILP32_OFFBIG,126,4838,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XBS5_ILP32_OFFBIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_LP64_OFF64
	CompareConstant(_SC_XBS5_LP64_OFF64,127,4839,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XBS5_LP64_OFF64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XBS5_LPBIG_OFFBIG
	CompareConstant(_SC_XBS5_LPBIG_OFFBIG,128,4840,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XBS5_LPBIG_OFFBIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_CRYPT
	CompareConstant(_SC_XOPEN_CRYPT,92,4841,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_CRYPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_ENH_I18N
	CompareConstant(_SC_XOPEN_ENH_I18N,93,4842,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_ENH_I18N\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_LEGACY
	CompareConstant(_SC_XOPEN_LEGACY,129,4843,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_LEGACY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_REALTIME
	CompareConstant(_SC_XOPEN_REALTIME,130,4844,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_REALTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_SHM
	CompareConstant(_SC_XOPEN_SHM,94,4845,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_SHM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_VERSION
	CompareConstant(_SC_XOPEN_VERSION,89,4846,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_PATH
	CompareConstant(_CS_PATH,0,4847,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_PATH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_CFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_CFLAGS,1100,4848,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LDFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LDFLAGS,1101,4849,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LIBS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LIBS,1102,4850,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFF32_LINTFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFF32_LINTFLAGS,1103,4851,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFF32_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_CFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_CFLAGS,1104,4852,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LDFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LDFLAGS,1105,4853,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LIBS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LIBS,1106,4854,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
	CompareConstant(_CS_XBS5_ILP32_OFFBIG_LINTFLAGS,1107,4855,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_ILP32_OFFBIG_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_CFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_CFLAGS,1108,4856,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LDFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_LDFLAGS,1109,4857,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LIBS
	CompareConstant(_CS_XBS5_LP64_OFF64_LIBS,1110,4858,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LP64_OFF64_LINTFLAGS
	CompareConstant(_CS_XBS5_LP64_OFF64_LINTFLAGS,1111,4859,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LP64_OFF64_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_CFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_CFLAGS,1112,4860,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_CFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LDFLAGS,1113,4861,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LDFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LIBS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LIBS,1114,4862,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LIBS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
	CompareConstant(_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,1115,4863,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PAGESIZE
	CompareConstant(_SC_PAGESIZE,30,4930,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: _SC_PAGESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_VDISABLE
	CompareConstant(_POSIX_VDISABLE,'\0',5028,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _POSIX_VDISABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_NO_TRUNC
	CompareConstant(_POSIX_NO_TRUNC,1,5029,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _POSIX_NO_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_CHOWN_RESTRICTED
	CompareConstant(_POSIX_CHOWN_RESTRICTED,1,5030,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: _POSIX_CHOWN_RESTRICTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_PAGE_SIZE
	CompareConstant(_SC_PAGE_SIZE,30,5148,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_PAGE_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_REGEXP
	CompareConstant(_POSIX_REGEXP,1,5188,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _POSIX_REGEXP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_SHELL
	CompareConstant(_POSIX_SHELL,1,5190,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _POSIX_SHELL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_JOB_CONTROL
	CompareConstant(_POSIX_JOB_CONTROL,1,5191,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _POSIX_JOB_CONTROL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_THREADS
	CompareConstant(_POSIX_THREADS,200112L,5192,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _POSIX_THREADS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_2_SYMLINKS
	CompareConstant(_PC_2_SYMLINKS,20,5193,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _PC_2_SYMLINKS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_ALLOC_SIZE_MIN
	CompareConstant(_PC_ALLOC_SIZE_MIN,18,5194,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _PC_ALLOC_SIZE_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_REC_INCR_XFER_SIZE
	CompareConstant(_PC_REC_INCR_XFER_SIZE,14,5195,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _PC_REC_INCR_XFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_REC_MIN_XFER_SIZE
	CompareConstant(_PC_REC_MIN_XFER_SIZE,16,5196,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _PC_REC_MIN_XFER_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _PC_REC_XFER_ALIGN
	CompareConstant(_PC_REC_XFER_ALIGN,17,5197,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _PC_REC_XFER_ALIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_CHAR_TERM
	CompareConstant(_SC_2_CHAR_TERM,95,5198,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_2_CHAR_TERM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_ACCOUNTING
	CompareConstant(_SC_2_PBS_ACCOUNTING,169,5199,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_2_PBS_ACCOUNTING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_CHECKPOINT
	CompareConstant(_SC_2_PBS_CHECKPOINT,175,5200,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_2_PBS_CHECKPOINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_LOCATE
	CompareConstant(_SC_2_PBS_LOCATE,170,5201,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_2_PBS_LOCATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_MESSAGE
	CompareConstant(_SC_2_PBS_MESSAGE,171,5202,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_2_PBS_MESSAGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_2_PBS_TRACK
	CompareConstant(_SC_2_PBS_TRACK,172,5203,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_2_PBS_TRACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ADVISORY_INFO
	CompareConstant(_SC_ADVISORY_INFO,132,5204,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_ADVISORY_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_ATEXIT_MAX
	CompareConstant(_SC_ATEXIT_MAX,87,5205,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_ATEXIT_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_BARRIERS
	CompareConstant(_SC_BARRIERS,133,5206,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_BARRIERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CLOCK_SELECTION
	CompareConstant(_SC_CLOCK_SELECTION,137,5207,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_CLOCK_SELECTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_CPUTIME
	CompareConstant(_SC_CPUTIME,138,5208,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_CPUTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_FSYNC
	CompareConstant(_SC_FSYNC,15,5209,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_FSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_GETGR_R_SIZE_MAX
	CompareConstant(_SC_GETGR_R_SIZE_MAX,69,5210,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_GETGR_R_SIZE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_GETPW_R_SIZE_MAX
	CompareConstant(_SC_GETPW_R_SIZE_MAX,70,5211,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_GETPW_R_SIZE_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_HOST_NAME_MAX
	CompareConstant(_SC_HOST_NAME_MAX,180,5212,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_HOST_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_IOV_MAX
	CompareConstant(_SC_IOV_MAX,60,5213,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_IOV_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_IPV6
	CompareConstant(_SC_IPV6,235,5214,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_IPV6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_LOGIN_NAME_MAX
	CompareConstant(_SC_LOGIN_NAME_MAX,71,5215,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_LOGIN_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_MONOTONIC_CLOCK
	CompareConstant(_SC_MONOTONIC_CLOCK,149,5216,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_MONOTONIC_CLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_RAW_SOCKETS
	CompareConstant(_SC_RAW_SOCKETS,236,5218,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: _SC_RAW_SOCKETS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_READER_WRITER_LOCKS
	CompareConstant(_SC_READER_WRITER_LOCKS,153,5219,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_READER_WRITER_LOCKS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_REGEXP
	CompareConstant(_SC_REGEXP,155,5220,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_REGEXP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SHELL
	CompareConstant(_SC_SHELL,157,5221,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_SHELL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SPAWN
	CompareConstant(_SC_SPAWN,159,5222,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_SPAWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SPIN_LOCKS
	CompareConstant(_SC_SPIN_LOCKS,154,5223,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_SPIN_LOCKS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SPORADIC_SERVER
	CompareConstant(_SC_SPORADIC_SERVER,160,5224,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_SPORADIC_SERVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_SYMLOOP_MAX
	CompareConstant(_SC_SYMLOOP_MAX,173,5226,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_SYMLOOP_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_CPUTIME
	CompareConstant(_SC_THREAD_CPUTIME,139,5227,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_CPUTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_THREAD_SPORADIC_SERVER
	CompareConstant(_SC_THREAD_SPORADIC_SERVER,161,5228,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_THREAD_SPORADIC_SERVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TIMEOUTS
	CompareConstant(_SC_TIMEOUTS,164,5229,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_TIMEOUTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE
	CompareConstant(_SC_TRACE,181,5230,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_TRACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE_EVENT_FILTER
	CompareConstant(_SC_TRACE_EVENT_FILTER,182,5231,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_TRACE_EVENT_FILTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE_INHERIT
	CompareConstant(_SC_TRACE_INHERIT,183,5233,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_TRACE_INHERIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TRACE_LOG
	CompareConstant(_SC_TRACE_LOG,184,5234,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_TRACE_LOG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TTY_NAME_MAX
	CompareConstant(_SC_TTY_NAME_MAX,72,5238,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_TTY_NAME_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_TYPED_MEMORY_OBJECTS
	CompareConstant(_SC_TYPED_MEMORY_OBJECTS,165,5239,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_TYPED_MEMORY_OBJECTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_UNIX
	CompareConstant(_SC_XOPEN_UNIX,91,5241,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_UNIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_XOPEN_REALTIME_THREADS
	CompareConstant(_SC_XOPEN_REALTIME_THREADS,131,5242,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_XOPEN_REALTIME_THREADS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_ILP32_OFF32
	CompareConstant(_SC_V6_ILP32_OFF32,176,5243,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_V6_ILP32_OFF32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_ILP32_OFFBIG
	CompareConstant(_SC_V6_ILP32_OFFBIG,177,5244,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_V6_ILP32_OFFBIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_LP64_OFF64
	CompareConstant(_SC_V6_LP64_OFF64,178,5245,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_V6_LP64_OFF64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _SC_V6_LPBIG_OFFBIG
	CompareConstant(_SC_V6_LPBIG_OFFBIG,179,5246,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: _SC_V6_LPBIG_OFFBIG\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(off64_t,8, 9112, 12, 1.3, NULL, 10, NULL)
#elif defined __x86_64__
CheckTypeSize(off64_t,8, 9112, 11, 2.0, NULL, 10, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(off64_t,8, 9112, 10, 1.3, NULL, 10, NULL)
#elif defined __powerpc64__
CheckTypeSize(off64_t,8, 9112, 9, 2.0, NULL, 10, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(off64_t,8, 9112, 6, 1.2, NULL, 10, NULL)
#elif defined __ia64__
CheckTypeSize(off64_t,8, 9112, 3, 1.3, NULL, 10, NULL)
#elif defined __i386__
CheckTypeSize(off64_t,8, 9112, 2, 1.2, NULL, 10, NULL)
#else
Msg("Find size of off64_t (9112)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,10, NULL);\n",architecture,9112,0);
#endif

extern int getdtablesize_db(void);
CheckInterfacedef(getdtablesize,getdtablesize_db);
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
extern int getdomainname_db(char *, size_t);
CheckInterfacedef(getdomainname,getdomainname_db);
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
extern int lockf64_db(int, int, off64_t);
CheckInterfacedef(lockf64,lockf64_db);
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
extern ssize_t pread64_db(int, void *, size_t, off64_t);
CheckInterfacedef(pread64,pread64_db);
extern ssize_t pwrite64_db(int, const void *, size_t, off64_t);
CheckInterfacedef(pwrite64,pwrite64_db);
extern int ttyname_r_db(int, char *, size_t);
CheckInterfacedef(ttyname_r,ttyname_r_db);
extern char * __getcwd_chk_db(char *, size_t, size_t);
CheckInterfacedef(__getcwd_chk,__getcwd_chk_db);
extern ssize_t __read_chk_db(int, void *, size_t, size_t);
CheckInterfacedef(__read_chk,__read_chk_db);
extern ssize_t __readlink_chk_db(const char *, void *, size_t, size_t);
CheckInterfacedef(__readlink_chk,__readlink_chk_db);
extern int readlinkat_db(int, const char *, char *, size_t);
CheckInterfacedef(readlinkat,readlinkat_db);
extern int linkat_db(int, const char *, int, const char *, int);
CheckInterfacedef(linkat,linkat_db);
extern int unlinkat_db(int, const char *, int);
CheckInterfacedef(unlinkat,unlinkat_db);
extern int fchownat_db(int, const char *, uid_t, gid_t, int);
CheckInterfacedef(fchownat,fchownat_db);
extern int symlinkat_db(const char *, int, const char *);
CheckInterfacedef(symlinkat,symlinkat_db);
extern int faccessat_db(int, const char *, int, int);
CheckInterfacedef(faccessat,faccessat_db);
extern int fexecve_db(int, char *const [], char *const []);
CheckInterfacedef(fexecve,fexecve_db);
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
