/*
 * Test of ftw.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "ftw.h"



int ftw_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(__ftw_func_t,4,6883)
#elif __ia64__
CheckTypeSize(__ftw_func_t,8,6883)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6883,0);
#endif
#ifdef __i386__
CheckTypeSize(__ftw64_func_t,4,6884)
#elif __ia64__
CheckTypeSize(__ftw64_func_t,8,6884)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6884,0);
#endif
#ifdef __i386__
CheckTypeSize(__nftw_func_t,4,6885)
#elif __ia64__
CheckTypeSize(__nftw_func_t,8,6885)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6885,0);
#endif
#ifdef __i386__
CheckTypeSize(__nftw64_func_t,4,6886)
#elif __ia64__
CheckTypeSize(__nftw64_func_t,8,6886)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6886,0);
#endif
printf("%d tests in ftw.h\n",cnt);
return cnt;
}
