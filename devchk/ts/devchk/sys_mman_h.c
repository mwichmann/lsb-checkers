/*
 * Test of sys/mman.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/mman.h"



#ifdef TET_TEST
void sys_mman_h()
{
#else
int sys_mman_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/mman.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_FAILED
	CompareConstant(MAP_FAILED,((void*)-1),1747,architecture)
#else
Msg( "Error: Constant not found: MAP_FAILED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_READ
	CompareConstant(PROT_READ,0x1,3503,architecture)
#else
Msg( "Error: Constant not found: PROT_READ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_WRITE
	CompareConstant(PROT_WRITE,0x2,3504,architecture)
#else
Msg( "Error: Constant not found: PROT_WRITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_EXEC
	CompareConstant(PROT_EXEC,0x4,3505,architecture)
#else
Msg( "Error: Constant not found: PROT_EXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PROT_NONE
	CompareConstant(PROT_NONE,0x0,3506,architecture)
#else
Msg( "Error: Constant not found: PROT_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_SHARED
	CompareConstant(MAP_SHARED,0x01,3507,architecture)
#else
Msg( "Error: Constant not found: MAP_SHARED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_PRIVATE
	CompareConstant(MAP_PRIVATE,0x02,3508,architecture)
#else
Msg( "Error: Constant not found: MAP_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_FIXED
	CompareConstant(MAP_FIXED,0x10,3509,architecture)
#else
Msg( "Error: Constant not found: MAP_FIXED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAP_ANONYMOUS
	CompareConstant(MAP_ANONYMOUS,0x20,3510,architecture)
#else
Msg( "Error: Constant not found: MAP_ANONYMOUS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MS_ASYNC
	CompareConstant(MS_ASYNC,1,3516,architecture)
#else
Msg( "Error: Constant not found: MS_ASYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MS_INVALIDATE
	CompareConstant(MS_INVALIDATE,2,3517,architecture)
#else
Msg( "Error: Constant not found: MS_INVALIDATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MS_SYNC
	CompareConstant(MS_SYNC,4,3518,architecture)
#else
Msg( "Error: Constant not found: MS_SYNC\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,8192,3519,architecture)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,8192,3519,architecture)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif __ia64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif __i386__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif __x86_64__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#elif __s390__
#ifdef MCL_CURRENT
	CompareConstant(MCL_CURRENT,1,3519,architecture)
#else
Msg( "Error: Constant not found: MCL_CURRENT\n");
cnt++;
#endif

#else
Msg( "No definition for MCL_CURRENT (3519, int) in db\n");
#ifdef MCL_CURRENT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,3519,%d);\n", architecture, MCL_CURRENT);
#endif
#endif
#if __powerpc64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,16384,3520,architecture)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,16384,3520,architecture)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif __ia64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif __i386__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif __x86_64__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#elif __s390__
#ifdef MCL_FUTURE
	CompareConstant(MCL_FUTURE,2,3520,architecture)
#else
Msg( "Error: Constant not found: MCL_FUTURE\n");
cnt++;
#endif

#else
Msg( "No definition for MCL_FUTURE (3520, int) in db\n");
#ifdef MCL_FUTURE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,3520,%d);\n", architecture, MCL_FUTURE);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef MAP_ANON
	CompareConstant(MAP_ANON,MAP_ANONYMOUS,3526,architecture)
#else
Msg( "Error: Constant not found: MAP_ANON\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/mman.h\n",cnt);
return cnt;
#endif

}
