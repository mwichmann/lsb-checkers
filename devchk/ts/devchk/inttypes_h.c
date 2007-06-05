/*
 * Test of inttypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in inttypes.h\n");
#endif

printf("Checking data structures in inttypes.h\n");
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
#elif __x86_64__
CheckTypeSize(imaxdiv_t,16, 6898, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6898,0);
Msg("Find size of imaxdiv_t (6898)\n");
#endif

#if __i386__
CheckTypeSize(intmax_t,8, 9016, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(intmax_t,8, 9016, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(intmax_t,8, 9016, 10)
#elif __powerpc64__
CheckTypeSize(intmax_t,8, 9016, 9)
#elif __ia64__
CheckTypeSize(intmax_t,8, 9016, 3)
#elif __x86_64__
CheckTypeSize(intmax_t,8, 9016, 11)
#elif __s390x__
CheckTypeSize(intmax_t,8, 9016, 12)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(uintmax_t,8, 9017, 6)
#elif __ia64__
CheckTypeSize(uintmax_t,8, 9017, 3)
#elif __i386__
CheckTypeSize(uintmax_t,8, 9017, 2)
#elif __s390__ && !__s390x__
CheckTypeSize(uintmax_t,8, 9017, 10)
#elif __powerpc64__
CheckTypeSize(uintmax_t,8, 9017, 9)
#elif __x86_64__
CheckTypeSize(uintmax_t,8, 9017, 11)
#elif __s390x__
CheckTypeSize(uintmax_t,8, 9017, 12)
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
#elif __x86_64__
CheckTypeSize(uint8_t,1, 9270, 11)
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
#elif __x86_64__
CheckTypeSize(uint16_t,2, 9271, 11)
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
#elif __x86_64__
CheckTypeSize(uint32_t,4, 9272, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9272,0);
Msg("Find size of uint32_t (9272)\n");
#endif

#if __i386__
CheckTypeSize(uintptr_t,4, 9308, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uintptr_t,4, 9308, 6)
#elif __powerpc64__
CheckTypeSize(uintptr_t,8, 9308, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(uintptr_t,4, 9308, 10)
#elif __ia64__
CheckTypeSize(uintptr_t,8, 9308, 3)
#elif __x86_64__
CheckTypeSize(uintptr_t,8, 9308, 11)
#elif __s390x__
CheckTypeSize(uintptr_t,8, 9308, 12)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(uint64_t,8, 10176, 6)
#elif __powerpc64__
CheckTypeSize(uint64_t,8, 10176, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(uint64_t,8, 10176, 10)
#elif __ia64__
CheckTypeSize(uint64_t,8, 10176, 3)
#elif __x86_64__
CheckTypeSize(uint64_t,8, 10176, 11)
#elif __i386__
CheckTypeSize(uint64_t,8, 10176, 2)
#elif __s390x__
CheckTypeSize(uint64_t,8, 10176, 12)
#endif

extern intmax_t strtoimax_db(const char *, char * *, int);
CheckInterfacedef(strtoimax,strtoimax_db);
extern uintmax_t strtoumax_db(const char *, char * *, int);
CheckInterfacedef(strtoumax,strtoumax_db);
extern intmax_t wcstoimax_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoimax,wcstoimax_db);
extern uintmax_t wcstoumax_db(const wchar_t *, wchar_t * *, int);
CheckInterfacedef(wcstoumax,wcstoumax_db);
extern intmax_t imaxabs_db(intmax_t);
CheckInterfacedef(imaxabs,imaxabs_db);
extern imaxdiv_t imaxdiv_db(intmax_t, intmax_t);
CheckInterfacedef(imaxdiv,imaxdiv_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in inttypes.h\n\n",pcnt,cnt);
return cnt;
#endif

}
