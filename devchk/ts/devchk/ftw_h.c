/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef FTW_F
	CompareConstant(FTW_F,FTW_F)
#else
Msg( "Error: Constant not found: FTW_F\n");
cnt++;
#endif

#ifdef FTW_D
	CompareConstant(FTW_D,FTW_D)
#else
Msg( "Error: Constant not found: FTW_D\n");
cnt++;
#endif

#ifdef FTW_DNR
	CompareConstant(FTW_DNR,FTW_DNR)
#else
Msg( "Error: Constant not found: FTW_DNR\n");
cnt++;
#endif

#ifdef FTW_NS
	CompareConstant(FTW_NS,FTW_NS)
#else
Msg( "Error: Constant not found: FTW_NS\n");
cnt++;
#endif

#ifdef FTW_SL
	CompareConstant(FTW_SL,FTW_SL)
#else
Msg( "Error: Constant not found: FTW_SL\n");
cnt++;
#endif

#ifdef FTW_DP
	CompareConstant(FTW_DP,FTW_DP)
#else
Msg( "Error: Constant not found: FTW_DP\n");
cnt++;
#endif

#ifdef FTW_SLN
	CompareConstant(FTW_SLN,FTW_SLN)
#else
Msg( "Error: Constant not found: FTW_SLN\n");
cnt++;
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8989,0);
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8990,0);
#endif

#ifdef __i386__
CheckTypeSize(struct FTW,8, 8691, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8691,0);
#endif

#ifdef __i386__
CheckTypeSize(__ftw_func_t,4, 8992, 2)
#elif __ia64__
CheckTypeSize(__ftw_func_t,8, 8992, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8992,0);
#endif

#ifdef __i386__
CheckTypeSize(__ftw64_func_t,4, 8994, 2)
#elif __ia64__
CheckTypeSize(__ftw64_func_t,8, 8994, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8994,0);
#endif

#ifdef __i386__
CheckTypeSize(__nftw_func_t,4, 8996, 2)
#elif __ia64__
CheckTypeSize(__nftw_func_t,8, 8996, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8996,0);
#endif

#ifdef __i386__
CheckTypeSize(__nftw64_func_t,4, 8998, 2)
#elif __ia64__
CheckTypeSize(__nftw64_func_t,8, 8998, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8998,0);
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
