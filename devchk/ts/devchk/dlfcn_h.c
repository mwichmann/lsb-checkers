/*
 * Test of dlfcn.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "dlfcn.h"



#ifdef TET_TEST
void dlfcn_h()
{
#else
int dlfcn_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in dlfcn.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RTLD_LOCAL
	CompareConstant(RTLD_LOCAL,0,1165,architecture)
#else
Msg( "Error: Constant not found: RTLD_LOCAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RTLD_NOW
	CompareConstant(RTLD_NOW,0x00002,1161,architecture)
#else
Msg( "Error: Constant not found: RTLD_NOW\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RTLD_LAZY
	CompareConstant(RTLD_LAZY,0x00001,1160,architecture)
#else
Msg( "Error: Constant not found: RTLD_LAZY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RTLD_GLOBAL
	CompareConstant(RTLD_GLOBAL,0x00100,1164,architecture)
#else
Msg( "Error: Constant not found: RTLD_GLOBAL\n");
cnt++;
#endif

#endif

#ifdef __ia64__
CheckTypeSize(Dl_info,32, 10008, 3)
#elif __i386__
CheckTypeSize(Dl_info,16, 10008, 2)
#elif __powerpc__
CheckTypeSize(Dl_info,16, 10008, 6)
#elif __s390__
CheckTypeSize(Dl_info,16, 10008, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10008,0);
Msg("Find size of Dl_info (10008)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in dlfcn.h\n",cnt);
return cnt;
#endif

}
