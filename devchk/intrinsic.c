/*
 * Test of intrinsic types
 */
#include "hdrchk.h"
#include "sys/types.h"



int intrinsic()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(void,1,1)
#elif __ia64__
CheckTypeSize(void,1,1)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,1,0);
#endif
#ifdef __i386__
CheckTypeSize(char,1,2)
#elif __ia64__
CheckTypeSize(char,1,2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,2,0);
#endif
#ifdef __i386__
CheckTypeSize(unsigned char,1,3)
#elif __ia64__
CheckTypeSize(unsigned char,1,3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,3,0);
#endif
#ifdef __i386__
CheckTypeSize(short,2,4)
#elif __ia64__
CheckTypeSize(short,2,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,4,0);
#endif
#ifdef __i386__
CheckTypeSize(unsigned short,2,5)
#elif __ia64__
CheckTypeSize(unsigned short,2,5)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,5,0);
#endif
#ifdef __i386__
CheckTypeSize(int,4,6)
#elif __ia64__
CheckTypeSize(int,4,6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6,0);
#endif
#ifdef __i386__
CheckTypeSize(unsigned int,4,7)
#elif __ia64__
CheckTypeSize(unsigned int,4,7)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7,0);
#endif
#ifdef __i386__
CheckTypeSize(long,4,8)
#elif __ia64__
CheckTypeSize(long,8,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8,0);
#endif
#ifdef __i386__
CheckTypeSize(unsigned long,4,9)
#elif __ia64__
CheckTypeSize(unsigned long,8,9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9,0);
#endif
#ifdef __i386__
CheckTypeSize(long long,8,10)
#elif __ia64__
CheckTypeSize(long long,8,10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10,0);
#endif
#ifdef __i386__
CheckTypeSize(unsigned long long,8,11)
#elif __ia64__
CheckTypeSize(unsigned long long,8,11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11,0);
#endif
#ifdef __i386__
CheckTypeSize(float,4,12)
#elif __ia64__
CheckTypeSize(float,4,12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12,0);
#endif
#ifdef __i386__
CheckTypeSize(double,8,13)
#elif __ia64__
CheckTypeSize(double,8,13)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,13,0);
#endif
#ifdef __i386__
CheckTypeSize(long double,12,14)
#elif __ia64__
CheckTypeSize(long double,16,14)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,14,0);
#endif
printf("%d intrinsic types\n",cnt);
return cnt;
}
