/*
 * Test of intrinsic types
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#include <complex.h>



#ifdef TET_TEST
void intrinsic()
{
#else
int intrinsic()
{
#endif
int cnt=0;
int pcnt=0;
#ifdef TET_TEST
#endif

printf("Checking Intrinsic types\n");
#if defined __i386__
CheckTypeSize(void,1,1,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(void,1,1,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(void,1,1,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(void,1,1,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(void,1,1,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(void,1,1,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(void,1,1,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,1,0);
#endif

#if defined __i386__
CheckTypeSize(char,1,2,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(char,1,2,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(char,1,2,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(char,1,2,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(char,1,2,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(char,1,2,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(char,1,2,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,2,0);
#endif

#if defined __i386__
CheckTypeSize(unsigned char,1,3,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(unsigned char,1,3,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(unsigned char,1,3,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(unsigned char,1,3,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(unsigned char,1,3,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(unsigned char,1,3,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(unsigned char,1,3,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,3,0);
#endif

#if defined __i386__
CheckTypeSize(short,2,4,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(short,2,4,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(short,2,4,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(short,2,4,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(short,2,4,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(short,2,4,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(short,2,4,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,4,0);
#endif

#if defined __i386__
CheckTypeSize(unsigned short,2,5,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(unsigned short,2,5,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(unsigned short,2,5,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(unsigned short,2,5,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(unsigned short,2,5,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(unsigned short,2,5,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(unsigned short,2,5,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,5,0);
#endif

#if defined __i386__
CheckTypeSize(int,4,6,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(int,4,6,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(int,4,6,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(int,4,6,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(int,4,6,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(int,4,6,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(int,4,6,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,6,0);
#endif

#if defined __i386__
CheckTypeSize(unsigned int,4,7,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(unsigned int,4,7,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(unsigned int,4,7,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(unsigned int,4,7,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(unsigned int,4,7,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(unsigned int,4,7,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(unsigned int,4,7,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,7,0);
#endif

#if defined __i386__
CheckTypeSize(long int,4,8,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(long int,8,8,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(long int,4,8,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(long int,8,8,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(long int,4,8,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(long int,8,8,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(long int,8,8,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,8,0);
#endif

#if defined __i386__
CheckTypeSize(unsigned long int,4,9,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(unsigned long int,8,9,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(unsigned long int,4,9,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(unsigned long int,8,9,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(unsigned long int,4,9,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(unsigned long int,8,9,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(unsigned long int,8,9,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,9,0);
#endif

#if defined __i386__
CheckTypeSize(long long int,8,10,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(long long int,8,10,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(long long int,8,10,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(long long int,8,10,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(long long int,8,10,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(long long int,8,10,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(long long int,8,10,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,10,0);
#endif

#if defined __i386__
CheckTypeSize(unsigned long long int,8,11,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(unsigned long long int,8,11,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(unsigned long long int,8,11,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(unsigned long long int,8,11,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(unsigned long long int,8,11,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(unsigned long long int,8,11,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(unsigned long long int,8,11,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,11,0);
#endif

#if defined __i386__
CheckTypeSize(float,4,12,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(float,4,12,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(float,4,12,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(float,4,12,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(float,4,12,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(float,4,12,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(float,4,12,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,12,0);
#endif

#if defined __i386__
CheckTypeSize(double,8,13,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(double,8,13,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(double,8,13,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(double,8,13,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(double,8,13,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(double,8,13,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(double,8,13,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,13,0);
#endif

#if defined __i386__
CheckTypeSize(long double,12,14,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(long double,16,14,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(long double,8,14,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(long double,8,14,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(long double,8,14,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(long double,16,14,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(long double,8,14,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,14,0);
#endif

#if 1
CheckTypeSize(signed char,1,10505,1, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,10505,0);
#endif

#if defined __i386__
CheckTypeSize(double complex,16,10999,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(double complex,16,10999,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(double complex,16,10999,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(double complex,16,10999,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(double complex,16,10999,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(double complex,16,10999,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(double complex,16,10999,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,10999,0);
#endif

#if defined __i386__
CheckTypeSize(long double complex,24,11000,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(long double complex,32,11000,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(long double complex,16,11000,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(long double complex,16,11000,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(long double complex,16,11000,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(long double complex,32,11000,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(long double complex,16,11000,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,11000,0);
#endif

#if defined __i386__
CheckTypeSize(float complex,8,11001,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(float complex,8,11001,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(float complex,8,11001,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(float complex,8,11001,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(float complex,8,11001,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(float complex,8,11001,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(float complex,8,11001,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,11001,0);
#endif

#if defined __i386__
CheckTypeSize(long unsigned int,4,11186,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(long unsigned int,8,11186,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(long unsigned int,4,11186,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(long unsigned int,8,11186,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(long unsigned int,4,11186,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(long unsigned int,8,11186,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(long unsigned int,8,11186,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,11186,0);
#endif

#if defined __i386__
CheckTypeSize(short unsigned int,2,11209,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(short unsigned int,2,11209,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(short unsigned int,2,11209,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(short unsigned int,2,11209,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(short unsigned int,2,11209,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(short unsigned int,2,11209,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(short unsigned int,2,11209,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,11209,0);
#endif

#if defined __i386__
CheckTypeSize(short int,2,11264,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(short int,2,11264,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(short int,2,11264,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(short int,2,11264,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(short int,2,11264,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(short int,2,11264,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(short int,2,11264,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,NULL);\n",architecture,11264,0);
#endif

#if defined __i386__
CheckTypeSize(long long unsigned int,8,11620,2, "", "NULL",0,"NULL")
#elif defined __ia64__
CheckTypeSize(long long unsigned int,8,11620,3, "", "NULL",0,"NULL")
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(long long unsigned int,8,11620,6, "", "NULL",0,"NULL")
#elif defined __powerpc64__
CheckTypeSize(long long unsigned int,8,11620,9, "", "NULL",0,"NULL")
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(long long unsigned int,8,11620,10, "", "NULL",0,"NULL")
#elif defined __x86_64__
CheckTypeSize(long long unsigned int,8,11620,11, "", "NULL",0,"NULL")
#elif defined __s390x__
CheckTypeSize(long long unsigned int,8,11620,12, "", "NULL",0,"NULL")
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""""',""NULL"",0,""NULL"");\n",architecture,11620,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt)
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests intrinsic types\n\n",pcnt,cnt);
return cnt;
#endif

}
