/*
 * Test of iconv.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "iconv.h"



int iconv_h()
{
int cnt=0;
CheckTypeSize(iconv_t,4,)
printf("%d tests in iconv.h\n",cnt);
return cnt;
}
