/*
 * Test of rpc/types.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "rpc/types.h"



#ifdef TET_TEST
void rpc_types_h()
{
#else
int rpc_types_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in rpc/types.h\n");
#endif

printf("Checking data structures in rpc/types.h\n");
#if defined __powerpc64__
CheckTypeSize(bool_t,4, 9890, 9, 2.0, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(bool_t,4, 9890, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(bool_t,4, 9890, 2, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(bool_t,4, 9890, 6, 1.3, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(bool_t,4, 9890, 10, 1.3, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(bool_t,4, 9890, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(bool_t,4, 9890, 11, 2.0, NULL, 6, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of bool_t (9890)\n");
%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,9890,0);
#endif

#if defined __i386__
CheckTypeSize(enum_t,4, 9895, 2, 1.3, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(enum_t,4, 9895, 10, 1.3, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(enum_t,4, 9895, 3, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(enum_t,4, 9895, 6, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(enum_t,4, 9895, 9, 2.0, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(enum_t,4, 9895, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(enum_t,4, 9895, 11, 2.0, NULL, 6, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of enum_t (9895)\n");
%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,9895,0);
#endif

#if defined __i386__
CheckTypeSize(rpcprog_t,4, 9992, 2, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(rpcprog_t,8, 9992, 9, 2.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(rpcprog_t,8, 9992, 3, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(rpcprog_t,4, 9992, 6, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(rpcprog_t,4, 9992, 10, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(rpcprog_t,8, 9992, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(rpcprog_t,8, 9992, 11, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of rpcprog_t (9992)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9992,0);
#endif

#if defined __i386__
CheckTypeSize(rpcvers_t,4, 9993, 2, 1.3, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(rpcvers_t,8, 9993, 3, 1.3, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(rpcvers_t,4, 9993, 10, 1.3, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(rpcvers_t,4, 9993, 6, 1.3, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(rpcvers_t,8, 9993, 9, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(rpcvers_t,8, 9993, 12, 1.3, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(rpcvers_t,8, 9993, 11, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of rpcvers_t (9993)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9993,0);
#endif

#if defined __i386__
CheckTypeSize(rpcproc_t,4, 9994, 2, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(rpcproc_t,8, 9994, 9, 2.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(rpcproc_t,8, 9994, 3, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(rpcproc_t,4, 9994, 6, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(rpcproc_t,4, 9994, 10, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(rpcproc_t,8, 9994, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(rpcproc_t,8, 9994, 11, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (Msg("Find size of rpcproc_t (9994)\n");
%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,9994,0);
#endif

#if defined __i386__
CheckTypeSize(rpcprot_t,4, 9998, 2, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(rpcprot_t,8, 9998, 9, 2.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(rpcprot_t,8, 9998, 3, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(rpcprot_t,4, 9998, 6, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(rpcprot_t,4, 9998, 10, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(rpcprot_t,8, 9998, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(rpcprot_t,8, 9998, 11, 2.0, NULL, 9, NULL)
#else
Msg("Find size of rpcprot_t (9998)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9, NULL);\n",architecture,9998,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/types.h\n\n",pcnt,cnt);
return cnt;
#endif

}
