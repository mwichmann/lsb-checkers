/*
 * Test of stdint.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "stdint.h"



#ifdef TET_TEST
void stdint_h()
{
#else
int stdint_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in stdint.h\n");
#endif

printf("Checking data structures in stdint.h\n");
#if __i386__
CheckTypeSize(int8_t,1, 6995, 2, 1.2, NULL, 10505, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int8_t,1, 6995, 6, 1.2, NULL, 10505, NULL)
#elif __ia64__
CheckTypeSize(int8_t,1, 6995, 3, 1.3, NULL, 10505, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int8_t,1, 6995, 10, 1.3, NULL, 10505, NULL)
#elif __powerpc64__
CheckTypeSize(int8_t,1, 6995, 9, 2.0, NULL, 10505, NULL)
#elif __s390x__
CheckTypeSize(int8_t,1, 6995, 12, 1.3, NULL, 10505, NULL)
#elif __x86_64__
CheckTypeSize(int8_t,1, 6995, 11, 2.0, NULL, 10505, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10505,NULL);\n",architecture,6995,0);
Msg("Find size of int8_t (6995)\n");
#endif

#if __i386__
CheckTypeSize(int16_t,2, 6996, 2, 1.2, NULL, 4, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int16_t,2, 6996, 6, 1.2, NULL, 4, NULL)
#elif __ia64__
CheckTypeSize(int16_t,2, 6996, 3, 1.3, NULL, 4, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int16_t,2, 6996, 10, 1.3, NULL, 4, NULL)
#elif __powerpc64__
CheckTypeSize(int16_t,2, 6996, 9, 2.0, NULL, 4, NULL)
#elif __s390x__
CheckTypeSize(int16_t,2, 6996, 12, 1.3, NULL, 4, NULL)
#elif __x86_64__
CheckTypeSize(int16_t,2, 6996, 11, 2.0, NULL, 4, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,4,NULL);\n",architecture,6996,0);
Msg("Find size of int16_t (6996)\n");
#endif

#if __i386__
CheckTypeSize(int32_t,4, 6997, 2, 1.0, NULL, 6, NULL)
#elif __ia64__
CheckTypeSize(int32_t,4, 6997, 3, 1.3, NULL, 6, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int32_t,4, 6997, 6, 1.2, NULL, 6, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int32_t,4, 6997, 10, 1.3, NULL, 6, NULL)
#elif __powerpc64__
CheckTypeSize(int32_t,4, 6997, 9, 2.0, NULL, 6, NULL)
#elif __s390x__
CheckTypeSize(int32_t,4, 6997, 12, 1.3, NULL, 6, NULL)
#elif __x86_64__
CheckTypeSize(int32_t,4, 6997, 11, 2.0, NULL, 6, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,6997,0);
Msg("Find size of int32_t (6997)\n");
#endif

#if __i386__
CheckTypeSize(int64_t,8, 6998, 2, 2.0, NULL, 10, NULL)
#elif __powerpc64__
CheckTypeSize(int64_t,8, 6998, 9, 2.0, NULL, 8, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int64_t,8, 6998, 10, 2.0, NULL, 10, NULL)
#elif __x86_64__
CheckTypeSize(int64_t,8, 6998, 11, 2.0, NULL, 8, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int64_t,8, 6998, 6, 2.0, NULL, 10, NULL)
#elif __s390x__
CheckTypeSize(int64_t,8, 6998, 12, 2.0, NULL, 8, NULL)
#elif __ia64__
CheckTypeSize(int64_t,8, 6998, 3, 2.0, NULL, 8, NULL)
#endif

#if __i386__
CheckTypeSize(intmax_t,8, 9016, 2, 2.0, NULL, 10, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(intmax_t,8, 9016, 6, 2.0, NULL, 10, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(intmax_t,8, 9016, 10, 2.0, NULL, 10, NULL)
#elif __powerpc64__
CheckTypeSize(intmax_t,8, 9016, 9, 2.0, NULL, 8, NULL)
#elif __ia64__
CheckTypeSize(intmax_t,8, 9016, 3, 2.0, NULL, 8, NULL)
#elif __x86_64__
CheckTypeSize(intmax_t,8, 9016, 11, 2.0, NULL, 8, NULL)
#elif __s390x__
CheckTypeSize(intmax_t,8, 9016, 12, 2.0, NULL, 8, NULL)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(uintmax_t,8, 9017, 6, 2.0, NULL, 11, NULL)
#elif __ia64__
CheckTypeSize(uintmax_t,8, 9017, 3, 2.0, NULL, 9, NULL)
#elif __i386__
CheckTypeSize(uintmax_t,8, 9017, 2, 2.0, NULL, 11, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uintmax_t,8, 9017, 10, 2.0, NULL, 11, NULL)
#elif __powerpc64__
CheckTypeSize(uintmax_t,8, 9017, 9, 2.0, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(uintmax_t,8, 9017, 11, 2.0, NULL, 9, NULL)
#elif __s390x__
CheckTypeSize(uintmax_t,8, 9017, 12, 2.0, NULL, 9, NULL)
#endif

#if __i386__
CheckTypeSize(intptr_t,4, 9196, 2, 2.0, NULL, 6, NULL)
#elif __powerpc64__
CheckTypeSize(intptr_t,8, 9196, 9, 2.0, NULL, 8, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(intptr_t,4, 9196, 10, 2.0, NULL, 6, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(intptr_t,4, 9196, 6, 2.0, NULL, 6, NULL)
#elif __ia64__
CheckTypeSize(intptr_t,8, 9196, 3, 2.0, NULL, 8, NULL)
#elif __x86_64__
CheckTypeSize(intptr_t,8, 9196, 11, 2.0, NULL, 8, NULL)
#elif __s390x__
CheckTypeSize(intptr_t,8, 9196, 12, 2.0, NULL, 8, NULL)
#endif

#if __i386__
CheckTypeSize(uint8_t,1, 9270, 2, 1.2, NULL, 3, NULL)
#elif __ia64__
CheckTypeSize(uint8_t,1, 9270, 3, 1.3, NULL, 3, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint8_t,1, 9270, 6, 1.2, NULL, 3, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint8_t,1, 9270, 10, 1.3, NULL, 3, NULL)
#elif __powerpc64__
CheckTypeSize(uint8_t,1, 9270, 9, 2.0, NULL, 3, NULL)
#elif __s390x__
CheckTypeSize(uint8_t,1, 9270, 12, 1.3, NULL, 3, NULL)
#elif __x86_64__
CheckTypeSize(uint8_t,1, 9270, 11, 2.0, NULL, 3, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,3,NULL);\n",architecture,9270,0);
Msg("Find size of uint8_t (9270)\n");
#endif

#if __i386__
CheckTypeSize(uint16_t,2, 9271, 2, 1.2, NULL, 5, NULL)
#elif __ia64__
CheckTypeSize(uint16_t,2, 9271, 3, 1.3, NULL, 5, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint16_t,2, 9271, 6, 1.2, NULL, 5, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint16_t,2, 9271, 10, 1.3, NULL, 5, NULL)
#elif __powerpc64__
CheckTypeSize(uint16_t,2, 9271, 9, 2.0, NULL, 5, NULL)
#elif __s390x__
CheckTypeSize(uint16_t,2, 9271, 12, 1.3, NULL, 5, NULL)
#elif __x86_64__
CheckTypeSize(uint16_t,2, 9271, 11, 2.0, NULL, 5, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,5,NULL);\n",architecture,9271,0);
Msg("Find size of uint16_t (9271)\n");
#endif

#if __i386__
CheckTypeSize(uint32_t,4, 9272, 2, 1.2, NULL, 7, NULL)
#elif __ia64__
CheckTypeSize(uint32_t,4, 9272, 3, 1.3, NULL, 7, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint32_t,4, 9272, 6, 1.2, NULL, 7, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint32_t,4, 9272, 10, 1.3, NULL, 7, NULL)
#elif __powerpc64__
CheckTypeSize(uint32_t,4, 9272, 9, 2.0, NULL, 7, NULL)
#elif __s390x__
CheckTypeSize(uint32_t,4, 9272, 12, 1.3, NULL, 7, NULL)
#elif __x86_64__
CheckTypeSize(uint32_t,4, 9272, 11, 2.0, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,9272,0);
Msg("Find size of uint32_t (9272)\n");
#endif

#if __i386__
CheckTypeSize(uintptr_t,4, 9308, 2, 2.0, NULL, 7, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uintptr_t,4, 9308, 6, 2.0, NULL, 7, NULL)
#elif __powerpc64__
CheckTypeSize(uintptr_t,8, 9308, 9, 2.0, NULL, 9, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uintptr_t,4, 9308, 10, 2.0, NULL, 7, NULL)
#elif __ia64__
CheckTypeSize(uintptr_t,8, 9308, 3, 2.0, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(uintptr_t,8, 9308, 11, 2.0, NULL, 9, NULL)
#elif __s390x__
CheckTypeSize(uintptr_t,8, 9308, 12, 2.0, NULL, 9, NULL)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(uint64_t,8, 10176, 6, 2.0, NULL, 11, NULL)
#elif __powerpc64__
CheckTypeSize(uint64_t,8, 10176, 9, 2.0, NULL, 9, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint64_t,8, 10176, 10, 2.0, NULL, 11, NULL)
#elif __ia64__
CheckTypeSize(uint64_t,8, 10176, 3, 2.0, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(uint64_t,8, 10176, 11, 2.0, NULL, 9, NULL)
#elif __i386__
CheckTypeSize(uint64_t,8, 10176, 2, 2.0, NULL, 11, NULL)
#elif __s390x__
CheckTypeSize(uint64_t,8, 10176, 12, 2.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(int_least8_t,1, 16608, 1, 3.2, NULL, 10505, NULL)
#endif

#if 1
CheckTypeSize(int_least16_t,2, 16609, 1, 3.2, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(int_least32_t,4, 16610, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(uint_least8_t,1, 16611, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(uint_least16_t,2, 16612, 1, 3.2, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(uint_least32_t,4, 16613, 1, 3.2, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(int_fast8_t,1, 16614, 1, 3.2, NULL, 10505, NULL)
#endif

#if 1
CheckTypeSize(uint_fast8_t,1, 16615, 1, 3.2, NULL, 3, NULL)
#endif

#if __ia64__
CheckTypeSize(int_least64_t,8, 16616, 3, 3.2, NULL, 8, NULL)
#elif __powerpc64__
CheckTypeSize(int_least64_t,8, 16616, 9, 3.2, NULL, 8, NULL)
#elif __x86_64__
CheckTypeSize(int_least64_t,8, 16616, 11, 3.2, NULL, 8, NULL)
#elif __s390x__
CheckTypeSize(int_least64_t,8, 16616, 12, 3.2, NULL, 8, NULL)
#elif __i386__
CheckTypeSize(int_least64_t,8, 16616, 2, 3.2, NULL, 10, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int_least64_t,8, 16616, 6, 3.2, NULL, 10, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int_least64_t,8, 16616, 10, 3.2, NULL, 10, NULL)
#endif

#if __ia64__
CheckTypeSize(uint_least64_t,8, 16617, 3, 3.2, NULL, 9, NULL)
#elif __powerpc64__
CheckTypeSize(uint_least64_t,8, 16617, 9, 3.2, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(uint_least64_t,8, 16617, 11, 3.2, NULL, 9, NULL)
#elif __s390x__
CheckTypeSize(uint_least64_t,8, 16617, 12, 3.2, NULL, 9, NULL)
#elif __i386__
CheckTypeSize(uint_least64_t,8, 16617, 2, 3.2, NULL, 11, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint_least64_t,8, 16617, 6, 3.2, NULL, 11, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint_least64_t,8, 16617, 10, 3.2, NULL, 11, NULL)
#endif

#if __ia64__
CheckTypeSize(int_fast16_t,8, 16618, 3, 3.2, NULL, 8, NULL)
#elif __powerpc64__
CheckTypeSize(int_fast16_t,8, 16618, 9, 3.2, NULL, 8, NULL)
#elif __x86_64__
CheckTypeSize(int_fast16_t,8, 16618, 11, 3.2, NULL, 8, NULL)
#elif __s390x__
CheckTypeSize(int_fast16_t,8, 16618, 12, 3.2, NULL, 8, NULL)
#elif __i386__
CheckTypeSize(int_fast16_t,4, 16618, 2, 3.2, NULL, 6, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int_fast16_t,4, 16618, 6, 3.2, NULL, 6, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int_fast16_t,4, 16618, 10, 3.2, NULL, 6, NULL)
#endif

#if __ia64__
CheckTypeSize(int_fast32_t,8, 16619, 3, 3.2, NULL, 8, NULL)
#elif __powerpc64__
CheckTypeSize(int_fast32_t,8, 16619, 9, 3.2, NULL, 8, NULL)
#elif __x86_64__
CheckTypeSize(int_fast32_t,8, 16619, 11, 3.2, NULL, 8, NULL)
#elif __s390x__
CheckTypeSize(int_fast32_t,8, 16619, 12, 3.2, NULL, 8, NULL)
#elif __i386__
CheckTypeSize(int_fast32_t,4, 16619, 2, 3.2, NULL, 6, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int_fast32_t,4, 16619, 6, 3.2, NULL, 6, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int_fast32_t,4, 16619, 10, 3.2, NULL, 6, NULL)
#endif

#if __ia64__
CheckTypeSize(int_fast64_t,8, 16620, 3, 3.2, NULL, 8, NULL)
#elif __powerpc64__
CheckTypeSize(int_fast64_t,8, 16620, 9, 3.2, NULL, 8, NULL)
#elif __x86_64__
CheckTypeSize(int_fast64_t,8, 16620, 11, 3.2, NULL, 8, NULL)
#elif __s390x__
CheckTypeSize(int_fast64_t,8, 16620, 12, 3.2, NULL, 8, NULL)
#elif __i386__
CheckTypeSize(int_fast64_t,8, 16620, 2, 3.2, NULL, 10, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int_fast64_t,8, 16620, 6, 3.2, NULL, 10, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(int_fast64_t,8, 16620, 10, 3.2, NULL, 10, NULL)
#endif

#if __ia64__
CheckTypeSize(uint_fast16_t,8, 16621, 3, 3.2, NULL, 9, NULL)
#elif __powerpc64__
CheckTypeSize(uint_fast16_t,8, 16621, 9, 3.2, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(uint_fast16_t,8, 16621, 11, 3.2, NULL, 9, NULL)
#elif __s390x__
CheckTypeSize(uint_fast16_t,8, 16621, 12, 3.2, NULL, 9, NULL)
#elif __i386__
CheckTypeSize(uint_fast16_t,4, 16621, 2, 3.2, NULL, 7, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint_fast16_t,4, 16621, 6, 3.2, NULL, 7, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint_fast16_t,4, 16621, 10, 3.2, NULL, 7, NULL)
#endif

#if __ia64__
CheckTypeSize(uint_fast32_t,8, 16622, 3, 3.2, NULL, 9, NULL)
#elif __powerpc64__
CheckTypeSize(uint_fast32_t,8, 16622, 9, 3.2, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(uint_fast32_t,8, 16622, 11, 3.2, NULL, 9, NULL)
#elif __s390x__
CheckTypeSize(uint_fast32_t,8, 16622, 12, 3.2, NULL, 9, NULL)
#elif __i386__
CheckTypeSize(uint_fast32_t,4, 16622, 2, 3.2, NULL, 7, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint_fast32_t,4, 16622, 6, 3.2, NULL, 7, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint_fast32_t,4, 16622, 10, 3.2, NULL, 7, NULL)
#endif

#if __ia64__
CheckTypeSize(uint_fast64_t,8, 16623, 3, 3.2, NULL, 9, NULL)
#elif __powerpc64__
CheckTypeSize(uint_fast64_t,8, 16623, 9, 3.2, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(uint_fast64_t,8, 16623, 11, 3.2, NULL, 9, NULL)
#elif __s390x__
CheckTypeSize(uint_fast64_t,8, 16623, 12, 3.2, NULL, 9, NULL)
#elif __i386__
CheckTypeSize(uint_fast64_t,8, 16623, 2, 3.2, NULL, 11, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uint_fast64_t,8, 16623, 6, 3.2, NULL, 11, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(uint_fast64_t,8, 16623, 10, 3.2, NULL, 11, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in stdint.h\n\n",pcnt,cnt);
return cnt;
#endif

}
