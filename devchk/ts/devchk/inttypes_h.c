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

#if __i386__
CheckTypeSize(imaxdiv_t,16, 6898, 2)
#elif __ia64__
CheckTypeSize(imaxdiv_t,16, 6898, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 10)
#elif __powerpc64__
CheckTypeSize(imaxdiv_t,16, 6898, 9)
#elif __s390x__
CheckTypeSize(imaxdiv_t,16, 6898, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6898,0);
Msg("Find size of imaxdiv_t (6898)\n");
#endif

#if __i386__
CheckTypeSize(intmax_t,8, 9016, 2)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(uintmax_t,8, 9017, 6)
#endif

#if __i386__
CheckTypeSize(u_int,4, 9261, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_int,4, 9261, 6)
#elif __ia64__
CheckTypeSize(u_int,4, 9261, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(u_int,4, 9261, 10)
#elif __powerpc64__
CheckTypeSize(u_int,4, 9261, 9)
#elif __s390x__
CheckTypeSize(u_int,4, 9261, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9261,0);
Msg("Find size of u_int (9261)\n");
#endif

#if __i386__
CheckTypeSize(uint,4, 9265, 2)
#elif __ia64__
CheckTypeSize(uint,4, 9265, 3)
#elif __s390__ && !__s390x__
CheckTypeSize(uint,4, 9265, 10)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint,4, 9265, 6)
#elif __powerpc64__
CheckTypeSize(uint,4, 9265, 9)
#elif __s390x__
CheckTypeSize(uint,4, 9265, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9265,0);
Msg("Find size of uint (9265)\n");
#endif

#if __i386__
CheckTypeSize(uint8_t,1, 9270, 2)
#elif __ia64__
CheckTypeSize(uint8_t,1, 9270, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint8_t,1, 9270, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(uint8_t,1, 9270, 10)
#elif __powerpc64__
CheckTypeSize(uint8_t,1, 9270, 9)
#elif __s390x__
CheckTypeSize(uint8_t,1, 9270, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9270,0);
Msg("Find size of uint8_t (9270)\n");
#endif

#if __i386__
CheckTypeSize(uint16_t,2, 9271, 2)
#elif __ia64__
CheckTypeSize(uint16_t,2, 9271, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint16_t,2, 9271, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(uint16_t,2, 9271, 10)
#elif __powerpc64__
CheckTypeSize(uint16_t,2, 9271, 9)
#elif __s390x__
CheckTypeSize(uint16_t,2, 9271, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9271,0);
Msg("Find size of uint16_t (9271)\n");
#endif

#if __i386__
CheckTypeSize(uint32_t,4, 9272, 2)
#elif __ia64__
CheckTypeSize(uint32_t,4, 9272, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint32_t,4, 9272, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(uint32_t,4, 9272, 10)
#elif __powerpc64__
CheckTypeSize(uint32_t,4, 9272, 9)
#elif __s390x__
CheckTypeSize(uint32_t,4, 9272, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9272,0);
Msg("Find size of uint32_t (9272)\n");
#endif

#if __i386__
CheckTypeSize(uintptr_t,4, 9308, 2)
#endif

#if __i386__
CheckTypeSize(uint64_t,8, 10176, 2)
#elif __ia64__
CheckTypeSize(uint64_t,8, 10176, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint64_t,8, 10176, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(uint64_t,8, 10176, 10)
#elif __powerpc64__
CheckTypeSize(uint64_t,8, 10176, 9)
#elif __s390x__
CheckTypeSize(uint64_t,8, 10176, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10176,0);
Msg("Find size of uint64_t (10176)\n");
#endif

#if __ia64__
CheckTypeSize(intmax_t,8, 10460, 3)
#endif

#if __powerpc64__
CheckTypeSize(intmax_t,8, 10461, 9)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(intmax_t,8, 10462, 6)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(intmax_t,8, 10463, 10)
#endif

#if __ia64__
CheckTypeSize(uintmax_t,8, 10464, 3)
#endif

#if __powerpc64__
CheckTypeSize(uintmax_t,8, 10465, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(uintmax_t,8, 10466, 10)
#endif

#if __i386__
CheckTypeSize(uintmax_t,8, 10467, 2)
#endif

#if __ia64__
CheckTypeSize(uintptr_t,8, 10506, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(uintptr_t,4, 10507, 6)
#endif

#if __powerpc64__
CheckTypeSize(uintptr_t,8, 10508, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(uintptr_t,4, 10509, 10)
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
