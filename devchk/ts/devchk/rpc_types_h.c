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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/types.h\n");
#endif

#if __powerpc64__
CheckTypeSize(bool_t,4, 9890, 9)
#elif __ia64__
CheckTypeSize(bool_t,4, 9890, 3)
#elif __i386__
CheckTypeSize(bool_t,4, 9890, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(bool_t,4, 9890, 6)
#elif __s390__
CheckTypeSize(bool_t,4, 9890, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9890,0);
Msg("Find size of bool_t (9890)\n");
#endif

#if __i386__
CheckTypeSize(enum_t,4, 9895, 2)
#elif __s390__
CheckTypeSize(enum_t,4, 9895, 10)
#elif __ia64__
CheckTypeSize(enum_t,4, 9895, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9895,0);
Msg("Find size of enum_t (9895)\n");
#endif

#if __i386__
CheckTypeSize(rpcvers_t,4, 9993, 2)
#elif __ia64__
CheckTypeSize(rpcvers_t,8, 9993, 3)
#elif __s390__
CheckTypeSize(rpcvers_t,4, 9993, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9993,0);
Msg("Find size of rpcvers_t (9993)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/types.h\n",cnt);
return cnt;
#endif

}
