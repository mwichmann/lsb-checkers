/*
 * Test of intrinsic types
 */
#include "hdrchk.h"
#include "sys/types.h"



#ifdef TET_TEST
void intrinsic()
{
#else
int intrinsic()
{
#endif
int cnt=0;
#ifdef TET_TEST
int pcnt=0;
#endif

#if __i386__
CheckTypeSize(void,1,1,2)
#elif __ia64__
CheckTypeSize(void,1,1,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(void,1,1,6)
#elif __powerpc64__
CheckTypeSize(void,1,1,9)
#elif __s390__ && !__s390x__
CheckTypeSize(void,1,1,10)
#elif __x86_64__
CheckTypeSize(void,1,1,11)
#elif __s390x__
CheckTypeSize(void,1,1,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,1,0);
#endif

#if __i386__
CheckTypeSize(char,1,2,2)
#elif __ia64__
CheckTypeSize(char,1,2,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(char,1,2,6)
#elif __powerpc64__
CheckTypeSize(char,1,2,9)
#elif __s390__ && !__s390x__
CheckTypeSize(char,1,2,10)
#elif __x86_64__
CheckTypeSize(char,1,2,11)
#elif __s390x__
CheckTypeSize(char,1,2,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,2,0);
#endif

#if __i386__
CheckTypeSize(unsigned char,1,3,2)
#elif __ia64__
CheckTypeSize(unsigned char,1,3,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned char,1,3,6)
#elif __powerpc64__
CheckTypeSize(unsigned char,1,3,9)
#elif __s390__ && !__s390x__
CheckTypeSize(unsigned char,1,3,10)
#elif __x86_64__
CheckTypeSize(unsigned char,1,3,11)
#elif __s390x__
CheckTypeSize(unsigned char,1,3,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,3,0);
#endif

#if __i386__
CheckTypeSize(short,2,4,2)
#elif __ia64__
CheckTypeSize(short,2,4,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(short,2,4,6)
#elif __powerpc64__
CheckTypeSize(short,2,4,9)
#elif __s390__ && !__s390x__
CheckTypeSize(short,2,4,10)
#elif __x86_64__
CheckTypeSize(short,2,4,11)
#elif __s390x__
CheckTypeSize(short,2,4,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,4,0);
#endif

#if __i386__
CheckTypeSize(unsigned short,2,5,2)
#elif __ia64__
CheckTypeSize(unsigned short,2,5,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned short,2,5,6)
#elif __powerpc64__
CheckTypeSize(unsigned short,2,5,9)
#elif __s390__ && !__s390x__
CheckTypeSize(unsigned short,2,5,10)
#elif __x86_64__
CheckTypeSize(unsigned short,2,5,11)
#elif __s390x__
CheckTypeSize(unsigned short,2,5,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,5,0);
#endif

#if __i386__
CheckTypeSize(int,4,6,2)
#elif __ia64__
CheckTypeSize(int,4,6,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int,4,6,6)
#elif __powerpc64__
CheckTypeSize(int,4,6,9)
#elif __s390__ && !__s390x__
CheckTypeSize(int,4,6,10)
#elif __x86_64__
CheckTypeSize(int,4,6,11)
#elif __s390x__
CheckTypeSize(int,4,6,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6,0);
#endif

#if __i386__
CheckTypeSize(unsigned int,4,7,2)
#elif __ia64__
CheckTypeSize(unsigned int,4,7,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned int,4,7,6)
#elif __powerpc64__
CheckTypeSize(unsigned int,4,7,9)
#elif __s390__ && !__s390x__
CheckTypeSize(unsigned int,4,7,10)
#elif __x86_64__
CheckTypeSize(unsigned int,4,7,11)
#elif __s390x__
CheckTypeSize(unsigned int,4,7,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7,0);
#endif

#if __i386__
CheckTypeSize(long,4,8,2)
#elif __ia64__
CheckTypeSize(long,8,8,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(long,4,8,6)
#elif __powerpc64__
CheckTypeSize(long,8,8,9)
#elif __s390__ && !__s390x__
CheckTypeSize(long,4,8,10)
#elif __x86_64__
CheckTypeSize(long,8,8,11)
#elif __s390x__
CheckTypeSize(long,8,8,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8,0);
#endif

#if __i386__
CheckTypeSize(unsigned long,4,9,2)
#elif __ia64__
CheckTypeSize(unsigned long,8,9,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned long,4,9,6)
#elif __powerpc64__
CheckTypeSize(unsigned long,8,9,9)
#elif __s390__ && !__s390x__
CheckTypeSize(unsigned long,4,9,10)
#elif __x86_64__
CheckTypeSize(unsigned long,8,9,11)
#elif __s390x__
CheckTypeSize(unsigned long,8,9,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9,0);
#endif

#if __i386__
CheckTypeSize(long long,8,10,2)
#elif __ia64__
CheckTypeSize(long long,8,10,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(long long,8,10,6)
#elif __powerpc64__
CheckTypeSize(long long,8,10,9)
#elif __s390__ && !__s390x__
CheckTypeSize(long long,8,10,10)
#elif __x86_64__
CheckTypeSize(long long,8,10,11)
#elif __s390x__
CheckTypeSize(long long,8,10,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10,0);
#endif

#if __i386__
CheckTypeSize(unsigned long long,8,11,2)
#elif __ia64__
CheckTypeSize(unsigned long long,8,11,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned long long,8,11,6)
#elif __powerpc64__
CheckTypeSize(unsigned long long,8,11,9)
#elif __s390__ && !__s390x__
CheckTypeSize(unsigned long long,8,11,10)
#elif __x86_64__
CheckTypeSize(unsigned long long,8,11,11)
#elif __s390x__
CheckTypeSize(unsigned long long,8,11,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11,0);
#endif

#if __i386__
CheckTypeSize(float,4,12,2)
#elif __ia64__
CheckTypeSize(float,4,12,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(float,4,12,6)
#elif __powerpc64__
CheckTypeSize(float,4,12,9)
#elif __s390__ && !__s390x__
CheckTypeSize(float,4,12,10)
#elif __x86_64__
CheckTypeSize(float,4,12,11)
#elif __s390x__
CheckTypeSize(float,4,12,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12,0);
#endif

#if __i386__
CheckTypeSize(double,8,13,2)
#elif __ia64__
CheckTypeSize(double,8,13,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(double,8,13,6)
#elif __powerpc64__
CheckTypeSize(double,8,13,9)
#elif __s390__ && !__s390x__
CheckTypeSize(double,8,13,10)
#elif __x86_64__
CheckTypeSize(double,8,13,11)
#elif __s390x__
CheckTypeSize(double,8,13,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13,0);
#endif

#if __i386__
CheckTypeSize(long double,12,14,2)
#elif __ia64__
CheckTypeSize(long double,16,14,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(long double,8,14,6)
#elif __powerpc64__
CheckTypeSize(long double,8,14,9)
#elif __s390__ && !__s390x__
CheckTypeSize(long double,8,14,10)
#elif __x86_64__
CheckTypeSize(long double,16,14,11)
#elif __s390x__
CheckTypeSize(long double,8,14,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14,0);
#endif

#if 1
CheckTypeSize(signed char,1,10505,1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10505,0);
#endif

#if __powerpc64__
CheckTypeSize(elf_greg_t,4,10825,9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10825,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d intrinsic types\n",cnt);
return cnt;
#endif

}
