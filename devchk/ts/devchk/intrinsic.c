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
#elif __s390__
CheckTypeSize(void,1,1,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,1,0);
#endif

#if __i386__
CheckTypeSize(char,1,2,2)
#elif __ia64__
CheckTypeSize(char,1,2,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(char,1,2,6)
#elif __s390__
CheckTypeSize(char,1,2,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,2,0);
#endif

#if __i386__
CheckTypeSize(unsigned char,1,3,2)
#elif __ia64__
CheckTypeSize(unsigned char,1,3,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned char,1,3,6)
#elif __s390__
CheckTypeSize(unsigned char,1,3,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,3,0);
#endif

#if __i386__
CheckTypeSize(short,2,4,2)
#elif __ia64__
CheckTypeSize(short,2,4,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(short,2,4,6)
#elif __s390__
CheckTypeSize(short,2,4,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,4,0);
#endif

#if __i386__
CheckTypeSize(unsigned short,2,5,2)
#elif __ia64__
CheckTypeSize(unsigned short,2,5,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned short,2,5,6)
#elif __s390__
CheckTypeSize(unsigned short,2,5,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,5,0);
#endif

#if __i386__
CheckTypeSize(int,4,6,2)
#elif __ia64__
CheckTypeSize(int,4,6,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int,4,6,6)
#elif __s390__
CheckTypeSize(int,4,6,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6,0);
#endif

#if __i386__
CheckTypeSize(unsigned int,4,7,2)
#elif __ia64__
CheckTypeSize(unsigned int,4,7,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned int,4,7,6)
#elif __s390__
CheckTypeSize(unsigned int,4,7,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7,0);
#endif

#if __i386__
CheckTypeSize(long,4,8,2)
#elif __ia64__
CheckTypeSize(long,8,8,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(long,4,8,6)
#elif __s390__
CheckTypeSize(long,4,8,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8,0);
#endif

#if __i386__
CheckTypeSize(unsigned long,4,9,2)
#elif __ia64__
CheckTypeSize(unsigned long,8,9,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned long,4,9,6)
#elif __s390__
CheckTypeSize(unsigned long,4,9,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9,0);
#endif

#if __i386__
CheckTypeSize(long long,8,10,2)
#elif __ia64__
CheckTypeSize(long long,8,10,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(long long,8,10,6)
#elif __s390__
CheckTypeSize(long long,8,10,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10,0);
#endif

#if __i386__
CheckTypeSize(unsigned long long,8,11,2)
#elif __ia64__
CheckTypeSize(unsigned long long,8,11,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(unsigned long long,8,11,6)
#elif __s390__
CheckTypeSize(unsigned long long,8,11,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11,0);
#endif

#if __i386__
CheckTypeSize(float,4,12,2)
#elif __ia64__
CheckTypeSize(float,4,12,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(float,4,12,6)
#elif __s390__
CheckTypeSize(float,4,12,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12,0);
#endif

#if __i386__
CheckTypeSize(double,8,13,2)
#elif __ia64__
CheckTypeSize(double,8,13,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(double,8,13,6)
#elif __s390__
CheckTypeSize(double,8,13,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13,0);
#endif

#if __i386__
CheckTypeSize(long double,12,14,2)
#elif __ia64__
CheckTypeSize(long double,16,14,3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(long double,8,14,6)
#elif __s390__
CheckTypeSize(long double,8,14,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14,0);
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
