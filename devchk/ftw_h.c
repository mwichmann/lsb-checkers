/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <sys/stat.h>
#include "ftw.h"



int ftw_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(__ftw_func_t,4,8992)
#elif __ia64__
CheckTypeSize(__ftw_func_t,8,8992)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8992,0);
#endif
#ifdef __i386__
CheckTypeSize(__ftw64_func_t,4,8994)
#elif __ia64__
CheckTypeSize(__ftw64_func_t,8,8994)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8994,0);
#endif
#ifdef __i386__
CheckTypeSize(__nftw_func_t,4,8996)
#elif __ia64__
CheckTypeSize(__nftw_func_t,8,8996)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8996,0);
#endif
#ifdef __i386__
CheckTypeSize(__nftw64_func_t,4,8998)
#elif __ia64__
CheckTypeSize(__nftw64_func_t,8,8998)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8998,0);
#endif
printf("%d tests in ftw.h\n",cnt);
return cnt;
}
