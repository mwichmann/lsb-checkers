/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <sys/stat.h>
#include "ftw.h"



#ifdef TET_TEST
void ftw_h()
{
#else
int ftw_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in ftw.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FTW_DP
	CompareConstant(FTW_DP,FTW_DP,3060,architecture)
#else
Msg( "Error: Constant not found: FTW_DP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FTW_SLN
	CompareConstant(FTW_SLN,FTW_SLN,3061,architecture)
#else
Msg( "Error: Constant not found: FTW_SLN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FTW_F
	CompareConstant(FTW_F,FTW_F,1230,architecture)
#else
Msg( "Error: Constant not found: FTW_F\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FTW_D
	CompareConstant(FTW_D,FTW_D,1231,architecture)
#else
Msg( "Error: Constant not found: FTW_D\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FTW_DNR
	CompareConstant(FTW_DNR,FTW_DNR,1232,architecture)
#else
Msg( "Error: Constant not found: FTW_DNR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FTW_NS
	CompareConstant(FTW_NS,FTW_NS,1233,architecture)
#else
Msg( "Error: Constant not found: FTW_NS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FTW_SL
	CompareConstant(FTW_SL,FTW_SL,1234,architecture)
#else
Msg( "Error: Constant not found: FTW_SL\n");
cnt++;
#endif

#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8989,0);
Msg("Find size of anon-ftw.h-13 (8989)\n");
#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8990,0);
Msg("Find size of anon-ftw.h-34 (8990)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct FTW,8, 8691, 2)
#elif __ia64__
CheckTypeSize(struct FTW,8, 8691, 3)
#elif __powerpc__
CheckTypeSize(struct FTW,8, 8691, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8691,0);
Msg("Find size of FTW (8691)\n");
#endif

#ifdef __i386__
CheckTypeSize(__ftw_func_t,4, 8992, 2)
#elif __ia64__
CheckTypeSize(__ftw_func_t,8, 8992, 3)
#elif __powerpc__
CheckTypeSize(__ftw_func_t,4, 8992, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8992,0);
Msg("Find size of __ftw_func_t (8992)\n");
#endif

#ifdef __i386__
CheckTypeSize(__ftw64_func_t,4, 8994, 2)
#elif __ia64__
CheckTypeSize(__ftw64_func_t,8, 8994, 3)
#elif __powerpc__
CheckTypeSize(__ftw64_func_t,4, 8994, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8994,0);
Msg("Find size of __ftw64_func_t (8994)\n");
#endif

#ifdef __i386__
CheckTypeSize(__nftw_func_t,4, 8996, 2)
#elif __ia64__
CheckTypeSize(__nftw_func_t,8, 8996, 3)
#elif __powerpc__
CheckTypeSize(__nftw_func_t,4, 8996, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8996,0);
Msg("Find size of __nftw_func_t (8996)\n");
#endif

#ifdef __i386__
CheckTypeSize(__nftw64_func_t,4, 8998, 2)
#elif __ia64__
CheckTypeSize(__nftw64_func_t,8, 8998, 3)
#elif __powerpc__
CheckTypeSize(__nftw64_func_t,4, 8998, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8998,0);
Msg("Find size of __nftw64_func_t (8998)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in ftw.h\n",cnt);
return cnt;
#endif

}
