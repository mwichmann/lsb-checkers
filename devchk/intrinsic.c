/*
 * Test of intrinsic types
 */
#include "hdrchk.h"
#include "sys/types.h"



int intrinsic()
{
int cnt=0;
CheckTypeSize(void,1,1)
CheckTypeSize(char,1,2)
CheckTypeSize(unsigned char,1,3)
CheckTypeSize(short,2,4)
CheckTypeSize(unsigned short,2,5)
CheckTypeSize(int,4,6)
CheckTypeSize(unsigned int,4,7)
CheckTypeSize(long,4,8)
CheckTypeSize(unsigned long,4,9)
CheckTypeSize(long long,8,10)
CheckTypeSize(unsigned long long,8,11)
CheckTypeSize(float,4,12)
CheckTypeSize(double,8,13)
CheckTypeSize(long double,12,14)
printf("%d intrinsic types\n",cnt);
return cnt;
}
