/*
 * Test of rpc/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
#if __powerpc64__
CheckTypeSize(bool_t,4, 9890, 9)
#elif __ia64__
CheckTypeSize(bool_t,4, 9890, 3)
#elif __i386__
CheckTypeSize(bool_t,4, 9890, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(bool_t,4, 9890, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(bool_t,4, 9890, 10)
#elif __s390x__
CheckTypeSize(bool_t,4, 9890, 12)
#elif __x86_64__
CheckTypeSize(bool_t,4, 9890, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9890,0);
Msg("Find size of bool_t (9890)\n");
#endif

#if __i386__
CheckTypeSize(enum_t,4, 9895, 2)
#elif __s390__ && !__s390x__
CheckTypeSize(enum_t,4, 9895, 10)
#elif __ia64__
CheckTypeSize(enum_t,4, 9895, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(enum_t,4, 9895, 6)
#elif __powerpc64__
CheckTypeSize(enum_t,4, 9895, 9)
#elif __s390x__
CheckTypeSize(enum_t,4, 9895, 12)
#elif __x86_64__
CheckTypeSize(enum_t,4, 9895, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9895,0);
Msg("Find size of enum_t (9895)\n");
#endif

#if __i386__
CheckTypeSize(rpcprog_t,4, 9992, 2)
#elif __powerpc64__
CheckTypeSize(rpcprog_t,8, 9992, 9)
#elif __ia64__
CheckTypeSize(rpcprog_t,8, 9992, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rpcprog_t,4, 9992, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(rpcprog_t,4, 9992, 10)
#elif __s390x__
CheckTypeSize(rpcprog_t,8, 9992, 12)
#elif __x86_64__
CheckTypeSize(rpcprog_t,8, 9992, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9992,0);
Msg("Find size of rpcprog_t (9992)\n");
#endif

#if __i386__
CheckTypeSize(rpcvers_t,4, 9993, 2)
#elif __ia64__
CheckTypeSize(rpcvers_t,8, 9993, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(rpcvers_t,4, 9993, 10)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rpcvers_t,4, 9993, 6)
#elif __powerpc64__
CheckTypeSize(rpcvers_t,8, 9993, 9)
#elif __s390x__
CheckTypeSize(rpcvers_t,8, 9993, 12)
#elif __x86_64__
CheckTypeSize(rpcvers_t,8, 9993, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9993,0);
Msg("Find size of rpcvers_t (9993)\n");
#endif

#if __i386__
CheckTypeSize(rpcproc_t,4, 9994, 2)
#elif __powerpc64__
CheckTypeSize(rpcproc_t,8, 9994, 9)
#elif __ia64__
CheckTypeSize(rpcproc_t,8, 9994, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rpcproc_t,4, 9994, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(rpcproc_t,4, 9994, 10)
#elif __s390x__
CheckTypeSize(rpcproc_t,8, 9994, 12)
#elif __x86_64__
CheckTypeSize(rpcproc_t,8, 9994, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9994,0);
Msg("Find size of rpcproc_t (9994)\n");
#endif

#if __i386__
CheckTypeSize(rpcprot_t,4, 9998, 2)
#elif __powerpc64__
CheckTypeSize(rpcprot_t,8, 9998, 9)
#elif __ia64__
CheckTypeSize(rpcprot_t,8, 9998, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rpcprot_t,4, 9998, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(rpcprot_t,4, 9998, 10)
#elif __s390x__
CheckTypeSize(rpcprot_t,8, 9998, 12)
#elif __x86_64__
CheckTypeSize(rpcprot_t,8, 9998, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9998,0);
Msg("Find size of rpcprot_t (9998)\n");
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
