/*
 * Test of inttypes.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <stdlib.h>
#include "inttypes.h"



#ifdef TET_TEST
void inttypes_h()
{
#else
int inttypes_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in inttypes.h\n");
#endif

#ifdef __i386__
CheckTypeSize(imaxdiv_t,16, 6898, 2)
#elif __ia64__
CheckTypeSize(imaxdiv_t,16, 6898, 3)
#elif __powerpc__
CheckTypeSize(imaxdiv_t,16, 6898, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6898,0);
Msg("Find size of imaxdiv_t (6898)\n");
#endif

#ifdef __i386__
CheckTypeSize(intmax_t,8, 9016, 2)
#elif __ia64__
CheckTypeSize(intmax_t,8, 9016, 3)
#elif __powerpc__
CheckTypeSize(intmax_t,8, 9016, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9016,0);
Msg("Find size of intmax_t (9016)\n");
#endif

#ifdef __i386__
CheckTypeSize(uintmax_t,8, 9017, 2)
#elif __ia64__
CheckTypeSize(uintmax_t,8, 9017, 3)
#elif __powerpc__
CheckTypeSize(uintmax_t,8, 9017, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9017,0);
Msg("Find size of uintmax_t (9017)\n");
#endif

#ifdef __i386__
CheckTypeSize(u_int,4, 9261, 2)
#elif __powerpc__
CheckTypeSize(u_int,4, 9261, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9261,0);
Msg("Find size of u_int (9261)\n");
#endif

#ifdef __i386__
CheckTypeSize(uint,4, 9265, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9265,0);
Msg("Find size of uint (9265)\n");
#endif

#ifdef __i386__
CheckTypeSize(uint8_t,1, 9270, 2)
#elif __ia64__
CheckTypeSize(uint8_t,1, 9270, 3)
#elif __powerpc__
CheckTypeSize(uint8_t,1, 9270, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9270,0);
Msg("Find size of uint8_t (9270)\n");
#endif

#ifdef __i386__
CheckTypeSize(uint16_t,2, 9271, 2)
#elif __ia64__
CheckTypeSize(uint16_t,2, 9271, 3)
#elif __powerpc__
CheckTypeSize(uint16_t,2, 9271, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9271,0);
Msg("Find size of uint16_t (9271)\n");
#endif

#ifdef __i386__
CheckTypeSize(uint32_t,4, 9272, 2)
#elif __ia64__
CheckTypeSize(uint32_t,4, 9272, 3)
#elif __powerpc__
CheckTypeSize(uint32_t,4, 9272, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9272,0);
Msg("Find size of uint32_t (9272)\n");
#endif

#ifdef __i386__
CheckTypeSize(uintptr_t,4, 9308, 2)
#elif __ia64__
CheckTypeSize(uintptr_t,8, 9308, 3)
#elif __powerpc__
CheckTypeSize(uintptr_t,4, 9308, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9308,0);
Msg("Find size of uintptr_t (9308)\n");
#endif

#ifdef __i386__
CheckTypeSize(uint64_t,8, 10176, 2)
#elif __ia64__
CheckTypeSize(uint64_t,8, 10176, 3)
#elif __powerpc__
CheckTypeSize(uint64_t,8, 10176, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10176,0);
Msg("Find size of uint64_t (10176)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in inttypes.h\n",cnt);
return cnt;
#endif

}
