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

#ifdef __i386__
CheckTypeSize(__ftw_func_t,4)
#elif __ia64__
CheckTypeSize(__ftw_func_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8992,0);
#endif

#ifdef __i386__
CheckTypeSize(__ftw64_func_t,4)
#elif __ia64__
CheckTypeSize(__ftw64_func_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8994,0);
#endif

#ifdef __i386__
CheckTypeSize(__nftw_func_t,4)
#elif __ia64__
CheckTypeSize(__nftw_func_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8996,0);
#endif

#ifdef __i386__
CheckTypeSize(__nftw64_func_t,4)
#elif __ia64__
CheckTypeSize(__nftw64_func_t,8)
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
