/*
 * Test of inttypes.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6898,0);
#endif

#ifdef __i386__
CheckTypeSize(int32_t,4, 6997, 2)
#elif __ia64__
CheckTypeSize(int32_t,4, 6997, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6997,0);
#endif

#ifdef __i386__
CheckTypeSize(intmax_t,8, 9016, 2)
#elif __ia64__
CheckTypeSize(intmax_t,8, 9016, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9016,0);
#endif

#ifdef __i386__
CheckTypeSize(uintmax_t,8, 9017, 2)
#elif __ia64__
CheckTypeSize(uintmax_t,8, 9017, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9017,0);
#endif

#ifdef __i386__
CheckTypeSize(uint8_t,1, 9270, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9270,0);
#endif

#ifdef __i386__
CheckTypeSize(uint16_t,2, 9271, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9271,0);
#endif

#ifdef __i386__
CheckTypeSize(uint32_t,4, 9272, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9272,0);
#endif

#ifdef __i386__
CheckTypeSize(uintptr_t,4, 9308, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9308,0);
#endif

#ifdef __i386__
CheckTypeSize(uint64_t,8, 10176, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10176,0);
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
